#!/usr/bin/env python3
"""Persistent, single-concurrency Tier-0/Tier-1 re-agent queue worker."""

from __future__ import annotations

import argparse
import csv
import datetime as dt
import fcntl
import json
import os
import re
import shutil
import signal
import sqlite3
import subprocess
import sys
import time
import urllib.error
import urllib.request
from pathlib import Path

from targets import CODE, PROFILE, QUEUE, ROOT, load_json, prepare_source_context, preflight, rejection_reason


RUNTIME = ROOT / "analysis/reagent"
DB_PATH = RUNTIME / "queue.sqlite3"
CSV_PATH = RUNTIME / "tier01_queue.csv"
STATE_PATH = RUNTIME / "state.json"
LOG_PATH = RUNTIME / "worker.log"
LOCK_PATH = RUNTIME / "worker.lock"
PID_PATH = RUNTIME / "worker.pid"
PAUSE_PATH = RUNTIME / "pause.request"
STOP_PATH = RUNTIME / "stop.request"
TARGET_MANIFEST = ROOT / "reports/re-agent/targets.csv"
EXPORT_DIR = ROOT / ".ghidra-exports/static.crs"
SOURCE_CONTEXT = ROOT / "reports/re-agent/source-context"
SERVICE = "pokemonmoon-reagent.service"
CHECKER_MODEL = "gpt-5.4-mini"
REVERSER_MODEL = "qwen2.5-coder:7b"
QWEN_CONTEXT = 8192
MAX_ATTEMPTS = 2
EVIDENCE_BATCH = 25
TERMINAL = {
    "EXACT", "NEAR", "SEMANTIC", "REJECTED", "ESCALATED", "BLOCKED",
    "SKIPPED_UNSAFE", "SKIPPED_ALREADY_RECONSTRUCTED", "SKIPPED_CLAIMED",
    "COMPLETED_EXTERNALLY",
}
QUEUE_FIELDS = [
    "address", "current_name", "qualified_name", "module", "tier", "size", "queue_order",
    "status", "attempts", "qwen_result", "checker_result", "asm_result", "source_candidate",
    "started_at", "finished_at", "duration_seconds", "failure_reason", "checker_summary",
    "next_retry_at", "updated_at",
]


def now() -> str:
    return dt.datetime.now(dt.timezone.utc).isoformat(timespec="seconds")


def parse_time(value: str | None) -> dt.datetime | None:
    if not value:
        return None
    try:
        return dt.datetime.fromisoformat(value)
    except ValueError:
        return None


def atomic_json(path: Path, value: object) -> None:
    path.parent.mkdir(parents=True, exist_ok=True)
    temporary = path.with_suffix(path.suffix + ".tmp")
    temporary.write_text(json.dumps(value, indent=2) + "\n", encoding="utf-8")
    temporary.replace(path)


def connect() -> sqlite3.Connection:
    RUNTIME.mkdir(parents=True, exist_ok=True)
    connection = sqlite3.connect(DB_PATH, timeout=30)
    connection.row_factory = sqlite3.Row
    connection.execute("PRAGMA journal_mode=WAL")
    connection.execute("PRAGMA synchronous=FULL")
    connection.executescript("""
        CREATE TABLE IF NOT EXISTS targets (
            address TEXT PRIMARY KEY,
            current_name TEXT NOT NULL,
            qualified_name TEXT NOT NULL,
            module TEXT NOT NULL,
            tier INTEGER NOT NULL,
            size INTEGER NOT NULL,
            queue_order INTEGER NOT NULL,
            status TEXT NOT NULL,
            attempts INTEGER NOT NULL DEFAULT 0,
            qwen_result TEXT NOT NULL DEFAULT '',
            checker_result TEXT NOT NULL DEFAULT '',
            asm_result TEXT NOT NULL DEFAULT '',
            source_candidate TEXT NOT NULL DEFAULT '',
            started_at TEXT NOT NULL DEFAULT '',
            finished_at TEXT NOT NULL DEFAULT '',
            duration_seconds REAL NOT NULL DEFAULT 0,
            failure_reason TEXT NOT NULL DEFAULT '',
            checker_summary TEXT NOT NULL DEFAULT '',
            next_retry_at TEXT NOT NULL DEFAULT '',
            updated_at TEXT NOT NULL
        );
        CREATE TABLE IF NOT EXISTS events (
            id INTEGER PRIMARY KEY AUTOINCREMENT,
            timestamp TEXT NOT NULL,
            address TEXT NOT NULL DEFAULT '',
            kind TEXT NOT NULL,
            message TEXT NOT NULL
        );
        CREATE TABLE IF NOT EXISTS metadata (
            key TEXT PRIMARY KEY,
            value TEXT NOT NULL
        );
    """)
    return connection


def read_csv(path: Path) -> list[dict[str, str]]:
    with path.open(newline="", encoding="utf-8") as handle:
        return list(csv.DictReader(handle))


def address_set(path: Path, field: str = "address") -> set[str]:
    if not path.exists():
        return set()
    return {normalize(row[field]) for row in read_csv(path) if row.get(field)}


def normalize(address: str) -> str:
    return f"0x{int(address, 16):08X}"


