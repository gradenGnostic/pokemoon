#!/usr/bin/env python3
"""Classify existing Tier-0/Tier-1 candidates and promote mechanical GREENs."""

from __future__ import annotations

import argparse
import csv
import datetime as dt
import json
import re
import sqlite3
import subprocess
import tempfile
from pathlib import Path


ROOT = Path(__file__).resolve().parents[2]
DB = ROOT / "analysis/reagent/queue.sqlite3"
CATALOG = ROOT / "analysis/function_queue.csv"
SYMBOLS = ROOT / "symbols/master_symbols.csv"
MANIFEST = ROOT / "config/reconstructed_functions.csv"
TRIVIAL = ROOT / "generated/candidates/manifest.csv"
SOURCE = ROOT / "src/reagent/global_empty_functions.cpp"
REVIEW = ROOT / "analysis/reagent/semantic_review.csv"
ESCALATION = ROOT / "analysis/reagent/escalation_queue.csv"
REPORT = ROOT / "analysis/reagent/promotion_report.json"
SHARED_TYPES = {
    "pml::pokepara::CoreParam", "Savedata::BOX", "Savedata::Situation",
    "Savedata::Sodateya", "PK7", "pml::pokepara::PokemonParam", "GameManager",
}
HARD_ARTIFACTS = re.compile(
    r"\b(?:FUN|DAT|LAB|PTR)_[0-9A-Fa-f]+\b|\bundefined\d*\b|"
    r"\b(?:__thiscall|__stdcall|__fastcall)\b|\bextraout_[A-Za-z0-9_]+\b"
)
FIELDS = [
    "address", "qualified_name", "tier", "size", "candidate", "classification",
    "reason", "checker_result", "checker_summary",
]


def read_csv(path: Path) -> list[dict[str, str]]:
    with path.open(newline="", encoding="utf-8") as handle:
        return list(csv.DictReader(handle))


def write_csv(path: Path, rows: list[dict[str, str]], fields: list[str]) -> None:
    path.parent.mkdir(parents=True, exist_ok=True)
    temporary = path.with_suffix(path.suffix + ".tmp")
    with temporary.open("w", newline="", encoding="utf-8") as handle:
        writer = csv.DictWriter(handle, fieldnames=fields, extrasaction="ignore", lineterminator="\n")
        writer.writeheader()
        writer.writerows(rows)
    temporary.replace(path)


def normalize(value: str) -> str:
    return f"0x{int(value, 16):08X}"


def source_text(rows: list[dict[str, str]]) -> str:
    lines = ["// Mechanically verified empty global functions.", ""]
    for row in rows:
        lines.extend([
            f"#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == {row['address']}",
            f"extern \"C\" void {row['qualified_name']}() {{}}",
            "#endif",
            "",
        ])
    return "\n".join(lines)


def compile_green(row: dict[str, str], all_green: list[dict[str, str]]) -> tuple[bool, str]:
    with tempfile.TemporaryDirectory(prefix="reagent-bulk-") as directory:
        temporary = Path(directory)
        source = temporary / "candidate.cpp"
        obj = temporary / "candidate.o"
        source.write_text(source_text(all_green), encoding="utf-8")
        compile_run = subprocess.run([
            "arm-none-eabi-g++", "-std=gnu++11", "-mcpu=mpcore", "-marm",
            "-mfpu=vfp", "-mfloat-abi=softfp", "-O2", "-fno-exceptions",
            "-fno-rtti", "-fno-unwind-tables", "-fno-asynchronous-unwind-tables",
            "-ffunction-sections", f"-DPOKEMOON_SPLIT_FUNCTION={row['address']}",
            "-c", str(source), "-o", str(obj),
        ], text=True, stdout=subprocess.PIPE, stderr=subprocess.STDOUT, check=False)
        if compile_run.returncode:
            return False, compile_run.stdout.strip()
        compare = subprocess.run([
            "python3", "tools/compare_function.py", str(obj), row["symbol"], row["address"],
            "--code-bin", "extracted/exefs/code.bin",
        ], cwd=ROOT, text=True, stdout=subprocess.PIPE, stderr=subprocess.STDOUT, check=False)
        return compare.returncode == 0, compare.stdout.strip().replace("\n", " | ")


