#!/usr/bin/env python3
"""Cluster YELLOW candidates and promote mechanically proven shared classes."""

from __future__ import annotations

import argparse
import csv
import datetime as dt
import hashlib
import json
import re
import sqlite3
import subprocess
import tempfile
from collections import Counter, defaultdict
from pathlib import Path


ROOT = Path(__file__).resolve().parents[2]
REVIEW = ROOT / "analysis/reagent/semantic_review.csv"
CATALOG = ROOT / "analysis/function_queue.csv"
SYMBOLS = ROOT / "symbols/master_symbols.csv"
MANIFEST = ROOT / "config/reconstructed_functions.csv"
SUMMARY = ROOT / "analysis/reagent/yellow_summary.csv"
CLUSTERS = ROOT / "analysis/reagent/yellow_clusters.csv"
STATE = ROOT / "analysis/reagent/yellow_state.sqlite3"
STATUS = ROOT / "analysis/reagent/yellow_status.json"
EMPTY_SOURCE = ROOT / "src/reagent/yellow_empty_functions.cpp"
LEAF_SOURCE = ROOT / "src/reagent/yellow_leaf_functions.cpp"
LEAF_RECORD = ROOT / "analysis/reagent/yellow_leaf_promotions.json"
HARD_ARTIFACT = re.compile(r"\b(?:FUN|DAT|LAB|PTR)_[0-9A-Fa-f]+\b|\bundefined\d*\b")
OFFSET = re.compile(r"(?:this|param_1)[^;\n]{0,80}?(?:\+\s*|,\s*)(0x[0-9a-fA-F]+)")
CALL = re.compile(r"\b([A-Za-z_][A-Za-z0-9_:~]*)\s*\(")
KEYWORDS = {"if", "for", "while", "switch", "return", "sizeof", "static_cast", "reinterpret_cast"}
SUMMARY_FIELDS = ["blocker", "candidates"]
BLOCKER_ORDER = [
    "unknown this-pointer type", "missing class declaration", "uncertain member offset",
    "missing enum", "unresolved helper prototype", "shared header change required",
    "ABI uncertainty", "unresolved external call", "CRO ownership", "checker uncertainty",
    "missing prototype", "verified empty ARM body",
]
CLUSTER_FIELDS = [
    "cluster_id", "blocker", "namespace", "shared_dependency", "module",
    "candidate_count", "total_size", "checker_pass", "known_symbols",
    "unknown_types", "offsets", "score", "priority", "addresses",
]


def read_csv(path: Path) -> list[dict[str, str]]:
    with path.open(newline="", encoding="utf-8") as handle:
        return list(csv.DictReader(handle))


def write_csv(path: Path, rows: list[dict[str, object]], fields: list[str]) -> None:
    path.parent.mkdir(parents=True, exist_ok=True)
    temporary = path.with_suffix(path.suffix + ".tmp")
    with temporary.open("w", newline="", encoding="utf-8") as handle:
        writer = csv.DictWriter(handle, fieldnames=fields, extrasaction="ignore", lineterminator="\n")
        writer.writeheader()
        writer.writerows(rows)
    temporary.replace(path)


def normalize(value: str) -> str:
    return f"0x{int(value, 16):08X}"


def candidate_text(row: dict[str, str]) -> str:
    try:
        return (ROOT / row["candidate"]).read_text(encoding="utf-8")
    except OSError:
        return ""


def no_op_body(text: str) -> bool:
    match = re.search(r"\{(.*)\}\s*$", text, re.DOTALL)
    if not match:
        return False
    body = re.sub(r"/\*.*?\*/|//[^\n]*", "", match.group(1), flags=re.DOTALL)
    body = re.sub(r"\breturn\s*;", "", body)
    return not body.strip()


def dependency(text: str) -> str:
    match = re.search(r"\{(.*)\}\s*$", text, re.DOTALL)
    body = match.group(1) if match else text
    helpers = sorted({name for name in CALL.findall(body) if name not in KEYWORDS and "operator" not in name})
    return helpers[0] if helpers else ""