def initialize_queue() -> dict[str, int]:
    preflight()
    profile = load_json(PROFILE)
    image = CODE.read_bytes()
    reconstructed = address_set(ROOT / "config/reconstructed_functions.csv")
    reconstructed |= address_set(ROOT / "symbols/decomp_status.csv")
    claims = {
        normalize(row["address"]): row
        for row in read_csv(ROOT / "analysis/function_claims.csv")
        if row.get("address")
    }
    catalog = [row for row in read_csv(QUEUE) if row["tier"] in {"TIER_0", "TIER_1"}]
    connection = connect()
    stamp = now()
    seen: set[str] = set()
    try:
        with connection:
            for order, row in enumerate(catalog, 1):
                address = normalize(row["address"])
                seen.add(address)
                existing = connection.execute(
                    "SELECT status, attempts FROM targets WHERE address = ?", (address,)
                ).fetchone()
                status = "PENDING"
                reason = ""
                if address in reconstructed or row.get("source_exists") == "true":
                    status = "SKIPPED_ALREADY_RECONSTRUCTED"
                    reason = "Canonical manifest/status already contains source"
                elif address in claims:
                    claim = claims[address]
                    status = "SKIPPED_ALREADY_RECONSTRUCTED" if claim.get("status") == "COMPLETED" else "SKIPPED_CLAIMED"
                    reason = f"Claimed by {claim.get('assigned_agent', 'unknown')}: {claim.get('status', '')}"
                else:
                    unsafe = rejection_reason(row, image, profile, ("TIER_0", "TIER_1"))
                    if unsafe:
                        status = "SKIPPED_UNSAFE"
                        reason = unsafe

                if existing is not None:
                    old_status = existing["status"]
                    if old_status in TERMINAL:
                        status = old_status
                    elif old_status == "RUNNING":
                        status = "PENDING"
                        reason = "Recovered stale RUNNING item after restart"
                    elif status == "PENDING" and old_status in {"PENDING", "WAITING_FOR_CHECKER"}:
                        status = old_status
                connection.execute("""
                    INSERT INTO targets (
                        address, current_name, qualified_name, module, tier, size, queue_order,
                        status, failure_reason, updated_at
                    ) VALUES (?, ?, ?, ?, ?, ?, ?, ?, ?, ?)
                    ON CONFLICT(address) DO UPDATE SET
                        current_name=excluded.current_name,
                        qualified_name=excluded.qualified_name,
                        module=excluded.module,
                        tier=excluded.tier,
                        size=excluded.size,
                        queue_order=excluded.queue_order,
                        status=excluded.status,
                        failure_reason=CASE
                            WHEN targets.status IN ('EXACT','NEAR','SEMANTIC','REJECTED','ESCALATED','BLOCKED')
                                THEN targets.failure_reason
                            ELSE excluded.failure_reason
                        END,
                        updated_at=excluded.updated_at
                """, (
                    address, row["current_name"], row["qualified_name"], row["module"],
                    int(row["tier"].split("_")[1]), int(row["size"]), order,
                    status, reason, stamp,
                ))
            if seen:
                placeholders = ",".join("?" for _ in seen)
                connection.execute(
                    f"UPDATE targets SET status='BLOCKED', failure_reason='Missing from current canonical Tier-0/Tier-1 catalog', updated_at=? "
                    f"WHERE address NOT IN ({placeholders}) AND status NOT IN ({','.join('?' for _ in TERMINAL)})",
                    (stamp, *seen, *TERMINAL),
                )
            connection.execute("INSERT OR REPLACE INTO metadata(key,value) VALUES('generated_at',?)", (stamp,))
            connection.execute("INSERT OR REPLACE INTO metadata(key,value) VALUES('reverser_model',?)", (REVERSER_MODEL,))
            connection.execute("INSERT OR REPLACE INTO metadata(key,value) VALUES('checker_model',?)", (CHECKER_MODEL,))
            connection.execute("INSERT OR REPLACE INTO metadata(key,value) VALUES('qwen_context',?)", (str(QWEN_CONTEXT),))
    finally:
        export_queue_csv(connection)
        summary = queue_summary(connection)
        write_state(connection, "IDLE", None, None)
        connection.close()
    prepare_source_context()
    return summary


def export_queue_csv(connection: sqlite3.Connection) -> None:
    rows = connection.execute("SELECT * FROM targets ORDER BY queue_order").fetchall()
    temporary = CSV_PATH.with_suffix(".csv.tmp")
    CSV_PATH.parent.mkdir(parents=True, exist_ok=True)
    with temporary.open("w", newline="", encoding="utf-8") as handle:
        writer = csv.DictWriter(handle, fieldnames=QUEUE_FIELDS, lineterminator="\n")
        writer.writeheader()
        for row in rows:
            writer.writerow({field: row[field] for field in QUEUE_FIELDS})
    temporary.replace(CSV_PATH)


