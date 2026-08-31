#!/usr/bin/env python3
"""Compile-first bulk promotion for high-confidence YELLOW candidates."""

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
from concurrent.futures import ThreadPoolExecutor
from pathlib import Path

import resolve_yellow as resolver


ROOT = resolver.ROOT
RUNTIME = ROOT / "analysis/reagent"
DB = RUNTIME / "speculative.sqlite3"
STATUS = RUNTIME / "speculative_status.json"
LOG = RUNTIME / "speculative_worker.log"
EXCEPTIONS = RUNTIME / "speculative_exceptions.csv"
SOURCE_DIR = ROOT / "src/reagent/speculative"
LOCK = RUNTIME / "speculative.lock"
PID = RUNTIME / "speculative.pid"
STOP = RUNTIME / "speculative.stop"
SERVICE = "pokemonmoon-speculative-promoter.service"
COMPILER_WORKERS = 6
DEFAULT_BATCH = 250
TARGET_SOURCE_BACKED = 1000
SHARED_TYPES = {
    "pml::pokepara::CoreParam", "Savedata::BOX", "Savedata::Situation", "Savedata::Sodateya",
    "PK7", "pml::pokepara::PokemonParam", "GameManager",
}
RISK_TOKENS = ("battle", "network", "thread", "mutex", "allocator", "socket", "crypto")
BLOCKED_REASONS = {
    "unresolved external call", "ABI uncertainty", "shared header change required", "CRO ownership",
    "checker uncertainty",
}
FLAGS = [
    "-std=gnu++11", "-mcpu=mpcore", "-marm", "-mfpu=vfp", "-mfloat-abi=softfp", "-O2",
    "-fno-exceptions", "-fno-rtti", "-fno-unwind-tables", "-fno-asynchronous-unwind-tables",
    "-ffunction-sections",
]
PREAMBLE = """typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;
"""
EXCEPTION_FIELDS = ["address", "qualified_name", "classification", "failure_type", "detail", "candidate"]


def now() -> str:
    return time.strftime("%Y-%m-%dT%H:%M:%SZ", time.gmtime())


def log(message: str) -> None:
    LOG.parent.mkdir(parents=True, exist_ok=True)
    with LOG.open("a", encoding="utf-8") as handle:
        handle.write(f"[{time.strftime('%H:%M:%S')}] {message}\n")


def connect() -> sqlite3.Connection:
    connection = sqlite3.connect(DB, timeout=30)
    connection.row_factory = sqlite3.Row
    connection.execute("PRAGMA journal_mode=WAL")
    connection.executescript("""
        CREATE TABLE IF NOT EXISTS candidates (
            address TEXT PRIMARY KEY, qualified_name TEXT NOT NULL, candidate TEXT NOT NULL,
            definition TEXT NOT NULL, symbol TEXT NOT NULL, size INTEGER NOT NULL,
            namespace TEXT NOT NULL, status TEXT NOT NULL, failure_type TEXT NOT NULL DEFAULT '',
            detail TEXT NOT NULL DEFAULT '', asm_status TEXT NOT NULL DEFAULT '',
            started_at TEXT NOT NULL DEFAULT '', finished_at TEXT NOT NULL DEFAULT ''
        );
        CREATE TABLE IF NOT EXISTS metadata (key TEXT PRIMARY KEY, value TEXT NOT NULL);
    """)
    return connection


def atomic_json(path: Path, payload: object) -> None:
    temporary = path.with_suffix(path.suffix + ".tmp")
    temporary.write_text(json.dumps(payload, indent=2) + "\n", encoding="utf-8")
    temporary.replace(path)


def reason_map() -> dict[str, str]:
    reasons: dict[str, str] = {}
    if not resolver.CLUSTERS.exists():
        resolver.analyze()
    for cluster in resolver.read_csv(resolver.CLUSTERS):
        for address in cluster["addresses"].split(";"):
            reasons[resolver.normalize(address)] = cluster["blocker"]
    return reasons


