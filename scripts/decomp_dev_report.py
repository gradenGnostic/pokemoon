#!/usr/bin/env python3
"""Generate an objdiff v2 progress report for decomp.dev.

This is intentionally build-free: CI derives progress from the committed
function inventory and the authoritative reconstructed-function manifest.
Exact ARM matches count as matched; any maintained source reconstruction counts
as complete/source-backed. Partial matched-byte evidence contributes only to
objdiff's fuzzy percentage and is never promoted to an exact match.
"""

from __future__ import annotations

import argparse
import csv
import json
import re
from collections import defaultdict
from pathlib import Path
from typing import Iterable


def parse_int(value: str | None) -> int:
    if value is None:
        return 0
    text = value.strip()
    if not text:
        return 0
    try:
        return int(text, 0)
    except ValueError:
        return int(text, 16)


def percent(part: float, total: float) -> float:
    return (part * 100.0 / total) if total else 0.0


def category_id(value: str) -> str:
    clean = re.sub(r"[^a-z0-9]+", "-", value.strip().lower()).strip("-")
    return clean or "unknown"


def read_csv(path: Path) -> list[dict[str, str]]:
    with path.open(newline="", encoding="utf-8") as handle:
        return list(csv.DictReader(handle))


def make_measures(rows: Iterable[dict[str, object]]) -> dict[str, object]:
    rows = list(rows)
    total_code = sum(int(row["size"]) for row in rows)
    matched_code = sum(int(row["size"]) for row in rows if bool(row["matched"]))
    complete_code = sum(int(row["size"]) for row in rows if bool(row["complete"]))
    fuzzy_code = sum(int(row["size"]) * float(row["fuzzy"]) / 100.0 for row in rows)
    total_functions = len(rows)
    matched_functions = sum(1 for row in rows if bool(row["matched"]))
    complete_units = sum(1 for row in rows if bool(row["complete"]))

    return {
        "fuzzy_match_percent": percent(fuzzy_code, total_code),
        "total_code": str(total_code),
        "matched_code": str(matched_code),
        "matched_code_percent": percent(matched_code, total_code),
        "total_functions": total_functions,
        "matched_functions": matched_functions,
        "matched_functions_percent": percent(matched_functions, total_functions),
        "complete_code": str(complete_code),
        "complete_code_percent": percent(complete_code, total_code),
        "total_units": total_functions,
        "complete_units": complete_units,
    }


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("--functions", type=Path, default=Path("analysis/functions.csv"))
    parser.add_argument(
        "--reconstructed",
        type=Path,
        default=Path("config/reconstructed_functions.csv"),
    )
    parser.add_argument("--out", type=Path, default=Path("report.json"))
    args = parser.parse_args()

    inventory = read_csv(args.functions)
    reconstructed_rows = read_csv(args.reconstructed)
    reconstructed = {
        parse_int(row.get("address")): row
        for row in reconstructed_rows
        if row.get("address")
    }

    normalized: list[dict[str, object]] = []
    for row in inventory:
        address = parse_int(row.get("address"))
        recon = reconstructed.get(address)
        size = parse_int(row.get("size"))
        if size <= 0 and recon:
            size = parse_int(recon.get("retail_size"))
        if size <= 0:
            continue

        asm_status = (recon or row).get("asm_status", "")
        matched = asm_status == "ASM_MATCH"
        complete = recon is not None or row.get("source_exists", "").lower() == "true"

        fuzzy = 100.0 if matched else 0.0
        if recon and not matched:
            matched_bytes = parse_int(recon.get("matched_bytes"))
            total_bytes = parse_int(recon.get("total_bytes"))
            if total_bytes > 0:
                fuzzy = min(99.999, percent(matched_bytes, total_bytes))

        name = (
            row.get("qualified_name")
            or row.get("current_name")
            or (recon.get("name") if recon else "")
            or f"FUN_{address:08X}"
        )
        family = (row.get("code_family") or "Unknown").strip() or "Unknown"
        category = category_id(family)

        normalized.append(
            {
                "address": address,
                "size": size,
                "name": name,
                "module": row.get("module") or (recon.get("module") if recon else "") or "static.crs",
                "source": recon.get("source", "") if recon else row.get("source_file", ""),
                "category": category,
                "category_name": family,
                "matched": matched,
                "complete": complete,
                "fuzzy": fuzzy,
            }
        )

    if not normalized:
        raise SystemExit("No functions were found in the committed inventory")

    units: list[dict[str, object]] = []
    category_rows: dict[str, list[dict[str, object]]] = defaultdict(list)
    category_names: dict[str, str] = {}

    for row in normalized:
        category = str(row["category"])
        category_rows[category].append(row)
        category_names[category] = str(row["category_name"])

        item = {
            "name": str(row["name"]),
            "size": str(row["size"]),
            "fuzzy_match_percent": float(row["fuzzy"]),
            "address": str(row["address"]),
            "metadata": {
                "demangled_name": str(row["name"]),
                "virtual_address": str(row["address"]),
            },
        }
        metadata: dict[str, object] = {
            "complete": bool(row["complete"]),
            "module_name": str(row["module"]),
            "progress_categories": [category],
        }
        if row["source"]:
            metadata["source_path"] = str(row["source"])

        units.append(
            {
                "name": f"{int(row['address']):08X} {row['name']}",
                "measures": make_measures([row]),
                "functions": [item],
                "metadata": metadata,
            }
        )

    categories = [
        {
            "id": key,
            "name": category_names[key],
            "measures": make_measures(category_rows[key]),
        }
        for key in sorted(category_rows)
    ]

    report = {
        "measures": make_measures(normalized),
        "units": units,
        "version": 2,
        "categories": categories,
    }

    args.out.parent.mkdir(parents=True, exist_ok=True)
    with args.out.open("w", encoding="utf-8") as handle:
        json.dump(report, handle, indent=2)
        handle.write("\n")

    measures = report["measures"]
    print(
        f"Wrote {args.out}: {measures['matched_functions']}/{measures['total_functions']} exact functions, "
        f"{measures['complete_units']}/{measures['total_units']} source-backed, "
        f"{measures['matched_code_percent']:.3f}% exact code bytes"
    )


if __name__ == "__main__":
    main()