def queue_summary(connection: sqlite3.Connection) -> dict[str, int]:
    counts = {row["status"]: row["count"] for row in connection.execute(
        "SELECT status, COUNT(*) AS count FROM targets GROUP BY status"
    )}
    eligible = connection.execute(
        "SELECT COUNT(*) FROM targets WHERE status NOT LIKE 'SKIPPED_%'"
    ).fetchone()[0]
    total_catalog = connection.execute("SELECT COUNT(*) FROM targets").fetchone()[0]
    processed = sum(counts.get(status, 0) for status in TERMINAL if not status.startswith("SKIPPED_"))
    pending = counts.get("PENDING", 0) + counts.get("RUNNING", 0) + counts.get("WAITING_FOR_CHECKER", 0)
    return {
        "catalog": total_catalog,
        "eligible": eligible,
        "processed": processed,
        "pending": pending,
        "exact": counts.get("EXACT", 0),
        "near": counts.get("NEAR", 0),
        "semantic": counts.get("SEMANTIC", 0),
        "rejected": counts.get("REJECTED", 0),
        "escalated": counts.get("ESCALATED", 0),
        "blocked": counts.get("BLOCKED", 0),
        "unsafe": counts.get("SKIPPED_UNSAFE", 0),
        "already_reconstructed": counts.get("SKIPPED_ALREADY_RECONSTRUCTED", 0),
        "claimed": counts.get("SKIPPED_CLAIMED", 0),
        "waiting_checker": counts.get("WAITING_FOR_CHECKER", 0),
        "tier0_eligible": connection.execute(
            "SELECT COUNT(*) FROM targets WHERE tier=0 AND status NOT LIKE 'SKIPPED_%'"
        ).fetchone()[0],
        "tier1_eligible": connection.execute(
            "SELECT COUNT(*) FROM targets WHERE tier=1 AND status NOT LIKE 'SKIPPED_%'"
        ).fetchone()[0],
    }


def event(connection: sqlite3.Connection, kind: str, message: str, address: str = "") -> None:
    stamp = now()
    with connection:
        connection.execute(
            "INSERT INTO events(timestamp,address,kind,message) VALUES(?,?,?,?)",
            (stamp, address, kind, message),
        )
    LOG_PATH.parent.mkdir(parents=True, exist_ok=True)
    local = dt.datetime.now().strftime("%H:%M:%S")
    with LOG_PATH.open("a", encoding="utf-8") as handle:
        handle.write(f"[{local}] {kind:<9} {address} {message}".rstrip() + "\n")


def write_state(
        connection: sqlite3.Connection,
        status: str,
        current: sqlite3.Row | None,
        last_error: str | None,
        phase: str = "",
) -> None:
    summary = queue_summary(connection)
    first_event = connection.execute("SELECT timestamp FROM events WHERE kind='START' ORDER BY id LIMIT 1").fetchone()
    last = connection.execute(
        "SELECT address, qualified_name, status, duration_seconds, finished_at FROM targets "
        "WHERE finished_at != '' ORDER BY finished_at DESC LIMIT 1"
    ).fetchone()
    completed = connection.execute(
        "SELECT COUNT(*) AS count, COALESCE(SUM(duration_seconds),0) AS seconds FROM targets "
        "WHERE status IN ('EXACT','NEAR','SEMANTIC','REJECTED','ESCALATED','BLOCKED')"
    ).fetchone()
    seconds = float(completed["seconds"] or 0)
    rate = float(completed["count"] or 0) * 3600 / seconds if seconds > 0 else 0.0
    state = {
        "status": status,
        "running": status == "RUNNING",
        "started_at": first_event["timestamp"] if first_event else None,
        "updated_at": now(),
        "current_function": current["address"] if current else None,
        "current_name": current["qualified_name"] if current else None,
        "tier": current["tier"] if current else None,
        "phase": phase,
        "queue": summary,
        "results": {
            key: summary[key]
            for key in ("exact", "near", "semantic", "rejected", "escalated", "blocked", "unsafe")
        },
        "models": {
            "reverser": REVERSER_MODEL,
            "context": QWEN_CONTEXT,
            "checker": CHECKER_MODEL,
            "checker_passes_per_function": 1,
        },
        "throughput": {"functions_per_hour": round(rate, 2)},
        "last_completed": dict(last) if last else None,
        "last_error": last_error,
    }
    atomic_json(STATE_PATH, state)


def git_clean() -> tuple[bool, str]:
    result = subprocess.run(
        ["git", "status", "--porcelain"], cwd=ROOT, text=True,
        stdout=subprocess.PIPE, stderr=subprocess.STDOUT, check=False,
    )
    return result.returncode == 0 and not result.stdout.strip(), result.stdout.strip()


def ollama_ok() -> bool:
    try:
        with urllib.request.urlopen("http://127.0.0.1:11434/api/tags", timeout=5) as response:
            payload = json.load(response)
        return any(model.get("name") == REVERSER_MODEL for model in payload.get("models", []))
    except (OSError, ValueError, urllib.error.URLError):
        return False


def next_target(connection: sqlite3.Connection) -> sqlite3.Row | None:
    stamp = now()
    return connection.execute("""
        SELECT * FROM targets
        WHERE status='PENDING'
           OR (status='WAITING_FOR_CHECKER' AND (next_retry_at='' OR next_retry_at<=?))
        ORDER BY tier, queue_order LIMIT 1
    """, (stamp,)).fetchone()


def write_target_manifest(connection: sqlite3.Connection, current_address: str) -> None:
    rows = connection.execute("""
        SELECT * FROM targets
        WHERE status IN ('PENDING','RUNNING','WAITING_FOR_CHECKER')
        ORDER BY CASE WHEN address=? THEN 0 ELSE 1 END, tier, queue_order LIMIT ?
    """, (current_address, EVIDENCE_BATCH)).fetchall()
    TARGET_MANIFEST.parent.mkdir(parents=True, exist_ok=True)
    temporary = TARGET_MANIFEST.with_suffix(".csv.tmp")
    fields = [
        "address", "qualified_name", "namespace", "size", "caller_count",
        "callee_count", "provenance", "review_status",
    ]
    catalog = {normalize(row["address"]): row for row in read_csv(QUEUE)}
    with temporary.open("w", newline="", encoding="utf-8") as handle:
        writer = csv.DictWriter(handle, fieldnames=fields, lineterminator="\n")
        writer.writeheader()
        for row in rows:
            source = catalog[row["address"]]
            writer.writerow({
                "address": row["address"],
                "qualified_name": row["qualified_name"],
                "namespace": source["namespace"],
                "size": row["size"],
                "caller_count": source["caller_count"],
                "callee_count": source["callee_count"],
                "provenance": source["provenance"],
                "review_status": row["status"],
            })
    temporary.replace(TARGET_MANIFEST)
    prepare_source_context()


