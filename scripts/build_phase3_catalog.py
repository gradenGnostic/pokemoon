#!/usr/bin/env python3
"""Join the one-pass Ghidra export with provenance and decompilation status."""

from __future__ import annotations

import argparse
import csv
from pathlib import Path


PROVENANCE_PRIORITY = {
    "RETAIL_ORIGINAL_SYMBOL": 5,
    "RESEARCHER_SEMANTIC": 4,
    "RESEARCHER_NAME": 4,
    "AI_SEMANTIC": 3,
    "AI_SEMANTIC_NAME": 3,
    "GENERATED_TRIVIAL_NAME": 2,
    "UNKNOWN": 1,
}


def address_key(value: str) -> str:
    return f"0x{int(value, 16):08X}"


def read_rows(path: Path) -> list[dict[str, str]]:
    with path.open(newline="", encoding="utf-8") as handle:
        return list(csv.DictReader(handle))


def classify_family(name: str, namespace: str) -> str:
    qualified = f"{namespace}::{name}".lower()
    runtime_tokens = (
        "__aeabi", "operator new", "operator delete", "memcpy", "memmove",
        "memset", "memcmp", "strlen", "snprintf", "printf", "__cxa",
    )
    sdk_tokens = ("nn::", "nngx", "ctr::", "svc", "fsuser", "hiduser", "soc::")
    if any(token in qualified for token in runtime_tokens):
        return "RUNTIME"
    if any(token in qualified for token in sdk_tokens):
        return "SDK"
    if "gfl2::" in qualified or "gfl::" in qualified:
        return "GFL2"
    if not name.startswith(("FUN_", "thunk_FUN_", "LAB_")):
        return "GAME"
    return "UNKNOWN"


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("--ghidra", type=Path, default=Path("analysis/functions_ghidra.csv"))
    parser.add_argument("--master", type=Path, default=Path("symbols/master_symbols.csv"))
    parser.add_argument("--status", type=Path, default=Path("symbols/decomp_status.csv"))
    parser.add_argument("--output", type=Path, default=Path("analysis/functions.csv"))
    args = parser.parse_args()

    provenance: dict[str, dict[str, str]] = {}
    for row in read_rows(args.master):
        if not row["target_address"] or row["kind"] != "FUNCTION":
            continue
        key = address_key(row["target_address"])
        old = provenance.get(key)
        if old is None or PROVENANCE_PRIORITY.get(row["provenance"], 0) > PROVENANCE_PRIORITY.get(old["provenance"], 0):
            provenance[key] = row

    statuses = {address_key(row["address"]): row for row in read_rows(args.status)}
    output_rows: list[dict[str, str]] = []
    for row in read_rows(args.ghidra):
        key = address_key(row["address"])
        evidence = provenance.get(key, {})
        status = statuses.get(key, {})
        current_name = row["current_name"]
        row["address"] = key
        row.update({
            "provenance": status.get("provenance") or evidence.get("provenance", "UNKNOWN"),
            "confidence": evidence.get("confidence", ""),
            "evidence_type": evidence.get("evidence_type", ""),
            "source_exists": "true" if status else "false",
            "source_file": status.get("source", ""),
            "source_status": status.get("source_status", ""),
            "compile_status": status.get("compile_status", ""),
            "semantic_status": status.get("semantic_status", ""),
            "asm_status": status.get("asm_status", ""),
            "runtime_status": status.get("runtime_status", ""),
            "subsystem": status.get("subsystem", ""),
            "code_family": classify_family(current_name, row["namespace"]),
        })
        output_rows.append(row)

    if not output_rows:
        raise SystemExit("Ghidra export contained no functions")
    args.output.parent.mkdir(parents=True, exist_ok=True)
    with args.output.open("w", newline="", encoding="utf-8") as handle:
        writer = csv.DictWriter(handle, fieldnames=list(output_rows[0]), lineterminator="\n")
        writer.writeheader()
        writer.writerows(output_rows)
    print(f"Wrote {len(output_rows)} functions to {args.output}")


if __name__ == "__main__":
    main()