def blocker(row: dict[str, str], catalog: dict[str, dict[str, str]], text: str) -> str:
    info = catalog[row["address"]]
    if row["checker_result"] != "PASS":
        return "checker uncertainty"
    if info["module"] != "static.crs":
        return "CRO ownership"
    if int(row["size"]) == 4 and no_op_body(text) and not HARD_ARTIFACT.search(text):
        return "verified empty ARM body"
    hard = HARD_ARTIFACT.findall(text)
    if any(value.startswith(("FUN_", "DAT_", "PTR_")) for value in hard):
        return "unresolved external call"
    if OFFSET.search(text):
        return "uncertain member offset"
    if row["reason"] == "SHARED_LAYOUT_CHANGE":
        return "shared header change required"
    prototype = info.get("prototype", "")
    if "__thiscall" in prototype and ("undefined" in prototype or info.get("unknown_type_count", "0") != "0"):
        return "unknown this-pointer type"
    if "undefined" in prototype:
        return "ABI uncertainty"
    if "::" in row["qualified_name"]:
        return "missing class declaration"
    if dependency(text):
        return "unresolved helper prototype"
    return "missing prototype"


def analyze() -> tuple[list[dict[str, object]], list[dict[str, object]]]:
    review = read_csv(REVIEW)
    catalog = {normalize(row["address"]): row for row in read_csv(CATALOG)}
    canonical = {normalize(row["address"]) for row in read_csv(MANIFEST)}
    symbol_addresses = {
        normalize(row["target_address"]) for row in read_csv(SYMBOLS)
        if row["source_file"] == "static.crs" and row["kind"] == "FUNCTION"
    }
    grouped: dict[tuple[str, str, str, str], list[dict[str, object]]] = defaultdict(list)
    blocker_counts: Counter[str] = Counter()
    for row in review:
        address = normalize(row["address"])
        if address not in catalog or address in canonical:
            continue
        row["address"] = address
        info = catalog[address]
        text = candidate_text(row)
        reason = blocker(row, catalog, text)
        dep = dependency(text)
        namespace = info.get("namespace") or "Global"
        offsets = sorted(set(OFFSET.findall(text)), key=lambda value: int(value, 16))
        blocker_counts[reason] += 1
        grouped[(reason, namespace, dep, info["module"])].append({
            **row,
            "size_value": int(row["size"]),
            "unknown_types_value": int(info.get("unknown_type_count") or 0),
            "offsets_value": offsets,
            "known_symbol": address in symbol_addresses,
        })

    cluster_rows: list[dict[str, object]] = []
    for key, members in grouped.items():
        reason, namespace, dep, module = key
        addresses = [str(row["address"]) for row in members]
        offsets = sorted({item for row in members for item in row["offsets_value"]}, key=lambda value: int(value, 16))
        count = len(members)
        checker_pass = sum(row["checker_result"] == "PASS" for row in members)
        known = sum(bool(row["known_symbol"]) for row in members)
        unknown = sum(int(row["unknown_types_value"]) for row in members)
        simplicity = 30 if reason == "verified empty ARM body" else 15 if reason in {
            "missing class declaration", "missing prototype", "unresolved helper prototype"
        } else 5
        risk = 25 if any(token in namespace.lower() for token in ("battle", "network", "thread", "allocator")) else 0
        score = count * 10 + checker_pass * 2 + known + simplicity - unknown - risk
        identity = "|".join(key)
        cluster_rows.append({
            "cluster_id": hashlib.sha1(identity.encode()).hexdigest()[:12],
            "blocker": reason,
            "namespace": namespace,
            "shared_dependency": dep,
            "module": module,
            "candidate_count": count,
            "total_size": sum(int(row["size_value"]) for row in members),
            "checker_pass": checker_pass,
            "known_symbols": known,
            "unknown_types": unknown,
            "offsets": ";".join(offsets),
            "score": score,
            "priority": "HIGH" if score >= 100 and risk == 0 else "MEDIUM" if score >= 30 else "LOW",
            "addresses": ";".join(addresses),
        })
    cluster_rows.sort(key=lambda row: (-int(row["score"]), str(row["namespace"]), str(row["blocker"])))
    summary_rows = [
        {"blocker": key, "candidates": blocker_counts.get(key, 0)}
        for key in BLOCKER_ORDER
    ]
    summary_rows.extend(
        {"blocker": key, "candidates": value}
        for key, value in blocker_counts.most_common()
        if key not in BLOCKER_ORDER
    )
    write_csv(SUMMARY, summary_rows, SUMMARY_FIELDS)
    write_csv(CLUSTERS, cluster_rows, CLUSTER_FIELDS)
    initialize_state(cluster_rows)
    write_status(cluster_rows)
    return summary_rows, cluster_rows


