#!/usr/bin/env python3
"""Index qualified C/C++ function definitions from a private reference tree."""

from __future__ import annotations

import argparse
import json
import re
from pathlib import Path


SOURCE_SUFFIXES = {".c", ".cc", ".cpp", ".h", ".hpp"}
QUALIFIED_NAME = re.compile(r"\b((?:[A-Za-z_]\w*::)+~?[A-Za-z_]\w*)\s*\(")
DECLARATION_PREFIX = re.compile(r"^[A-Za-z_\s:<>,*&~]*$")
MAX_SCAN_AFTER_PARAMS = 2048
MAX_EXCERPT_CHARS = 12000


def matching_delimiter(text: str, start: int, opening: str, closing: str) -> int | None:
    depth = 0
    index = start
    state = "code"
    while index < len(text):
        char = text[index]
        next_char = text[index + 1] if index + 1 < len(text) else ""
        if state == "line_comment":
            if char == "\n":
                state = "code"
        elif state == "block_comment":
            if char == "*" and next_char == "/":
                state = "code"
                index += 1
        elif state in {"string", "character"}:
            quote = '"' if state == "string" else "'"
            if char == "\\":
                index += 1
            elif char == quote:
                state = "code"
        elif char == "/" and next_char == "/":
            state = "line_comment"
            index += 1
        elif char == "/" and next_char == "*":
            state = "block_comment"
            index += 1
        elif char == '"':
            state = "string"
        elif char == "'":
            state = "character"
        elif char == opening:
            depth += 1
        elif char == closing:
            depth -= 1
            if depth == 0:
                return index
        index += 1
    return None


def function_definitions(text: str, relative_path: str) -> list[dict[str, object]]:
    definitions: list[dict[str, object]] = []
    for match in QUALIFIED_NAME.finditer(text):
        line_start = text.rfind("\n", 0, match.start()) + 1
        if not DECLARATION_PREFIX.fullmatch(text[line_start:match.start()]):
            continue
        open_paren = match.end() - 1
        close_paren = matching_delimiter(text, open_paren, "(", ")")
        if close_paren is None:
            continue
        trailer = text[close_paren + 1:close_paren + 1 + MAX_SCAN_AFTER_PARAMS]
        brace_offset = trailer.find("{")
        semicolon_offset = trailer.find(";")
        if brace_offset < 0 or (0 <= semicolon_offset < brace_offset):
            continue
        before_brace = trailer[:brace_offset].strip()
        if before_brace.startswith((")", "?", "=", "!", "<", ">", "+", "/", "%", "&&", "||")):
            continue
        open_brace = close_paren + 1 + brace_offset
        close_brace = matching_delimiter(text, open_brace, "{", "}")
        if close_brace is None:
            continue
        start = line_start
        excerpt = text[start:close_brace + 1].strip()
        truncated = len(excerpt) > MAX_EXCERPT_CHARS
        if truncated:
            excerpt = excerpt[:MAX_EXCERPT_CHARS].rstrip() + "\n/* reference body truncated */"
        qualified_name = match.group(1)
        parts = qualified_name.split("::")
        definitions.append({
            "qualified_name": qualified_name,
            "key": "::".join(parts[-2:]),
            "path": relative_path,
            "line": text.count("\n", 0, start) + 1,
            "text": excerpt,
            "truncated": truncated,
        })
    return definitions


def build_index(root: Path, revision: str) -> dict[str, object]:
    entries: dict[str, list[dict[str, object]]] = {}
    files = 0
    definitions = 0
    for path in sorted(root.rglob("*")):
        if not path.is_file() or path.suffix.lower() not in SOURCE_SUFFIXES:
            continue
        files += 1
        text = path.read_bytes().decode("utf-8", errors="ignore")
        relative_path = path.relative_to(root).as_posix()
        for definition in function_definitions(text, relative_path):
            key = str(definition.pop("key"))
            entries.setdefault(key, []).append(definition)
            definitions += 1
    return {
        "format": 1,
        "revision": revision,
        "root": str(root),
        "source_files": files,
        "definitions": definitions,
        "entries": entries,
    }


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("source_root", type=Path)
    parser.add_argument("output", type=Path)
    parser.add_argument("--revision", default="unknown")
    args = parser.parse_args()
    payload = build_index(args.source_root.resolve(), args.revision)
    args.output.parent.mkdir(parents=True, exist_ok=True)
    args.output.write_text(json.dumps(payload, separators=(",", ":")) + "\n", encoding="utf-8")
    print(json.dumps({key: payload[key] for key in ("revision", "source_files", "definitions")}, sort_keys=True))


if __name__ == "__main__":
    main()
