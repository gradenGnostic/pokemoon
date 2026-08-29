#!/usr/bin/env python3
"""Compare one compiled ARM ELF symbol with its bytes in code.bin."""

import argparse
import subprocess
import tempfile
from pathlib import Path


def parse_int(value: str) -> int:
    return int(value, 0)


def find_symbol(objdump: str, object_path: Path, symbol: str) -> tuple[str, int]:
    output = subprocess.check_output(
        [objdump, "-t", str(object_path)], text=True
    )
    for line in output.splitlines():
        fields = line.split()
        if len(fields) >= 6 and fields[-1] == symbol:
            return fields[-3], int(fields[-2], 16)
    raise SystemExit(f"symbol not found: {symbol}")


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("object", type=Path)
    parser.add_argument("symbol")
    parser.add_argument("address", type=parse_int)
    parser.add_argument("--code-bin", type=Path, default=Path("extracted/exefs/code.bin"))
    parser.add_argument("--image-base", type=parse_int, default=0x00100000)
    parser.add_argument("--objcopy", default="arm-none-eabi-objcopy")
    parser.add_argument("--objdump", default="arm-none-eabi-objdump")
    args = parser.parse_args()

    section, symbol_size = find_symbol(args.objdump, args.object, args.symbol)
    with tempfile.TemporaryDirectory() as temp_dir:
        compiled_path = Path(temp_dir) / "compiled.bin"
        subprocess.run(
            [
                args.objcopy,
                "-j",
                section,
                "-O",
                "binary",
                str(args.object),
                str(compiled_path),
            ],
            check=True,
        )
        compiled = compiled_path.read_bytes()

    if len(compiled) != symbol_size:
        raise SystemExit(
            f"section size {len(compiled)} differs from symbol size {symbol_size}; "
            "compile one function per section"
        )

    offset = args.address - args.image_base
    code = args.code_bin.read_bytes()
    if offset < 0 or offset + symbol_size > len(code):
        raise SystemExit("function range is outside code.bin")
    target = code[offset : offset + symbol_size]

    matched = sum(left == right for left, right in zip(compiled, target))
    exact = compiled == target
    first_difference = next(
        (index for index, pair in enumerate(zip(compiled, target)) if pair[0] != pair[1]),
        None,
    )

    print(f"symbol: {args.symbol}")
    print(f"address: 0x{args.address:08X}")
    print(f"size: 0x{symbol_size:X}")
    print(f"matching bytes: {matched}/{symbol_size}")
    print(f"exact match: {'yes' if exact else 'no'}")
    if first_difference is not None:
        print(f"first difference: +0x{first_difference:X}")
    return 0 if exact else 1


if __name__ == "__main__":
    raise SystemExit(main())
