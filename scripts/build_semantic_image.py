#!/usr/bin/env python3
"""Build a fixed-address semantic code.bin and repack it into a test CXI."""

from __future__ import annotations

import argparse
import csv
import hashlib
import json
import os
import re
import subprocess
import tempfile
from pathlib import Path


ROOT = Path(__file__).resolve().parent.parent
MANIFEST = ROOT / "config/reconstructed_functions.csv"
SYMBOLS = ROOT / "symbols/master_symbols.csv"
RETAIL = ROOT / "extracted/exefs/code.bin"
SOURCE_CXI = ROOT / "extracted/cxi/main.fully-decrypted.cxi"
IMAGE_BASE = 0x00100000
FLAGS = [
    "-std=gnu++11", "-mcpu=mpcore", "-marm", "-mfpu=vfp",
    "-mfloat-abi=softfp", "-O2", "-fno-exceptions", "-fno-rtti",
    "-fno-unwind-tables", "-fno-asynchronous-unwind-tables", "-ffunction-sections",
]


def read_csv(path: Path) -> list[dict[str, str]]:
    with path.open(newline="", encoding="utf-8") as handle:
        return list(csv.DictReader(handle))


def sha256(path: Path) -> str:
    digest = hashlib.sha256()
    with path.open("rb") as handle:
        for chunk in iter(lambda: handle.read(1024 * 1024), b""):
            digest.update(chunk)
    return digest.hexdigest()


def symbol_section(obj: Path, symbol: str) -> tuple[str, int]:
    output = subprocess.check_output(["arm-none-eabi-objdump", "-t", str(obj)], text=True)
    for line in output.splitlines():
        fields = line.split()
        if len(fields) >= 6 and fields[-1] == symbol:
            return fields[-3], int(fields[-2], 16)
    raise ValueError(f"compiled symbol missing: {symbol}")


def undefined_symbols(obj: Path) -> list[str]:
    output = subprocess.check_output(["arm-none-eabi-nm", "-u", str(obj)], text=True)
    return [line.split()[-1] for line in output.splitlines() if line.strip()]


def adapter(row: dict[str, str], path: Path) -> None:
    source = (ROOT / row["source"]).resolve()
    relative = os.path.relpath(source, path.parent).replace(os.sep, "/")
    lines = []
    if row["adapter_mode"] == "macro_select":
        lines.append(f"#define {row['adapter_macro']} {row['address']}")
    lines.append(f'#include "{relative}"')
    path.write_text("\n".join(lines) + "\n", encoding="utf-8")


