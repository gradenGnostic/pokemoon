#!/usr/bin/env python3
"""Canonical manifest, adapter, consistency, listing, and progress operations."""

from __future__ import annotations

import argparse
import csv
import hashlib
import io
import json
import os
import shutil
import subprocess
import tempfile
from collections import Counter
from pathlib import Path


ROOT = Path(__file__).resolve().parent.parent
MANIFEST = ROOT / "config/reconstructed_functions.csv"
MODULES = ROOT / "config/build_modules.csv"
TOOLCHAIN = ROOT / "config/toolchain.json"
TARGET = ROOT / "config/target.json"
CATALOG = ROOT / "analysis/functions.csv"
STATUS = ROOT / "symbols/decomp_status.csv"

REQUIRED_FIELDS = {
    "address", "retail_size", "module", "binary", "name", "namespace", "source",
    "symbol", "artifact", "adapter_mode", "adapter_macro", "adapter", "object",
    "source_status", "compile_status", "semantic_status", "asm_status",
    "runtime_ready", "runtime_tested", "subsystem", "provenance", "compiler",
    "matched_bytes", "total_bytes", "notes",
}
ASM_STATUSES = {"ASM_MATCH", "ASM_NEAR_MATCH", "ASM_DIFFERENT", "BLOCKED"}
TRUE_VALUES = {"true", "false"}


def read_csv(path: Path) -> list[dict[str, str]]:
    with path.open(newline="", encoding="utf-8") as handle:
        return list(csv.DictReader(handle))


def normalized_address(value: str) -> str:
    return f"0x{int(value, 0):08X}"


def write_if_changed(path: Path, content: str) -> None:
    path.parent.mkdir(parents=True, exist_ok=True)
    if path.exists() and path.read_text(encoding="utf-8") == content:
        return
    temporary = path.with_suffix(path.suffix + ".tmp")
    temporary.write_text(content, encoding="utf-8")
    temporary.replace(path)


def manifest_rows() -> list[dict[str, str]]:
    rows = read_csv(MANIFEST)
    if not rows:
        raise SystemExit("canonical reconstruction manifest is empty")
    missing = REQUIRED_FIELDS - rows[0].keys()
    if missing:
        raise SystemExit(f"manifest missing fields: {', '.join(sorted(missing))}")
    for row in rows:
        row["address"] = normalized_address(row["address"])
    return rows


def module_rows() -> dict[str, dict[str, str]]:
    return {row["module"]: row for row in read_csv(MODULES)}


def selected_rows(mode: str, module: str | None = None) -> list[dict[str, str]]:
    if mode not in {"exact", "semantic"}:
        raise SystemExit(f"unsupported MODE={mode}; expected exact or semantic")
    rows = manifest_rows()
    if module:
        rows = [row for row in rows if row["module"] == module or row["binary"] == module]
    exact = [row for row in rows if row["asm_status"] == "ASM_MATCH"]
    if mode == "exact":
        return exact
    semantic = [
        row for row in rows
        if row["asm_status"] != "ASM_MATCH"
        and row["semantic_status"] == "SEMANTIC_VERIFIED"
        and row["runtime_ready"] == "true"
    ]
    return exact + semantic


def adapter_content(row: dict[str, str], output: Path) -> str:
    source = (ROOT / row["source"]).resolve()
    relative = os.path.relpath(source, output.resolve().parent).replace(os.sep, "/")
    lines = []
    if row["adapter_mode"] == "macro_select":
        if not row["adapter_macro"]:
            raise SystemExit(f"macro-select adapter lacks macro: {row['address']}")
        lines.append(f"#define {row['adapter_macro']} {row['address']}")
    elif row["adapter_mode"] != "direct_include":
        raise SystemExit(f"unsupported adapter mode {row['adapter_mode']} at {row['address']}")
    lines.append(f'#include "{relative}"')
    return "\n".join(lines) + "\n"


def row_for_artifact(artifact: str) -> dict[str, str]:
    matches = [row for row in manifest_rows() if row["artifact"] == artifact]
    if len(matches) != 1:
        raise SystemExit(f"artifact lookup expected one row, found {len(matches)}: {artifact}")
    return matches[0]


