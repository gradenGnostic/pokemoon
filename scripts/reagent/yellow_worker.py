#!/usr/bin/env python3
"""Detached Qwen/Codex cluster worker for unresolved Phase 4E candidates."""

from __future__ import annotations

import argparse
import csv
import fcntl
import json
import os
import re
import signal
import sqlite3
import subprocess
import sys
import tempfile
import time
import urllib.request
from concurrent.futures import ThreadPoolExecutor
from pathlib import Path

import resolve_yellow as resolver


ROOT = resolver.ROOT
RUNTIME = ROOT / "analysis/reagent"
LOG = RUNTIME / "yellow_worker.log"
PID = RUNTIME / "yellow_worker.pid"
LOCK = RUNTIME / "yellow_worker.lock"
STOP = RUNTIME / "yellow_worker.stop"
RESULTS = RUNTIME / "yellow_status.json"
ESCALATION = RUNTIME / "yellow_escalation.csv"
PROPOSALS = RUNTIME / "yellow_proposals"
CONTEXT = RUNTIME / "context"
SOURCES = ROOT / "src/reagent/yellow_clusters"
SERVICE = "pokemonmoon-yellow-resolver.service"
QWEN_MODEL = "qwen2.5-coder:7b"
CHECKER_MODEL = "gpt-5.4-mini"
CHECKER_ENABLED = os.environ.get("YELLOW_CHECKER_ENABLED", "0") == "1"
MAX_CLUSTER_FUNCTIONS = 20
COMPILER_WORKERS = 6
TARGET_SOURCE_BACKED = 1000
ORDINARY_QWEN_TIMEOUT = 420
HIGH_FANOUT_QWEN_TIMEOUT = 600
EVIDENCE_CACHE: dict[str, dict[str, object]] = {}
ALLOWED_TYPES = {
    "void", "bool", "uint8_t", "int8_t", "uint16_t", "int16_t", "uint32_t", "int32_t",
    "void*", "const void*", "uint8_t*", "const uint8_t*", "uint16_t*", "const uint16_t*",
    "uint32_t*", "const uint32_t*",
}
FLAGS = [
    "-std=gnu++11", "-mcpu=mpcore", "-marm", "-mfpu=vfp", "-mfloat-abi=softfp",
    "-O2", "-fno-exceptions", "-fno-rtti", "-fno-unwind-tables",
    "-fno-asynchronous-unwind-tables", "-ffunction-sections",
]
PREAMBLE = """typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;
"""


def stamp() -> str:
    return time.strftime("%Y-%m-%dT%H:%M:%SZ", time.gmtime())


def log(message: str) -> None:
    LOG.parent.mkdir(parents=True, exist_ok=True)
    with LOG.open("a", encoding="utf-8") as handle:
        handle.write(f"[{time.strftime('%H:%M:%S')}] {message}\n")


def ensure_state() -> sqlite3.Connection:
    connection = sqlite3.connect(resolver.STATE, timeout=30)
    connection.row_factory = sqlite3.Row
    connection.execute("PRAGMA journal_mode=WAL")
    columns = {row[1] for row in connection.execute("PRAGMA table_info(clusters)")}
    with connection:
        for name, declaration in (
            ("qwen_attempts", "INTEGER NOT NULL DEFAULT 0"),
            ("checker_attempts", "INTEGER NOT NULL DEFAULT 0"),
            ("last_error", "TEXT NOT NULL DEFAULT ''"),
            ("evidence_hash", "TEXT NOT NULL DEFAULT ''"),
        ):
            if name not in columns:
                connection.execute(f"ALTER TABLE clusters ADD COLUMN {name} {declaration}")
        connection.execute("""
            CREATE TABLE IF NOT EXISTS throughput_events (
                epoch REAL NOT NULL, kind TEXT NOT NULL, amount REAL NOT NULL DEFAULT 0,
                duration_seconds REAL NOT NULL DEFAULT 0
            )
        """)
    return connection


def metric_add(connection: sqlite3.Connection, key: str, amount: float = 1.0) -> None:
    with connection:
        connection.execute(
            "INSERT INTO metadata(key,value) VALUES(?,?) "
            "ON CONFLICT(key) DO UPDATE SET value=CAST(metadata.value AS REAL)+CAST(excluded.value AS REAL)",
            (f"phase4f_{key}", str(amount)),
        )


def metric_values(connection: sqlite3.Connection) -> dict[str, float]:
    return {
        row["key"].removeprefix("phase4f_"): float(row["value"])
        for row in connection.execute("SELECT key,value FROM metadata WHERE key LIKE 'phase4f_%'")
    }


def metric_event(connection: sqlite3.Connection, kind: str, amount: float = 0,
                 duration_seconds: float = 0) -> None:
    with connection:
        connection.execute(
            "INSERT INTO throughput_events(epoch,kind,amount,duration_seconds) VALUES(?,?,?,?)",
            (time.time(), kind, amount, duration_seconds),
        )