def initialize_state(clusters: list[dict[str, object]]) -> None:
    connection = sqlite3.connect(STATE)
    with connection:
        connection.executescript("""
            CREATE TABLE IF NOT EXISTS clusters (
                cluster_id TEXT PRIMARY KEY, blocker TEXT NOT NULL, namespace TEXT NOT NULL,
                candidate_count INTEGER NOT NULL, score INTEGER NOT NULL, status TEXT NOT NULL,
                promoted INTEGER NOT NULL DEFAULT 0, detail TEXT NOT NULL DEFAULT '',
                updated_at TEXT NOT NULL
            );
            CREATE TABLE IF NOT EXISTS metadata (key TEXT PRIMARY KEY, value TEXT NOT NULL);
        """)
        state_version = connection.execute("SELECT value FROM metadata WHERE key='schema_version'").fetchone()
        if state_version is None or state_version[0] != "2":
            connection.execute("DELETE FROM clusters")
            connection.execute("INSERT OR REPLACE INTO metadata(key,value) VALUES('schema_version','2')")
        columns = {row[1] for row in connection.execute("PRAGMA table_info(clusters)")}
        if "initial_count" not in columns:
            connection.execute("ALTER TABLE clusters ADD COLUMN initial_count INTEGER NOT NULL DEFAULT 0")
            connection.execute("UPDATE clusters SET initial_count=candidate_count WHERE initial_count=0")
        stamp = dt.datetime.now(dt.timezone.utc).isoformat(timespec="seconds")
        current_ids = {str(row["cluster_id"]) for row in clusters}
        if current_ids:
            placeholders = ",".join("?" for _ in current_ids)
            connection.execute(
                f"UPDATE clusters SET status='RESOLVED',promoted=initial_count,updated_at=? "
                f"WHERE cluster_id NOT IN ({placeholders}) AND status!='RESOLVED'",
                (stamp, *current_ids),
            )
        for row in clusters:
            connection.execute("""
                INSERT INTO clusters(cluster_id,blocker,namespace,candidate_count,score,status,updated_at,initial_count)
                VALUES(?,?,?,?,?,'PENDING',?,?)
                ON CONFLICT(cluster_id) DO UPDATE SET blocker=excluded.blocker,
                    namespace=excluded.namespace,candidate_count=excluded.candidate_count,
                    score=excluded.score,promoted=MAX(clusters.initial_count-excluded.candidate_count,0),
                    status=CASE WHEN excluded.candidate_count < clusters.initial_count THEN 'PARTIAL' ELSE clusters.status END,
                    updated_at=excluded.updated_at
            """, (row["cluster_id"], row["blocker"], row["namespace"], row["candidate_count"], row["score"], stamp,
                    row["candidate_count"]))
    connection.close()


def empty_source(rows: list[dict[str, str]]) -> str:
    lines = ["// Checker-approved no-op ARM functions grouped by Phase 4D.", ""]
    for row in rows:
        artifact = f"YellowEmpty_{row['address'][2:].lower()}"
        lines.extend([
            f"#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == {row['address']}",
            f'extern "C" void {artifact}() __asm__("{row["symbol"]}");',
            f'extern "C" void {artifact}() {{}}',
            "#endif",
            "",
        ])
    return "\n".join(lines)