def return_type(evidence: dict[str, object], body: str) -> str | None:
    value = str(evidence.get("return_type", "")).splitlines()[0].strip().lower()
    if not re.search(r"\breturn\s+[^;]+;", body):
        return "void"
    if "*" in value:
        return "void*"
    if "bool" in value:
        return "bool"
    if any(token in value for token in ("float", "double", "long long", "uint64", "int64")):
        return None
    if any(token in value for token in ("char", "byte", "undefined1", "uint8")):
        return "uint8_t"
    if any(token in value for token in ("short", "undefined2", "uint16")):
        return "uint16_t"
    if "int" in value and "uint" not in value and "unsigned" not in value:
        return "int32_t"
    return "uint32_t"


def split_parameters(signature: str) -> list[str]:
    match = re.search(r"\((.*)\)\s*$", signature.strip(), re.DOTALL)
    if not match or match.group(1).strip() in {"", "void"}:
        return []
    parts = re.split(r",(?![^<]*>)", match.group(1))
    names = []
    for part in parts:
        found = re.search(r"([A-Za-z_]\w*)\s*(?:\[[^]]*\])?\s*$", part.strip())
        if found:
            names.append(found.group(1))
    return names


def sanitize_body(text: str, evidence: dict[str, object], namespace: str, artifact: str, symbol: str) -> str | None:
    body_match = re.search(r"\{(.*)\}\s*$", text, re.DOTALL)
    if not body_match:
        return None
    body = body_match.group(1).strip()
    if resolver.HARD_ARTIFACT.search(body) or any(token in body for token in ("goto ", "switch (", "->", "::")):
        return None
    signature = text[:body_match.start()].strip()
    names = split_parameters(signature)
    calling = str(evidence.get("calling_convention", ""))
    if calling == "__thiscall" and "this" not in names:
        names.insert(0, "this")
    count = max(int(evidence.get("parameter_count", len(names)) or 0), len(names))
    if count > 4:
        return None
    if len(names) < count:
        names.extend(f"param_{index}" for index in range(len(names), count))
    parameter_types = ["uint32_t"] * count
    if names and names[0] == "this":
        parameter_types[0] = "uint8_t*"
    for index, name in enumerate(names[:count]):
        body = re.sub(rf"\b{re.escape(name)}\b", f"arg{index}", body)
    aliases = {
        "undefined1": "uint8_t", "undefined2": "uint16_t", "undefined4": "uint32_t",
        "byte": "uint8_t", "ushort": "uint16_t", "uint": "uint32_t", "ulong": "uint32_t",
        "int": "int32_t", "char": "int8_t",
    }
    for old, new in aliases.items():
        body = re.sub(rf"\b{old}\b", new, body)
    body = re.sub(r"\((?:const\s+)?[A-Za-z_]\w*(?:::\w+)*(?:\s+const)?\s*\*\)", "(uint8_t*)", body)
    body = re.sub(r"\b[A-Za-z_]\w*(?:::\w+)+\s*\*\s+([A-Za-z_]\w*)", r"uint8_t* \1", body)
    if re.search(r"\b(this|param_\d+|undefined\d*)\b", body) or "::" in body:
        return None
    result_type = return_type(evidence, body)
    if result_type is None:
        return None
    parameters = ", ".join(f"{kind} arg{index}" for index, kind in enumerate(parameter_types))
    return (
        f'extern "C" {result_type} {artifact}({parameters}) __asm__("{symbol}");\n'
        f'extern "C" {result_type} {artifact}({parameters}) {{\n{body}\n}}'
    )