def ensure_evidence(connection: sqlite3.Connection, target: sqlite3.Row) -> tuple[bool, str]:
    evidence = EXPORT_DIR / f"{target['address'][2:].lower()}.json"
    manifest_addresses = address_set(TARGET_MANIFEST) if TARGET_MANIFEST.exists() else set()
    if evidence.exists() and target["address"] in manifest_addresses:
        return True, ""
    write_target_manifest(connection, target["address"])
    command = [
        "/opt/ghidra/support/analyzeHeadless", "ghidra", "PokemonMoon_US_v1_0",
        "-process", "static.crs", "-recursive", "-readOnly", "-noanalysis",
        "-scriptPath", "scripts", "-postScript", "ExportReagentTargets.java",
        str(TARGET_MANIFEST), str(EXPORT_DIR),
    ]
    result = subprocess.run(
        command, cwd=ROOT, text=True, stdout=subprocess.PIPE,
        stderr=subprocess.STDOUT, timeout=900, check=False,
    )
    evidence_log = RUNTIME / "logs/evidence.log"
    evidence_log.parent.mkdir(parents=True, exist_ok=True)
    with evidence_log.open("a", encoding="utf-8") as handle:
        handle.write(result.stdout)
    if result.returncode != 0 or not evidence.exists():
        return False, f"Ghidra evidence export failed (exit {result.returncode})"
    architecture = load_json(EXPORT_DIR / "_architecture.json")
    if architecture.get("language_id") != "ARM:LE:32:v7":
        return False, f"Refusing exported architecture {architecture.get('language_id')}"
    return True, ""


def candidate_from_logs(address: str, started_epoch: float) -> tuple[str, str]:
    logs = ROOT / "reports/re-agent/logs"
    matches = sorted(
        (path for path in logs.glob("*-reverser.json") if path.stat().st_mtime >= started_epoch - 1),
        key=lambda path: path.stat().st_mtime,
        reverse=True,
    )
    for path in matches:
        try:
            payload = json.loads(path.read_text(encoding="utf-8"))
        except (OSError, ValueError):
            continue
        if normalize(str(payload.get("address", "0"))) != address:
            continue
        response = str(payload.get("response", ""))
        match = re.search(r"```(?:cpp|c\+\+)\s*\n(.*?)```", response, re.DOTALL)
        code = match.group(1).strip() if match else response.strip()
        code = re.sub(r"(?m)^REVERSED_FUNCTION:.*$", "", code).rstrip()
        return code, str(path.relative_to(ROOT))
    code_files = sorted(
        (ROOT / "reports/re-agent/code").glob(f"{address}_*.cpp"),
        key=lambda path: path.stat().st_mtime,
        reverse=True,
    )
    if code_files:
        return code_files[0].read_text(encoding="utf-8"), str(code_files[0].relative_to(ROOT))
    return "", ""


def save_candidate(address: str, attempt: int, code: str) -> Path:
    directory = RUNTIME / "candidates" / address
    directory.mkdir(parents=True, exist_ok=True)
    path = directory / f"attempt-{attempt}.cpp"
    temporary = path.with_suffix(".cpp.tmp")
    temporary.write_text(code.rstrip() + "\n", encoding="utf-8")
    temporary.replace(path)
    return path


def checker_failure_kind(output: str) -> str:
    text = output.lower()
    quota = ("quota", "usage limit", "limit reached", "credits exhausted", "usage-limit", "reset at")
    rate = ("rate limit", "rate-limit", "too many requests", "http 429", "status 429", "overloaded")
    if any(token in text for token in quota):
        return "QUOTA"
    if any(token in text for token in rate):
        return "RATE_LIMIT"
    if any(token in text for token in (
        "codex exec failed with exit code",
        "codex exec timed out",
        "codex cli failed with exit code",
        "codex cli timed out",
    )):
        return "CHECKER_UNAVAILABLE"
    return ""