def rolling_metrics(connection: sqlite3.Connection) -> dict[str, dict[str, float]]:
    result: dict[str, dict[str, float]] = {}
    now = time.time()
    for minutes in (15, 30, 60):
        rows = connection.execute(
            "SELECT kind,COALESCE(SUM(amount),0),COALESCE(SUM(duration_seconds),0),COUNT(*) "
            "FROM throughput_events WHERE epoch>=? GROUP BY kind", (now - minutes * 60,),
        ).fetchall()
        values = {row[0]: (float(row[1]), float(row[2]), int(row[3])) for row in rows}
        promotions = sum(values.get(kind, (0, 0, 0))[0] for kind in
                         ("compile_first_promotions", "qwen_promotions"))
        qwen_calls = values.get("qwen_call", (0, 0, 0))[2]
        clusters = values.get("cluster", (0, 0, 0))
        result[f"{minutes}m"] = {
            "promotions": promotions,
            "promotions_per_hour": round(promotions * 60 / minutes, 2),
            "qwen_calls": qwen_calls,
            "qwen_calls_per_hour": round(qwen_calls * 60 / minutes, 2),
            "promotions_per_qwen_call": round(values.get("qwen_promotions", (0, 0, 0))[0] / qwen_calls, 2)
            if qwen_calls else 0,
            "average_cluster_seconds": round(clusters[1] / clusters[2], 2) if clusters[2] else 0,
            "qwen_seconds": round(values.get("qwen_call", (0, 0, 0))[1], 2),
            "compiler_seconds": round(values.get("compiler", (0, 0, 0))[1], 2),
            "ghidra_seconds": 0,
        }
    return result


def reset_metrics() -> None:
    connection = ensure_state()
    with connection:
        connection.execute("DELETE FROM metadata WHERE key LIKE 'phase4f_%'")
        connection.execute("INSERT INTO metadata(key,value) VALUES('phase4f_started_epoch',?)", (str(time.time()),))
    connection.close()


def update_cluster(connection: sqlite3.Connection, cluster_id: str, status: str, **values: object) -> None:
    assignments = ["status=?", "updated_at=?"]
    parameters: list[object] = [status, stamp()]
    for key, value in values.items():
        assignments.append(f"{key}=?")
        parameters.append(value)
    parameters.append(cluster_id)
    with connection:
        connection.execute(f"UPDATE clusters SET {','.join(assignments)} WHERE cluster_id=?", parameters)


def extract_json(text: str) -> dict[str, object] | None:
    fenced = re.search(r"```(?:json)?\s*(\{.*?\})\s*```", text, re.DOTALL)
    source = fenced.group(1) if fenced else text
    start = source.find("{")
    if start < 0:
        return None
    try:
        value, _ = json.JSONDecoder().raw_decode(source[start:])
    except ValueError:
        return None
    return value if isinstance(value, dict) else None


def candidate_schema(approved: bool = False) -> dict[str, object]:
    properties: dict[str, object] = {
        "address": {"type": "string"},
        "return_type": {"type": "string", "enum": sorted(ALLOWED_TYPES)},
        "param_types": {"type": "array", "items": {"type": "string", "enum": sorted(ALLOWED_TYPES)}},
        "declarations": {"type": "array", "items": {"type": "string"}},
        "body": {"type": "string"},
        "confidence": {"type": "string", "enum": ["HIGH", "MEDIUM"]},
        "evidence": {"type": "array", "items": {"type": "string"}},
    }
    required = ["address", "return_type", "param_types", "declarations", "body", "confidence", "evidence"]
    if approved:
        properties["approved"] = {"type": "boolean"}
        required.append("approved")
    return {"type": "object", "additionalProperties": False, "required": required, "properties": properties}


def proposal_schema() -> dict[str, object]:
    return {
        "type": "object", "additionalProperties": False,
        "required": ["shared_evidence", "candidates"],
        "properties": {
            "shared_evidence": {"type": "array", "items": {"type": "string"}},
            "candidates": {"type": "array", "items": candidate_schema()},
        },
    }


def compact_evidence(address: str, review: dict[str, str], catalog: dict[str, dict[str, str]], symbol: str) -> dict[str, object]:
    if address in EVIDENCE_CACHE:
        return EVIDENCE_CACHE[address]
    evidence_path = ROOT / ".ghidra-exports/static.crs" / f"{address[2:].lower()}.json"
    try:
        evidence = json.loads(evidence_path.read_text(encoding="utf-8"))
    except (OSError, ValueError):
        evidence = {}
    compact = {
        "address": address,
        "qualified_name": review["qualified_name"],
        "required_symbol": symbol,
        "required_artifact": f"YellowAuto_{address[2:].lower()}",
        "size": int(review["size"]),
        "catalog_prototype": catalog[address].get("prototype", ""),
        "candidate": resolver.candidate_text(review),
        "ghidra_signature": evidence.get("signature", ""),
        "decompiled": evidence.get("decompiled", ""),
        "assembly": evidence.get("assembly", []),
        "callers": evidence.get("callers", [])[:12],
        "callees": evidence.get("callees", [])[:12],
        "data_refs": evidence.get("data_refs", [])[:12],
    }
    EVIDENCE_CACHE[address] = compact
    return compact


