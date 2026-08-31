#!/usr/bin/env python3
"""Promote proven four-byte re-agent destructors into the exact build."""

from __future__ import annotations

import csv
import json
import re
import sqlite3
import subprocess
import tempfile
from pathlib import Path


ROOT = Path(__file__).resolve().parent.parent
DB = ROOT / "analysis/reagent/queue.sqlite3"
STAGED = ROOT / "generated/candidates/manifest.csv"
SYMBOLS = ROOT / "symbols/master_symbols.csv"
MANIFEST = ROOT / "config/reconstructed_functions.csv"
SOURCE = ROOT / "src/reagent/empty_destructors.cpp"
RESULTS = ROOT / "analysis/reagent/promotion_results.csv"
FLAGS = [
    "-std=gnu++11", "-mcpu=mpcore", "-marm", "-mfpu=vfp",
    "-mfloat-abi=softfp", "-O2", "-fno-exceptions", "-fno-rtti",
    "-fno-unwind-tables", "-fno-asynchronous-unwind-tables",
    "-ffunction-sections",
]


def read_csv(path: Path) -> list[dict[str, str]]:
    with path.open(newline="", encoding="utf-8") as handle:
        return list(csv.DictReader(handle))


def write_csv(path: Path, rows: list[dict[str, str]], fields: list[str]) -> None:
    path.parent.mkdir(parents=True, exist_ok=True)
    temporary = path.with_suffix(path.suffix + ".tmp")
    with temporary.open("w", newline="", encoding="utf-8") as handle:
        writer = csv.DictWriter(handle, fieldnames=fields, lineterminator="\n")
        writer.writeheader()
        writer.writerows(rows)
    temporary.replace(path)


def source_text(rows: list[dict[str, str]]) -> str:
    lines = ["// Exact four-byte destructors selected independently by address.", ""]
    for row in rows:
        parts = row["qualified_name"].split("::")
        class_name = parts[-2]
        namespaces = parts[:-2]
        lines.append(
            f"#if !defined(POKEMOON_SPLIT_FUNCTION) || "
            f"POKEMOON_SPLIT_FUNCTION == {row['address']}"
        )
        for namespace in namespaces:
            lines.append(f"namespace {namespace} {{")
        lines.extend([
            f"class {class_name} {{",
            "public:",
            f"    ~{class_name}();",
            "};",
            "",
            f"{class_name}::~{class_name}() {{}}",
        ])
        for namespace in reversed(namespaces):
            lines.append(f"}} // namespace {namespace}")
        lines.extend(["#endif", ""])
    return "\n".join(lines)


def candidates() -> list[dict[str, str]]:
    staged = {
        row["address"].upper(): row
        for row in read_csv(STAGED)
        if row["candidate_kind"] == "EMPTY_ARM_FUNCTION"
    }
    symbols = {
        row["target_address"].upper(): row
        for row in read_csv(SYMBOLS)
        if row["source_file"] == "static.crs"
        and row["provenance"] == "RETAIL_ORIGINAL_SYMBOL"
        and row["kind"] == "FUNCTION"
    }
    existing = {row["address"].upper() for row in read_csv(MANIFEST)}
    connection = sqlite3.connect(DB)
    connection.row_factory = sqlite3.Row
    queue = connection.execute(
        "SELECT address, qualified_name, size, source_candidate FROM targets "
        "WHERE status='SEMANTIC' AND size=4 AND current_name LIKE '~%' "
        "ORDER BY queue_order"
    ).fetchall()
    connection.close()

    selected: list[dict[str, str]] = []
    for item in queue:
        address = item["address"].upper()
        symbol = symbols.get(address)
        qualified = item["qualified_name"]
        if address in existing or address not in staged or symbol is None:
            continue
        if "<" in qualified or not symbol["mangled_name"].endswith("D1Ev"):
            continue
        parts = qualified.split("::")
        if len(parts) < 2 or parts[-1] != f"~{parts[-2]}":
            continue
        if not all(re.fullmatch(r"[A-Za-z_]\w*", part) for part in parts[:-1]):
            continue
        candidate = ROOT / item["source_candidate"]
        text = candidate.read_text(encoding="utf-8")
        if "return;" not in text or any(token in text for token in ("FUN_", "DAT_", "*(", "Delete")):
            continue
        selected.append({
            "address": address,
            "qualified_name": qualified,
            "symbol": symbol["mangled_name"],
            "provenance": symbol["provenance"],
        })
    return selected


