#!/usr/bin/env python3
"""ARM-only preflight and conservative re-agent target selection."""

from __future__ import annotations

import argparse
import csv
import hashlib
import json
import shutil
import subprocess
from pathlib import Path


ROOT = Path(__file__).resolve().parents[2]
PROFILE = ROOT / "config/reagent_arm_profile.json"
OBSERVED = ROOT / "analysis/reagent_architecture.json"
QUEUE = ROOT / "analysis/function_queue.csv"
CODE = ROOT / "extracted/exefs/code.bin"
EXPORT_DIR = ROOT / ".ghidra-exports/static.crs"
TARGETS = ROOT / "reports/re-agent/targets.csv"
SOURCE_CONTEXT = ROOT / "reports/re-agent/source-context"
EXPECTED_CODE_SHA256 = "fbe0ce6da21542542f49645fff78ba1b7e5e7cc172ce4daceeb5c26ab54adba1"


def load_json(path: Path) -> dict[str, object]:
    return json.loads(path.read_text(encoding="utf-8"))


def preflight() -> None:
    profile = load_json(PROFILE)
    observed = load_json(OBSERVED)
    expected = {
        "processor": "ARM",
        "ghidra_language": "ARM:LE:32:v7",
        "endianness": "little",
        "address_size_bits": 32,
        "compiler_target": "arm-none-eabi",
        "module": "static.crs",
        "program": "/romfs/static.crs",
    }
    for key, value in expected.items():
        if profile.get(key) != value:
            raise SystemExit(f"ARM profile mismatch for {key}: {profile.get(key)!r} != {value!r}")
    observed_pairs = {
        "processor": "ARM",
        "language_id": "ARM:LE:32:v7",
        "endian": "little",
        "address_size_bits": 32,
        "program": "/romfs/static.crs",
    }
    for key, value in observed_pairs.items():
        if observed.get(key) != value:
            raise SystemExit(f"Observed Ghidra architecture mismatch for {key}: {observed.get(key)!r}")
    compiler = subprocess.run(
        ["arm-none-eabi-g++", "-dumpmachine"],
        check=True,
        text=True,
        stdout=subprocess.PIPE,
    ).stdout.strip()
    if compiler != "arm-none-eabi":
        raise SystemExit(f"Unexpected compiler target: {compiler}")
    digest = hashlib.sha256(CODE.read_bytes()).hexdigest()
    if digest != EXPECTED_CODE_SHA256:
        raise SystemExit(f"Retail code.bin hash mismatch: {digest}")
    exported_architecture = EXPORT_DIR / "_architecture.json"
    if exported_architecture.exists():
        exported = load_json(exported_architecture)
        for key, value in observed_pairs.items():
            if key == "program":
                continue
            if exported.get(key) != value:
                raise SystemExit(f"Exported Ghidra architecture mismatch for {key}: {exported.get(key)!r}")
        if exported.get("program") != "/romfs/static.crs":
            raise SystemExit(f"Exported wrong Ghidra program: {exported.get('program')!r}")
    print("ARM preflight passed: ARM:LE:32:v7, arm-none-eabi, retail code.bin verified")


def validate_target(address: str) -> None:
    preflight()
    normalized = f"0x{int(address, 16):08X}"
    if not TARGETS.exists():
        raise SystemExit("Target manifest is missing; run make reagent-select")
    with TARGETS.open(newline="", encoding="utf-8") as handle:
        targets = {row["address"]: row for row in csv.DictReader(handle)}
    if normalized not in targets:
        raise SystemExit(f"Refusing unselected target {normalized}; run make reagent-select")
    evidence = EXPORT_DIR / f"{normalized[2:].lower()}.json"
    if not evidence.exists():
        raise SystemExit(f"ARM evidence is missing for {normalized}; run make reagent-export")
    if not (SOURCE_CONTEXT / "src").is_dir() or not (SOURCE_CONTEXT / "include").is_dir():
        raise SystemExit("Isolated source context is missing; run make reagent-select")
    data = load_json(evidence)
    assembly = "\n".join(str(line).lower() for line in data.get("assembly", []))
    forbidden = (" eax", " ebx", " ecx", " edx", " rax", " rbx", " rcx", " rdx", "call ")
    if any(token in f" {assembly}" for token in forbidden):
        raise SystemExit(f"Refusing x86-like evidence for {normalized}")
    print(f"Eligible ARM target verified: {normalized} {targets[normalized]['qualified_name']}")