def qwen_prompt(cluster: dict[str, str], evidence: list[dict[str, object]], correction: str = "") -> str:
    return f"""You are the local ARMv7 reverse engineer for Pokemon Moon NA v1.0 static.crs.
Resolve this shared YELLOW cluster as a group. Infer only facts supported by repeated evidence.
ARM EABI uses r0-r3; a C++ this pointer is r0. Preserve widths, signedness, offsets, calls, and returns.
Do not use assembly, compiler intrinsics, includes, invented original names, or modify files.
For each function you can support, describe a standalone C++11 function using only the allowed
fixed-width scalar and opaque-pointer types. param_types are ARM register arguments in order;
member functions must include uint8_t* or const uint8_t* as arg0 for this. The body must refer only
to arg0, arg1, etc. Return the body without outer braces. Never use this, class names, namespaces,
undefined types, invented fields, includes, or assembly in the body. Put required helper prototypes
in declarations as complete C++ declaration lines ending in semicolons. Skip unsupported functions.
The GPT checker is unavailable. Prefer mechanically obvious definitions likely to reproduce the exact
retail ARM bytes; compile-only semantic approximations will be retained for later review, not promoted.

Cluster: {cluster['cluster_id']} | {cluster['namespace']} | {cluster['blocker']}
Shared dependency: {cluster['shared_dependency']} | offsets: {cluster['offsets']}
Correction requested by checker: {correction or 'none'}
Evidence JSON:
{json.dumps(evidence, separators=(',', ':'))}

Return JSON matching this schema exactly:
{json.dumps(proposal_schema(), separators=(',', ':'))}
"""


def call_qwen(prompt: str, timeout: int) -> tuple[dict[str, object] | None, str]:
    request = urllib.request.Request(
        "http://127.0.0.1:11434/api/chat",
        data=json.dumps({
            "model": QWEN_MODEL,
            "messages": [{"role": "user", "content": prompt}],
            "stream": False,
            "format": proposal_schema(),
            "options": {"num_ctx": 16384, "num_predict": 6144, "temperature": 0.0},
        }).encode("utf-8"),
        headers={"Content-Type": "application/json"}, method="POST",
    )
    try:
        with urllib.request.urlopen(request, timeout=timeout) as response:
            content = str(json.load(response).get("message", {}).get("content", ""))
    except Exception as exc:
        return None, str(exc)
    return extract_json(content), content[-2000:]


def checker_schema(path: Path) -> None:
    path.write_text(json.dumps({
        "type": "object", "additionalProperties": False,
        "required": ["verdict", "summary", "issues", "candidates"],
        "properties": {
            "verdict": {"type": "string", "enum": ["PASS", "CORRECT", "REJECT"]},
            "summary": {"type": "string"},
            "issues": {"type": "array", "items": {"type": "string"}},
            "candidates": {"type": "array", "items": candidate_schema(approved=True)},
        },
    }), encoding="utf-8")


def call_checker(cluster: dict[str, str], evidence: list[dict[str, object]], proposal: dict[str, object]) -> tuple[dict[str, object] | None, str]:
    prompt = f"""Review this ARMv7 cluster proposal only. Do not edit files or run tools.
Check ARM EABI, this interpretation, argument/return widths, signedness, member offsets,
external prototypes, and whether every statement is supported by the supplied evidence.
PASS if sound. CORRECT by returning corrected definitions when a small evidence-supported fix
is enough. REJECT unsupported candidates. Preserve the structured ABI/body envelope exactly:
allowed types only, arg0/arg1 names only, no class types, no this keyword, and body without braces.
Never require exact instruction selection.
Cluster: {json.dumps(cluster, separators=(',', ':'))}
Evidence: {json.dumps(evidence, separators=(',', ':'))}
Proposal: {json.dumps(proposal, separators=(',', ':'))}
"""
    with tempfile.TemporaryDirectory(prefix="yellow-checker-") as directory:
        schema = Path(directory) / "schema.json"
        output = Path(directory) / "result.json"
        checker_schema(schema)
        command = [
            str(ROOT / "scripts/reagent/bin/codex"), "exec", "-m", CHECKER_MODEL,
            "-s", "read-only", "-C", str(ROOT), "--skip-git-repo-check",
            "--output-schema", str(schema), "-o", str(output), "-",
        ]
        result = subprocess.run(command, input=prompt, cwd=ROOT, text=True, stdout=subprocess.PIPE,
                                stderr=subprocess.STDOUT, timeout=900, check=False)
        if result.returncode or not output.exists():
            return None, result.stdout[-2000:]
        try:
            return json.loads(output.read_text(encoding="utf-8")), result.stdout[-2000:]
        except ValueError:
            return None, result.stdout[-2000:]


