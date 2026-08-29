#!/usr/bin/env python3
"""Generate a conservative Ghidra Java import script from known_symbols.csv."""

import argparse
import csv
from pathlib import Path


ALLOWED = {"CONFIRMED_SYMBOL", "SIGNATURE_CONFIRMED"}


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("csv_file", nargs="?", default="symbols/known_symbols.csv")
    parser.add_argument("--output", default="scripts/ImportKnownSymbols.java")
    args = parser.parse_args()
    rows = list(csv.DictReader(open(args.csv_file, newline="", encoding="utf-8")))
    entries = [row for row in rows if row["confidence"] in ALLOWED]
    lines = [
        "// Generated from symbols/known_symbols.csv; do not hand-edit.",
        "//@category PokemonMoon",
        "import ghidra.app.script.GhidraScript;",
        "import ghidra.program.model.symbol.SourceType;",
        "public class ImportKnownSymbols extends GhidraScript {",
        "  public void run() throws Exception {",
    ]
    for index, row in enumerate(entries):
        name = row["proposed_name"].split("::")[-1].replace(".", "_")
        note = (row["confidence"] + ": " + row["evidence_type"]).replace('"', '\\"')
        lines.append(f'    var a{index} = toAddr("{row["target_address"]}");')
        lines.append(f'    if (getFunctionAt(a{index}) != null && getFunctionAt(a{index}).getName().startsWith("FUN_")) getFunctionAt(a{index}).setName("{name}", SourceType.USER_DEFINED);')
        lines.append(f'    setPlateComment(a{index}, "{note}");')
    lines.extend(["  }", "}"])
    Path(args.output).write_text("\n".join(lines) + "\n", encoding="ascii")


if __name__ == "__main__":
    main()
