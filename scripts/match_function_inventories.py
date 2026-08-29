#!/usr/bin/env python3
"""Generate conservative cross-program function-match candidates."""

import argparse
import csv
import json
from collections import defaultdict
from pathlib import Path


FIELDS = [
    "source_entry",
    "source_name",
    "source_size",
    "target_entry",
    "target_name",
    "target_size",
    "evidence",
    "confidence",
    "provenance",
    "hash",
    "auto_apply",
    "notes",
]


def read_functions(path):
    with path.open(newline="", encoding="utf-8") as source:
        return list(csv.DictReader(source))


def grouped(rows, field):
    result = defaultdict(list)
    for row in rows:
        value = row[field]
        if value:
            result[value].append(row)
    return result


def meaningful_name(row):
    return row["qualified_name"] and not row["name"].startswith("FUN_")


def candidate(source, target, evidence, confidence, provenance, hash_value, auto_apply, notes):
    return {
        "source_entry": source["entry"],
        "source_name": source["qualified_name"],
        "source_size": source["size"],
        "target_entry": target["entry"],
        "target_name": target["qualified_name"],
        "target_size": target["size"],
        "evidence": evidence,
        "confidence": confidence,
        "provenance": provenance,
        "hash": hash_value,
        "auto_apply": str(auto_apply).lower(),
        "notes": notes,
    }


def write_csv(path, rows):
    with path.open("w", newline="", encoding="utf-8") as output:
        writer = csv.DictWriter(output, fieldnames=FIELDS)
        writer.writeheader()
        writer.writerows(rows)


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("source_inventory", type=Path)
    parser.add_argument("target_inventory", type=Path)
    parser.add_argument("output_directory", type=Path)
    parser.add_argument("--provenance", default="DEMO_ORIGINAL_SYMBOL_EXACT_CODE")
    args = parser.parse_args()
    args.output_directory.mkdir(parents=True, exist_ok=True)

    sources = read_functions(args.source_inventory)
    targets = read_functions(args.target_inventory)
    source_bodies = grouped(sources, "body_sha256")
    target_bodies = grouped(targets, "body_sha256")
    source_mnemonics = grouped(sources, "mnemonic_sha256")
    target_mnemonics = grouped(targets, "mnemonic_sha256")

    exact = []
    exact_pairs = set()
    for hash_value in sorted(source_bodies.keys() & target_bodies.keys()):
        source_group = source_bodies[hash_value]
        target_group = target_bodies[hash_value]
        if len(source_group) != 1 or len(target_group) != 1:
            continue
        source = source_group[0]
        target = target_group[0]
        instruction_count = int(source["instruction_count"])
        size = int(source["size"])
        if instruction_count < 2 or size < 8:
            continue
        named_source = meaningful_name(source)
        auto_apply = (
            named_source
            and target["name"].startswith("FUN_")
            and instruction_count >= 3
            and size >= 12
        )
        exact.append(candidate(
            source,
            target,
            "unique exact function-body SHA-256",
            "EXACT_CODE_UNIQUE" if named_source else "EXACT_CODE_UNNAMED_SOURCE",
            args.provenance if named_source else "UNKNOWN",
            hash_value,
            auto_apply,
            "Automatic transfer requires a named source, unnamed target, unique hash, at least 3 instructions, and at least 12 bytes.",
        ))
        exact_pairs.add((source["entry"], target["entry"]))

    mnemonic = []
    for hash_value in sorted(source_mnemonics.keys() & target_mnemonics.keys()):
        source_group = source_mnemonics[hash_value]
        target_group = target_mnemonics[hash_value]
        if len(source_group) != 1 or len(target_group) != 1:
            continue
        source = source_group[0]
        target = target_group[0]
        if (source["entry"], target["entry"]) in exact_pairs:
            continue
        if int(source["instruction_count"]) < 4 or source["instruction_count"] != target["instruction_count"]:
            continue
        mnemonic.append(candidate(
            source,
            target,
            "unique mnemonic-sequence SHA-256 with equal instruction count",
            "CANDIDATE_ONLY",
            "UNKNOWN",
            hash_value,
            False,
            "Operand-insensitive similarity is not proof; require independent structural or semantic evidence.",
        ))

    exact.sort(key=lambda row: (row["target_entry"], row["source_entry"]))
    mnemonic.sort(key=lambda row: (row["target_entry"], row["source_entry"]))
    write_csv(args.output_directory / "exact_matches.csv", exact)
    write_csv(args.output_directory / "mnemonic_candidates.csv", mnemonic)
    summary = {
        "source_functions": len(sources),
        "target_functions": len(targets),
        "unique_exact_matches": len(exact),
        "exact_named_sources": sum(row["provenance"] != "UNKNOWN" for row in exact),
        "exact_auto_apply": sum(row["auto_apply"] == "true" for row in exact),
        "mnemonic_candidates": len(mnemonic),
    }
    (args.output_directory / "summary.json").write_text(json.dumps(summary, indent=2) + "\n", encoding="ascii")
    print(json.dumps(summary, sort_keys=True))


if __name__ == "__main__":
    main()
