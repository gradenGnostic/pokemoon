#!/usr/bin/env python3
"""Generate one-function pipeline adapters for an ASM_MATCH-only manifest."""

from __future__ import annotations

import argparse
import csv
from pathlib import Path


def key(value: str) -> str:
    return f"0x{int(value, 16):08X}"


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("manifest", type=Path)
    parser.add_argument("--status", type=Path, default=Path("symbols/decomp_status.csv"))
    parser.add_argument("--work-dir", type=Path, default=Path(".decomp"))
    args = parser.parse_args()

    with args.manifest.open(newline="", encoding="utf-8") as handle:
        rows = list(csv.DictReader(handle))
    with args.status.open(newline="", encoding="utf-8") as handle:
        statuses = {key(row["address"]): row for row in csv.DictReader(handle)}
    if not rows:
        raise SystemExit("hybrid manifest contains no functions")

    artifacts: set[str] = set()
    for row in rows:
        address = key(row["address"])
        status = statuses.get(address)
        if status is None or status["asm_status"] != "ASM_MATCH":
            raise SystemExit(f"refusing non-ASM_MATCH function {address}")
        if status["source"] != row["source"] or status["symbol"] != row["symbol"]:
            raise SystemExit(f"manifest/status mismatch for {address}")
        if row["artifact"] in artifacts:
            raise SystemExit(f"duplicate artifact name {row['artifact']}")
        artifacts.add(row["artifact"])

    source_dir = args.work_dir / "src/code.bin"
    source_dir.mkdir(parents=True, exist_ok=True)
    for old_source in source_dir.glob("*.cpp"):
        old_source.unlink()

    root = args.work_dir.resolve().parent
    for row in rows:
        source = (root / row["source"]).resolve()
        if not source.is_file():
            raise SystemExit(f"missing source {source}")
        adapter = source_dir / f"{row['artifact']}.cpp"
        relative_source = Path("../../..") / row["source"]
        lines = []
        if row["source"].endswith(("box_accessors.cpp", "situation_accessors.cpp")):
            lines.append(f"#define POKEMOON_SPLIT_FUNCTION {key(row['address'])}")
        lines.append(f'#include "{relative_source.as_posix()}"')
        adapter.write_text("\n".join(lines) + "\n", encoding="ascii")

    symbol_path = args.work_dir / "symbols/code.bin.csv"
    symbol_path.parent.mkdir(parents=True, exist_ok=True)
    with symbol_path.open("w", newline="", encoding="ascii") as handle:
        writer = csv.writer(handle, lineterminator="\n")
        writer.writerow(["Location", "Name", "Namespace", "Mode", "Size", "Segment"])
        for row in sorted(rows, key=lambda item: int(item["address"], 16)):
            writer.writerow([
                f"{int(row['address'], 16):08X}", row["artifact"], row["namespace"], "$a",
                f"{int(row['size'], 0):08X}", ".text",
            ])
    print(f"Prepared {len(rows)} exact pipeline adapters from {args.manifest}")


if __name__ == "__main__":
    main()