def symlink_to(source: Path, destination: Path) -> None:
    destination.parent.mkdir(parents=True, exist_ok=True)
    target = os.path.relpath(source.resolve(), destination.parent.resolve())
    if destination.is_symlink() and os.readlink(destination) == target:
        return
    if destination.exists() or destination.is_symlink():
        destination.unlink()
    destination.symlink_to(target)


def setup_workspace(args: argparse.Namespace) -> None:
    work = args.work_dir.resolve()
    unsafe_semantic = [
        row for row in manifest_rows()
        if args.mode == "semantic"
        and row["asm_status"] != "ASM_MATCH"
        and row["runtime_ready"] == "true"
    ]
    if unsafe_semantic:
        names = ", ".join(row["address"] for row in unsafe_semantic)
        raise SystemExit(
            "semantic runtime selection is not yet supported by the upstream exact selector; "
            f"runtime-ready nonmatching rows: {names}"
        )
    rows = selected_rows(args.mode, "static.crs")
    if not rows:
        raise SystemExit("selected build contains no static.crs functions")

    symlink_to(ROOT / "extracted/exefs/code.bin", work / "orig/code.bin")
    symlink_to(ROOT / "extracted/metadata/exheader.bin", work / "orig/exheader.bin")
    for name, executable in (("g++", args.cxx), ("ld", args.ld), ("objcopy", args.objcopy)):
        resolved = shutil.which(executable)
        if resolved is None:
            raise SystemExit(f"required tool not found: {executable}")
        symlink_to(Path(resolved), work / f"tools/{name}")

    toolchain = json.loads(TOOLCHAIN.read_text(encoding="utf-8"))
    yaml_lines = ["default:", "  cc: g++", "  flags:"]
    yaml_lines.extend(f"    - {flag}" for flag in toolchain["flags"] if flag != "-ffunction-sections")
    yaml_lines.append("code.bin: {}")
    write_if_changed(work / "cc.yaml", "\n".join(yaml_lines) + "\n")

    symbol_lines = ["Location,Name,Namespace,Mode,Size,Segment"]
    for row in sorted(rows, key=lambda item: int(item["address"], 0)):
        symbol_lines.append(",".join([
            f"{int(row['address'], 0):08X}", row["artifact"], row["namespace"], "$a",
            f"{int(row['retail_size'], 0):08X}", ".text",
        ]))
    write_if_changed(work / "symbols/code.bin.csv", "\n".join(symbol_lines) + "\n")

    expected = {f"{row['artifact']}.cpp" for row in rows}
    adapter_dir = work / "src/code.bin"
    object_dir = work / "build/code.bin"
    adapter_dir.mkdir(parents=True, exist_ok=True)
    object_dir.mkdir(parents=True, exist_ok=True)
    for path in adapter_dir.glob("*.cpp"):
        if path.name not in expected:
            path.unlink()
    for path in object_dir.iterdir():
        if path.is_file() and path.suffix in {".o", ".d", ".tmp"} and f"{path.stem}.cpp" not in expected:
            path.unlink()

    fingerprint = {
        "mode": args.mode,
        "manifest_sha256": sha256(MANIFEST),
        "toolchain_sha256": sha256(TOOLCHAIN),
        "tools": {
            "cxx": str(Path(shutil.which(args.cxx) or args.cxx).resolve()),
            "ld": str(Path(shutil.which(args.ld) or args.ld).resolve()),
            "objcopy": str(Path(shutil.which(args.objcopy) or args.objcopy).resolve()),
        },
        "selected": [row["address"] for row in rows],
    }
    write_if_changed(args.stamp, json.dumps(fingerprint, indent=2) + "\n")
    args.stamp.touch()
    print(f"Prepared {args.mode} workspace with {len(rows)} selected exact functions")


