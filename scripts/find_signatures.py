#!/usr/bin/env python3
"""Find hex signatures with optional ?? wildcard bytes in a binary."""

import argparse


def parse_signature(text):
    tokens = text.replace(" ", "").lower()
    if len(tokens) % 2:
        raise ValueError("signature must contain whole bytes")
    parts = [tokens[i:i + 2] for i in range(0, len(tokens), 2)]
    return bytes(0 if part == "??" else int(part, 16) for part in parts), bytes(part != "??" for part in parts)


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("binary")
    parser.add_argument("signature", help="hex bytes; use ?? for wildcards")
    parser.add_argument("--base", type=lambda value: int(value, 0), default=0)
    args = parser.parse_args()

    pattern, mask = parse_signature(args.signature)
    data = open(args.binary, "rb").read()
    matches = []
    for offset in range(len(data) - len(pattern) + 1):
        if all(not mask[i] or data[offset + i] == pattern[i] for i in range(len(pattern))):
            matches.append(offset)
    for offset in matches:
        print(f"offset=0x{offset:08X} address=0x{args.base + offset:08X}")
    print(f"matches={len(matches)}")


if __name__ == "__main__":
    main()