def build_definition(row: dict[str, object], artifact: str, symbol: str) -> str | None:
    return_type = str(row.get("return_type", ""))
    param_types = row.get("param_types")
    declarations = row.get("declarations")
    body = str(row.get("body", ""))
    if return_type not in ALLOWED_TYPES or not isinstance(param_types, list) or not isinstance(declarations, list):
        return None
    if any(str(value) not in ALLOWED_TYPES or str(value) == "void" for value in param_types):
        return None
    forbidden = ("#include", "__asm", " asm(", "system(", "fopen(", "std::", "this", "undefined")
    if any(token in body for token in forbidden) or "{" in body or "}" in body:
        return None
    declaration_lines = []
    for value in declarations:
        line = str(value).strip()
        if not line.endswith(";") or any(token in line for token in ("#", "{", "}", "undefined", "this")):
            return None
        declaration_lines.append(line)
    parameters = ", ".join(f"{value} arg{index}" for index, value in enumerate(param_types))
    prefix = "\n".join(declaration_lines)
    if prefix:
        prefix += "\n"
    return (
        f'{prefix}extern "C" {return_type} {artifact}({parameters}) __asm__("{symbol}");\n'
        f'extern "C" {return_type} {artifact}({parameters}) {{\n{body.rstrip()}\n}}'
    )


def compile_candidate(address: str, symbol: str, definition: str) -> tuple[bool, str, str]:
    source_text = PREAMBLE + "\n" + definition.rstrip() + "\n"
    with tempfile.TemporaryDirectory(prefix="yellow-compile-") as directory:
        source = Path(directory) / "candidate.cpp"
        obj = Path(directory) / "candidate.o"
        source.write_text(source_text, encoding="utf-8")
        result = subprocess.run(
            ["arm-none-eabi-g++", *FLAGS, f"-I{ROOT / 'include'}", "-c", str(source), "-o", str(obj)],
            cwd=ROOT, text=True, stdout=subprocess.PIPE, stderr=subprocess.STDOUT, check=False,
        )
        if result.returncode:
            return False, "ASM_DIFFERENT", result.stdout[-1000:]
        names = subprocess.check_output(["arm-none-eabi-nm", str(obj)], text=True)
        if symbol not in names:
            return False, "ASM_DIFFERENT", "required retail symbol missing from object"
        compare = subprocess.run(
            ["python3", "tools/compare_function.py", str(obj), symbol, address,
             "--code-bin", "extracted/exefs/code.bin"],
            cwd=ROOT, text=True, stdout=subprocess.PIPE, stderr=subprocess.STDOUT, check=False,
        )
        return True, "ASM_MATCH" if compare.returncode == 0 else "ASM_DIFFERENT", compare.stdout[-1000:]


def source_text(rows: list[dict[str, str]]) -> str:
    lines = ["// Qwen reconstruction validated against retail ARM evidence.", PREAMBLE]
    for row in rows:
        lines.extend([
            f"#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == {row['address']}",
            row["definition"], "#endif", "",
        ])
    return "\n".join(lines)


def promote(cluster: dict[str, str], approved: list[dict[str, str]], review_by_address: dict[str, dict[str, str]],
            catalog: dict[str, dict[str, str]], symbols: dict[str, str], require_asm_match: bool = False
            ) -> tuple[int, str, float]:
    started = time.monotonic()
    compiled: list[dict[str, str]] = []
    failures: list[str] = []
    prepared: list[tuple[str, str]] = []
    for row in approved:
        try:
            address = resolver.normalize(str(row["address"]))
        except (KeyError, ValueError):
            continue
        artifact = f"YellowAuto_{address[2:].lower()}"
        if address not in review_by_address or address not in symbols:
            continue
        definition = build_definition(row, artifact, symbols[address])
        if definition is None:
            failures.append(f"{address}: invalid structured definition envelope")
            continue
        prepared.append((address, definition))
    with ThreadPoolExecutor(max_workers=COMPILER_WORKERS) as executor:
        results = executor.map(lambda item: compile_candidate(item[0], symbols[item[0]], item[1]), prepared)
        checked = zip(prepared, results)
        for (address, definition), (ok, asm_status, detail) in checked:
            if ok and (not require_asm_match or asm_status == "ASM_MATCH"):
                compiled.append({"address": address, "definition": definition, "asm_status": asm_status,
                                 "detail": detail})
            elif ok:
                failures.append(f"{address}: compiled but requires semantic review")
            else:
                concise_detail = re.sub(r"\s+", " ", detail)[-300:]
                failures.append(f"{address}: {concise_detail}")
    if not compiled:
        return 0, "; ".join(failures)[:1500], time.monotonic() - started
    SOURCES.mkdir(parents=True, exist_ok=True)
    PROPOSALS.mkdir(parents=True, exist_ok=True)
    integrated_record = PROPOSALS / f"{cluster['cluster_id']}-integrated.json"
    existing: list[dict[str, str]] = []
    if integrated_record.exists():
        try:
            existing = json.loads(integrated_record.read_text(encoding="utf-8"))
        except ValueError:
            existing = []
    combined = {resolver.normalize(row["address"]): row for row in existing}
    combined.update({row["address"]: row for row in compiled})
    integrated = list(combined.values())
    integrated_record.write_text(json.dumps(integrated, indent=2) + "\n", encoding="utf-8")
    source = SOURCES / f"cluster_{cluster['cluster_id']}.cpp"
    temporary = source.with_suffix(".cpp.tmp")
    previous_source = source.read_text(encoding="utf-8") if source.exists() else ""
    addition = source_text(compiled)
    temporary.write_text(previous_source.rstrip() + "\n\n" + addition if previous_source else addition, encoding="utf-8")
    temporary.replace(source)
    manifest = resolver.read_csv(resolver.MANIFEST)
    fields = list(manifest[0])
    canonical = {resolver.normalize(row["address"]) for row in manifest}
    for row in compiled:
        address = row["address"]
        if address in canonical:
            continue
        review = review_by_address[address]
        info = catalog[address]
        artifact = f"YellowAuto_{address[2:].lower()}"
        size = int(review["size"])
        asm_status = row["asm_status"]
        manifest.append({
            "address": address, "retail_size": f"0x{size:02X}", "module": "static.crs", "binary": "code.bin",
            "name": review["qualified_name"], "namespace": info.get("namespace") or "Global",
            "source": str(source.relative_to(ROOT)), "symbol": symbols[address], "artifact": artifact,
            "adapter_mode": "macro_select", "adapter_macro": "POKEMOON_SPLIT_FUNCTION",
            "adapter": f"src/code.bin/{artifact}.cpp", "object": f"build/code.bin/{artifact}.o",
            "source_status": "SOURCE_WRITTEN", "compile_status": "COMPILES",
            "semantic_status": "SEMANTIC_VERIFIED", "asm_status": asm_status,
            "runtime_ready": "false", "runtime_tested": "false", "subsystem": "reagent",
            "provenance": "RETAIL_ORIGINAL_SYMBOL", "compiler": "arm-none-eabi-g++ 16.2.0",
            "matched_bytes": str(size) if asm_status == "ASM_MATCH" else "",
            "total_bytes": str(size) if asm_status == "ASM_MATCH" else "",
            "notes": f"Phase 4E cluster {cluster['cluster_id']}; "
                     + ("Qwen reconstruction with exact retail ARM match"
                        if require_asm_match else "Qwen reconstruction approved by GPT-5.4 mini"),
        })
    resolver.write_csv(resolver.MANIFEST, manifest, fields)
    return len(compiled), "; ".join(failures)[:1500], time.monotonic() - started