def generate_adapter(args: argparse.Namespace) -> None:
    row = row_for_artifact(args.artifact)
    expected = (args.work_dir / row["adapter"]).resolve()
    output = args.output.resolve()
    if output != expected:
        raise SystemExit(f"adapter path mismatch for {args.artifact}: expected {expected}, got {output}")
    write_if_changed(output, adapter_content(row, output))


def generate_adapters(args: argparse.Namespace) -> None:
    rows = selected_rows(args.mode, "static.crs")
    for row in rows:
        output = (args.work_dir / row["adapter"]).resolve()
        write_if_changed(output, adapter_content(row, output))
    write_if_changed(args.stamp, json.dumps({"mode": args.mode, "adapters": [row["artifact"] for row in rows]}, indent=2) + "\n")
    args.stamp.touch()
    print(f"Generated {len(rows)} {args.mode} adapters")


def sha256(path: Path) -> str:
    digest = hashlib.sha256()
    with path.open("rb") as handle:
        for chunk in iter(lambda: handle.read(1024 * 1024), b""):
            digest.update(chunk)
    return digest.hexdigest()


def validate_manifest() -> list[str]:
    errors: list[str] = []
    rows = manifest_rows()
    modules = module_rows()
    unique_fields = ["address", "artifact", "adapter", "object"]
    for field in unique_fields:
        counts = Counter(row[field] for row in rows)
        duplicates = [value for value, count in counts.items() if count > 1]
        if duplicates:
            errors.append(f"duplicate {field}: {', '.join(duplicates)}")
    seen_ranges: list[tuple[int, int, str]] = []
    for row in rows:
        try:
            address = int(row["address"], 0)
            size = int(row["retail_size"], 0)
        except ValueError:
            errors.append(f"invalid address/size: {row['address']} {row['retail_size']}")
            continue
        if size <= 0:
            errors.append(f"non-positive retail size: {row['address']}")
        for start, end, previous in seen_ranges:
            if address < end and start < address + size:
                errors.append(f"overlapping functions: {previous} and {row['address']}")
        seen_ranges.append((address, address + size, row["address"]))
        if row["asm_status"] not in ASM_STATUSES:
            errors.append(f"invalid ASM status at {row['address']}: {row['asm_status']}")
        if row["runtime_ready"] not in TRUE_VALUES or row["runtime_tested"] not in TRUE_VALUES:
            errors.append(f"invalid runtime boolean at {row['address']}")
        if row["compile_status"] not in {"COMPILES", "COMPILE_FAILED", "BLOCKED"}:
            errors.append(f"invalid compile status at {row['address']}: {row['compile_status']}")
        if row["semantic_status"] not in {"SEMANTIC_VERIFIED", "SEMANTIC_UNVERIFIED", "BLOCKED"}:
            errors.append(f"invalid semantic status at {row['address']}: {row['semantic_status']}")
        if row["runtime_ready"] == "true" and row["asm_status"] != "ASM_MATCH":
            errors.append(
                f"nonmatching runtime-ready function unsupported by current pipeline: {row['address']}"
            )
        if row["adapter_mode"] not in {"direct_include", "macro_select"}:
            errors.append(f"invalid adapter mode at {row['address']}: {row['adapter_mode']}")
        if row["module"] not in modules:
            errors.append(f"unknown module at {row['address']}: {row['module']}")
        if not (ROOT / row["source"]).is_file():
            errors.append(f"missing source at {row['address']}: {row['source']}")

    catalog = {normalized_address(row["address"]): row for row in read_csv(CATALOG)}
    for row in rows:
        retail = catalog.get(row["address"])
        if retail is None:
            errors.append(f"source-backed address absent from retail catalog: {row['address']}")
        elif int(retail["size"]) != int(row["retail_size"], 0):
            errors.append(f"retail size mismatch at {row['address']}")
    return errors