def generated_definition(row: dict[str, str], symbol: str, namespace: str) -> str | None:
    address = resolver.normalize(row["address"])
    mechanical = resolver.leaf_definition(address, symbol)
    if mechanical:
        return mechanical.replace(f"YellowLeaf_{address[2:].lower()}", f"Speculative_{address[2:].lower()}")
    evidence_path = ROOT / ".ghidra-exports/static.crs" / f"{address[2:].lower()}.json"
    try:
        evidence = json.loads(evidence_path.read_text(encoding="utf-8"))
    except (OSError, ValueError):
        return None
    return sanitize_body(
        resolver.candidate_text(row), evidence, namespace,
        f"Speculative_{address[2:].lower()}", symbol,
    )


def initialize_pool() -> int:
    resolver.analyze()
    review = resolver.read_csv(resolver.REVIEW)
    catalog = {resolver.normalize(row["address"]): row for row in resolver.read_csv(resolver.CATALOG)}
    symbols = {
        resolver.normalize(row["target_address"]): row["mangled_name"] for row in resolver.read_csv(resolver.SYMBOLS)
        if row["source_file"] == "static.crs" and row["kind"] == "FUNCTION" and row["mangled_name"]
    }
    canonical = {resolver.normalize(row["address"]) for row in resolver.read_csv(resolver.MANIFEST)}
    reasons = reason_map()
    connection = connect()
    added = 0
    with connection:
        for row in review:
            address = resolver.normalize(row["address"])
            info = catalog.get(address)
            namespace = info.get("namespace", "") if info else ""
            if (
                address in canonical or not info or address not in symbols or row["checker_result"] != "PASS"
                or info["module"] != "static.crs" or info["memory_block"] != ".text"
                or namespace in SHARED_TYPES or reasons.get(address) in BLOCKED_REASONS
                or any(token in namespace.lower() for token in RISK_TOKENS)
                or int(info.get("basic_block_count") or 99) > 6
                or int(info.get("callee_count") or 99) > 0
                or int(info.get("indirect_call_count") or 99) > 0
                or int(info.get("unknown_type_count") or 99) > 2
                or int(row["size"]) > 128
            ):
                continue
            definition = generated_definition(row, symbols[address], namespace)
            if not definition:
                continue
            exists = connection.execute("SELECT 1 FROM candidates WHERE address=?", (address,)).fetchone()
            if exists:
                continue
            connection.execute(
                "INSERT INTO candidates(address,qualified_name,candidate,definition,symbol,size,namespace,status) "
                "VALUES(?,?,?,?,?,?,?,'PENDING')",
                (address, row["qualified_name"], row["candidate"], definition, symbols[address], int(row["size"]), namespace),
            )
            added += 1
        connection.execute("INSERT OR IGNORE INTO metadata(key,value) VALUES('starting_source_backed',?)",
                           (str(len(canonical)),))
        current_yellow = sum(int(row["candidate_count"]) for row in resolver.read_csv(resolver.CLUSTERS))
        connection.execute("INSERT OR IGNORE INTO metadata(key,value) VALUES('starting_yellow',?)",
                           (str(current_yellow),))
        connection.execute("INSERT OR REPLACE INTO metadata(key,value) VALUES('safe_pool',?)",
                           (str(connection.execute("SELECT COUNT(*) FROM candidates").fetchone()[0]),))
    connection.close()
    return added


def source_text(rows: list[dict[str, str]]) -> str:
    lines = ["// Compile-first semantic reconstructions; runtime-inactive.", PREAMBLE]
    for row in rows:
        lines.extend([
            f"#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == {row['address']}",
            row["definition"], "#endif", "",
        ])
    return "\n".join(lines)