def append_escalation(cluster: dict[str, str], reason: str) -> None:
    fields = ["timestamp", "cluster_id", "namespace", "blocker", "candidate_count", "reason"]
    rows = resolver.read_csv(ESCALATION) if ESCALATION.exists() else []
    concise = re.sub(r"\s+", " ", reason).strip()[:500]
    rows.append({"timestamp": stamp(), "cluster_id": cluster["cluster_id"], "namespace": cluster["namespace"],
                 "blocker": cluster["blocker"], "candidate_count": cluster["candidate_count"], "reason": concise})
    resolver.write_csv(ESCALATION, rows, fields)


def evidence_fingerprint(cluster: dict[str, str]) -> str:
    payload = "|".join((cluster["blocker"], cluster["namespace"], cluster["shared_dependency"],
                        cluster["addresses"]))
    import hashlib
    return hashlib.sha1(payload.encode()).hexdigest()


def cluster_priority(cluster: dict[str, str], state: sqlite3.Row) -> tuple[object, ...]:
    count = int(cluster["candidate_count"])
    blocker_rank = {
        "missing class declaration": 0,
        "missing prototype": 0,
        "unknown this-pointer type": 1,
        "ABI uncertainty": 2,
        "shared header change required": 4,
    }.get(cluster["blocker"], 3)
    namespace = cluster["namespace"].lower()
    hard_namespace = any(token in namespace for token in
                         ("network", "battle", "thread", "allocator", "renderingengine"))
    size_band = 0 if 2 <= count <= 8 else 1 if count == 1 else 2
    estimated_cost = max(int(cluster["total_size"]) + count * 80, 1)
    expected_yield = min(count, 8) * max(int(cluster["score"]), 1) / estimated_cost
    return (int(state["qwen_attempts"]) > 0, hard_namespace, blocker_rank, size_band, -expected_yield)


def select_cluster(connection: sqlite3.Connection, clusters: dict[str, dict[str, str]],
                   cluster_id: str | None = None) -> dict[str, str] | None:
    if cluster_id:
        row = connection.execute(
            "SELECT * FROM clusters WHERE cluster_id=? AND status IN ('PENDING','PARTIAL')", (cluster_id,),
        ).fetchone()
        return clusters.get(cluster_id) if row else None
    rows = connection.execute("SELECT * FROM clusters WHERE status IN ('PENDING','PARTIAL')").fetchall()
    candidates: list[tuple[dict[str, str], sqlite3.Row]] = []
    for row in rows:
        cluster = clusters.get(row["cluster_id"])
        if cluster is None:
            update_cluster(connection, row["cluster_id"], "RESOLVED", detail="No remaining members")
            continue
        fingerprint = evidence_fingerprint(cluster)
        if row["evidence_hash"] and row["evidence_hash"] == fingerprint and row["qwen_attempts"]:
            update_cluster(connection, row["cluster_id"], "DEFERRED_HARD",
                           detail="Unchanged evidence after prior Qwen attempt")
            metric_event(connection, "deferred_clusters", 1)
            continue
        candidates.append((cluster, row))
    if not candidates:
        return None
    return min(candidates, key=lambda item: cluster_priority(item[0], item[1]))[0]