def run_checker_only(target: sqlite3.Row, candidate: Path) -> tuple[str, str, str]:
    script = RUNTIME / "checker_resume.py"
    script.write_text("""
import json
import os
import sys
from pathlib import Path
from re_agent.agents.checker import CheckerAgent
from re_agent.backend.registry import create_backend
from re_agent.config.loader import load_config
from re_agent.core.models import FunctionTarget
from re_agent.llm.registry import create_provider
from re_agent.verification.objective import verify_candidate

root = Path(sys.argv[1])
config = load_config(root / "re-agent.yaml")
os.environ["PATH"] = str(root / "scripts/reagent/bin") + os.pathsep + os.environ["PATH"]
backend = create_backend(config.backend)
provider = create_provider(config.agents.checker or config.llm)
target = FunctionTarget(sys.argv[2], sys.argv[3], sys.argv[4])
code = Path(sys.argv[5]).read_text(encoding="utf-8")
verdict = CheckerAgent(provider, backend).check(code, target)
objective = verify_candidate(
    code, target, backend,
    call_count_tolerance=config.orchestrator.objective_call_count_tolerance,
    control_flow_tolerance=config.orchestrator.objective_control_flow_tolerance,
)
print(json.dumps({
    "checker": verdict.verdict.value,
    "summary": verdict.summary,
    "issues": verdict.issues,
    "objective": objective.verdict.value,
    "objective_summary": objective.summary,
}))
""", encoding="utf-8")
    class_name, _, function_name = target["qualified_name"].rpartition("::")
    class_name = class_name.rpartition("::")[2]
    command = [
        str(ROOT / ".venv-reagent/bin/python"), str(script), str(ROOT), target["address"],
        class_name, function_name, str(candidate),
    ]
    environment = os.environ.copy()
    environment["PATH"] = str(ROOT / "scripts/reagent/bin") + os.pathsep + environment.get("PATH", "")
    result = subprocess.run(
        command, cwd=ROOT, env=environment, text=True, stdout=subprocess.PIPE,
        stderr=subprocess.STDOUT, timeout=700, check=False,
    )
    if result.returncode != 0:
        return "ERROR", "", result.stdout
    try:
        payload = json.loads(result.stdout.strip().splitlines()[-1])
    except (ValueError, IndexError):
        return "ERROR", "", result.stdout
    return str(payload.get("checker", "UNKNOWN")), str(payload.get("objective", "UNKNOWN")), json.dumps(payload)


def classify_normal_output(output: str) -> tuple[str, str, str]:
    checker = "PASS" if re.search(r"^\s*Verdict:\s*PASS", output, re.MULTILINE) else "FAIL"
    objective = "PASS" if re.search(r"^\s*Objective:\s*PASS", output, re.MULTILINE) else "UNKNOWN"
    summary_match = re.search(r"^\s*Summary:\s*(.+)$", output, re.MULTILINE)
    summary = summary_match.group(1).strip() if summary_match else ""
    return checker, objective, summary


def complete_target(
        connection: sqlite3.Connection,
        target: sqlite3.Row,
        status: str,
        checker: str,
        objective: str,
        candidate: Path | None,
        qwen_result: str,
        summary: str,
        reason: str,
        started: float,
) -> None:
    finished = now()
    duration = max(time.time() - started, 0)
    with connection:
        connection.execute("""
            UPDATE targets SET status=?, qwen_result=?, checker_result=?, asm_result=?,
                source_candidate=?, finished_at=?, duration_seconds=?, failure_reason=?,
                checker_summary=?, next_retry_at='', updated_at=? WHERE address=?
        """, (
            status, qwen_result, checker,
            "NOT_TESTED_UNINTEGRATED" if status == "SEMANTIC" else objective,
            str(candidate.relative_to(ROOT)) if candidate else "", finished, duration,
            reason, summary, finished, target["address"],
        ))
    event(connection, status, reason or summary, target["address"])
    export_queue_csv(connection)


def wait_for_checker(
        connection: sqlite3.Connection,
        target: sqlite3.Row,
        kind: str,
        output: str,
        candidate: Path | None,
        qwen_result: str,
) -> str:
    delays = [60, 300, 900, 1800, 3600]
    attempts = int(target["attempts"])
    delay = delays[min(max(attempts - 1, 0), len(delays) - 1)]
    retry = (dt.datetime.now(dt.timezone.utc) + dt.timedelta(seconds=delay)).isoformat(timespec="seconds")
    reason = output[-2000:]
    with connection:
        connection.execute("""
            UPDATE targets SET status='WAITING_FOR_CHECKER', qwen_result=?, source_candidate=?,
                failure_reason=?, next_retry_at=?, updated_at=? WHERE address=?
        """, (
            qwen_result, str(candidate.relative_to(ROOT)) if candidate else "",
            reason, retry, now(), target["address"],
        ))
    event(connection, "CHECKER", f"{kind}; retry after {retry}", target["address"])
    export_queue_csv(connection)
    return "CHECKER_QUOTA_EXHAUSTED" if kind == "QUOTA" else "WAITING_FOR_CHECKER"


