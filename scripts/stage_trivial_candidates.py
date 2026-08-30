#!/usr/bin/env python3
"""Stage only mechanically defensible Tier 0 candidates for review."""

from __future__ import annotations

import argparse
import csv
import struct
from pathlib import Path


ARM_BX_LR = b"\x1e\xff\x2f\xe1"


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("--queue", type=Path, default=Path("analysis/function_queue.csv"))
    parser.add_argument("--code-bin", type=Path, default=Path("extracted/exefs/code.bin"))
    parser.add_argument("--output", type=Path, default=Path("generated/candidates/manifest.csv"))
    parser.add_argument("--image-base", type=lambda value: int(value, 0), default=0x00100000)
    args = parser.parse_args()

    with args.queue.open(newline="", encoding="utf-8") as handle:
        rows = list(csv.DictReader(handle))
    image = args.code_bin.read_bytes()
    candidates: list[dict[str, str]] = []
    for row in rows:
        if row["tier"] != "TIER_0" or row["memory_block"] != ".text":
            continue
        address = int(row["address"], 16)
        offset = address - args.image_base
        size = int(row["size"])
        if offset < 0 or offset + size > len(image):
            continue
        body = image[offset:offset + size]
        candidate_kind = ""
        suggested_body = ""
        target = ""
        if body == ARM_BX_LR:
            candidate_kind = "EMPTY_ARM_FUNCTION"
            suggested_body = "{}"
        elif size == 4:
            word = struct.unpack("<I", body)[0]
            if word & 0x0F000000 == 0x0A000000:
                displacement = word & 0x00FFFFFF
                if displacement & 0x00800000:
                    displacement -= 0x01000000
                target = f"0x{address + 8 + displacement * 4:08X}"
                candidate_kind = "DIRECT_ARM_BRANCH_THUNK"
                suggested_body = f"tail-call {target}"
        if not candidate_kind:
            continue
        candidates.append({
            "address": row["address"], "module": row["module"], "current_name": row["current_name"],
            "namespace": row["namespace"], "candidate_kind": candidate_kind, "target": target,
            "suggested_body": suggested_body, "provenance": row["provenance"],
            "review_status": "NEEDS_PROTOTYPE_AND_ARM_REVIEW", "promoted_source": "",
            "notes": "Staged from exact machine-code pattern; not accepted source and not an ASM_MATCH claim.",
        })

    args.output.parent.mkdir(parents=True, exist_ok=True)
    fields = ["address", "module", "current_name", "namespace", "candidate_kind", "target", "suggested_body", "provenance", "review_status", "promoted_source", "notes"]
    with args.output.open("w", newline="", encoding="utf-8") as handle:
        writer = csv.DictWriter(handle, fieldnames=fields, lineterminator="\n")
        writer.writeheader()
        writer.writerows(candidates)
    print(f"Staged {len(candidates)} conservative trivial candidates in {args.output}")


if __name__ == "__main__":
    main()
