# ARM Re-Agent Workflow

This integration is restricted to the North American base-version
`/romfs/static.crs` program analyzed as `ARM:LE:32:v7`. It does not use an x86
profile. `make reagent-preflight` rejects a different Ghidra architecture,
compiler target, or retail `code.bin` hash before any model is invoked.

## Models

- Reverser: local Ollama `qwen2.5-coder:7b` only.
- Checker: Codex CLI `gpt-5.4-mini`, authenticated by the existing ChatGPT
  login and run read-only, ephemeral, and without user MCP configuration.
- `scripts/reagent/ollama_openai_proxy.py` binds only to localhost and forces
  an 8192-token context through Ollama's native chat API.

## ARM Safeguards

- Project prompts specify ARM EABI argument registers and reject x86 ABI,
  registers, intrinsics, and assembly.
- Target selection reads little-endian ARM words from the verified retail
  image and requires short functions to end in an ARM branch/return form.
- The observed `0c0090e50000a0e1` CoreParam relocation placeholder
  (`ldr r0,[r0,#0xc]`; `cpy r0,r0`) is excluded explicitly.
- `Box.cro` is excluded because its addresses are module-relative and its
  early text includes relocation/import placeholders.
- Upstream raw-assembly parity is disabled because its call counter searches
  for the x86-oriented text `CALL`; ARM evidence instead comes from Ghidra
  decompilation, P-code, CFG, and the repository's ARM compiler/diff workflow.

## Commands

```sh
make reagent-preflight
make reagent-select
make reagent-export
make reagent-dry-run FUNC=0x00493638
make reagent-reverse FUNC=0x00493638
```

`reagent-select` writes at most ten eligible pilot targets under
`reports/re-agent/`. Re-agent code, prompts, logs, and candidate overlays stay
there and are ignored by Git. The workflow never writes directly to `src/` or
`include/`. Initial runs are capped at one reverser/checker round, and the run
wrapper rejects addresses outside the filtered manifest or without matching
ARM evidence before either model is invoked. Source retrieval uses an isolated
copy containing only `src/` and `include/`, so generated reports, build trees,
and previous candidates cannot contaminate a later prompt.

The Ghidra bridge reads `.ghidra-exports/static.crs`. A focused headless export
requires the GUI project lock to be released first and invokes Ghidra's
official headless runner without any model calls:

```sh
make reagent-export
```

Checker approval is not promotion. `validation.require_verified` remains true
with no trusted automatic promotion command, so generated candidates remain
unaccepted until manually integrated and checked with `make diff FUNC=...`.
Only `ASM_MATCH` entries may be promoted automatically in a future workflow;
near or semantic matches require review.