def check_project(args: argparse.Namespace) -> None:
    errors = validate_manifest()
    tools = {
        "compiler": args.cxx,
        "assembler": args.assembler,
        "linker": args.ld,
        "objcopy": args.objcopy,
        "python": args.python,
    }
    resolved_tools: dict[str, str] = {}
    for label, tool in tools.items():
        resolved = shutil.which(tool)
        if resolved is None:
            errors.append(f"missing {label}: {tool}")
        else:
            resolved_tools[label] = resolved
    if shutil.which("flock") is None:
        errors.append("missing workspace lock tool: flock")
    toolchain = json.loads(TOOLCHAIN.read_text(encoding="utf-8"))
    if "compiler" in resolved_tools:
        version = subprocess.check_output([resolved_tools["compiler"], "--version"], text=True).splitlines()[0]
        if toolchain["compiler_version"] not in version:
            errors.append(f"compiler version mismatch: {version}")
    for label in ("assembler", "linker", "objcopy"):
        if label in resolved_tools:
            version = subprocess.check_output([resolved_tools[label], "--version"], text=True).splitlines()[0]
            if toolchain["binutils_version"] not in version:
                errors.append(f"{label} version mismatch: {version}")
    pipeline = args.pipeline_dir.resolve()
    for required in ("main.py", "pipeline.py", "linker.ld"):
        if not (pipeline / required).is_file():
            errors.append(f"pipeline file missing: {pipeline / required}")
    if not (pipeline / ".git").exists():
        errors.append(f"pipeline checkout lacks Git metadata: {pipeline}")
    else:
        pipeline_commit = subprocess.check_output(
            ["git", "rev-parse", "HEAD"], cwd=pipeline, text=True
        ).strip()
        if pipeline_commit != toolchain["pipeline_commit"]:
            errors.append(f"pipeline commit mismatch: {pipeline_commit}")
        pipeline_changes = subprocess.check_output(
            ["git", "status", "--porcelain"], cwd=pipeline, text=True
        ).strip()
        if pipeline_changes:
            errors.append("pipeline checkout has uncommitted changes")

    target = json.loads(TARGET.read_text(encoding="utf-8"))
    code = ROOT / "extracted/exefs/code.bin"
    source_cxi = ROOT / "extracted/cxi/main.fully-decrypted.cxi"
    exheader = ROOT / "extracted/metadata/exheader.bin"
    for path in (code, source_cxi, exheader):
        if not path.is_file():
            errors.append(f"required proprietary input missing: {path.relative_to(ROOT)}")
    if code.is_file():
        expected = target["executable"]["code_bin"]["sha256"]
        actual = sha256(code)
        if actual != expected:
            errors.append(f"retail code.bin hash mismatch: {actual}")
        if code.stat().st_size != target["executable"]["code_bin"]["size_bytes"]:
            errors.append(f"retail code.bin size mismatch: {code.stat().st_size}")
    if source_cxi.is_file():
        expected_cxi = target["executable"]["fully_decrypted_cxi"]
        if source_cxi.stat().st_size != expected_cxi["size_bytes"]:
            errors.append(f"source CXI size mismatch: {source_cxi.stat().st_size}")
        actual_cxi = sha256(source_cxi)
        if actual_cxi != expected_cxi["sha256"]:
            errors.append(f"source CXI hash mismatch: {actual_cxi}")

    rows = selected_rows(args.mode, "static.crs")
    for row in rows:
        adapter = args.work_dir / row["adapter"]
        if not adapter.is_file():
            errors.append(f"generated adapter missing: {adapter}")
        elif adapter.read_text(encoding="utf-8") != adapter_content(row, adapter):
            errors.append(f"generated adapter stale: {adapter}")

    if STATUS.read_text(encoding="utf-8") != status_csv_content():
        errors.append("symbols/decomp_status.csv is stale; run make status")

    tracked = subprocess.check_output(["git", "ls-files"], cwd=ROOT, text=True).splitlines()
    proprietary_suffixes = {
        ".cia", ".3ds", ".cci", ".cxi", ".ncch", ".app", ".bin", ".cro", ".crs",
        ".romfs", ".exefs",
    }
    proprietary_prefixes = ("extracted/", "romfs/", "exefs/")
    bad = [
        path for path in tracked
        if Path(path).suffix.lower() in proprietary_suffixes or path.startswith(proprietary_prefixes)
    ]
    if bad:
        errors.append(f"proprietary binaries tracked by Git: {', '.join(bad)}")

    print("Pokemon Moon US v1.0 build consistency")
    for label, resolved in resolved_tools.items():
        print(f"{label:12} {resolved}")
    print(f"pipeline     {pipeline}")
    print(f"mode         {args.mode}")
    print(f"selected     {len(rows)}")
    if errors:
        for error in errors:
            print(f"ERROR: {error}")
        raise SystemExit(f"consistency check failed with {len(errors)} error(s)")
    print("result       PASS")


