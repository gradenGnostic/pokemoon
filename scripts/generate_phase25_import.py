#!/usr/bin/env python3
"""Generate a conservative Ghidra importer from accepted master-symbol rows."""

import argparse
import csv
from pathlib import Path


AUTO_PROVENANCE = {
    "DEMO_ORIGINAL_SYMBOL_EXACT_CODE",
    "DEMO_SYMBOL_TRANSFER_CONFIRMED",
}


def java_string(value):
    return value.replace("\\", "\\\\").replace('"', '\\"').replace("\r", " ").replace("\n", " ")


def function_leaf(name):
    qualified = name.split("(", 1)[0]
    return qualified.rsplit("::", 1)[-1]


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("master", nargs="?", type=Path, default=Path("symbols/master_symbols.csv"))
    parser.add_argument("--output", type=Path, default=Path("scripts/ImportPhase25Symbols.java"))
    args = parser.parse_args()

    with args.master.open(newline="", encoding="utf-8") as source:
        rows = [
            row for row in csv.DictReader(source)
            if row["target_address"]
            and row["kind"] == "FUNCTION"
            and row["provenance"] in AUTO_PROVENANCE
        ]

    lines = [
        "// Generated from symbols/master_symbols.csv; do not hand-edit.",
        "//@category PokemonMoon",
        "import ghidra.app.script.GhidraScript;",
        "import ghidra.program.model.listing.Function;",
        "import ghidra.program.model.symbol.Namespace;",
        "import ghidra.program.model.symbol.SourceType;",
        "",
        "public class ImportPhase25Symbols extends GhidraScript {",
        "  private Namespace ensureNamespace(String qualified) throws Exception {",
        "    Namespace parent = currentProgram.getGlobalNamespace();",
        "    if (qualified == null || qualified.isEmpty() || qualified.equals(\"Global\")) return parent;",
        "    for (String part : qualified.split(\"::\")) {",
        "      Namespace child = getNamespace(parent, part);",
        "      if (child == null) child = currentProgram.getSymbolTable().createNameSpace(parent, part, SourceType.USER_DEFINED);",
        "      parent = child;",
        "    }",
        "    return parent;",
        "  }",
        "",
        "  public void run() throws Exception {",
        "    int applied = 0;",
        "    int skipped = 0;",
    ]
    for index, row in enumerate(rows):
        address = java_string(row["target_address"])
        name = java_string(function_leaf(row["name"]))
        namespace = java_string(row["namespace"])
        comment = java_string(
            f"PHASE 2.5 {row['provenance']}: {row['evidence_type']}; "
            f"source={row['source_program']}:{row['source_address'] if 'source_address' in row else row['source_offset']}"
        )
        lines.extend([
            f'    var a{index} = toAddr("{address}");',
            f"    Function f{index} = getFunctionAt(a{index});",
            f'    if (f{index} != null && f{index}.getName().startsWith("FUN_")) {{',
            f'      f{index}.setParentNamespace(ensureNamespace("{namespace}"));',
            f'      f{index}.setName("{name}", SourceType.USER_DEFINED);',
            f'      setPlateComment(a{index}, "{comment}");',
            "      applied++;",
            "    } else {",
            "      skipped++;",
            "    }",
        ])
    lines.extend([
        '    println("Phase 2.5 symbols applied=" + applied + " skipped=" + skipped);',
        "  }",
        "}",
    ])
    args.output.write_text("\n".join(lines) + "\n", encoding="ascii")
    print(f"generated_rows={len(rows)} output={args.output}")


if __name__ == "__main__":
    main()
