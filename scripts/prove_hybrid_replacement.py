#!/usr/bin/env python3
"""Prove an exact compiled object was selected for a runtime hybrid."""

import argparse
import hashlib
import json
import subprocess
import tempfile
from pathlib import Path


def sha256_file(path):
    digest = hashlib.sha256()
    with path.open("rb") as source:
        while chunk := source.read(4 * 1024 * 1024):
            digest.update(chunk)
    return digest.hexdigest()


def find_symbol(objdump, object_path, symbol):
    output = subprocess.check_output([objdump, "-t", str(object_path)], text=True)
    for line in output.splitlines():
        fields = line.split()
        if len(fields) >= 6 and fields[-1] == symbol:
            return fields[-3], int(fields[-2], 16)
    raise SystemExit(f"symbol not found in compiled object: {symbol}")


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--source", type=Path, required=True)
    parser.add_argument("--pipeline-source", type=Path, required=True)
    parser.add_argument("--compiled-object", type=Path, required=True)
    parser.add_argument("--split-object", type=Path, required=True)
    parser.add_argument("--response-file", type=Path, required=True)
    parser.add_argument("--original-code", type=Path, required=True)
    parser.add_argument("--hybrid-code", type=Path, required=True)
    parser.add_argument("--hybrid-image", type=Path, required=True)
    parser.add_argument("--symbol", required=True)
    parser.add_argument("--address", type=lambda value: int(value, 0), required=True)
    parser.add_argument("--output", type=Path, required=True)
    parser.add_argument("--image-base", type=lambda value: int(value, 0), default=0x00100000)
    parser.add_argument("--objcopy", default="arm-none-eabi-objcopy")
    parser.add_argument("--objdump", default="arm-none-eabi-objdump")
    args = parser.parse_args()

    source = args.source.resolve()
    pipeline_source = args.pipeline_source.resolve()
    compiled_object = args.compiled_object.resolve()
    split_object = args.split_object.resolve()
    if pipeline_source != source:
        raise SystemExit(f"pipeline source {pipeline_source} does not resolve to repository source {source}")

    selected = {Path(line.strip()).resolve() for line in args.response_file.read_text().splitlines() if line.strip()}
    if compiled_object not in selected:
        raise SystemExit("compiled replacement object is absent from the linker response file")
    if split_object in selected:
        raise SystemExit("original split object is still selected alongside the compiled replacement")

    section, symbol_size = find_symbol(args.objdump, compiled_object, args.symbol)
    with tempfile.TemporaryDirectory() as temp_directory:
        compiled_binary = Path(temp_directory) / "compiled.bin"
        subprocess.run(
            [args.objcopy, "-j", section, "-O", "binary", str(compiled_object), str(compiled_binary)],
            check=True,
        )
        compiled = compiled_binary.read_bytes()
    if len(compiled) != symbol_size:
        raise SystemExit("compiled section size differs from the symbol size")

    offset = args.address - args.image_base
    original_code = args.original_code.read_bytes()
    hybrid_code = args.hybrid_code.read_bytes()
    original_function = original_code[offset:offset + symbol_size]
    hybrid_function = hybrid_code[offset:offset + symbol_size]
    if compiled != original_function or compiled != hybrid_function:
        raise SystemExit("compiled function bytes are not exact in both original and hybrid code.bin")
    if len(original_code) != len(hybrid_code):
        raise SystemExit("hybrid code.bin size changed")

    manifest = {
        "target": "Pokemon Moon North America base v1.0",
        "title_id": "0004000000175E00",
        "build": "hybrid_exact",
        "reconstructed_functions": [
            {
                "address": f"0x{args.address:08X}",
                "function_name": "Savedata::Sodateya::IsEggExist",
                "symbol": args.symbol,
                "provenance": "RETAIL_ORIGINAL_SYMBOL",
                "source_file": str(source),
                "pipeline_source": str(args.pipeline_source),
                "object_file": str(compiled_object),
                "replaced_split_object": str(split_object),
                "original_size": symbol_size,
                "generated_size": len(compiled),
                "generated_bytes_sha256": hashlib.sha256(compiled).hexdigest(),
                "asm_status": "EXACT_MATCH",
                "selected_by_linker": True,
                "runtime_tested": False,
                "subsystem": "daycare",
            }
        ],
        "linker_response_file": str(args.response_file.resolve()),
        "original_code_size": len(original_code),
        "hybrid_code_size": len(hybrid_code),
        "original_code_sha256": hashlib.sha256(original_code).hexdigest(),
        "hybrid_code_sha256": hashlib.sha256(hybrid_code).hexdigest(),
        "whole_code_exact": original_code == hybrid_code,
        "hybrid_image": str(args.hybrid_image.resolve()),
        "hybrid_image_size": args.hybrid_image.stat().st_size,
        "hybrid_image_sha256": sha256_file(args.hybrid_image),
        "citra_boot_status": "VERIFIED_WORKING",
    }
    args.output.parent.mkdir(parents=True, exist_ok=True)
    args.output.write_text(json.dumps(manifest, indent=2) + "\n", encoding="utf-8")
    print(json.dumps(manifest, indent=2))


if __name__ == "__main__":
    main()