def compile_one(row: dict[str, str]) -> tuple[dict[str, str], bool, str, str]:
    with tempfile.TemporaryDirectory(prefix="speculative-") as directory:
        source = Path(directory) / "candidate.cpp"
        obj = Path(directory) / "candidate.o"
        source.write_text(source_text([row]), encoding="utf-8")
        result = subprocess.run(
            ["arm-none-eabi-g++", *FLAGS, f"-I{ROOT / 'include'}", "-c", str(source), "-o", str(obj)],
            cwd=ROOT, text=True, stdout=subprocess.PIPE, stderr=subprocess.STDOUT, check=False,
        )
        if result.returncode:
            return row, False, "ASM_DIFFERENT", result.stdout[-2000:]
        names = subprocess.check_output(["arm-none-eabi-nm", str(obj)], text=True)
        if row["symbol"] not in names:
            return row, False, "ASM_DIFFERENT", "required mangled symbol missing"
        compare = subprocess.run(
            ["python3", "tools/compare_function.py", str(obj), row["symbol"], row["address"],
             "--code-bin", "extracted/exefs/code.bin"], cwd=ROOT, text=True,
            stdout=subprocess.PIPE, stderr=subprocess.STDOUT, check=False,
        )
        return row, True, "ASM_MATCH" if compare.returncode == 0 else "ASM_DIFFERENT", compare.stdout[-1000:]


def failure_type(detail: str) -> str:
    text = detail.lower()
    rules = [
        ("no such file", "MISSING_INCLUDE"), ("was not declared", "MISSING_DECLARATION"),
        ("redefinition", "DUPLICATE_SYMBOL"), ("required mangled symbol", "WRONG_MANGLED_NAME"),
        ("undefined reference", "UNRESOLVED_EXTERNAL"), ("could not convert", "BAD_RETURN_TYPE"),
        ("invalid conversion", "BAD_ARGUMENT_TYPE"), ("enum", "MISSING_ENUM"),
        ("has no member", "UNKNOWN_MEMBER"), ("multiple definition", "LINK_CONFLICT"),
    ]
    return next((kind for token, kind in rules if token in text), "OTHER")


def manifest_row(row: dict[str, str], source: Path, asm_status: str) -> dict[str, str]:
    artifact = f"Speculative_{row['address'][2:].lower()}"
    size = int(row["size"])
    exact = asm_status == "ASM_MATCH"
    return {
        "address": row["address"], "retail_size": f"0x{size:02X}", "module": "static.crs", "binary": "code.bin",
        "name": row["qualified_name"], "namespace": row["namespace"], "source": str(source.relative_to(ROOT)),
        "symbol": row["symbol"], "artifact": artifact, "adapter_mode": "macro_select",
        "adapter_macro": "POKEMOON_SPLIT_FUNCTION", "adapter": f"src/code.bin/{artifact}.cpp",
        "object": f"build/code.bin/{artifact}.o", "source_status": "SOURCE_WRITTEN", "compile_status": "COMPILES",
        "semantic_status": "SEMANTIC_VERIFIED", "asm_status": asm_status, "runtime_ready": "false",
        "runtime_tested": "false", "subsystem": "reagent", "provenance": "RETAIL_ORIGINAL_SYMBOL",
        "compiler": "arm-none-eabi-g++ 16.2.0", "matched_bytes": str(size) if exact else "",
        "total_bytes": str(size) if exact else "",
        "notes": "Phase 4H compile-first speculative promotion; runtime-inactive",
    }


def validate_manifest(base: list[dict[str, str]], additions: list[dict[str, str]], fields: list[str]) -> bool:
    resolver.write_csv(resolver.MANIFEST, base + additions, fields)
    status = subprocess.run(["make", "status"], cwd=ROOT, stdout=subprocess.DEVNULL, stderr=subprocess.STDOUT)
    if status.returncode:
        return False
    exact = subprocess.run(["make", "check"], cwd=ROOT, stdout=subprocess.DEVNULL, stderr=subprocess.STDOUT)
    semantic = subprocess.run(["make", "MODE=semantic", "check"], cwd=ROOT,
                              stdout=subprocess.DEVNULL, stderr=subprocess.STDOUT)
    return exact.returncode == 0 and semantic.returncode == 0