def prescreen(rows: list[dict[str, str]]) -> tuple[list[dict[str, str]], list[dict[str, str]]]:
    passed: list[dict[str, str]] = []
    results: list[dict[str, str]] = []
    with tempfile.TemporaryDirectory(prefix="reagent-promote-") as directory:
        temporary = Path(directory)
        source = temporary / "empty_destructors.cpp"
        source.write_text(source_text(rows), encoding="utf-8")
        for row in rows:
            obj = temporary / f"{row['address'][2:].lower()}.o"
            compile_run = subprocess.run(
                [
                    "arm-none-eabi-g++", *FLAGS,
                    f"-DPOKEMOON_SPLIT_FUNCTION={row['address']}",
                    "-c", str(source), "-o", str(obj),
                ],
                text=True, stdout=subprocess.PIPE, stderr=subprocess.STDOUT, check=False,
            )
            compare_output = ""
            exact = False
            if compile_run.returncode == 0:
                compare_run = subprocess.run(
                    [
                        "python3", "tools/compare_function.py", str(obj), row["symbol"],
                        row["address"], "--code-bin", "extracted/exefs/code.bin",
                    ],
                    cwd=ROOT, text=True, stdout=subprocess.PIPE,
                    stderr=subprocess.STDOUT, check=False,
                )
                compare_output = compare_run.stdout
                exact = compare_run.returncode == 0 and "size: 0x4\n" in compare_output
            detail = (compile_run.stdout + compare_output).strip().replace("\n", " | ")
            result = {**row, "result": "ASM_MATCH" if exact else "REJECTED", "details": detail}
            results.append(result)
            if exact:
                passed.append(row)
    return passed, results


def promote(rows: list[dict[str, str]]) -> None:
    if not rows:
        return
    SOURCE.parent.mkdir(parents=True, exist_ok=True)
    source_temp = SOURCE.with_suffix(".cpp.tmp")
    source_temp.write_text(source_text(rows), encoding="utf-8")
    source_temp.replace(SOURCE)

    manifest_rows = read_csv(MANIFEST)
    fields = list(manifest_rows[0])
    for row in rows:
        leaf = row["qualified_name"].split("::")[-2]
        suffix = row["address"][2:].lower()
        artifact = f"{leaf}Dtor_{suffix}"
        manifest_rows.append({
            "address": row["address"],
            "retail_size": "0x04",
            "module": "static.crs",
            "binary": "code.bin",
            "name": row["qualified_name"] + "()",
            "namespace": "::".join(row["qualified_name"].split("::")[:-1]),
            "source": str(SOURCE.relative_to(ROOT)),
            "symbol": row["symbol"],
            "artifact": artifact,
            "adapter_mode": "macro_select",
            "adapter_macro": "POKEMOON_SPLIT_FUNCTION",
            "adapter": f"src/code.bin/{artifact}.cpp",
            "object": f"build/code.bin/{artifact}.o",
            "source_status": "SOURCE_WRITTEN",
            "compile_status": "COMPILES",
            "semantic_status": "SEMANTIC_VERIFIED",
            "asm_status": "ASM_MATCH",
            "runtime_ready": "true",
            "runtime_tested": "false",
            "subsystem": "reagent",
            "provenance": row["provenance"],
            "compiler": "arm-none-eabi-g++ 16.2.0",
            "matched_bytes": "4",
            "total_bytes": "4",
            "notes": "Exact empty ARM destructor; promoted from staged re-agent candidate",
        })
    write_csv(MANIFEST, manifest_rows, fields)


def main() -> None:
    selected = candidates()
    passed, results = prescreen(selected)
    write_csv(RESULTS, results, ["address", "qualified_name", "symbol", "provenance", "result", "details"])
    promote(passed)
    print(json.dumps({"screened": len(selected), "promoted": len(passed), "rejected": len(results) - len(passed)}))


if __name__ == "__main__":
    main()