def status_csv_content() -> str:
    fields = ["address", "size", "source", "symbol", "compiler", "source_status", "compile_status",
              "semantic_status", "asm_status", "runtime_status", "matched_bytes", "total_bytes", "module",
              "subsystem", "provenance", "notes"]
    output_rows = []
    for row in manifest_rows():
        output_rows.append({
            "address": row["address"], "size": row["retail_size"], "source": row["source"],
            "symbol": row["symbol"], "compiler": row["compiler"], "source_status": row["source_status"],
            "compile_status": row["compile_status"], "semantic_status": row["semantic_status"],
            "asm_status": row["asm_status"],
            "runtime_status": "RUNTIME_TESTED" if row["runtime_tested"] == "true" else "NOT_RUNTIME_TESTED",
            "matched_bytes": row["matched_bytes"], "total_bytes": row["total_bytes"],
            "module": row["module"], "subsystem": row["subsystem"], "provenance": row["provenance"],
            "notes": row["notes"],
        })
    handle = io.StringIO(newline="")
    writer = csv.DictWriter(handle, fieldnames=fields, lineterminator="\n")
    writer.writeheader()
    writer.writerows(output_rows)
    return handle.getvalue()


def export_status(args: argparse.Namespace) -> None:
    args.output.parent.mkdir(parents=True, exist_ok=True)
    write_if_changed(args.output, status_csv_content())
    output_rows = manifest_rows()
    print(f"Exported {len(output_rows)} compatibility status rows to {args.output}")


def list_functions(args: argparse.Namespace) -> None:
    rows = manifest_rows()
    if args.status:
        rows = [row for row in rows if row["asm_status"] == args.status]
    if args.module:
        rows = [row for row in rows if row["module"] == args.module or row["binary"] == args.module]
    if args.subsystem:
        rows = [row for row in rows if row["subsystem"].lower() == args.subsystem.lower()]
    print("address     module      ASM status       ready  source and function")
    for row in sorted(rows, key=lambda item: (item["module"], int(item["address"], 0))):
        print(f"{row['address']}  {row['module']:<11} {row['asm_status']:<16} {row['runtime_ready']:<6} "
              f"{row['source']} :: {row['name']}")
    print(f"listed {len(rows)} function(s)")


def show_progress(args: argparse.Namespace) -> None:
    functions = read_csv(CATALOG)
    rows = manifest_rows()
    selected = selected_rows(args.mode)
    total = len(functions)
    named = sum(not row["current_name"].startswith("FUN_") for row in functions)
    fun = sum(row["current_name"].startswith("FUN_") for row in functions)
    compiling = sum(row["compile_status"] == "COMPILES" for row in rows)
    exact = sum(row["asm_status"] == "ASM_MATCH" for row in rows)
    near = sum(row["asm_status"] == "ASM_NEAR_MATCH" for row in rows)
    semantic = sum(row["asm_status"] == "ASM_DIFFERENT" and row["semantic_status"] == "SEMANTIC_VERIFIED" for row in rows)
    runtime = sum(row["runtime_tested"] == "true" for row in rows)
    print("Pokemon Moon US v1.0")
    print(f"Mode:                         {args.mode}")
    print(f"Selected replacements:        {len(selected):>6}")
    print()
    print(f"Total functions:              {total:>6}")
    print(f"Named:                        {named:>6}")
    print(f"FUN_* remaining:              {fun:>6}")
    print()
    print(f"Source reconstructed:         {len(rows):>6}")
    print(f"Compiling:                    {compiling:>6}")
    print(f"ASM_MATCH:                    {exact:>6}")
    print(f"ASM_NEAR_MATCH:               {near:>6}")
    print(f"Semantic/nonmatching:         {semantic:>6}")
    print(f"Runtime tested:               {runtime:>6}")
    print()
    print(f"Reconstruction:              {len(rows) * 100 / total:>6.2f}%")
    print(f"Exact matching:              {exact * 100 / total:>6.2f}%")
    print()
    print("By subsystem:")
    for subsystem, count in sorted(Counter(row["subsystem"] for row in rows).items()):
        print(f"  {subsystem:<20} {count:>5}")
    print("By module:")
    source_modules = Counter(row["module"] for row in rows)
    for module in module_rows().values():
        inventory = "enabled" if module["enabled"] == "true" else "future"
        print(f"  {module['module']:<20} {source_modules[module['module']]:>5} source ({inventory})")


