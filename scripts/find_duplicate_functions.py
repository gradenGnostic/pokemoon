#!/usr/bin/env python3
"""Find exact-body and conservative mnemonic-identical function families."""

from __future__ import annotations

import argparse
import csv
from collections import defaultdict
from pathlib import Path


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("--input", type=Path, default=Path("analysis/functions.csv"))
    parser.add_argument("--output", type=Path, default=Path("analysis/duplicate_functions.csv"))
    args = parser.parse_args()

    with args.input.open(newline="", encoding="utf-8") as handle:
        rows = list(csv.DictReader(handle))
    exact: dict[str, list[dict[str, str]]] = defaultdict(list)
    mnemonic: dict[str, list[dict[str, str]]] = defaultdict(list)
    for row in rows:
        if int(row["instruction_count"]) == 0:
            continue
        exact[row["body_sha256"]].append(row)
        mnemonic[row["mnemonic_sha256"]].append(row)

    output: list[dict[str, str]] = []
    group_index = 0
    exact_groups = {digest: members for digest, members in exact.items() if len(members) > 1}
    for digest, members in sorted(exact_groups.items()):
        group_index += 1
        for row in sorted(members, key=lambda item: int(item["address"], 16)):
            output.append({
                "group_id": f"EXACT_{group_index:05d}", "match_kind": "EXACT_BYTES",
                "digest": digest, "member_count": str(len(members)), "address": row["address"],
                "module": row["module"], "size": row["size"], "current_name": row["current_name"],
                "namespace": row["namespace"],
            })

    near_index = 0
    for digest, members in sorted(mnemonic.items()):
        if len(members) <= 1 or len({row["body_sha256"] for row in members}) == 1:
            continue
        near_index += 1
        for row in sorted(members, key=lambda item: int(item["address"], 16)):
            output.append({
                "group_id": f"MNEMONIC_{near_index:05d}", "match_kind": "IDENTICAL_MNEMONICS",
                "digest": digest, "member_count": str(len(members)), "address": row["address"],
                "module": row["module"], "size": row["size"], "current_name": row["current_name"],
                "namespace": row["namespace"],
            })

    args.output.parent.mkdir(parents=True, exist_ok=True)
    fields = ["group_id", "match_kind", "digest", "member_count", "address", "module", "size", "current_name", "namespace"]
    with args.output.open("w", newline="", encoding="utf-8") as handle:
        writer = csv.DictWriter(handle, fieldnames=fields, lineterminator="\n")
        writer.writeheader()
        writer.writerows(output)
    print(f"Wrote {len(exact_groups)} exact and {near_index} mnemonic-identical groups to {args.output}")


if __name__ == "__main__":
    main()