def run_one(connection: sqlite3.Connection, target: sqlite3.Row) -> tuple[str, str | None]:
    address = target["address"]
    started = time.time()
    attempt = int(target["attempts"]) + 1
    with connection:
        connection.execute(
            "UPDATE targets SET status='RUNNING', attempts=?, started_at=?, failure_reason='', updated_at=? WHERE address=?",
            (attempt, now(), now(), address),
        )
    target = connection.execute("SELECT * FROM targets WHERE address=?", (address,)).fetchone()
    event(connection, "START", f"Tier{target['tier']} attempt {attempt}", address)
    write_state(connection, "RUNNING", target, None, "Ghidra evidence")

    ok, evidence_error = ensure_evidence(connection, target)
    if not ok:
        with connection:
            connection.execute(
                "UPDATE targets SET status='PENDING', failure_reason=?, updated_at=? WHERE address=?",
                (evidence_error, now(), address),
            )
        event(connection, "BLOCKED", evidence_error, address)
        return "GHIDRA_UNAVAILABLE", evidence_error

    write_state(connection, "RUNNING", target, None, "Qwen reversing / checker")
    per_log = RUNTIME / "logs" / f"{address}-attempt-{attempt}.log"
    per_log.parent.mkdir(parents=True, exist_ok=True)
    command = [str(ROOT / "scripts/reagent/run.sh"), "--address", address]
    result = subprocess.run(
        command, cwd=ROOT, text=True, stdout=subprocess.PIPE,
        stderr=subprocess.STDOUT, timeout=1500, check=False,
    )
    per_log.write_text(result.stdout, encoding="utf-8")
    code, qwen_log = candidate_from_logs(address, started)
    candidate = save_candidate(address, attempt, code) if code else None
    qwen_result = str(candidate.relative_to(ROOT)) if candidate else qwen_log
    failure_kind = checker_failure_kind(result.stdout)
    if failure_kind:
        state = wait_for_checker(connection, target, failure_kind, result.stdout, candidate, qwen_result)
        return state, result.stdout[-2000:]

    checker, objective, summary = classify_normal_output(result.stdout)
    if not code:
        status = "ESCALATED" if attempt >= MAX_ATTEMPTS else "PENDING"
        with connection:
            connection.execute(
                "UPDATE targets SET status=?, failure_reason=?, finished_at=?, duration_seconds=?, updated_at=? WHERE address=?",
                (status, "No candidate code produced", now(), time.time() - started, now(), address),
            )
        event(connection, status, "No candidate code produced", address)
        export_queue_csv(connection)
        return "CONTINUE", None
    if checker == "PASS" and objective == "PASS":
        complete_target(
            connection, target, "SEMANTIC", checker, objective, candidate, qwen_result, summary,
            "Staged only: Phase 4A policy requires compile and ASM_MATCH before promotion", started,
        )
    else:
        complete_target(
            connection, target, "REJECTED", checker, objective, candidate, qwen_result, summary,
            "Checker or objective verifier rejected the generated candidate", started,
        )
    return "CONTINUE", None


def resume_checker(connection: sqlite3.Connection, target: sqlite3.Row) -> tuple[str, str | None]:
    candidate = ROOT / target["source_candidate"]
    if not candidate.exists():
        with connection:
            connection.execute(
                "UPDATE targets SET status='PENDING', failure_reason='Lost staged candidate; rerunning reverser', updated_at=? WHERE address=?",
                (now(), target["address"]),
            )
        return "CONTINUE", None
    started = time.time()
    event(connection, "CHECKER", "Retrying checker without rerunning Qwen", target["address"])
    checker, objective, detail = run_checker_only(target, candidate)
    kind = checker_failure_kind(detail) if checker == "ERROR" else ""
    if kind:
        state = wait_for_checker(connection, target, kind, detail, candidate, target["qwen_result"])
        return state, detail[-2000:]
    if checker == "PASS" and objective == "PASS":
        complete_target(
            connection, target, "SEMANTIC", checker, objective, candidate,
            target["qwen_result"], detail, "Staged only after resumed checker pass", started,
        )
    else:
        complete_target(
            connection, target, "REJECTED", checker, objective, candidate,
            target["qwen_result"], detail, "Resumed checker or objective verification rejected candidate", started,
        )
    return "CONTINUE", None


def periodic_checks(connection: sqlite3.Connection) -> tuple[bool, str]:
    processed = queue_summary(connection)["processed"]
    if processed and processed % 10 == 0:
        result = subprocess.run(
            ["make", "progress"], cwd=ROOT, text=True, stdout=subprocess.PIPE,
            stderr=subprocess.STDOUT, timeout=300, check=False,
        )
        event(connection, "PROGRESS", f"snapshot exit {result.returncode}")
    if processed and processed % 25 == 0:
        result = subprocess.run(
            ["make", "check"], cwd=ROOT, text=True, stdout=subprocess.PIPE,
            stderr=subprocess.STDOUT, timeout=1200, check=False,
        )
        event(connection, "CHECK", f"periodic validation exit {result.returncode}")
        if result.returncode != 0:
            return False, "Periodic make check failed"
    if processed and processed % 50 == 0:
        result = subprocess.run(
            ["make", "verify"], cwd=ROOT, text=True, stdout=subprocess.PIPE,
            stderr=subprocess.STDOUT, timeout=1800, check=False,
        )
        event(connection, "VERIFY", f"milestone validation exit {result.returncode}")
        if result.returncode != 0:
            return False, "Milestone make verify failed"
    return True, ""