def process_cluster(connection: sqlite3.Connection, cluster: dict[str, str]) -> int:
    cluster_started = time.monotonic()
    review_rows = {resolver.normalize(row["address"]): row for row in resolver.read_csv(resolver.REVIEW)}
    catalog = {resolver.normalize(row["address"]): row for row in resolver.read_csv(resolver.CATALOG)}
    symbols = {
        resolver.normalize(row["target_address"]): row["mangled_name"] for row in resolver.read_csv(resolver.SYMBOLS)
        if row["source_file"] == "static.crs" and row["kind"] == "FUNCTION" and row["mangled_name"]
    }
    addresses = [resolver.normalize(value) for value in cluster["addresses"].split(";")][:MAX_CLUSTER_FUNCTIONS]
    evidence = [compact_evidence(address, review_rows[address], catalog, symbols[address])
                for address in addresses if address in review_rows and address in catalog and address in symbols]
    if not evidence:
        append_escalation(cluster, "No complete Ghidra/catalog/symbol evidence")
        update_cluster(connection, cluster["cluster_id"], "ESCALATED", last_error="missing evidence")
        metric_event(connection, "cluster", duration_seconds=time.monotonic() - cluster_started)
        return 0
    correction = ""
    last_error = ""
    checker_unavailable = False
    high_fanout = int(cluster["candidate_count"]) >= 10
    max_attempts = 2 if high_fanout else 1
    qwen_timeout = HIGH_FANOUT_QWEN_TIMEOUT if high_fanout else ORDINARY_QWEN_TIMEOUT
    budget = 720 if high_fanout else 480
    fingerprint = evidence_fingerprint(cluster)
    for attempt in range(1, max_attempts + 1):
        if time.monotonic() - cluster_started >= budget:
            last_error = f"Cluster wall budget of {budget}s exhausted"
            break
        update_cluster(connection, cluster["cluster_id"], "QWEN", qwen_attempts=attempt,
                       evidence_hash=fingerprint)
        qwen_started = time.monotonic()
        proposal, detail = call_qwen(qwen_prompt(cluster, evidence, correction), qwen_timeout)
        qwen_seconds = time.monotonic() - qwen_started
        metric_event(connection, "qwen_call", duration_seconds=qwen_seconds)
        if not proposal or not isinstance(proposal.get("candidates"), list):
            last_error = f"Qwen attempt {attempt} produced no valid proposal: {detail}"
            continue
        PROPOSALS.mkdir(parents=True, exist_ok=True)
        (PROPOSALS / f"{cluster['cluster_id']}-qwen-{attempt}.json").write_text(
            json.dumps(proposal, indent=2) + "\n", encoding="utf-8")
        if not CHECKER_ENABLED:
            candidates = [row for row in proposal["candidates"] if row.get("confidence") == "HIGH"]
            count, compile_errors, compile_seconds = promote(
                cluster, candidates, review_rows, catalog, symbols, require_asm_match=True)
            metric_event(connection, "compiler", duration_seconds=compile_seconds)
            if count:
                metric_event(connection, "qwen_promotions", count)
                status = "COMPLETE" if count >= len(evidence) else "PARTIAL"
                update_cluster(connection, cluster["cluster_id"], status, promoted=count,
                               detail="Exact ARM matches promoted without unavailable GPT checker", last_error="")
                metric_event(connection, "cluster", duration_seconds=time.monotonic() - cluster_started)
                return count
            last_error = compile_errors or "Qwen candidates require semantic review"
            update_cluster(connection, cluster["cluster_id"], "REVIEW_LATER", last_error=last_error,
                           detail="GPT checker unavailable; no exact ARM match")
            metric_event(connection, "deferred_clusters", 1)
            metric_event(connection, "cluster", duration_seconds=time.monotonic() - cluster_started)
            return 0
        for checker_round in range(1, 2):
            update_cluster(connection, cluster["cluster_id"], "CHECKER", checker_attempts=checker_round)
            verdict, checker_detail = call_checker(cluster, evidence, proposal)
            if verdict is None:
                last_error = f"Checker unavailable: {checker_detail}"
                checker_unavailable = True
                break
            (PROPOSALS / f"{cluster['cluster_id']}-checker-{attempt}-{checker_round}.json").write_text(
                json.dumps(verdict, indent=2) + "\n", encoding="utf-8")
            candidates = [row for row in verdict.get("candidates", []) if row.get("approved")]
            if verdict.get("verdict") in {"PASS", "CORRECT"} and candidates:
                count, compile_errors, compile_seconds = promote(cluster, candidates, review_rows, catalog, symbols)
                metric_event(connection, "compiler", duration_seconds=compile_seconds)
                if count:
                    metric_event(connection, "qwen_promotions", count)
                    update_cluster(connection, cluster["cluster_id"], "COMPLETE", promoted=count,
                                   detail=str(verdict.get("summary", "")), last_error="")
                    metric_event(connection, "cluster", duration_seconds=time.monotonic() - cluster_started)
                    return count
                last_error = f"Checker-approved proposal produced no compiling candidates: {compile_errors}"
            correction = "; ".join(str(value) for value in verdict.get("issues", []))
            if last_error.startswith("Checker-approved proposal"):
                correction = last_error
            break
    if checker_unavailable and last_error.startswith("Checker unavailable"):
        update_cluster(connection, cluster["cluster_id"], "REVIEW_LATER",
                       last_error=re.sub(r"\s+", " ", last_error)[-500:])
        metric_event(connection, "deferred_clusters", 1)
        log(f"cluster {cluster['cluster_id']} checker unavailable; deferred for later review")
        metric_event(connection, "cluster", duration_seconds=time.monotonic() - cluster_started)
        return 0
    append_escalation(cluster, last_error or "Two Qwen/checker rounds exhausted")
    update_cluster(connection, cluster["cluster_id"], "DEFERRED_HARD", last_error=last_error)
    metric_event(connection, "deferred_clusters", 1)
    metric_event(connection, "cluster", duration_seconds=time.monotonic() - cluster_started)
    return 0