def compile_empty(row: dict[str, str], rows: list[dict[str, str]]) -> tuple[bool, str]:
    with tempfile.TemporaryDirectory(prefix="yellow-empty-") as directory:
        source = Path(directory) / "candidate.cpp"
        obj = Path(directory) / "candidate.o"
        source.write_text(empty_source(rows), encoding="utf-8")
        command = [
            "arm-none-eabi-g++", "-std=gnu++11", "-mcpu=mpcore", "-marm", "-mfpu=vfp",
            "-mfloat-abi=softfp", "-O2", "-fno-exceptions", "-fno-rtti", "-fno-unwind-tables",
            "-fno-asynchronous-unwind-tables", "-ffunction-sections",
            f"-DPOKEMOON_SPLIT_FUNCTION={row['address']}", "-c", str(source), "-o", str(obj),
        ]
        result = subprocess.run(command, cwd=ROOT, text=True, stdout=subprocess.PIPE, stderr=subprocess.STDOUT, check=False)
        if result.returncode:
            return False, result.stdout.strip()
        result = subprocess.run(
            ["python3", "tools/compare_function.py", str(obj), row["symbol"], row["address"],
             "--code-bin", "extracted/exefs/code.bin"],
            cwd=ROOT, text=True, stdout=subprocess.PIPE, stderr=subprocess.STDOUT, check=False,
        )
        return result.returncode == 0, result.stdout.strip().replace("\n", " | ")


def evidence_assembly(address: str) -> list[str]:
    path = ROOT / ".ghidra-exports/static.crs" / f"{address[2:].lower()}.json"
    try:
        payload = json.loads(path.read_text(encoding="utf-8"))
    except (OSError, ValueError):
        return []
    instructions = []
    for line in payload.get("assembly", []):
        parts = str(line).split(None, 1)
        if len(parts) == 2:
            instructions.append(re.sub(r"\s+", "", parts[1].lower()))
    return instructions


def leaf_definition(address: str, symbol: str) -> str | None:
    instructions = evidence_assembly(address)
    if not instructions or instructions[-1] != "bxlr":
        return None
    operations = instructions[:-1]
    artifact = f"YellowLeaf_{address[2:].lower()}"
    alias = f'__asm__("{symbol}")'
    load = re.fullmatch(r"(ldrb|ldrh|ldr|ldrsb|ldrsh)r0,\[r0(?:,#(0x[0-9a-f]+|[0-9]+))?\]", operations[0]) if operations else None
    store = re.fullmatch(r"(strb|strh|str)r1,\[r0(?:,#(0x[0-9a-f]+|[0-9]+))?\]", operations[0]) if operations else None
    if load:
        opcode, raw_offset = load.groups()
        offset = int(raw_offset or "0", 0)
        types = {
            "ldrb": ("uint32_t", "uint8_t"), "ldrh": ("uint32_t", "uint16_t"),
            "ldr": ("uint32_t", "uint32_t"), "ldrsb": ("int32_t", "int8_t"),
            "ldrsh": ("int32_t", "int16_t"),
        }
        result_type, value_type = types[opcode]
        expression = f"*reinterpret_cast<const {value_type}*>(self + 0x{offset:x})"
        if len(operations) == 2:
            transform = re.fullmatch(r"(and|orr|eor|add|sub)r0,r0,#(0x[0-9a-f]+|[0-9]+)", operations[1])
            if not transform:
                return None
            operator = {"and": "&", "orr": "|", "eor": "^", "add": "+", "sub": "-"}[transform.group(1)]
            expression = f"({expression} {operator} {transform.group(2)})"
        elif len(operations) != 1:
            return None
        return (
            f'extern "C" {result_type} {artifact}(const uint8_t* self) {alias};\n'
            f'extern "C" {result_type} {artifact}(const uint8_t* self) {{ return {expression}; }}'
        )
    if store and len(operations) == 1:
        opcode, raw_offset = store.groups()
        offset = int(raw_offset or "0", 0)
        value_type = {"strb": "uint8_t", "strh": "uint16_t", "str": "uint32_t"}[opcode]
        return (
            f'extern "C" void {artifact}(uint8_t* self, uint32_t value) {alias};\n'
            f'extern "C" void {artifact}(uint8_t* self, uint32_t value) '
            f'{{ *reinterpret_cast<{value_type}*>(self + 0x{offset:x}) = static_cast<{value_type}>(value); }}'
        )
    add = re.fullmatch(r"add(?:s)?r0,r0,#(0x[0-9a-f]+|[0-9]+)", operations[0]) if len(operations) == 1 else None
    if add:
        offset = int(add.group(1), 0)
        return (
            f'extern "C" void* {artifact}(uint8_t* self) {alias};\n'
            f'extern "C" void* {artifact}(uint8_t* self) {{ return self + 0x{offset:x}; }}'
        )
    move = re.fullmatch(r"movr0,#(0x[0-9a-f]+|[0-9]+)", operations[0]) if len(operations) == 1 else None
    if move:
        return (
            f'extern "C" uint32_t {artifact}() {alias};\n'
            f'extern "C" uint32_t {artifact}() {{ return {move.group(1)}; }}'
        )
    return None


