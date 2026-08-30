#!/usr/bin/env python3
"""Score retail functions for conservative decompilation scheduling."""

from __future__ import annotations

import argparse
import csv
from pathlib import Path


def integer(row: dict[str, str], field: str) -> int:
    return int(row.get(field) or 0)


def score(row: dict[str, str]) -> tuple[int, int, str]:
    if row["is_thunk"].lower() == "true":
        return 0, 0, "analyzer-confirmed thunk"

    size = integer(row, "size")
    blocks = integer(row, "basic_block_count")
    callees = integer(row, "callee_count")
    callers = integer(row, "caller_count")
    unknown = integer(row, "unknown_type_count")
    indirect = integer(row, "indirect_call_count")
    switches = integer(row, "switch_count")
    loops = integer(row, "loop_count")

    if size <= 16:
        value = 0
    elif size <= 48:
        value = 8
    elif size <= 128:
        value = 18
    elif size <= 384:
        value = 32
    elif size <= 1024:
        value = 48
    else:
        value = 65
    value += min(max(blocks - 1, 0) * 3, 24)
    value += min(callees * 2, 16)
    value += min(unknown * 4, 16)
    value += min(callers // 8, 8)
    value += indirect * 10 + switches * 12 + min(loops * 5, 20)
    if row["provenance"] == "RETAIL_ORIGINAL_SYMBOL":
        value -= 7
    elif not row["current_name"].startswith("FUN_"):
        value -= 3
    if row["vtable_relationship"] or row["rtti_relationship"]:
        value -= 3
    value = max(value, 0)

    if size <= 16 and blocks <= 2 and callees <= 1 and not indirect and not switches and not loops:
        tier = 0
    elif value <= 25:
        tier = 1
    elif value <= 50:
        tier = 2
    elif value <= 80:
        tier = 3
    else:
        tier = 4

    reasons = [f"size={size}", f"blocks={blocks}", f"calls={callees}"]
    if unknown:
        reasons.append(f"unknown_types={unknown}")
    if indirect:
        reasons.append(f"indirect_calls={indirect}")
    if switches:
        reasons.append(f"switches={switches}")
    if loops:
        reasons.append(f"back_edges={loops}")
    if row["provenance"] == "RETAIL_ORIGINAL_SYMBOL":
        reasons.append("original_symbol")
    return value, tier, "; ".join(reasons)


def subsystem_priority(row: dict[str, str]) -> int:
    text = f"{row['namespace']}::{row['current_name']} {row['known_symbols_referenced']}".lower()
    priorities = (
        ("boxpokemon", 0), ("pokepara", 0), ("pokemonparam", 0),
        ("coreparam", 0), ("savedata", 1), ("egg", 2),
        ("gamemanager", 3), ("qr", 4), ("field", 5), ("battle", 6),
    )
    return next((priority for token, priority in priorities if token in text), 7)


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("--input", type=Path, default=Path("analysis/functions.csv"))
    parser.add_argument("--output", type=Path, default=Path("analysis/function_queue.csv"))
    args = parser.parse_args()

    with args.input.open(newline="", encoding="utf-8") as handle:
        rows = list(csv.DictReader(handle))
    for row in rows:
        value, tier, rationale = score(row)
        row["difficulty_score"] = str(value)
        row["tier"] = f"TIER_{tier}"
        row["score_rationale"] = rationale
        row["subsystem_priority"] = str(subsystem_priority(row))

    rows.sort(key=lambda row: (
        int(row["tier"].split("_")[1]),
        int(row["subsystem_priority"]),
        row["source_exists"] != "true",
        row["provenance"] != "RETAIL_ORIGINAL_SYMBOL",
        int(row["difficulty_score"]),
        int(row["size"]),
        int(row["address"], 16),
    ))
    for index, row in enumerate(rows, 1):
        row["queue_rank"] = str(index)

    args.output.parent.mkdir(parents=True, exist_ok=True)
    with args.output.open("w", newline="", encoding="utf-8") as handle:
        writer = csv.DictWriter(handle, fieldnames=list(rows[0]), lineterminator="\n")
        writer.writeheader()
        writer.writerows(rows)
    counts = {tier: sum(row["tier"] == tier for row in rows) for tier in [f"TIER_{i}" for i in range(5)]}
    print(f"Wrote {len(rows)} scored functions to {args.output}: {counts}")


if __name__ == "__main__":
    main()