class Worker:
    def __init__(self, max_functions: int | None = None) -> None:
        self.max_functions = max_functions
        self.signal_requested = False

    def signal(self, _signum: int, _frame: object) -> None:
        self.signal_requested = True

    def run(self) -> int:
        RUNTIME.mkdir(parents=True, exist_ok=True)
        lock_handle = LOCK_PATH.open("w", encoding="utf-8")
        try:
            fcntl.flock(lock_handle, fcntl.LOCK_EX | fcntl.LOCK_NB)
        except BlockingIOError:
            print("worker already running")
            return 0
        PID_PATH.write_text(f"{os.getpid()}\n", encoding="utf-8")
        signal.signal(signal.SIGTERM, self.signal)
        signal.signal(signal.SIGINT, self.signal)
        connection = connect()
        completed_this_run = 0
        try:
            with connection:
                connection.execute(
                    "UPDATE targets SET status='PENDING', failure_reason='Recovered stale RUNNING item', updated_at=? WHERE status='RUNNING'",
                    (now(),),
                )
            event(connection, "START", f"worker pid {os.getpid()}")
            while True:
                if STOP_PATH.exists() or self.signal_requested:
                    status = "STOPPED"
                    event(connection, "STOP", "graceful stop checkpoint complete")
                    write_state(connection, status, None, None)
                    return 0
                if PAUSE_PATH.exists():
                    event(connection, "PAUSE", "graceful pause checkpoint complete")
                    write_state(connection, "PAUSED", None, None)
                    return 0
                clean, detail = git_clean()
                if not clean:
                    error = f"Unexpected worktree changes: {detail}"
                    event(connection, "PAUSE", error)
                    write_state(connection, "EXTERNAL_WORKTREE_CHANGES", None, error)
                    return 0
                if not ollama_ok():
                    error = "Ollama or qwen2.5-coder:7b is unavailable"
                    event(connection, "PAUSE", error)
                    write_state(connection, "OLLAMA_UNAVAILABLE", None, error)
                    return 0
                target = next_target(connection)
                if target is None:
                    event(connection, "COMPLETE", "Tier-0/Tier-1 queue exhausted")
                    write_state(connection, "COMPLETE", None, None)
                    return 0
                if self.max_functions is not None and completed_this_run >= self.max_functions:
                    event(connection, "TEST", f"live test completed {completed_this_run} functions")
                    write_state(connection, "TEST_COMPLETE", None, None)
                    return 0
                write_state(connection, "RUNNING", target, None, "Starting")
                if target["status"] == "WAITING_FOR_CHECKER" and target["source_candidate"]:
                    action, error = resume_checker(connection, target)
                else:
                    action, error = run_one(connection, target)
                if action in {"CHECKER_QUOTA_EXHAUSTED", "GHIDRA_UNAVAILABLE"}:
                    write_state(connection, action, None, error)
                    return 0
                if action == "WAITING_FOR_CHECKER":
                    write_state(connection, action, target, error, "Checker backoff")
                    retry = parse_time(connection.execute(
                        "SELECT next_retry_at FROM targets WHERE address=?", (target["address"],)
                    ).fetchone()[0])
                    while retry and dt.datetime.now(dt.timezone.utc) < retry:
                        if STOP_PATH.exists() or PAUSE_PATH.exists() or self.signal_requested:
                            break
                        time.sleep(min(10, max((retry - dt.datetime.now(dt.timezone.utc)).total_seconds(), 1)))
                    continue
                completed_this_run += 1
                ok, periodic_error = periodic_checks(connection)
                if not ok:
                    event(connection, "PAUSE", periodic_error)
                    write_state(connection, "VALIDATION_FAILED", None, periodic_error)
                    return 0
                write_state(connection, "RUNNING", None, None, "Between functions")
        except Exception as exc:
            event(connection, "CRASH", repr(exc))
            write_state(connection, "CRASHED", None, repr(exc))
            raise
        finally:
            export_queue_csv(connection)
            connection.close()
            PID_PATH.unlink(missing_ok=True)
            fcntl.flock(lock_handle, fcntl.LOCK_UN)
            lock_handle.close()


def service_active() -> bool:
    result = subprocess.run(
        ["systemctl", "--user", "is-active", "--quiet", SERVICE],
        stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL, check=False,
    )
    return result.returncode == 0


def start_background(max_functions: int | None = None) -> str:
    if service_active():
        return "worker already running"
    if PID_PATH.exists():
        try:
            os.kill(int(PID_PATH.read_text(encoding="utf-8").strip()), 0)
        except (OSError, ValueError):
            PID_PATH.unlink(missing_ok=True)
        else:
            return "worker already running"
    PAUSE_PATH.unlink(missing_ok=True)
    STOP_PATH.unlink(missing_ok=True)
    worker_command = [str(ROOT / ".venv-reagent/bin/python"), str(Path(__file__).resolve()), "run"]
    if max_functions is not None:
        worker_command.extend(["--max-functions", str(max_functions)])
    systemd_ready = subprocess.run(
        ["systemctl", "--user", "is-system-running"],
        stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL, check=False,
    ).returncode in {0, 1}
    if systemd_ready:
        command = [
            "systemd-run", "--user", f"--unit={SERVICE.removesuffix('.service')}", "--collect",
            "--property=Type=exec", "--property=Restart=on-failure", "--property=RestartSec=60",
            f"--working-directory={ROOT}", *worker_command,
        ]
        result = subprocess.run(command, text=True, stdout=subprocess.PIPE, stderr=subprocess.STDOUT, check=False)
        if result.returncode != 0:
            raise SystemExit(result.stdout.strip())
        return result.stdout.strip()
    detached_log = (RUNTIME / "detached.log").open("a", encoding="utf-8")
    process = subprocess.Popen(
        worker_command, cwd=ROOT, stdin=subprocess.DEVNULL, stdout=detached_log,
        stderr=subprocess.STDOUT, start_new_session=True,
    )
    PID_PATH.write_text(f"{process.pid}\n", encoding="utf-8")
    return f"detached worker pid {process.pid}"


def request_control(kind: str) -> None:
    path = PAUSE_PATH if kind == "pause" else STOP_PATH
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(now() + "\n", encoding="utf-8")
    print(f"{kind} requested; worker will checkpoint after the current function")


def health_text(url: str) -> str:
    try:
        with urllib.request.urlopen(url, timeout=2):
            return "OK"
    except (OSError, urllib.error.URLError):
        return "UNAVAILABLE"


def format_duration(seconds: float) -> str:
    seconds = max(int(seconds), 0)
    hours, remainder = divmod(seconds, 3600)
    minutes, _ = divmod(remainder, 60)
    return f"{hours}h {minutes:02d}m"


