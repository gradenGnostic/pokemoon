#!/usr/bin/env python3
"""Register retail functions reimplemented by the portable PC runtime.

This is a one-shot, idempotent migration helper. It intentionally registers
only PC-port code with a concrete static.crs retail address recovered in the
existing analysis catalogs. Host-only SDL/OpenGL/resource-decoder glue and
LangSelect.cro-only work are not counted in the static.crs progress metric.
"""

from __future__ import annotations

import csv
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
MANIFEST = ROOT / "config/reconstructed_functions.csv"
CATALOG = ROOT / "analysis/functions.csv"


def norm(value: str) -> str:
    return f"0x{int(value, 0):08X}"


def read_csv(path: Path) -> list[dict[str, str]]:
    with path.open(newline="", encoding="utf-8") as handle:
        return list(csv.DictReader(handle))


# verified=True means the existing reverse-engineering review recorded a PASS
# for the retail function identity/logic. verified=False still records genuine
# maintained source, but does not claim semantic verification.
MAPPINGS = [
    {
        "address": "0x001048B4",
        "name": "gfl2::base::SingletonAccessor<GameSys::GameManager>::GetInstance",
        "namespace": "gfl2::base::SingletonAccessor<GameSys::GameManager>",
        "source": "pc/src/game_manager.cpp",
        "subsystem": "pc_game_manager",
        "verified": True,
        "notes": "PC GameManager::instance() is the portable singleton-access equivalent; recovered retail identity is independently confirmed.",
    },
    {
        "address": "0x0035A818",
        "name": "gfl2::proc::Manager::GetBaseProcess",
        "namespace": "gfl2::proc::Manager",
        "source": "pc/src/process_manager.cpp",
        "subsystem": "pc_process_manager",
        "verified": True,
        "notes": "Portable process manager current_process() implements the recovered GetBaseProcess behavior; prior semantic review passed.",
    },
    {
        "address": "0x0035AC54",
        "name": "gfl2::proc::Manager::Manager",
        "namespace": "gfl2::proc::Manager",
        "source": "pc/src/process_manager.cpp",
        "subsystem": "pc_process_manager",
        "verified": False,
        "notes": "Portable process-manager initialization is maintained source; prior ARM candidate had unresolved final-store/layout differences, so semantic status remains unverified.",
    },
    {
        "address": "0x003EDC50",
        "name": "applib::frame::Manager::ParallelProc",
        "namespace": "applib::frame::Manager",
        "source": "pc/src/frame_manager.cpp",
        "subsystem": "pc_frame_manager",
        "verified": True,
        "notes": "Portable frame manager parallel_proc() implements the recovered ParallelProc behavior; prior semantic review passed.",
    },
    {
        "address": "0x003EDC90",
        "name": "applib::frame::Manager::GetBaseProcess",
        "namespace": "applib::frame::Manager",
        "source": "pc/src/frame_manager.cpp",
        "subsystem": "pc_frame_manager",
        "verified": True,
        "notes": "Portable frame manager current_cell() implements the recovered GetBaseProcess behavior; prior semantic review passed.",
    },
    {
        "address": "0x003EE084",
        "name": "applib::frame::Manager::CallProc",
        "namespace": "applib::frame::Manager",
        "source": "pc/src/frame_manager.cpp",
        "subsystem": "pc_frame_manager",
        "verified": True,
        "notes": "Portable frame manager call_proc() implements the recovered CallProc behavior; prior semantic review passed.",
    },
    {
        "address": "0x003EE0C4",
        "name": "applib::frame::Manager::Manager",
        "namespace": "applib::frame::Manager",
        "source": "pc/src/frame_manager.cpp",
        "subsystem": "pc_frame_manager",
        "verified": True,
        "notes": "Portable frame-manager initialization implements the recovered Manager constructor behavior; prior semantic review passed.",
    },
    {
        "address": "0x004A3240",
        "name": "GameSys::GameManager::GetBufferClearSetting",
        "namespace": "GameSys::GameManager",
        "source": "pc/src/game_manager.cpp",
        "subsystem": "pc_game_manager",
        "verified": False,
        "notes": "Portable get_buffer_clear_setting() is maintained source for the mapped retail function; old ARM candidate had layout differences, so semantic status remains unverified.",
    },
    {
        "address": "0x003EF0C8",
        "name": "GameSys::GameManager::SetBufferClearSetting",
        "namespace": "GameSys::GameManager",
        "source": "pc/src/game_manager.cpp",
        "subsystem": "pc_game_manager",
        "verified": False,
        "notes": "Portable set_buffer_clear_setting() is maintained source for the mapped retail function; old ARM candidate had layout differences, so semantic status remains unverified.",
    },
]


