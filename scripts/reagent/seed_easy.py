#!/usr/bin/env python3
"""Seed an easy-first GPT review batch from the canonical function catalog."""

from __future__ import annotations

import argparse
import csv
import json
from pathlib import Path


ROOT = Path(__file__).resolve().parents[2]
CATALOG = ROOT / "analysis/function_queue.csv"
MANIFEST = ROOT / "config/reconstructed_functions.csv"
SYMBOLS = ROOT / "symbols/master_symbols.csv"
REVIEW = ROOT / "analysis/reagent/semantic_review.csv"
ESCALATION = ROOT / "analysis/reagent/escalation_queue.csv"
TARGETS = ROOT / "reports/re-agent/easy_targets.csv"
EXPORTS = ROOT / ".ghidra-exports/static.crs"
TARGET_FIELDS = [
    "address", "qualified_name", "namespace", "size", "caller_count", "callee_count",
    "provenance", "review_status",
]
REVIEW_FIELDS = [
    "address", "qualified_name", "tier", "size", "candidate", "classification",
    "reason", "checker_result", "checker_summary",
]


def read_csv(path: Path) -> list[dict[str, str]]:
    if not path.exists():
        return []
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


def select(args: argparse.Namespace) -> int:
    code_families = {value.strip() for value in args.code_families.split(",") if value.strip()}
    source_keys: set[str] | None = None
    if args.source_index:
        payload = json.loads(args.source_index.read_text(encoding="utf-8"))
        source_keys = set(payload.get("entries", {}))
    used_paths = (MANIFEST, REVIEW) if source_keys is not None else (MANIFEST, REVIEW, ESCALATION)
    used = {
        normalize(row["address"])
        for path in used_paths
        for row in read_csv(path)
        if row.get("address")
    }
    symbols = {
        normalize(row["target_address"]): row["name"]
        for row in read_csv(SYMBOLS)
        if row["source_file"] == "static.crs" and row["kind"] == "FUNCTION" and row["mangled_name"]
    }
    eligible = []
    for row in read_csv(CATALOG):
        address = normalize(row["address"])
        if (
            address in used or address not in symbols or row["module"] != "static.crs"
            or row["memory_block"] != ".text" or row["is_thunk"] != "false"
            or row["code_family"] not in code_families
            or int(row["size"]) > args.max_size
            or int(row["basic_block_count"]) > args.max_blocks
            or int(row["callee_count"]) > args.max_callees
            or int(row["indirect_call_count"]) > args.max_indirect_calls
            or int(row["loop_count"]) > args.max_loops
            or int(row["switch_count"]) > args.max_switches
        ):
            continue
        if source_keys is not None:
            parts = symbols[address].split("(", 1)[0].strip().split("::")
            if len(parts) < 2 or "::".join(parts[-2:]) not in source_keys:
                continue
        eligible.append(row)
    eligible.sort(key=lambda row: (
        int(row["indirect_call_count"]), int(row["loop_count"]), int(row["switch_count"]),
        int(row["callee_count"]), int(row["basic_block_count"]), int(row["size"]),
        int(row["unknown_type_count"]), int(row["difficulty_score"]), int(row["queue_rank"]),
    ))
    selected = [{
        "address": normalize(row["address"]), "qualified_name": row["qualified_name"],
        "namespace": row["namespace"], "size": row["size"], "caller_count": row["caller_count"],
        "callee_count": row["callee_count"], "provenance": row["provenance"],
        "review_status": "SOURCE_REFERENCE" if source_keys is not None else "UNRUN",
    } for row in eligible[:args.limit]]
    write_csv(TARGETS, selected, TARGET_FIELDS)
    print(f"selected {len(selected)} easy-first targets in {TARGETS.relative_to(ROOT)}")
    return len(selected)


def register() -> int:
    selected = read_csv(TARGETS)
    missing = [row["address"] for row in selected if not (EXPORTS / f"{row['address'][2:].lower()}.json").is_file()]
    if missing:
        raise SystemExit(f"refusing to register targets without Ghidra evidence: {', '.join(missing[:10])}")
    review = read_csv(REVIEW)
    known = {normalize(row["address"]) for row in review}
    catalog = {normalize(row["address"]): row for row in read_csv(CATALOG)}
    added = 0
    for target in selected:
        address = normalize(target["address"])
        if address in known:
            continue
        row = catalog[address]
        source_reference = target.get("review_status") == "SOURCE_REFERENCE"
        review.append({
            "address": address, "qualified_name": target["qualified_name"],
            "tier": row["tier"].removeprefix("TIER_"), "size": target["size"], "candidate": "",
            "classification": "YELLOW",
            "reason": "GPT_SOURCE_REFERENCE" if source_reference else "GPT_EASY_BATCH",
            "checker_result": "UNRUN",
            "checker_summary": (
                "Queued with private historical source, Ghidra evidence, and independent GPT review."
                if source_reference else
                "Queued for independent GPT reconstruction and review from Ghidra evidence."
            ),
        })
        known.add(address)
        added += 1
    write_csv(REVIEW, review, REVIEW_FIELDS)
    print(f"registered {added} evidence-backed targets")
    return added


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("command", choices=("select", "register"))
    parser.add_argument("--limit", type=int, default=1200)
    parser.add_argument("--max-size", type=int, default=256)
    parser.add_argument("--max-blocks", type=int, default=12)
    parser.add_argument("--max-callees", type=int, default=6)
    parser.add_argument("--max-indirect-calls", type=int, default=1)
    parser.add_argument("--max-loops", type=int, default=1)
    parser.add_argument("--max-switches", type=int, default=1)
    parser.add_argument("--code-families", default="GAME,GFL2")
    parser.add_argument("--source-index", type=Path)
    args = parser.parse_args()
    if args.command == "select":
        select(args)
    else:
        register()


if __name__ == "__main__":
    main()