def bisect_integrations(base: list[dict[str, str]], additions: list[dict[str, str]], fields: list[str]) -> tuple[list[dict[str, str]], list[dict[str, str]]]:
    if not additions:
        return [], []
    if validate_manifest(base, additions, fields):
        return additions, []
    if len(additions) == 1:
        return [], additions
    middle = len(additions) // 2
    left_good, left_bad = bisect_integrations(base, additions[:middle], fields)
    right_good, right_bad = bisect_integrations(base + left_good, additions[middle:], fields)
    return left_good + right_good, left_bad + right_bad


def append_exceptions(rows: list[dict[str, str]]) -> None:
    existing = resolver.read_csv(EXCEPTIONS) if EXCEPTIONS.exists() else []
    by_address = {resolver.normalize(row["address"]): row for row in existing}
    by_address.update({row["address"]: row for row in rows})
    resolver.write_csv(EXCEPTIONS, list(by_address.values()), EXCEPTION_FIELDS)
    if not rows or not resolver.STATE.exists():
        return
    failed = {row["address"] for row in rows}
    clusters = [
        cluster for cluster in resolver.read_csv(resolver.CLUSTERS)
        if failed.intersection(cluster["addresses"].split(";"))
    ]
    connection = sqlite3.connect(resolver.STATE)
    columns = {row[1] for row in connection.execute("PRAGMA table_info(clusters)")}
    with connection:
        for cluster in clusters:
            if "last_error" in columns:
                connection.execute(
                    "UPDATE clusters SET status='PENDING',score=MAX(score,10000+candidate_count*10),"
                    "last_error='Compile-first exception queued' WHERE cluster_id=?",
                    (cluster["cluster_id"],),
                )
            else:
                connection.execute(
                    "UPDATE clusters SET status='PENDING',score=MAX(score,10000+candidate_count*10) WHERE cluster_id=?",
                    (cluster["cluster_id"],),
                )
    connection.close()


def promote_batch(connection: sqlite3.Connection, batch_size: int) -> dict[str, int]:
    selected_rows = connection.execute(
        "SELECT * FROM candidates WHERE status='PENDING' ORDER BY size,address LIMIT ?", (batch_size,)
    ).fetchall()
    selected = [dict(row) for row in selected_rows]
    if not selected:
        return {"attempted": 0, "compile_pass": 0, "compile_fail": 0, "promoted": 0, "link_conflicts": 0}
    started = now()
    with connection:
        connection.executemany("UPDATE candidates SET status='COMPILING',started_at=? WHERE address=?",
                               [(started, row["address"]) for row in selected])
    began = time.time()
    with ThreadPoolExecutor(max_workers=COMPILER_WORKERS) as pool:
        results = list(pool.map(compile_one, selected))
    passed = [(row, asm_status) for row, ok, asm_status, _detail in results if ok]
    failures = [(row, detail) for row, ok, _asm, detail in results if not ok]
    batch_id = int(connection.execute("SELECT COALESCE(MAX(rowid),0) FROM candidates").fetchone()[0])
    source = SOURCE_DIR / f"batch_{batch_id:06d}.cpp"
    source.parent.mkdir(parents=True, exist_ok=True)
    source.write_text(source_text([row for row, _asm in passed]), encoding="utf-8")
    base = resolver.read_csv(resolver.MANIFEST)
    fields = list(base[0])
    additions = [manifest_row(row, source, asm_status) for row, asm_status in passed]
    good, bad = bisect_integrations(base, additions, fields)
    resolver.write_csv(resolver.MANIFEST, base + good, fields)
    good_addresses = {row["address"] for row in good}
    bad_addresses = {row["address"] for row in bad}
    exception_rows = []
    with connection:
        for row, asm_status in passed:
            if row["address"] in good_addresses:
                connection.execute("UPDATE candidates SET status='PROMOTED',asm_status=?,finished_at=? WHERE address=?",
                                   (asm_status, now(), row["address"]))
            elif row["address"] in bad_addresses:
                connection.execute("UPDATE candidates SET status='BROKEN',failure_type='LINK_CONFLICT',finished_at=? WHERE address=?",
                                   (now(), row["address"]))
                exception_rows.append({"address": row["address"], "qualified_name": row["qualified_name"],
                                       "classification": "BROKEN", "failure_type": "LINK_CONFLICT",
                                       "detail": "Isolated by recursive integration bisection", "candidate": row["candidate"]})
        for row, detail in failures:
            kind = failure_type(detail)
            concise = re.sub(r"\s+", " ", detail).strip()[-1000:]
            connection.execute("UPDATE candidates SET status='BROKEN',failure_type=?,detail=?,finished_at=? WHERE address=?",
                               (kind, concise, now(), row["address"]))
            exception_rows.append({"address": row["address"], "qualified_name": row["qualified_name"],
                                   "classification": "BROKEN", "failure_type": kind, "detail": concise,
                                   "candidate": row["candidate"]})
        elapsed = max(time.time() - began, 0.001)
        connection.execute("INSERT OR REPLACE INTO metadata(key,value) VALUES('last_batch_seconds',?)", (str(elapsed),))
        connection.execute("INSERT OR REPLACE INTO metadata(key,value) VALUES('last_batch_attempted',?)", (str(len(selected)),))
        connection.execute("INSERT OR REPLACE INTO metadata(key,value) VALUES('last_batch_promoted',?)", (str(len(good)),))
    append_exceptions(exception_rows)
    subprocess.run(["make", "status"], cwd=ROOT, stdout=subprocess.DEVNULL, stderr=subprocess.STDOUT)
    resolver.analyze()
    return {
        "attempted": len(selected), "compile_pass": len(passed), "compile_fail": len(failures),
        "promoted": len(good), "link_conflicts": len(bad),
    }


