#!/usr/bin/env python3
"""Export metadata and symbol tables from Nintendo 3DS CRO0/CRS files."""

import argparse
import csv
import hashlib
import json
import shutil
import struct
import subprocess
from pathlib import Path


HEADER_FIELDS = (
    "name_offset",
    "next_loaded_cro",
    "previous_loaded_cro",
    "file_size",
    "bss_size",
    "unknown1_low",
    "unknown1_high",
    "nnro_control_object_offset",
    "on_load_offset",
    "on_exit_offset",
    "on_unresolved_offset",
    "code_offset",
    "code_size",
    "data_offset",
    "data_size",
    "module_name_offset",
    "module_name_size",
    "segment_table_offset",
    "segment_table_num",
    "named_export_table_offset",
    "named_export_table_num",
    "indexed_export_table_offset",
    "indexed_export_table_num",
    "export_strings_offset",
    "export_strings_size",
    "export_tree_offset",
    "export_tree_num",
    "import_module_table_offset",
    "import_module_table_num",
    "import_patches_offset",
    "import_patches_num",
    "named_import_table_offset",
    "named_import_table_num",
    "indexed_import_table_offset",
    "indexed_import_table_num",
    "anonymous_import_table_offset",
    "anonymous_import_table_num",
    "import_strings_offset",
    "import_strings_size",
    "static_anonymous_symbol_table_offset",
    "static_anonymous_symbol_table_num",
    "relocation_patches_offset",
    "relocation_patches_num",
    "static_anonymous_patch_table_offset",
    "static_anonymous_patch_table_num",
)
SEGMENT_NAMES = {0: ".text", 1: ".rodata", 2: ".data", 3: ".bss"}
PROVENANCE = "RETAIL_ORIGINAL_SYMBOL"


def unpack_at(data, fmt, offset, context):
    size = struct.calcsize(fmt)
    if offset < 0 or offset + size > len(data):
        raise ValueError(f"{context}: range 0x{offset:x}+0x{size:x} is outside file")
    return struct.unpack_from(fmt, data, offset)


def read_string(data, offset, context, size=None):
    if offset < 0 or offset >= len(data):
        raise ValueError(f"{context}: string offset 0x{offset:x} is outside file")
    end = len(data) if size is None else min(len(data), offset + size)
    terminator = data.find(b"\0", offset, end)
    if terminator >= 0:
        end = terminator
    return data[offset:end].decode("utf-8", errors="replace")


def segment_offset(value):
    segment = value & 0xF
    return segment, value >> 4


def demangle(names):
    names = sorted({name for name in names if name})
    tool = shutil.which("c++filt")
    if not tool or not names:
        return {name: name for name in names}
    result = subprocess.run(
        [tool],
        input="\n".join(names) + "\n",
        text=True,
        capture_output=True,
        check=True,
    )
    values = result.stdout.splitlines()
    if len(values) != len(names):
        raise RuntimeError("c++filt returned an unexpected number of lines")
    return dict(zip(names, values))


def classify_symbol(name, segment=""):
    if name == "nnroControlObject_":
        return "CONTROL_OBJECT"
    if name.startswith("_ZTV"):
        return "VTABLE"
    if name.startswith(("_ZTI", "_ZTS")):
        return "TYPEINFO"
    if segment == 0:
        return "FUNCTION"
    if segment in (1, 2, 3):
        return "DATA"
    if name.startswith("_Z"):
        return "MANGLED_IMPORT"
    return "IMPORT"


def parse_header(data, path):
    if len(data) < 0x138 or data[0x80:0x84] != b"CRO0":
        raise ValueError(f"{path}: not a CRO0/CRS file")
    values = unpack_at(data, "<45I", 0x84, f"{path}: header")
    return dict(zip(HEADER_FIELDS, values))


def table_entries(data, offset, count, fmt, context):
    size = struct.calcsize(fmt)
    if count > len(data) // max(size, 1):
        raise ValueError(f"{context}: implausible entry count {count}")
    return [unpack_at(data, fmt, offset + index * size, context) for index in range(count)]


