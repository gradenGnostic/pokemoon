#!/usr/bin/env python3
"""Verify code placement and permitted changes in a decrypted runtime CXI."""

import argparse
import hashlib
import json
from pathlib import Path

from repack_decrypted_cxi import (
    EXEFS_HEADER_SIZE,
    NCCH_EXEFS_HASH_OFFSET,
    read_exefs_entries,
    read_ncch_layout,
)


def sha256_file(path):
    digest = hashlib.sha256()
    with path.open("rb") as source:
        while chunk := source.read(4 * 1024 * 1024):
            digest.update(chunk)
    return digest.hexdigest()


def compare_outside_ranges(source_path, output_path, allowed_ranges):
    allowed_ranges = sorted(allowed_ranges)
    differences = 0
    first_difference = None
    offset = 0
    with source_path.open("rb") as source, output_path.open("rb") as output:
        while True:
            left = source.read(4 * 1024 * 1024)
            right = output.read(4 * 1024 * 1024)
            if not left and not right:
                break
            if len(left) != len(right):
                raise ValueError("Source and output image sizes differ")
            if left != right:
                for index, (a, b) in enumerate(zip(left, right)):
                    if a == b:
                        continue
                    address = offset + index
                    if not any(start <= address < end for start, end in allowed_ranges):
                        differences += 1
                        if first_difference is None:
                            first_difference = address
            offset += len(left)
    return differences, first_difference


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("image", type=Path)
    parser.add_argument("expected_code", type=Path)
    parser.add_argument("--source-image", type=Path)
    parser.add_argument("--manifest", type=Path)
    args = parser.parse_args()

    image = args.image.resolve()
    expected_code = args.expected_code.read_bytes()
    exefs_offset, exefs_size, exefs_hash_size = read_ncch_layout(image)
    with image.open("rb") as source:
        exefs_header, entries = read_exefs_entries(source, exefs_offset)
        code_entry = next(entry for entry in entries if entry["name"] == ".code")
        code_offset = exefs_offset + EXEFS_HEADER_SIZE + code_entry["offset"]
        source.seek(code_offset)
        actual_code = source.read(code_entry["size"])
        source.seek(exefs_offset)
        superblock = source.read(exefs_hash_size)
        source.seek(NCCH_EXEFS_HASH_OFFSET)
        stored_superblock_hash = source.read(0x20)

    code_hash = hashlib.sha256(actual_code).digest()
    matching_slots = []
    for slot in range(8):
        start = 0x100 + slot * 0x20
        if exefs_header[start:start + 0x20] == code_hash:
            matching_slots.append(slot)

    result = {
        "image": str(image),
        "image_size": image.stat().st_size,
        "image_sha256": sha256_file(image),
        "exefs_offset": f"0x{exefs_offset:x}",
        "exefs_size": exefs_size,
        "code_offset": f"0x{code_offset:x}",
        "code_size": code_entry["size"],
        "code_sha256": code_hash.hex(),
        "code_matches_expected": actual_code == expected_code,
        "code_hash_slots": matching_slots,
        "exefs_superblock_hash_valid": hashlib.sha256(superblock).digest() == stored_superblock_hash,
    }
    if args.source_image:
        source_image = args.source_image.resolve()
        source_image_sha256 = sha256_file(source_image)
        hash_slot_ranges = [(exefs_offset + 0x100 + slot * 0x20, exefs_offset + 0x120 + slot * 0x20) for slot in matching_slots]
        allowed_ranges = [
            (code_offset, code_offset + code_entry["size"]),
            (NCCH_EXEFS_HASH_OFFSET, NCCH_EXEFS_HASH_OFFSET + 0x20),
            *hash_slot_ranges,
        ]
        outside_differences, first_difference = compare_outside_ranges(source_image, image, allowed_ranges)
        result.update({
            "source_image": str(source_image),
            "source_image_size": source_image.stat().st_size,
            "source_image_sha256": source_image_sha256,
            "differences_outside_allowed_ranges": outside_differences,
            "first_disallowed_difference": None if first_difference is None else f"0x{first_difference:x}",
            "whole_image_matches_source": result["image_sha256"] == source_image_sha256,
        })

    failures = []
    if not result["code_matches_expected"]:
        failures.append("embedded code does not match expected code.bin")
    if len(matching_slots) != 1:
        failures.append("embedded code hash does not occupy exactly one ExeFS hash slot")
    if not result["exefs_superblock_hash_valid"]:
        failures.append("NCCH ExeFS superblock hash is invalid")
    if result.get("differences_outside_allowed_ranges", 0):
        failures.append("bytes outside permitted replacement/hash ranges changed")
    result["valid"] = not failures
    result["failures"] = failures

    output = json.dumps(result, indent=2) + "\n"
    if args.manifest:
        args.manifest.parent.mkdir(parents=True, exist_ok=True)
        args.manifest.write_text(output, encoding="utf-8")
    print(output, end="")
    if failures:
        raise SystemExit(1)


if __name__ == "__main__":
    main()