def leaf_source(rows: list[dict[str, str]]) -> str:
    lines = [
        "// Exact simple leaf accessors generated from clustered ARM evidence.",
        "typedef unsigned char uint8_t;",
        "typedef signed char int8_t;",
        "typedef unsigned short uint16_t;",
        "typedef short int16_t;",
        "typedef unsigned int uint32_t;",
        "typedef int int32_t;",
        "",
    ]
    for row in rows:
        lines.extend([
            f"#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == {row['address']}",
            row["definition"],
            "#endif",
            "",
        ])
    return "\n".join(lines)


def compile_leaf(row: dict[str, str]) -> tuple[bool, str]:
    with tempfile.TemporaryDirectory(prefix="yellow-leaf-") as directory:
        source = Path(directory) / "candidate.cpp"
        obj = Path(directory) / "candidate.o"
        source.write_text(leaf_source([row]), encoding="utf-8")
        command = [
            "arm-none-eabi-g++", "-std=gnu++11", "-mcpu=mpcore", "-marm", "-mfpu=vfp",
            "-mfloat-abi=softfp", "-O2", "-fno-exceptions", "-fno-rtti", "-fno-unwind-tables",
            "-fno-asynchronous-unwind-tables", "-ffunction-sections", "-c", str(source), "-o", str(obj),
        ]
        result = subprocess.run(command, cwd=ROOT, text=True, stdout=subprocess.PIPE, stderr=subprocess.STDOUT, check=False)
        if result.returncode:
            return False, result.stdout.strip()
        result = subprocess.run(
            ["python3", "tools/compare_function.py", str(obj), row["symbol"], row["address"],
             "--code-bin", "extracted/exefs/code.bin"],
            cwd=ROOT, text=True, stdout=subprocess.PIPE, stderr=subprocess.STDOUT, check=False,
        )
        return result.returncode == 0, result.stdout.strip().replace("\n", " | ")