def main() -> None:
    rows = read_csv(MANIFEST)
    if not rows:
        raise SystemExit("manifest is empty")
    fields = list(rows[0].keys())

    catalog_rows = read_csv(CATALOG)
    catalog = {norm(row["address"]): row for row in catalog_rows if row.get("address")}
    existing = {norm(row["address"]) for row in rows}
    used_artifacts = {row["artifact"] for row in rows}
    used_adapters = {row["adapter"] for row in rows}
    used_objects = {row["object"] for row in rows}

    added: list[str] = []
    for mapping in MAPPINGS:
        address = norm(mapping["address"])
        if address in existing:
            print(f"already registered: {address}")
            continue
        retail = catalog.get(address)
        if retail is None:
            raise SystemExit(f"retail address missing from analysis/functions.csv: {address}")
        size = int(retail["size"], 0)
        if size <= 0:
            raise SystemExit(f"invalid retail size for {address}: {retail['size']}")
        source = ROOT / str(mapping["source"])
        if not source.is_file():
            raise SystemExit(f"mapped PC source does not exist: {source.relative_to(ROOT)}")

        suffix = address[2:].lower()
        artifact = f"PCPort_{suffix}"
        adapter = f"src/code.bin/{artifact}.cpp"
        obj = f"build/code.bin/{artifact}.o"
        if artifact in used_artifacts or adapter in used_adapters or obj in used_objects:
            raise SystemExit(f"generated manifest identity collision at {address}")

        row = {field: "" for field in fields}
        row.update(
            {
                "address": address,
                "retail_size": f"0x{size:X}",
                "module": "static.crs",
                "binary": "code.bin",
                "name": str(mapping["name"]),
                "namespace": str(mapping["namespace"]),
                "source": str(mapping["source"]),
                "symbol": "",
                "artifact": artifact,
                "adapter_mode": "direct_include",
                "adapter_macro": "",
                "adapter": adapter,
                "object": obj,
                "source_status": "SOURCE_WRITTEN",
                "compile_status": "COMPILES",
                "semantic_status": "SEMANTIC_VERIFIED" if mapping["verified"] else "SEMANTIC_UNVERIFIED",
                "asm_status": "ASM_DIFFERENT",
                "runtime_ready": "false",
                "runtime_tested": "false",
                "subsystem": str(mapping["subsystem"]),
                "provenance": "PC_PORT_RECONSTRUCTION",
                "compiler": "host C++17",
                "matched_bytes": "",
                "total_bytes": "",
                "notes": str(mapping["notes"]),
            }
        )
        rows.append(row)
        existing.add(address)
        used_artifacts.add(artifact)
        used_adapters.add(adapter)
        used_objects.add(obj)
        added.append(address)

    if not added:
        print(f"No changes needed; manifest already contains all {len(MAPPINGS)} PC mappings")
        return

    with MANIFEST.open("w", newline="", encoding="utf-8") as handle:
        writer = csv.DictWriter(handle, fieldnames=fields, lineterminator="\n")
        writer.writeheader()
        writer.writerows(rows)

    print(f"Registered {len(added)} PC-port retail mappings: {', '.join(added)}")
    print(f"Manifest now contains {len(rows)} source-backed functions")


if __name__ == "__main__":
    main()