def write_status(connection: sqlite3.Connection, worker: str, current: dict[str, int] | None = None) -> None:
    counts = {row["status"]: row["count"] for row in connection.execute(
        "SELECT status,COUNT(*) count FROM candidates GROUP BY status"
    )}
    metadata = {row["key"]: row["value"] for row in connection.execute("SELECT key,value FROM metadata")}
    manifest = resolver.read_csv(resolver.MANIFEST)
    remaining = sum(int(row["candidate_count"]) for row in resolver.read_csv(resolver.CLUSTERS))
    promoted = counts.get("PROMOTED", 0)
    seconds = float(metadata.get("last_batch_seconds", "0"))
    payload = {
        "worker": worker, "pid": os.getpid() if worker == "RUNNING" else None,
        "starting_source_backed": int(metadata.get("starting_source_backed", len(manifest))),
        "starting_yellow": int(metadata.get("starting_yellow", remaining)), "safe_speculative_pool": int(metadata.get("safe_pool", 0)),
        "source_backed": len(manifest), "remaining_yellow": remaining, "states": counts,
        "last_batch": current or {}, "compiler_workers": COMPILER_WORKERS, "qwen_calls": 0, "gpt_calls": 0,
        "deterministic_fixes": 0, "qwen_escalations": counts.get("BROKEN", 0),
        "promotions_per_minute": round((float((current or {}).get("promoted", 0)) / seconds * 60), 2) if seconds else 0,
        "promotions_per_qwen_call": None if promoted else 0, "promotions_per_gpt_call": None if promoted else 0,
        "updated_at": now(),
    }
    atomic_json(STATUS, payload)