def clean_generated(args: argparse.Namespace) -> None:
    work = args.work_dir.resolve()
    for relative in ("src", "build", "out"):
        shutil.rmtree(work / relative, ignore_errors=True)
    for stamp in (work / "stamps/adapters.json", work / "stamps/pipeline.stamp"):
        if stamp.exists():
            stamp.unlink()
    shutil.rmtree(args.build_dir.resolve(), ignore_errors=True)
    if args.image.exists():
        args.image.unlink()
    print(f"Removed generated {args.mode} build outputs; preserved split cache and proprietary inputs")


def print_summary(args: argparse.Namespace) -> None:
    rows = selected_rows(args.mode)
    exact = sum(row["asm_status"] == "ASM_MATCH" for row in rows)
    semantic = len(rows) - exact
    code_hash = sha256(args.code)
    print(f"output: {args.image}")
    print(f"code.bin SHA-256: {code_hash}")
    if args.image:
        image_hash = sha256(args.image)
        print(f"CXI SHA-256: {image_hash}")
        tested = json.loads((ROOT / "config/runtime_hybrid_exact.json").read_text(encoding="utf-8"))
        if image_hash == tested["hybrid_image_sha256"] and tested["boot_verified"]:
            print("runtime status: VERIFIED_WORKING inherited by byte-identical CXI hash")
        else:
            print("runtime status: USER_TEST_REQUIRED")
        target = json.loads(TARGET.read_text(encoding="utf-8"))
        expected_code = target["executable"]["code_bin"]["sha256"]
        expected_image = target["executable"]["fully_decrypted_cxi"]["sha256"]
        if args.mode == "exact" and code_hash != expected_code:
            raise SystemExit(f"exact code.bin hash mismatch: {code_hash}")
        if args.mode == "exact" and image_hash != expected_image:
            raise SystemExit(f"exact CXI hash mismatch: {image_hash}")
    print(f"reconstructed replacements: {len(rows)}")
    print(f"exact replacements: {exact}")
    print(f"semantic replacements: {semantic}")


def diff_function(args: argparse.Namespace) -> None:
    query = args.function.lower()
    matches = [
        row for row in manifest_rows()
        if query in {row["address"].lower(), row["artifact"].lower(), row["symbol"].lower()}
        or query == row["name"].lower()
    ]
    if len(matches) != 1:
        candidates = ", ".join(f"{row['address']} {row['name']}" for row in matches)
        raise SystemExit(f"FUNC must identify exactly one function; matches: {candidates or 'none'}")
    row = matches[0]
    toolchain = json.loads(TOOLCHAIN.read_text(encoding="utf-8"))
    with tempfile.TemporaryDirectory(prefix="pokemoon-diff-") as temporary:
        directory = Path(temporary)
        adapter = directory / f"{row['artifact']}.cpp"
        obj = directory / f"{row['artifact']}.o"
        adapter.write_text(adapter_content(row, adapter), encoding="utf-8")
        compile_result = subprocess.run(
            [args.cxx, *toolchain["flags"], f"-I{ROOT / 'include'}", "-c", str(adapter), "-o", str(obj)],
            text=True, capture_output=True,
        )
        if compile_result.returncode:
            raise SystemExit(compile_result.stdout + compile_result.stderr)
        compare = subprocess.run(
            [args.python, str(ROOT / "tools/compare_function.py"), str(obj), row["symbol"], row["address"],
             "--code-bin", str(ROOT / "extracted/exefs/code.bin")],
            text=True, capture_output=True,
        )
        print(f"{row['address']} {row['name']}")
        print(compare.stdout, end="")
        if compare.stderr:
            print(compare.stderr, end="")
        print(f"manifest status: {row['asm_status']}")
        if (compare.returncode == 0) != (row["asm_status"] == "ASM_MATCH"):
            raise SystemExit("compiled result disagrees with canonical manifest status")