def resolve_symbol(name: str, known: dict[str, int]) -> int | None:
    if name in known:
        return known[name]
    match = re.fullmatch(r"(?:FUN|DAT|LAB|PTR)_([0-9A-Fa-f]{8})", name)
    return int(match.group(1), 16) if match else None


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("--version", required=True)
    args = parser.parse_args()
    if not re.fullmatch(r"[A-Za-z0-9_.-]+", args.version):
        raise SystemExit("version must be a safe filename component")

    rows = read_csv(MANIFEST)
    selected = [
        row for row in rows
        if row["module"] == "static.crs" and row["asm_status"] != "ASM_MATCH"
        and row["semantic_status"] == "SEMANTIC_VERIFIED" and row["runtime_ready"] == "true"
    ]
    if not selected:
        raise SystemExit("no runtime-ready semantic functions")
    known: dict[str, int] = {}
    for row in read_csv(SYMBOLS):
        if row["source_file"] == "static.crs" and row["mangled_name"]:
            known.setdefault(row["mangled_name"], int(row["target_address"], 16))

    output_dir = ROOT / "build" / "semantic" / args.version
    runtime_dir = ROOT / "build" / "runtime" / f"semantic_{args.version}"
    output_dir.mkdir(parents=True, exist_ok=True)
    runtime_dir.mkdir(parents=True, exist_ok=True)
    code = bytearray(RETAIL.read_bytes())
    proof: list[dict[str, object]] = []
    with tempfile.TemporaryDirectory(prefix="pokemonmoon-semantic-") as directory:
        temporary = Path(directory)
        for row in selected:
            address = int(row["address"], 0)
            retail_size = int(row["retail_size"], 0)
            source = temporary / f"{row['artifact']}.cpp"
            obj = temporary / f"{row['artifact']}.o"
            linked = temporary / f"{row['artifact']}.elf"
            binary = temporary / f"{row['artifact']}.bin"
            linker_script = temporary / f"{row['artifact']}.ld"
            adapter(row, source)
            compile_run = subprocess.run(
                ["arm-none-eabi-g++", *FLAGS, f"-I{ROOT / 'include'}", "-c", str(source), "-o", str(obj)],
                text=True, stdout=subprocess.PIPE, stderr=subprocess.STDOUT, check=False,
            )
            if compile_run.returncode:
                raise SystemExit(f"semantic compile failed at {row['address']}:\n{compile_run.stdout}")
            section, generated_size = symbol_section(obj, row["symbol"])
            if generated_size != retail_size:
                raise SystemExit(
                    f"semantic slot size mismatch at {row['address']}: "
                    f"generated 0x{generated_size:x}, retail 0x{retail_size:x}"
                )
            definitions = []
            for symbol in undefined_symbols(obj):
                target = resolve_symbol(symbol, known)
                if target is None:
                    raise SystemExit(f"unresolved semantic symbol at {row['address']}: {symbol}")
                definitions.append(f"--defsym={symbol}=0x{target:x}")
            linker_script.write_text(
                "SECTIONS\n{\n"
                f"  . = 0x{address:x};\n"
                f"  .semantic : {{ *({section}) }}\n"
                "  /DISCARD/ : { *(*) }\n"
                "}\n",
                encoding="utf-8",
            )
            link_run = subprocess.run(
                [
                    "arm-none-eabi-ld", "--entry=0", "--no-warn-mismatch",
                    "-T", str(linker_script), *definitions,
                    str(obj), "-o", str(linked),
                ],
                text=True, stdout=subprocess.PIPE, stderr=subprocess.STDOUT, check=False,
            )
            if link_run.returncode:
                raise SystemExit(f"semantic link failed at {row['address']}:\n{link_run.stdout}")
            subprocess.run(
                ["arm-none-eabi-objcopy", "-j", ".semantic", "-O", "binary", str(linked), str(binary)],
                check=True,
            )
            replacement = binary.read_bytes()
            if len(replacement) != retail_size:
                raise SystemExit(f"linked semantic size mismatch at {row['address']}")
            offset = address - IMAGE_BASE
            original = bytes(code[offset:offset + retail_size])
            code[offset:offset + retail_size] = replacement
            proof.append({
                "address": row["address"], "name": row["name"], "artifact": row["artifact"],
                "size": retail_size, "changed_bytes": sum(a != b for a, b in zip(original, replacement)),
                "object_sha256": sha256(obj),
            })

    code_path = output_dir / "code.bin"
    code_path.write_bytes(code)
    if code_path.read_bytes() == RETAIL.read_bytes():
        raise SystemExit("semantic build is byte-identical; no runtime test image produced")
    image = runtime_dir / f"PokemonMoon_semantic_{args.version}.cxi"
    subprocess.run(
        ["python3", "scripts/repack_decrypted_cxi.py", str(SOURCE_CXI), str(code_path), str(image)],
        cwd=ROOT, check=True,
    )
    verification = output_dir / "verification.json"
    subprocess.run(
        [
            "python3", "scripts/verify_runtime_build.py", str(image), str(code_path),
            "--source-image", str(SOURCE_CXI), "--manifest", str(verification),
        ], cwd=ROOT, check=True,
    )
    metadata = {
        "version": args.version,
        "source_backed_functions": len(rows),
        "exact_replacements": sum(row["asm_status"] == "ASM_MATCH" for row in rows),
        "semantic_replacements": len(selected),
        "code_sha256": sha256(code_path), "cxi_sha256": sha256(image),
        "code_differs_from_retail": True, "runtime_test_status": "CITRA_TEST_REQUIRED",
        "functions": proof,
    }
    (output_dir / "semantic-build.json").write_text(json.dumps(metadata, indent=2) + "\n", encoding="utf-8")
    print(json.dumps({**metadata, "image": str(image.relative_to(ROOT))}, indent=2))


if __name__ == "__main__":
    main()