def parse_file(path):
    data = path.read_bytes()
    header = parse_header(data, path)
    module = read_string(
        data,
        header["module_name_offset"],
        f"{path}: module name",
        header["module_name_size"],
    )

    segments = []
    for offset, size, identifier in table_entries(
        data,
        header["segment_table_offset"],
        header["segment_table_num"],
        "<III",
        f"{path}: segment table",
    ):
        segments.append({"id": identifier, "name": SEGMENT_NAMES.get(identifier, f"segment_{identifier}"), "offset": offset, "size": size})

    exports = []
    named_exports = table_entries(
        data,
        header["named_export_table_offset"],
        header["named_export_table_num"],
        "<II",
        f"{path}: named exports",
    )
    for index, (name_offset, packed_offset) in enumerate(named_exports):
        segment, offset = segment_offset(packed_offset)
        exports.append({
            "kind": "named",
            "index": index,
            "name": read_string(data, name_offset, f"{path}: export {index}"),
            "segment": segment,
            "offset": offset,
        })

    indexed_exports = table_entries(
        data,
        header["indexed_export_table_offset"],
        header["indexed_export_table_num"],
        "<I",
        f"{path}: indexed exports",
    )
    for index, (packed_offset,) in enumerate(indexed_exports):
        segment, offset = segment_offset(packed_offset)
        exports.append({"kind": "indexed", "index": index, "name": "", "segment": segment, "offset": offset})

    imports = []
    named_imports = table_entries(
        data,
        header["named_import_table_offset"],
        header["named_import_table_num"],
        "<II",
        f"{path}: named imports",
    )
    for index, (name_offset, list_offset) in enumerate(named_imports):
        imports.append({
            "kind": "named",
            "index": index,
            "name": read_string(data, name_offset, f"{path}: import {index}"),
            "source_module": "",
            "segment": "",
            "offset": "",
            "list_offset": list_offset,
        })

    edges = []
    imported_modules = table_entries(
        data,
        header["import_module_table_offset"],
        header["import_module_table_num"],
        "<IIIII",
        f"{path}: import modules",
    )
    for module_index, (name_offset, indexed_offset, indexed_count, anonymous_offset, anonymous_count) in enumerate(imported_modules):
        source_module = read_string(data, name_offset, f"{path}: imported module {module_index}")
        edges.append({"target_module": source_module, "indexed_count": indexed_count, "anonymous_count": anonymous_count})
        indexed = table_entries(data, indexed_offset, indexed_count, "<II", f"{path}: indexed imports from {source_module}")
        for index, (symbol_index, list_offset) in enumerate(indexed):
            imports.append({
                "kind": "indexed",
                "index": symbol_index,
                "name": "",
                "source_module": source_module,
                "segment": "",
                "offset": "",
                "list_offset": list_offset,
            })
        anonymous = table_entries(data, anonymous_offset, anonymous_count, "<II", f"{path}: anonymous imports from {source_module}")
        for index, (packed_offset, list_offset) in enumerate(anonymous):
            segment, offset = segment_offset(packed_offset)
            imports.append({
                "kind": "anonymous",
                "index": index,
                "name": "",
                "source_module": source_module,
                "segment": segment,
                "offset": offset,
                "list_offset": list_offset,
            })

    return {
        "path": path,
        "module": module,
        "sha256": hashlib.sha256(data).hexdigest(),
        "actual_size": len(data),
        "header": header,
        "segments": segments,
        "exports": exports,
        "imports": imports,
        "edges": edges,
    }


def write_csv(path, fieldnames, rows):
    with path.open("w", newline="", encoding="utf-8") as output:
        writer = csv.DictWriter(output, fieldnames=fieldnames)
        writer.writeheader()
        writer.writerows(rows)


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("input_directory", type=Path)
    parser.add_argument("output_directory", type=Path)
    args = parser.parse_args()
    args.output_directory.mkdir(parents=True, exist_ok=True)

    paths = sorted([*args.input_directory.glob("*.cro"), *args.input_directory.glob("*.crs")])
    if not paths:
        raise SystemExit(f"No CRO/CRS files found in {args.input_directory}")

    modules = []
    segments = []
    exports = []
    imports = []
    edges = []
    for path in paths:
        parsed = parse_file(path)
        header = parsed["header"]
        common = {"module": parsed["module"], "file": path.name}
        modules.append({
            **common,
            "sha256": parsed["sha256"],
            "actual_size": parsed["actual_size"],
            "declared_size": header["file_size"],
            "bss_size": header["bss_size"],
            "code_offset": header["code_offset"],
            "code_size": header["code_size"],
            "data_offset": header["data_offset"],
            "data_size": header["data_size"],
            "named_exports": header["named_export_table_num"],
            "indexed_exports": header["indexed_export_table_num"],
            "named_imports": header["named_import_table_num"],
            "import_modules": header["import_module_table_num"],
            "relocations": header["relocation_patches_num"],
        })
        segments.extend({**common, **entry} for entry in parsed["segments"])
        exports.extend({
            **common,
            **entry,
            "segment_name": SEGMENT_NAMES.get(entry["segment"], f"segment_{entry['segment']}"),
            "provenance": PROVENANCE,
        } for entry in parsed["exports"])
        imports.extend({**common, **entry, "provenance": PROVENANCE} for entry in parsed["imports"])
        edges.extend({"source_module": parsed["module"], "source_file": path.name, **entry} for entry in parsed["edges"])

    demangled = demangle([row["name"] for row in exports + imports])
    for row in exports + imports:
        row["demangled_name"] = demangled.get(row["name"], row["name"])
        row["classification"] = classify_symbol(row["name"], row.get("segment", ""))

    write_csv(args.output_directory / "modules.csv", list(modules[0]), modules)
    write_csv(args.output_directory / "segments.csv", ["module", "file", "id", "name", "offset", "size"], segments)
    write_csv(args.output_directory / "exports.csv", ["module", "file", "kind", "index", "name", "demangled_name", "segment", "offset", "segment_name", "classification", "provenance"], exports)
    write_csv(args.output_directory / "imports.csv", ["module", "file", "kind", "index", "name", "demangled_name", "source_module", "segment", "offset", "list_offset", "classification", "provenance"], imports)
    write_csv(args.output_directory / "module_edges.csv", ["source_module", "source_file", "target_module", "indexed_count", "anonymous_count"], edges)

    summary = {
        "files": len(paths),
        "modules": len(modules),
        "named_exports": sum(row["named_exports"] for row in modules),
        "indexed_exports": sum(row["indexed_exports"] for row in modules),
        "named_imports": sum(row["named_imports"] for row in modules),
        "module_edges": len(edges),
        "indexed_and_anonymous_imports": len(imports) - sum(row["named_imports"] for row in modules),
        "export_rows": len(exports),
        "import_rows": len(imports),
        "vtable_exports": sum(row["classification"] == "VTABLE" for row in exports),
        "typeinfo_exports": sum(row["classification"] == "TYPEINFO" for row in exports),
    }
    (args.output_directory / "summary.json").write_text(json.dumps(summary, indent=2) + "\n", encoding="ascii")
    print(json.dumps(summary, sort_keys=True))


if __name__ == "__main__":
    main()