def parser() -> argparse.ArgumentParser:
    result = argparse.ArgumentParser()
    commands = result.add_subparsers(dest="command", required=True)

    artifacts = commands.add_parser("artifacts")
    artifacts.add_argument("--mode", required=True)
    artifacts.add_argument("--module", default="static.crs")

    flags = commands.add_parser("flags")

    setup = commands.add_parser("setup")
    setup.add_argument("--mode", required=True)
    setup.add_argument("--work-dir", type=Path, required=True)
    setup.add_argument("--stamp", type=Path, required=True)
    setup.add_argument("--cxx", required=True)
    setup.add_argument("--ld", required=True)
    setup.add_argument("--objcopy", required=True)

    adapter = commands.add_parser("adapter")
    adapter.add_argument("--artifact", required=True)
    adapter.add_argument("--work-dir", type=Path, required=True)
    adapter.add_argument("--output", type=Path, required=True)

    adapters = commands.add_parser("adapters")
    adapters.add_argument("--mode", required=True)
    adapters.add_argument("--work-dir", type=Path, required=True)
    adapters.add_argument("--stamp", type=Path, required=True)

    check = commands.add_parser("check")
    check.add_argument("--mode", required=True)
    check.add_argument("--work-dir", type=Path, required=True)
    check.add_argument("--pipeline-dir", type=Path, required=True)
    check.add_argument("--cxx", required=True)
    check.add_argument("--assembler", required=True)
    check.add_argument("--ld", required=True)
    check.add_argument("--objcopy", required=True)
    check.add_argument("--python", required=True)

    export = commands.add_parser("export-status")
    export.add_argument("--output", type=Path, default=STATUS)

    listing = commands.add_parser("list")
    listing.add_argument("--status")
    listing.add_argument("--module")
    listing.add_argument("--subsystem")

    progress = commands.add_parser("progress")
    progress.add_argument("--mode", required=True)

    clean = commands.add_parser("clean")
    clean.add_argument("--mode", required=True)
    clean.add_argument("--work-dir", type=Path, required=True)
    clean.add_argument("--build-dir", type=Path, required=True)
    clean.add_argument("--image", type=Path, required=True)

    summary = commands.add_parser("summary")
    summary.add_argument("--mode", required=True)
    summary.add_argument("--code", type=Path, required=True)
    summary.add_argument("--image", type=Path, required=True)

    difference = commands.add_parser("diff")
    difference.add_argument("--function", required=True)
    difference.add_argument("--cxx", required=True)
    difference.add_argument("--python", required=True)
    return result


def main() -> None:
    args = parser().parse_args()
    if args.command == "artifacts":
        print(" ".join(row["artifact"] for row in selected_rows(args.mode, args.module)))
    elif args.command == "flags":
        print(" ".join(json.loads(TOOLCHAIN.read_text(encoding="utf-8"))["flags"]))
    elif args.command == "setup":
        setup_workspace(args)
    elif args.command == "adapter":
        generate_adapter(args)
    elif args.command == "adapters":
        generate_adapters(args)
    elif args.command == "check":
        check_project(args)
    elif args.command == "export-status":
        export_status(args)
    elif args.command == "list":
        list_functions(args)
    elif args.command == "progress":
        show_progress(args)
    elif args.command == "clean":
        clean_generated(args)
    elif args.command == "summary":
        print_summary(args)
    elif args.command == "diff":
        diff_function(args)


if __name__ == "__main__":
    main()