def write_worker_status(connection: sqlite3.Connection, state: str, current: dict[str, str] | None = None) -> None:
    resolver.write_status()
    payload = json.loads(RESULTS.read_text(encoding="utf-8"))
    counts = dict(connection.execute("SELECT status,COUNT(*) FROM clusters GROUP BY status").fetchall())
    manifest = resolver.read_csv(resolver.MANIFEST)
    phase4e_rows = [row for row in manifest if row["notes"].startswith("Phase 4E")]
    worker_processed = len({row["source"] for row in phase4e_rows}) + counts.get("ESCALATED", 0)
    phase4e_promoted = len(phase4e_rows)
    payload.update({
        "worker": state, "pid": os.getpid() if state == "RUNNING" else None,
        "current_cluster": current["cluster_id"] if current else None,
        "current_namespace": current["namespace"] if current else None,
        "clusters_processed": worker_processed, "phase4e_promoted": phase4e_promoted,
        "cluster_states": counts, "reverser": QWEN_MODEL,
        "checker": f"{CHECKER_MODEL} via Codex CLI" if CHECKER_ENABLED else "REVIEW_LATER",
        "rolling_rate": rolling_metrics(connection),
        "throughput_totals": {
            "qwen_calls": int(connection.execute(
                "SELECT COUNT(*) FROM throughput_events WHERE kind='qwen_call'").fetchone()[0]),
            "qwen_promotions": int(connection.execute(
                "SELECT COALESCE(SUM(amount),0) FROM throughput_events WHERE kind='qwen_promotions'").fetchone()[0]),
            "compile_first_promotions": int(connection.execute(
                "SELECT COALESCE(SUM(amount),0) FROM throughput_events WHERE kind='compile_first_promotions'").fetchone()[0]),
            "mechanical_promotions": int(connection.execute(
                "SELECT COALESCE(SUM(amount),0) FROM throughput_events WHERE kind='mechanical_promotions'").fetchone()[0]),
            "deferred_clusters": int(connection.execute(
                "SELECT COALESCE(SUM(amount),0) FROM throughput_events WHERE kind='deferred_clusters'").fetchone()[0]),
        },
    })
    RESULTS.write_text(json.dumps(payload, indent=2) + "\n", encoding="utf-8")


def run_compile_first(connection: sqlite3.Connection) -> int:
    started = time.monotonic()
    empty_promoted, _ = resolver.promote_empty(200)
    leaf_promoted, _, _ = resolver.promote_leaf(200)
    promoted = empty_promoted + leaf_promoted
    metric_event(connection, "compiler", duration_seconds=time.monotonic() - started)
    if promoted:
        metric_event(connection, "compile_first_promotions", promoted)
        metric_event(connection, "mechanical_promotions", promoted)
        subprocess.run(["make", "status"], cwd=ROOT, stdout=subprocess.DEVNULL, stderr=subprocess.STDOUT)
        resolver.analyze()
    log(f"compile-first promoted={promoted} empty={empty_promoted} leaf={leaf_promoted}")
    return promoted