def promote_leaf(limit: int) -> tuple[int, int, int]:
    review = read_csv(REVIEW)
    catalog = {normalize(row["address"]): row for row in read_csv(CATALOG)}
    symbols = {
        normalize(row["target_address"]): row["mangled_name"] for row in read_csv(SYMBOLS)
        if row["source_file"] == "static.crs" and row["kind"] == "FUNCTION" and row["mangled_name"]
    }
    canonical = {normalize(row["address"]) for row in read_csv(MANIFEST)}
    attempted: list[dict[str, str]] = []
    for row in review:
        address = normalize(row["address"])
        if address in canonical or address not in catalog or address not in symbols or row["checker_result"] != "PASS":
            continue
        definition = leaf_definition(address, symbols[address])
        if definition:
            attempted.append({**row, "address": address, "symbol": symbols[address], "definition": definition})
    approved: list[dict[str, str]] = []
    failed = 0
    for row in attempted:
        ok, _ = compile_leaf(row)
        if ok:
            approved.append(row)
            if len(approved) >= limit:
                break
        else:
            failed += 1
    if not approved:
        return 0, len(attempted), failed
    existing: list[dict[str, str]] = []
    if LEAF_RECORD.exists():
        existing = json.loads(LEAF_RECORD.read_text(encoding="utf-8"))
    combined = {normalize(row["address"]): row for row in existing}
    combined.update({row["address"]: row for row in approved})
    records = list(combined.values())
    LEAF_RECORD.write_text(json.dumps(records, indent=2) + "\n", encoding="utf-8")
    LEAF_SOURCE.parent.mkdir(parents=True, exist_ok=True)
    temporary = LEAF_SOURCE.with_suffix(".cpp.tmp")
    temporary.write_text(leaf_source(records), encoding="utf-8")
    temporary.replace(LEAF_SOURCE)

    manifest = read_csv(MANIFEST)
    fields = list(manifest[0])
    for row in approved:
        info = catalog[row["address"]]
        artifact = f"YellowLeaf_{row['address'][2:].lower()}"
        manifest.append({
            "address": row["address"], "retail_size": f"0x{int(row['size']):02X}",
            "module": "static.crs", "binary": "code.bin", "name": row["qualified_name"],
            "namespace": info.get("namespace") or "Global", "source": str(LEAF_SOURCE.relative_to(ROOT)),
            "symbol": row["symbol"], "artifact": artifact, "adapter_mode": "macro_select",
            "adapter_macro": "POKEMOON_SPLIT_FUNCTION", "adapter": f"src/code.bin/{artifact}.cpp",
            "object": f"build/code.bin/{artifact}.o", "source_status": "SOURCE_WRITTEN",
            "compile_status": "COMPILES", "semantic_status": "SEMANTIC_VERIFIED", "asm_status": "ASM_MATCH",
            "runtime_ready": "false", "runtime_tested": "false", "subsystem": "reagent",
            "provenance": "RETAIL_ORIGINAL_SYMBOL", "compiler": "arm-none-eabi-g++ 16.2.0",
            "matched_bytes": row["size"], "total_bytes": row["size"],
            "notes": "Phase 4D clustered leaf accessor; checker-approved semantics and exact retail ARM bytes",
        })
    write_csv(MANIFEST, manifest, fields)
    return len(approved), len(attempted), failed


def promote_empty(limit: int) -> tuple[int, int]:
    review = read_csv(REVIEW)
    catalog = {normalize(row["address"]): row for row in read_csv(CATALOG)}
    symbols = {
        normalize(row["target_address"]): row["mangled_name"] for row in read_csv(SYMBOLS)
        if row["source_file"] == "static.crs" and row["kind"] == "FUNCTION" and row["mangled_name"]
    }
    canonical = {normalize(row["address"]) for row in read_csv(MANIFEST)}
    selected: list[dict[str, str]] = []
    for row in review:
        address = normalize(row["address"])
        text = candidate_text(row)
        if (address not in canonical and address in catalog and address in symbols
                and row["checker_result"] == "PASS" and int(row["size"]) == 4
                and no_op_body(text) and not HARD_ARTIFACT.search(text)):
            selected.append({**row, "address": address, "symbol": symbols[address]})
            if len(selected) >= limit:
                break
    approved = [row for row in selected if compile_empty(row, selected)[0]]
    if not approved:
        return 0, len(selected)
    existing = [row for row in read_csv(MANIFEST) if row["source"] == str(EMPTY_SOURCE.relative_to(ROOT))]
    combined_by_address = {normalize(row["address"]): row for row in existing}
    combined_by_address.update({row["address"]: row for row in approved})
    EMPTY_SOURCE.parent.mkdir(parents=True, exist_ok=True)
    temporary = EMPTY_SOURCE.with_suffix(".cpp.tmp")
    temporary.write_text(empty_source(list(combined_by_address.values())), encoding="utf-8")
    temporary.replace(EMPTY_SOURCE)

    manifest = read_csv(MANIFEST)
    fields = list(manifest[0])
    for row in approved:
        info = catalog[row["address"]]
        artifact = f"YellowEmpty_{row['address'][2:].lower()}"
        manifest.append({
            "address": row["address"], "retail_size": "0x04", "module": "static.crs", "binary": "code.bin",
            "name": row["qualified_name"], "namespace": info.get("namespace") or "Global",
            "source": str(EMPTY_SOURCE.relative_to(ROOT)), "symbol": row["symbol"], "artifact": artifact,
            "adapter_mode": "macro_select", "adapter_macro": "POKEMOON_SPLIT_FUNCTION",
            "adapter": f"src/code.bin/{artifact}.cpp", "object": f"build/code.bin/{artifact}.o",
            "source_status": "SOURCE_WRITTEN", "compile_status": "COMPILES",
            "semantic_status": "SEMANTIC_VERIFIED", "asm_status": "ASM_MATCH",
            "runtime_ready": "false", "runtime_tested": "false", "subsystem": "reagent",
            "provenance": "RETAIL_ORIGINAL_SYMBOL", "compiler": "arm-none-eabi-g++ 16.2.0",
            "matched_bytes": "4", "total_bytes": "4",
            "notes": "Phase 4D cluster promotion: checker-approved no-op body; exact retail ARM bytes",
        })
    write_csv(MANIFEST, manifest, fields)
    return len(approved), len(selected) - len(approved)