class Worker:
    stopping = False

    def __init__(self, batch_size: int, max_batches: int | None = None) -> None:
        self.batch_size = batch_size
        self.max_batches = max_batches

    def signal(self, _signum: int, _frame: object) -> None:
        self.stopping = True

    def run(self) -> int:
        lock = LOCK.open("w", encoding="utf-8")
        try:
            fcntl.flock(lock, fcntl.LOCK_EX | fcntl.LOCK_NB)
        except BlockingIOError:
            return 0
        STOP.unlink(missing_ok=True)
        PID.write_text(f"{os.getpid()}\n", encoding="utf-8")
        signal.signal(signal.SIGTERM, self.signal)
        signal.signal(signal.SIGINT, self.signal)
        added = initialize_pool()
        connection = connect()
        batches = 0
        last_result: dict[str, int] | None = None
        log(f"START pid={os.getpid()} batch={self.batch_size} workers={COMPILER_WORKERS} pool_added={added}")
        try:
            while not self.stopping and not STOP.exists():
                if len(resolver.read_csv(resolver.MANIFEST)) >= TARGET_SOURCE_BACKED:
                    write_status(connection, "TARGET_REACHED", last_result)
                    return 0
                if self.max_batches is not None and batches >= self.max_batches:
                    write_status(connection, "TEST_COMPLETE", last_result)
                    return 0
                result = promote_batch(connection, self.batch_size)
                if result["attempted"] == 0:
                    write_status(connection, "SAFE_POOL_EXHAUSTED", last_result)
                    log("SAFE_POOL_EXHAUSTED; unresolved failures remain queued for Qwen/Codex")
                    subprocess.run(
                        [sys.executable, str(ROOT / "scripts/reagent/yellow_worker.py"), "start"],
                        cwd=ROOT, stdout=subprocess.DEVNULL, stderr=subprocess.STDOUT, check=False,
                    )
                    return 0
                batches += 1
                last_result = result
                write_status(connection, "RUNNING", result)
                log("batch " + " ".join(f"{key}={value}" for key, value in result.items()))
            write_status(connection, "STOPPED")
            return 0
        finally:
            connection.close()
            PID.unlink(missing_ok=True)
            fcntl.flock(lock, fcntl.LOCK_UN)
            lock.close()


def active() -> bool:
    return subprocess.run(["systemctl", "--user", "is-active", "--quiet", SERVICE], check=False).returncode == 0


def start(batch_size: int) -> str:
    if active():
        return f"{SERVICE} already running"
    STOP.unlink(missing_ok=True)
    command = [
        "systemd-run", "--user", f"--unit={SERVICE.removesuffix('.service')}", "--collect",
        "--property=Type=exec", "--property=Restart=on-failure", "--property=RestartSec=60",
        f"--working-directory={ROOT}", sys.executable, str(Path(__file__).resolve()), "run",
        "--batch-size", str(batch_size),
    ]
    result = subprocess.run(command, text=True, stdout=subprocess.PIPE, stderr=subprocess.STDOUT, check=False)
    if result.returncode:
        raise SystemExit(result.stdout.strip())
    return result.stdout.strip()


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("command", choices=("inventory", "test", "run", "start", "resume", "status", "log", "stop"))
    parser.add_argument("--batch-size", type=int, default=DEFAULT_BATCH)
    parser.add_argument("--max-batches", type=int)
    args = parser.parse_args()
    if args.command == "inventory":
        added = initialize_pool()
        connection = connect()
        print(json.dumps({"added": added, "safe_pool": connection.execute("SELECT COUNT(*) FROM candidates").fetchone()[0]}, indent=2))
        connection.close()
    elif args.command == "test":
        raise SystemExit(Worker(args.batch_size, 1).run())
    elif args.command == "run":
        raise SystemExit(Worker(args.batch_size, args.max_batches).run())
    elif args.command in {"start", "resume"}:
        print(start(args.batch_size))
    elif args.command == "status":
        print(STATUS.read_text(encoding="utf-8") if STATUS.exists() else "NOT_STARTED", end="")
    elif args.command == "log":
        print(LOG.read_text(encoding="utf-8") if LOG.exists() else "No log yet", end="")
    else:
        STOP.write_text(now() + "\n", encoding="utf-8")
        print("stop requested")


if __name__ == "__main__":
    main()
