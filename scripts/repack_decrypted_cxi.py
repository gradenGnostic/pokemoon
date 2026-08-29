#!/usr/bin/env python3
"""Copy a decrypted CXI and replace its fixed-size ExeFS .code section."""

import argparse
import hashlib
import os
import struct
import subprocess
from pathlib import Path


MEDIA_UNIT = 0x200
EXEFS_HEADER_SIZE = 0x200
NCCH_EXEFS_HASH_OFFSET = 0x1C0


def read_u32(source, offset):
    source.seek(offset)
    data = source.read(4)
    if len(data) != 4:
        raise ValueError(f"Unable to read u32 at 0x{offset:x}")
    return struct.unpack("<I", data)[0]


def read_ncch_layout(path):
    with path.open("rb") as source:
        source.seek(0x100)
        if source.read(4) != b"NCCH":
            raise ValueError(f"{path} is not an NCCH/CXI image")
        source.seek(0x188)
        flags = source.read(8)
        if len(flags) != 8:
            raise ValueError("Truncated NCCH flags")
        block_size = 1 << (flags[6] + 9)
        exefs_offset = read_u32(source, 0x1A0) * block_size
        exefs_size = read_u32(source, 0x1A4) * block_size
        exefs_hash_size = read_u32(source, 0x1A8) * block_size
    return exefs_offset, exefs_size, exefs_hash_size


def read_exefs_entries(source, exefs_offset):
    entries = []
    source.seek(exefs_offset)
    header = source.read(EXEFS_HEADER_SIZE)
    if len(header) != EXEFS_HEADER_SIZE:
        raise ValueError("Truncated ExeFS header")
    for index in range(8):
        entry_offset = index * 0x10
        raw_name, offset, size = struct.unpack_from("<8sII", header, entry_offset)
        name = raw_name.split(b"\0", 1)[0].decode("ascii", errors="strict")
        if name:
            entries.append({"index": index, "name": name, "offset": offset, "size": size})
    return header, entries


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("source_cxi", type=Path)
    parser.add_argument("replacement_code", type=Path)
    parser.add_argument("output_cxi", type=Path)
    args = parser.parse_args()

    source = args.source_cxi.resolve()
    code_path = args.replacement_code.resolve()
    output = args.output_cxi.resolve()
    if source == output:
        raise SystemExit("Refusing to modify the source CXI in place")
    if not source.is_file() or not code_path.is_file():
        raise SystemExit("Source CXI and replacement code must exist")

    exefs_offset, exefs_size, exefs_hash_size = read_ncch_layout(source)
    with source.open("rb") as input_file:
        exefs_header, entries = read_exefs_entries(input_file, exefs_offset)
    code_entries = [entry for entry in entries if entry["name"] == ".code"]
    if len(code_entries) != 1:
        raise SystemExit(f"Expected one .code entry, found {len(code_entries)}")
    code_entry = code_entries[0]
    replacement = code_path.read_bytes()
    if len(replacement) != code_entry["size"]:
        raise SystemExit(
            f"NOT_RUNTIME_READY: replacement is {len(replacement)} bytes; "
            f"fixed .code allocation is {code_entry['size']} bytes"
        )
    if EXEFS_HEADER_SIZE + code_entry["offset"] + code_entry["size"] > exefs_size:
        raise SystemExit("ExeFS .code entry extends beyond the declared ExeFS region")

    old_code_hash = hashlib.sha256()
    with source.open("rb") as input_file:
        input_file.seek(exefs_offset + EXEFS_HEADER_SIZE + code_entry["offset"])
        remaining = code_entry["size"]
        while remaining:
            chunk = input_file.read(min(1024 * 1024, remaining))
            if not chunk:
                raise SystemExit("Truncated source .code payload")
            old_code_hash.update(chunk)
            remaining -= len(chunk)
    old_digest = old_code_hash.digest()
    new_digest = hashlib.sha256(replacement).digest()

    hash_matches = []
    for slot in range(8):
        start = 0x100 + slot * 0x20
        if exefs_header[start:start + 0x20] == old_digest:
            hash_matches.append(slot)
    if len(hash_matches) != 1:
        raise SystemExit(f"Expected one matching .code hash slot, found {len(hash_matches)}")
    hash_slot = hash_matches[0]

    output.parent.mkdir(parents=True, exist_ok=True)
    subprocess.run(
        ["cp", "--reflink=auto", "--sparse=always", "--preserve=mode,timestamps", str(source), str(output)],
        check=True,
    )
    with output.open("r+b") as result:
        result.seek(exefs_offset + EXEFS_HEADER_SIZE + code_entry["offset"])
        result.write(replacement)
        result.seek(exefs_offset + 0x100 + hash_slot * 0x20)
        result.write(new_digest)
        result.flush()

        result.seek(exefs_offset)
        superblock = result.read(exefs_hash_size)
        if len(superblock) != exefs_hash_size:
            raise SystemExit("Truncated ExeFS superblock")
        result.seek(NCCH_EXEFS_HASH_OFFSET)
        result.write(hashlib.sha256(superblock).digest())
        result.flush()
        os.fsync(result.fileno())

    print(f"output={output}")
    print(f"exefs_offset=0x{exefs_offset:x}")
    print(f"code_offset=0x{exefs_offset + EXEFS_HEADER_SIZE + code_entry['offset']:x}")
    print(f"code_size={code_entry['size']}")
    print(f"old_code_sha256={old_digest.hex()}")
    print(f"new_code_sha256={new_digest.hex()}")
    print(f"exefs_hash_slot={hash_slot}")


if __name__ == "__main__":
    main()