def write_status(clusters: list[dict[str, object]] | None = None) -> None:
    clusters = clusters if clusters is not None else read_csv(CLUSTERS)
    manifest = read_csv(MANIFEST)
    review_count = sum(int(row["candidate_count"]) for row in clusters)
    phase_rows = [row for row in manifest if row["notes"].startswith("Phase 4D")]
    rules_completed = len({row["source"] for row in phase_rows})
    promoted = 1539 - review_count
    payload = {
        "phase": "YELLOW RESOLUTION",
        "starting_yellow": 1539,
        "remaining_yellow": review_count,
        "clusters_analyzed": len(clusters),
        "clusters_processed": rules_completed,
        "shared_blockers_fixed": rules_completed,
        "promoted": promoted,
        "source_backed": len(manifest),
        "exact": sum(row["asm_status"] == "ASM_MATCH" for row in manifest),
        "semantic": sum(row["asm_status"] == "ASM_DIFFERENT" for row in manifest),
        "near": sum(row["asm_status"] == "ASM_NEAR_MATCH" for row in manifest),
        "runtime_ready": sum(row["runtime_ready"] == "true" for row in manifest),
        "updated_at": dt.datetime.now(dt.timezone.utc).isoformat(timespec="seconds"),
    }
    STATUS.write_text(json.dumps(payload, indent=2) + "\n", encoding="utf-8")


def main() -> None:
    parser = argparse.ArgumentParser()
    subparsers = parser.add_subparsers(dest="command", required=True)
    subparsers.add_parser("analyze")
    promote = subparsers.add_parser("promote-empty")
    promote.add_argument("--limit", type=int, default=100)
    leaf = subparsers.add_parser("promote-leaf")
    leaf.add_argument("--limit", type=int, default=100)
    subparsers.add_parser("status")
    args = parser.parse_args()
    if args.command == "analyze":
        summary, clusters = analyze()
        print(json.dumps({"yellow": sum(int(row["candidates"]) for row in summary), "clusters": len(clusters),
                          "summary": summary}, indent=2))
    elif args.command == "promote-empty":
        promoted, failed = promote_empty(args.limit)
        analyze()
        print(json.dumps({"promoted": promoted, "failed": failed}, indent=2))
    elif args.command == "promote-leaf":
        promoted, eligible, failed = promote_leaf(args.limit)
        analyze()
        print(json.dumps({"eligible": eligible, "promoted": promoted, "failed_exact_compile": failed}, indent=2))
    else:
        write_status()
        print(STATUS.read_text(encoding="utf-8"), end="")


if __name__ == "__main__":
    main()