def is_arm_terminal(word: int) -> bool:
    if word & 0x0FFFFFF0 in {0x012FFF10, 0x012FFF30}:  # BX/BLX register
        return True
    if word & 0x0E000000 == 0x0A000000:  # B/BL immediate
        return True
    if word & 0x0E100000 == 0x08100000 and word & 0x00008000:  # LDM including PC
        return True
    return word >> 12 & 0xF == 0xF  # Data-processing/load writing PC


def rejection_reason(row: dict[str, str], image: bytes, profile: dict[str, object]) -> str:
    if row["module"] != "static.crs":
        return "NON_STATIC_MODULE"
    if row["memory_block"] != ".text":
        return "NON_TEXT"
    if row["tier"] != "TIER_0":
        return "NOT_TIER_0"
    if row["source_exists"] == "true":
        return "SOURCE_EXISTS"
    if row["is_thunk"] == "true":
        return "ANALYZER_THUNK"
    if row["code_family"] not in {"GAME", "GFL2"}:
        return "NON_GAME_FAMILY"
    address = int(row["address"], 16)
    size = int(row["size"])
    image_base = int(profile["code_range"]["image_base"], 16)  # type: ignore[index]
    offset = address - image_base
    if size < 4 or size % 4 or offset < 0 or offset + size > len(image):
        return "INVALID_ARM_RANGE"
    body = image[offset:offset + size]
    if body.hex() in set(profile["placeholder_hex"]):  # type: ignore[arg-type]
        return "RELOCATION_PLACEHOLDER"
    if size <= 8 and not is_arm_terminal(int.from_bytes(body[-4:], "little")):
        return "NONTERMINAL_SHORT_BODY"
    return ""


def select(limit: int, output: Path, rejected_output: Path) -> None:
    preflight()
    profile = load_json(PROFILE)
    image = CODE.read_bytes()
    with QUEUE.open(newline="", encoding="utf-8") as handle:
        rows = list(csv.DictReader(handle))
    selected: list[dict[str, str]] = []
    rejected: list[dict[str, str]] = []
    for row in rows:
        reason = rejection_reason(row, image, profile)
        if reason:
            if row["tier"] == "TIER_0":
                rejected.append({
                    "address": row["address"],
                    "qualified_name": row["qualified_name"],
                    "size": row["size"],
                    "reason": reason,
                })
            continue
        selected.append({
            "address": row["address"],
            "qualified_name": row["qualified_name"],
            "namespace": row["namespace"],
            "size": row["size"],
            "caller_count": row["caller_count"],
            "callee_count": row["callee_count"],
            "provenance": row["provenance"],
            "review_status": "UNRUN",
        })
        if len(selected) == limit:
            break
    output.parent.mkdir(parents=True, exist_ok=True)
    write_csv(output, selected, [
        "address", "qualified_name", "namespace", "size", "caller_count",
        "callee_count", "provenance", "review_status",
    ])
    write_csv(rejected_output, rejected, ["address", "qualified_name", "size", "reason"])
    prepare_source_context()
    print(f"Selected {len(selected)} ARM Tier-0 targets in {output}")
    print(f"Recorded {len(rejected)} rejected Tier-0 entries in {rejected_output}")


def prepare_source_context() -> None:
    if SOURCE_CONTEXT.exists():
        shutil.rmtree(SOURCE_CONTEXT)
    SOURCE_CONTEXT.mkdir(parents=True)
    for name in ("src", "include"):
        shutil.copytree(ROOT / name, SOURCE_CONTEXT / name)


def write_csv(path: Path, rows: list[dict[str, str]], fields: list[str]) -> None:
    with path.open("w", newline="", encoding="utf-8") as handle:
        writer = csv.DictWriter(handle, fieldnames=fields, lineterminator="\n")
        writer.writeheader()
        writer.writerows(rows)


def main() -> None:
    parser = argparse.ArgumentParser()
    subparsers = parser.add_subparsers(dest="command", required=True)
    subparsers.add_parser("preflight")
    select_parser = subparsers.add_parser("select")
    select_parser.add_argument("--limit", type=int, default=10)
    select_parser.add_argument("--output", type=Path, default=ROOT / "reports/re-agent/targets.csv")
    select_parser.add_argument("--rejected-output", type=Path, default=ROOT / "reports/re-agent/rejected.csv")
    validate_parser = subparsers.add_parser("validate")
    validate_parser.add_argument("--address", required=True)
    args = parser.parse_args()
    if args.command == "preflight":
        preflight()
    elif args.command == "select":
        if not 1 <= args.limit <= 10:
            raise SystemExit("Pilot selection is capped at 10 functions")
        select(args.limit, args.output, args.rejected_output)
    else:
        validate_target(args.address)


if __name__ == "__main__":
    main()