def classify() -> tuple[list[dict[str, str]], list[dict[str, str]], list[dict[str, str]]]:
    catalog = {normalize(row["address"]): row for row in read_csv(CATALOG)}
    canonical = {normalize(row["address"]) for row in read_csv(MANIFEST)}
    trivial = {
        normalize(row["address"]): row for row in read_csv(TRIVIAL)
        if row["candidate_kind"] == "EMPTY_ARM_FUNCTION"
        and row["provenance"] == "RETAIL_ORIGINAL_SYMBOL"
    }
    symbols = {
        normalize(row["target_address"]): row for row in read_csv(SYMBOLS)
        if row["source_file"] == "static.crs" and row["kind"] == "FUNCTION"
        and row["provenance"] == "RETAIL_ORIGINAL_SYMBOL"
    }
    connection = sqlite3.connect(DB)
    connection.row_factory = sqlite3.Row
    candidates = connection.execute(
        "SELECT * FROM targets WHERE status IN ('SEMANTIC','REJECTED','ESCALATED') "
        "ORDER BY tier,queue_order"
    ).fetchall()
    connection.close()

    green: list[dict[str, str]] = []
    yellow: list[dict[str, str]] = []
    red: list[dict[str, str]] = []
    for item in candidates:
        address = normalize(item["address"])
        base = {
            "address": address,
            "qualified_name": item["qualified_name"],
            "tier": str(item["tier"]),
            "size": str(item["size"]),
            "candidate": item["source_candidate"],
            "checker_result": item["checker_result"],
            "checker_summary": item["checker_summary"],
        }
        if item["status"] == "REJECTED":
            red.append({**base, "classification": "RED", "reason": "CHECKER_REJECTED"})
            continue
        if item["status"] == "ESCALATED" or not item["source_candidate"]:
            red.append({**base, "classification": "RED", "reason": "INVALID_BODY"})
            continue
        if address in canonical:
            continue
        row = catalog.get(address)
        symbol = symbols.get(address)
        if row is None or symbol is None or row["module"] != "static.crs" or row["memory_block"] != ".text":
            red.append({**base, "classification": "RED", "reason": "SYMBOL_CONFLICT"})
            continue
        owner = row["namespace"]
        if owner in SHARED_TYPES:
            yellow.append({**base, "classification": "YELLOW", "reason": "SHARED_LAYOUT_CHANGE"})
            continue
        path = ROOT / item["source_candidate"]
        try:
            text = path.read_text(encoding="utf-8")
        except OSError:
            red.append({**base, "classification": "RED", "reason": "INVALID_BODY"})
            continue
        is_empty_global = (
            address in trivial
            and item["size"] == 4
            and "::" not in item["qualified_name"]
            and symbol["mangled_name"] == item["qualified_name"]
            and "return;" in text
            and not HARD_ARTIFACTS.search(text)
        )
        if is_empty_global:
            green.append({
                **base, "classification": "GREEN", "reason": "EMPTY_GLOBAL_ARM_BODY",
                "symbol": symbol["mangled_name"],
            })
        elif HARD_ARTIFACTS.search(text):
            yellow.append({**base, "classification": "YELLOW", "reason": "ABI_UNCERTAIN"})
        elif "::" in item["qualified_name"]:
            yellow.append({**base, "classification": "YELLOW", "reason": "PROTOTYPE_UNCERTAIN"})
        else:
            yellow.append({**base, "classification": "YELLOW", "reason": "UNKNOWN_TYPE"})
    return green, yellow, red


def promote(green: list[dict[str, str]], limit: int) -> tuple[list[dict[str, str]], list[dict[str, str]]]:
    approved: list[dict[str, str]] = []
    failed: list[dict[str, str]] = []
    selected = green[:limit]
    for row in selected:
        ok, detail = compile_green(row, selected)
        if ok:
            approved.append({**row, "detail": detail})
        else:
            failed.append({**row, "classification": "RED", "reason": "COMPILE_FAILURE", "detail": detail})
    if not approved:
        return approved, failed

    SOURCE.parent.mkdir(parents=True, exist_ok=True)
    temporary = SOURCE.with_suffix(".cpp.tmp")
    temporary.write_text(source_text(approved), encoding="utf-8")
    temporary.replace(SOURCE)
    rows = read_csv(MANIFEST)
    fields = list(rows[0])
    for row in approved:
        suffix = row["address"][2:].lower()
        artifact = f"{row['qualified_name']}_{suffix}"
        rows.append({
            "address": row["address"], "retail_size": "0x04", "module": "static.crs",
            "binary": "code.bin", "name": row["qualified_name"], "namespace": "Global",
            "source": str(SOURCE.relative_to(ROOT)), "symbol": row["symbol"], "artifact": artifact,
            "adapter_mode": "macro_select", "adapter_macro": "POKEMOON_SPLIT_FUNCTION",
            "adapter": f"src/code.bin/{artifact}.cpp", "object": f"build/code.bin/{artifact}.o",
            "source_status": "SOURCE_WRITTEN", "compile_status": "COMPILES",
            "semantic_status": "SEMANTIC_VERIFIED", "asm_status": "ASM_MATCH",
            "runtime_ready": "true", "runtime_tested": "false", "subsystem": "reagent",
            "provenance": "RETAIL_ORIGINAL_SYMBOL", "compiler": "arm-none-eabi-g++ 16.2.0",
            "matched_bytes": "4", "total_bytes": "4",
            "notes": "Bulk-promoted checker-approved empty global ARM body",
        })
    write_csv(MANIFEST, rows, fields)
    return approved, failed


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("--promote", action="store_true")
    parser.add_argument("--limit", type=int, default=50)
    args = parser.parse_args()
    green, yellow, red = classify()
    approved: list[dict[str, str]] = []
    if args.promote:
        approved, failures = promote(green, args.limit)
        red.extend(failures)
        approved_addresses = {row["address"] for row in approved}
        yellow.extend(
            {key: value for key, value in row.items() if key in FIELDS}
            for row in green if row["address"] not in approved_addresses
        )
    write_csv(REVIEW, yellow, FIELDS)
    write_csv(ESCALATION, red, FIELDS)
    report = {
        "generated_at": dt.datetime.now(dt.timezone.utc).isoformat(timespec="seconds"),
        "attempted": len(green) + len(yellow) + len(red),
        "green": len(green), "promoted": len(approved),
        "yellow": len(yellow), "red": len(red),
        "review_queue": str(REVIEW.relative_to(ROOT)),
        "escalation_queue": str(ESCALATION.relative_to(ROOT)),
    }
    REPORT.write_text(json.dumps(report, indent=2) + "\n", encoding="utf-8")
    print(json.dumps(report, indent=2))


if __name__ == "__main__":
    main()
