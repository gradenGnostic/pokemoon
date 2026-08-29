#!/usr/bin/env python3
"""Build the Phase 2.5 provenance-aware master symbol registry."""

import argparse
import csv
from collections import defaultdict
from pathlib import Path


MASTER_FIELDS = [
    "target_program",
    "target_address",
    "target_offset",
    "name",
    "mangled_name",
    "namespace",
    "kind",
    "provenance",
    "confidence",
    "evidence_type",
    "source_program",
    "source_file",
    "source_module",
    "source_segment",
    "source_offset",
    "body_sha256",
    "notes",
]


def read_csv(path):
    with path.open(newline="", encoding="utf-8") as source:
        return list(csv.DictReader(source))


def write_csv(path, fieldnames, rows):
    path.parent.mkdir(parents=True, exist_ok=True)
    with path.open("w", newline="", encoding="utf-8") as output:
        writer = csv.DictWriter(output, fieldnames=fieldnames)
        writer.writeheader()
        writer.writerows(rows)


def symbol_namespace(name, kind):
    if kind == "VTABLE" and name.startswith("vtable for "):
        return name.removeprefix("vtable for ")
    if kind == "TYPEINFO":
        for prefix in ("typeinfo for ", "typeinfo name for "):
            if name.startswith(prefix):
                return name.removeprefix(prefix)
    qualified = name.split("(", 1)[0]
    return qualified.rsplit("::", 1)[0] if "::" in qualified else "Global"


def known_provenance(row):
    if row["original_name_claim"].lower() == "yes":
        return "RETAIL_ORIGINAL_SYMBOL"
    if "AI semantic" in row["notes"]:
        return "AI_SEMANTIC"
    return "RESEARCHER_SEMANTIC"


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--cro-directory", type=Path, default=Path("symbols/phase25/retail/cro"))
    parser.add_argument("--function-inventory", type=Path, default=Path("symbols/phase25/retail/function_inventory.csv"))
    parser.add_argument("--known-symbols", type=Path, default=Path("symbols/known_symbols.csv"))
    parser.add_argument("--output", type=Path, default=Path("symbols/master_symbols.csv"))
    parser.add_argument("--class-output", type=Path, default=Path("symbols/phase25/retail/class_evidence.csv"))
    args = parser.parse_args()

    exports = read_csv(args.cro_directory / "exports.csv")
    segments = read_csv(args.cro_directory / "segments.csv")
    functions = read_csv(args.function_inventory)
    known = read_csv(args.known_symbols)

    static_bases = {}
    for row in segments:
        if row["file"] == "static.crs" and row["id"] not in static_bases:
            static_bases[row["id"]] = int(row["offset"])
    function_hashes = {int(row["entry"], 16): row["body_sha256"] for row in functions}

    master = []
    occupied_addresses = set()
    for row in exports:
        segment_id = row["segment"]
        target_address = ""
        target_offset = ""
        body_hash = ""
        address_note = "Dynamic CRO module-relative symbol"
        if row["file"] == "static.crs" and segment_id in static_bases:
            raw_offset = int(row["offset"])
            normalized_offset = raw_offset & ~1 if segment_id == "0" and row["classification"] == "FUNCTION" else raw_offset
            address = static_bases[segment_id] + normalized_offset
            target_address = f"0x{address:08X}"
            target_offset = f"0x{address - 0x00100000:08X}" if address >= 0x00100000 else ""
            body_hash = function_hashes.get(address, "")
            occupied_addresses.add(address)
            address_note = "Static address resolved from CRS segment base"
            if normalized_offset != raw_offset:
                address_note += "; cleared Thumb-state bit 0"
        name = row["demangled_name"] or row["name"]
        master.append({
            "target_program": "PokemonMoon_US_v1_0" if target_address else "",
            "target_address": target_address,
            "target_offset": target_offset,
            "name": name,
            "mangled_name": row["name"],
            "namespace": symbol_namespace(name, row["classification"]),
            "kind": row["classification"],
            "provenance": row["provenance"],
            "confidence": "ORIGINAL_EXPORT",
            "evidence_type": "retail CRO0 named export table",
            "source_program": "PokemonMoon_US_v1_0",
            "source_file": row["file"],
            "source_module": row["module"],
            "source_segment": row["segment_name"],
            "source_offset": f"0x{int(row['offset']):08X}",
            "body_sha256": body_hash,
            "notes": address_note,
        })

    for row in known:
        address = int(row["target_address"], 16)
        if address in occupied_addresses and row["original_name_claim"].lower() == "yes":
            continue
        master.append({
            "target_program": "PokemonMoon_US_v1_0",
            "target_address": row["target_address"],
            "target_offset": row["target_offset"],
            "name": row["proposed_name"],
            "mangled_name": "",
            "namespace": row["namespace"] or symbol_namespace(row["proposed_name"], "FUNCTION"),
            "kind": "FUNCTION",
            "provenance": known_provenance(row),
            "confidence": row["confidence"],
            "evidence_type": row["evidence_type"],
            "source_program": row["source_version"],
            "source_file": row["source_file"],
            "source_module": "|static|",
            "source_segment": ".text",
            "source_offset": row["target_offset"],
            "body_sha256": function_hashes.get(address, ""),
            "notes": row["notes"],
        })

    master.sort(key=lambda row: (
        0 if row["target_address"] else 1,
        int(row["target_address"], 16) if row["target_address"] else 0,
        row["source_module"],
        int(row["source_offset"], 16),
        row["name"],
    ))
    write_csv(args.output, MASTER_FIELDS, master)

    class_rows = []
    evidence_by_class = defaultdict(list)
    for row in master:
        if row["kind"] in {"VTABLE", "TYPEINFO"}:
            evidence_by_class[row["namespace"]].append(row)
    for class_name, evidence in sorted(evidence_by_class.items()):
        for row in evidence:
            class_rows.append({
                "class_name": class_name,
                "evidence_kind": row["kind"],
                "symbol_name": row["name"],
                "mangled_name": row["mangled_name"],
                "module": row["source_module"],
                "target_address": row["target_address"],
                "segment": row["source_segment"],
                "segment_offset": row["source_offset"],
                "provenance": row["provenance"],
            })
    write_csv(
        args.class_output,
        ["class_name", "evidence_kind", "symbol_name", "mangled_name", "module", "target_address", "segment", "segment_offset", "provenance"],
        class_rows,
    )
    print(f"master_symbols={len(master)} class_evidence={len(class_rows)}")


if __name__ == "__main__":
    main()