def print_status() -> None:
    if not DB_PATH.exists():
        print("Pokémon Moon Auto-RE-Agent\n\nStatus: NOT_INITIALIZED\nRun: make reagent-start DRY_RUN=1")
        return
    connection = connect()
    summary = queue_summary(connection)
    state = load_json(STATE_PATH) if STATE_PATH.exists() else {}
    started = parse_time(str(state.get("started_at") or ""))
    uptime = format_duration((dt.datetime.now(dt.timezone.utc) - started).total_seconds()) if started else "0h 00m"
    eligible = summary["eligible"]
    processed = summary["processed"]
    progress = processed * 100 / eligible if eligible else 100.0
    current = state.get("current_function") or "none"
    current_name = state.get("current_name") or ""
    tier = state.get("tier")
    last = state.get("last_completed") or {}
    print("Pokémon Moon Auto-RE-Agent")
    print(f"\nStatus: {state.get('status', 'IDLE')}")
    print(f"Uptime: {uptime}")
    print("\nCurrent:")
    print(f"  {current}")
    if current_name:
        print(f"  {current_name}")
    if tier is not None:
        print(f"  Tier {tier}")
    if state.get("phase"):
        print(f"  {state['phase']}")
    print("\nTier 0 / Tier 1 queue:")
    print(f"  Tier 0 eligible: {summary['tier0_eligible']:,}")
    print(f"  Tier 1 eligible: {summary['tier1_eligible']:,}")
    print(f"  Eligible:        {eligible:,}")
    print(f"  Processed:       {processed:,}")
    print(f"  Remaining:       {summary['pending']:,}")
    print(f"  Progress:        {progress:.2f}%")
    print("\nResults:")
    print(f"  Exact:           {summary['exact']:,}")
    print(f"  Near:            {summary['near']:,}")
    print(f"  Semantic:        {summary['semantic']:,}")
    print(f"  Rejected:        {summary['rejected']:,}")
    print(f"  Escalated:       {summary['escalated']:,}")
    print(f"  Blocked:         {summary['blocked']:,}")
    print(f"  Unsafe skipped:  {summary['unsafe']:,}")
    print(f"  Reconstructed:   {summary['already_reconstructed']:,}")
    print(f"  Claimed:         {summary['claimed']:,}")
    print("\nThroughput:")
    print(f"  Functions/hour:  {state.get('throughput', {}).get('functions_per_hour', 0):.2f}")
    if last:
        print("\nLast completed:")
        print(f"  {last.get('address')} {last.get('qualified_name')}")
        print(f"  result: {last.get('status')} | duration: {float(last.get('duration_seconds', 0)):.1f}s")
    checker = "WAITING" if summary["waiting_checker"] else "OK"
    if str(state.get("status", "")).startswith("CHECKER_"):
        checker = str(state["status"])
    print(f"\nChecker: {checker} ({CHECKER_MODEL})")
    print(f"Ollama: {health_text('http://127.0.0.1:11434/api/tags')} ({REVERSER_MODEL}, ctx {QWEN_CONTEXT})")
    print(f"\nLast error: {state.get('last_error') or 'none'}")
    connection.close()


def print_log(follow: bool = False, lines: int = 60) -> None:
    if not LOG_PATH.exists():
        print("No worker log yet")
        return
    position = 0
    while True:
        content = LOG_PATH.read_text(encoding="utf-8", errors="replace").splitlines()
        if not follow:
            print("\n".join(content[-lines:]))
            return
        for line in content[position:]:
            print(line, flush=True)
        position = len(content)
        time.sleep(1)


def dry_run() -> None:
    summary = initialize_queue()
    connection = connect()
    first = connection.execute(
        "SELECT address,qualified_name,tier,size FROM targets WHERE status='PENDING' ORDER BY tier,queue_order LIMIT 20"
    ).fetchall()
    print("Tier-0/Tier-1 queue dry run")
    print(json.dumps(summary, indent=2))
    print("First eligible targets:")
    for row in first:
        print(f"  {row['address']} Tier{row['tier']} size={row['size']} {row['qualified_name']}")
    connection.close()


def main() -> None:
    parser = argparse.ArgumentParser()
    subparsers = parser.add_subparsers(dest="command", required=True)
    start_parser = subparsers.add_parser("start")
    start_parser.add_argument("--dry-run", action="store_true")
    start_parser.add_argument("--max-functions", type=int)
    run_parser = subparsers.add_parser("run")
    run_parser.add_argument("--max-functions", type=int)
    subparsers.add_parser("status")
    subparsers.add_parser("pause")
    subparsers.add_parser("resume")
    subparsers.add_parser("stop")
    subparsers.add_parser("init")
    log_parser = subparsers.add_parser("log")
    log_parser.add_argument("--follow", action="store_true")
    args = parser.parse_args()

    if args.command == "init":
        print(json.dumps(initialize_queue(), indent=2))
    elif args.command == "start":
        if args.dry_run:
            dry_run()
            return
        initialize_queue()
        clean, detail = git_clean()
        if not clean:
            raise SystemExit(f"Refusing to start with dirty worktree:\n{detail}")
        print(start_background(args.max_functions))
    elif args.command == "run":
        raise SystemExit(Worker(args.max_functions).run())
    elif args.command == "status":
        print_status()
    elif args.command == "pause":
        request_control("pause")
    elif args.command == "stop":
        request_control("stop")
    elif args.command == "resume":
        initialize_queue()
        clean, detail = git_clean()
        if not clean:
            raise SystemExit(f"Refusing to resume with dirty worktree:\n{detail}")
        print(start_background())
    elif args.command == "log":
        print_log(args.follow)


if __name__ == "__main__":
    main()