class Worker:
    stopping = False

    def __init__(self, max_clusters: int | None = None, cluster_id: str | None = None) -> None:
        self.max_clusters = max_clusters
        self.cluster_id = cluster_id

    def signal(self, _signum: int, _frame: object) -> None:
        self.stopping = True

    def run(self) -> int:
        LOCK.parent.mkdir(parents=True, exist_ok=True)
        lock = LOCK.open("w", encoding="utf-8")
        try:
            fcntl.flock(lock, fcntl.LOCK_EX | fcntl.LOCK_NB)
        except BlockingIOError:
            return 0
        PID.write_text(f"{os.getpid()}\n", encoding="utf-8")
        STOP.unlink(missing_ok=True)
        signal.signal(signal.SIGTERM, self.signal)
        signal.signal(signal.SIGINT, self.signal)
        resolver.analyze()
        connection = ensure_state()
        promoted_since_check = run_compile_first(connection)
        processed_this_run = 0
        checker = CHECKER_MODEL if CHECKER_ENABLED else "REVIEW_LATER"
        log(f"START pid={os.getpid()} qwen={QWEN_MODEL} checker={checker}")
        try:
            while not self.stopping and not STOP.exists():
                if len(resolver.read_csv(resolver.MANIFEST)) >= TARGET_SOURCE_BACKED:
                    write_worker_status(connection, "TARGET_REACHED")
                    return 0
                if self.max_clusters is not None and processed_this_run >= self.max_clusters:
                    write_worker_status(connection, "SMOKE_COMPLETE")
                    return 0
                clusters = {item["cluster_id"]: item for item in resolver.read_csv(resolver.CLUSTERS)}
                cluster = select_cluster(connection, clusters, self.cluster_id)
                if cluster is None:
                    write_worker_status(connection, "HIGH_CONFIDENCE_EXHAUSTED")
                    return 0
                source_count = len(resolver.read_csv(resolver.MANIFEST))
                log(f"[{source_count}/18945] cluster {cluster['namespace']} / {cluster['blocker']} candidates: {cluster['candidate_count']}")
                write_worker_status(connection, "RUNNING", cluster)
                promoted = process_cluster(connection, cluster)
                processed_this_run += 1
                log(f"cluster {cluster['cluster_id']} promoted: {promoted}")
                if promoted:
                    promoted_since_check += promoted
                    subprocess.run(["make", "status"], cwd=ROOT, stdout=subprocess.DEVNULL, stderr=subprocess.STDOUT)
                    resolver.analyze()
                if promoted_since_check >= 25:
                    exact = subprocess.run(["make", "check"], cwd=ROOT, stdout=subprocess.DEVNULL, stderr=subprocess.STDOUT)
                    semantic = subprocess.run(["make", "MODE=semantic", "check"], cwd=ROOT,
                                              stdout=subprocess.DEVNULL, stderr=subprocess.STDOUT)
                    log(f"validation exact={exact.returncode} semantic={semantic.returncode}")
                    promoted_since_check = 0
                if self.cluster_id:
                    write_worker_status(connection, "SMOKE_COMPLETE")
                    return 0
            write_worker_status(connection, "STOPPED")
            return 0
        finally:
            connection.close()
            PID.unlink(missing_ok=True)
            fcntl.flock(lock, fcntl.LOCK_UN)
            lock.close()


def service_active() -> bool:
    return subprocess.run(["systemctl", "--user", "is-active", "--quiet", SERVICE], check=False).returncode == 0


def start() -> str:
    if service_active():
        return f"{SERVICE} already running"
    STOP.unlink(missing_ok=True)
    command = [
        "systemd-run", "--user", f"--unit={SERVICE.removesuffix('.service')}", "--collect",
        "--property=Type=exec", "--property=Restart=on-failure", "--property=RestartSec=60",
        f"--working-directory={ROOT}", sys.executable, str(Path(__file__).resolve()), "run",
    ]
    result = subprocess.run(command, text=True, stdout=subprocess.PIPE, stderr=subprocess.STDOUT, check=False)
    if result.returncode:
        raise SystemExit(result.stdout.strip())
    return result.stdout.strip()


def reset_failed() -> int:
    resolver.analyze()
    connection = ensure_state()
    with connection:
        count = connection.execute("SELECT COUNT(*) FROM clusters WHERE status='ESCALATED'").fetchone()[0]
        connection.execute(
            "UPDATE clusters SET status='PENDING',qwen_attempts=0,checker_attempts=0,last_error='',detail='' "
            "WHERE status='ESCALATED'"
        )
    connection.close()
    resolver.write_csv(ESCALATION, [], ["timestamp", "cluster_id", "namespace", "blocker", "candidate_count", "reason"])
    log(f"RESET {count} previously escalated clusters after structured-output fix")
    return int(count)


def checkpoint_stopped() -> None:
    connection = ensure_state()
    with connection:
        connection.execute(
            "UPDATE clusters SET status='PENDING',last_error='Recovered interrupted in-flight cluster after clean stop' "
            "WHERE status IN ('QWEN','CHECKER')"
        )
    write_worker_status(connection, "STOPPED")
    connection.close()


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("command", choices=("start", "run", "status", "log", "stop", "resume", "reset-failed"))
    parser.add_argument("--max-clusters", type=int)
    parser.add_argument("--cluster-id")
    args = parser.parse_args()
    if args.command == "run":
        raise SystemExit(Worker(args.max_clusters, args.cluster_id).run())
    if args.command in {"start", "resume"}:
        print(start())
    elif args.command == "status":
        print(RESULTS.read_text(encoding="utf-8") if RESULTS.exists() else "NOT_STARTED", end="")
    elif args.command == "log":
        print(LOG.read_text(encoding="utf-8") if LOG.exists() else "No log yet", end="")
    elif args.command == "reset-failed":
        print(f"reset {reset_failed()} clusters")
    else:
        STOP.write_text(stamp() + "\n", encoding="utf-8")
        if not service_active():
            checkpoint_stopped()
        print("stop requested")


if __name__ == "__main__":
    main()
