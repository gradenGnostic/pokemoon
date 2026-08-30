#!/usr/bin/env python3
"""Compile each source once and compare every declared function with retail ARM."""

from __future__ import annotations

import argparse
import csv
import re
import subprocess
from collections import defaultdict
from pathlib import Path


COMPILE_FLAGS = [
    "-std=gnu++11", "-mcpu=mpcore", "-marm", "-mfpu=vfp",
    "-mfloat-abi=softfp", "-O2", "-fno-exceptions", "-fno-rtti",
    "-fno-unwind-tables", "-fno-asynchronous-unwind-tables",
    "-ffunction-sections",
]


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("manifest", type=Path)
    parser.add_argument("--compiler", default="arm-none-eabi-g++")
    parser.add_argument("--code-bin", type=Path, default=Path("extracted/exefs/code.bin"))
    parser.add_argument("--object-dir", type=Path, default=Path(".decomp/phase3/objects"))
    parser.add_argument("--output", type=Path, default=Path("analysis/batch_results.csv"))
    args = parser.parse_args()

    with args.manifest.open(newline="", encoding="utf-8") as handle:
        rows = list(csv.DictReader(handle))
    if not rows:
        raise SystemExit("batch manifest contains no functions")

    by_source: dict[str, list[dict[str, str]]] = defaultdict(list)
    for row in rows:
        by_source[row["source"]].append(row)
    args.object_dir.mkdir(parents=True, exist_ok=True)
    args.output.parent.mkdir(parents=True, exist_ok=True)

    results: list[dict[str, str]] = []
    failed = False
    for source, source_rows in by_source.items():
        source_path = Path(source)
        object_path = args.object_dir / f"{source_path.stem}.o"
        compile_run = subprocess.run(
            [args.compiler, *COMPILE_FLAGS, "-Iinclude", "-c", str(source_path), "-o", str(object_path)],
            text=True, capture_output=True,
        )
        if compile_run.returncode:
            failed = True
            message = (compile_run.stderr or compile_run.stdout).strip().replace("\n", " | ")
            for row in source_rows:
                results.append({**row, "object": str(object_path), "compile_status": "COMPILE_FAILED",
                    "asm_status": "BLOCKED", "generated_size": "", "matched_bytes": "",
                    "compared_bytes": "", "first_difference": "", "details": message})
            continue

        for row in source_rows:
            compare_run = subprocess.run(
                ["python3", "tools/compare_function.py", str(object_path), row["symbol"], row["address"],
                 "--code-bin", str(args.code_bin)],
                text=True, capture_output=True,
            )
            output = (compare_run.stdout + compare_run.stderr).strip()
            size_match = re.search(r"^size: 0x([0-9A-Fa-f]+)$", output, re.MULTILINE)
            bytes_match = re.search(r"^matching bytes: (\d+)/(\d+)$", output, re.MULTILINE)
            difference_match = re.search(r"^first difference: (.+)$", output, re.MULTILINE)
            exact = compare_run.returncode == 0
            generated_size = int(size_match.group(1), 16) if size_match else 0
            matched_bytes = int(bytes_match.group(1)) if bytes_match else 0
            original_size = int(row["size"], 0)
            near = not exact and generated_size == original_size and matched_bytes * 10 >= original_size * 9
            failed |= not exact
            results.append({
                **row,
                "object": str(object_path),
                "compile_status": "COMPILES",
                "asm_status": "ASM_MATCH" if exact else "ASM_NEAR_MATCH" if near else "ASM_DIFFERENT",
                "generated_size": str(generated_size) if size_match else "",
                "matched_bytes": bytes_match.group(1) if bytes_match else "",
                "compared_bytes": bytes_match.group(2) if bytes_match else "",
                "first_difference": difference_match.group(1) if difference_match else "",
                "details": output.replace("\n", " | "),
            })

    fields = list(rows[0]) + ["object", "compile_status", "asm_status", "generated_size",
        "matched_bytes", "compared_bytes", "first_difference", "details"]
    with args.output.open("w", newline="", encoding="utf-8") as handle:
        writer = csv.DictWriter(handle, fieldnames=fields, lineterminator="\n")
        writer.writeheader()
        writer.writerows(results)
    exact_count = sum(row["asm_status"] == "ASM_MATCH" for row in results)
    near_count = sum(row["asm_status"] == "ASM_NEAR_MATCH" for row in results)
    different_count = sum(row["asm_status"] == "ASM_DIFFERENT" for row in results)
    print(f"Verified {len(results)} functions: {exact_count} ASM_MATCH, {near_count} ASM_NEAR_MATCH, "
          f"{different_count} ASM_DIFFERENT; output {args.output}")
    if failed:
        raise SystemExit(1)


if __name__ == "__main__":
    main()
