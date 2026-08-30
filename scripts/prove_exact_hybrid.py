#!/usr/bin/env python3
"""Prove all exact-hybrid objects were compiled, selected, and byte-identical."""

from __future__ import annotations

import argparse
import csv
import hashlib
import json
import subprocess
from datetime import date
from pathlib import Path


def sha256(path: Path) -> str:
    digest = hashlib.sha256()
    with path.open("rb") as handle:
        for chunk in iter(lambda: handle.read(1024 * 1024), b""):
            digest.update(chunk)
    return digest.hexdigest()


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("manifest", type=Path)
    parser.add_argument("--work-dir", type=Path, default=Path(".decomp"))
    parser.add_argument("--original-code", type=Path, default=Path("extracted/exefs/code.bin"))
    parser.add_argument("--hybrid-code", type=Path, default=Path(".decomp/out/code.bin"))
    parser.add_argument("--hybrid-image", type=Path, required=True)
    parser.add_argument("--output", type=Path, required=True)
    parser.add_argument("--mode", choices=("exact", "semantic"), default="exact")
    args = parser.parse_args()

    with args.manifest.open(newline="", encoding="utf-8") as handle:
        rows = list(csv.DictReader(handle))
    rows = [
        row for row in rows
        if row.get("module", "static.crs") == "static.crs" and row["asm_status"] == "ASM_MATCH"
    ]
    if not rows:
        raise SystemExit("manifest contains no exact static.crs functions")
    response_lines = (args.work_dir / "out/code.bin.txt").read_text(encoding="utf-8").splitlines()
    selected_objects = {Path(line.strip().strip('"')).resolve() for line in response_lines if line.strip()}
    proof_rows = []
    for row in rows:
        compiled = args.work_dir / f"build/code.bin/{row['artifact']}.o"
        split = args.work_dir / f"split/code.bin/{row['artifact']}.o"
        if not compiled.is_file():
            raise SystemExit(f"compiled object missing: {compiled}")
        if compiled.resolve() not in selected_objects:
            raise SystemExit(f"compiled object not selected: {compiled}")
        if split.resolve() in selected_objects:
            raise SystemExit(f"original split object still selected: {split}")
        compare = subprocess.run(
            ["python3", "tools/compare_function.py", str(compiled), row["symbol"], row["address"],
             "--code-bin", str(args.original_code)], text=True, capture_output=True,
        )
        if compare.returncode:
            raise SystemExit(compare.stdout + compare.stderr)
        proof_rows.append({
            "address": row["address"], "symbol": row["symbol"], "source": row["source"],
            "artifact": row["artifact"], "object_sha256": sha256(compiled),
            "asm_status": "ASM_MATCH", "selected_by_linker": True,
            "original_split_object_excluded": True,
        })

    if args.original_code.read_bytes() != args.hybrid_code.read_bytes():
        raise SystemExit("exact hybrid code.bin differs from retail")
    result = {
        "schema_version": 1,
        "build_date": date.today().isoformat(),
        "replacement_count": len(proof_rows),
        "exact_asm_count": len(proof_rows),
        "semantic_replacement_count": 0,
        "whole_code_exact": True,
        "code_sha256": sha256(args.hybrid_code),
        "image_path": str(args.hybrid_image),
        "image_sha256": sha256(args.hybrid_image),
        "runtime_test_status": "NOT_REQUIRED_YET_EXACT_ONLY",
        "functions": proof_rows,
    }
    args.output.parent.mkdir(parents=True, exist_ok=True)
    args.output.write_text(json.dumps(result, indent=2) + "\n", encoding="utf-8")
    print(f"Proved {len(proof_rows)} compiled exact replacements; code.bin remains byte-identical")


if __name__ == "__main__":
    main()
