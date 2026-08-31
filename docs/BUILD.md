# Canonical build

The top-level `Makefile` is the supported build interface. It keeps proprietary
inputs and all outputs ignored, builds source incrementally, and delegates CTR
splitting, exact object selection, linking, and recreation to
`tools/3DS-Decomp-Pipeline`.

## Requirements

- GNU Make 4.4 or compatible
- Python 3
- `arm-none-eabi-g++` 16.2.0
- GNU ARM binutils 2.47 (`as`, `ld`, and `objcopy`)
- `flock`
- 3DS Decomp Pipeline commit
  `621bbce909ad2f9c551563c7443ed80c0123fe77` at
  `tools/3DS-Decomp-Pipeline`
- User-owned ignored files at `extracted/exefs/code.bin`,
  `extracted/metadata/exheader.bin`, and
  `extracted/cxi/main.fully-decrypted.cxi`

Optional local tool paths belong in ignored `config.mk`; use
`config.mk.example` as the template. `make check` validates tool versions,
pipeline files, input sizes and hashes, manifest consistency, generated
adapters, compatibility metadata, and Git binary hygiene.

## Commands

```sh
make check
make
make verify
make progress
```

The default `make` builds `.decomp/exact/out/code.bin`. `make cxi` creates
`build/runtime/exact/PokemonMoon_exact.cxi`. `make verify` checks CXI structure,
permitted changed ranges, selected objects, split-object exclusions, and each
exact function's ARM bytes.

Additional targets:

```sh
make exact
make semantic
make diff FUNC=0x003591E0
make list STATUS=ASM_MATCH
make list MODULE=Box.cro
make list SUBSYSTEM=box
make status
make clean
make help
```

`make clean` removes generated files for the selected mode while preserving the
large split cache and all proprietary inputs. Use `MODE=semantic` to select the
separate semantic profile explicitly.

## Modes

`exact` is the default and includes only canonical `ASM_MATCH` rows. The
pipeline independently compares bytes and relocations before selecting every
compiled object; a mismatch falls back to the retail split object, and
verification then fails because the expected compiled object was not selected.

`semantic` has a separate serialized workspace. Source-backed functions may be
accepted with `ASM_DIFFERENT` while remaining `runtime_ready=false`. The fixed
address semantic image builder compiles and links only approved runtime-ready
nonmatching rows, patches their retail slots, repacks the local CXI, and verifies
that no bytes outside allowed regions changed:

```sh
make semantic SEMANTIC_VERSION=<label>
```

Compile-first source coverage and runtime activation are intentionally separate.

## Manifest

`config/reconstructed_functions.csv` is authoritative for source-backed
functions, build selection, module ownership, matching status, and runtime
readiness. `symbols/decomp_status.csv` is a generated compatibility export;
refresh it with `make status` after changing the canonical manifest.

Each selected row names an artifact and an adapter strategy. `direct_include`
wraps a source file that already contains one function. `macro_select` defines
the row's selector macro before including an organized translation unit. Keep
the source guards and manifest address synchronized.

To add a function:

1. Add or update its repository source and headers.
2. Add one canonical manifest row with retail address, size, symbol, module,
   adapter strategy, statuses, readiness, and provenance.
3. Run `make diff FUNC=<address>` and record the observed status.
4. Run `make status`, `make check`, and `make verify`.

Compiler-generated `.d` files track included source and headers, so normal
edits rebuild only affected adapters before the pipeline relinks. Exact and
semantic invocations use separate `.decomp/<mode>` workspaces and `flock`
serialization, preventing concurrent mutation of one split/link directory.

## Modules

`config/build_modules.csv` records `static.crs` and the first planned CRO
profiles. Only `static.crs` is enabled. The ignored local CRO bodies are
available under `extracted/cro`, but they have not yet been imported and
validated as independent build profiles. CRO rows and source must not be
claimed as buildable until that module-specific validation is complete.

No build target requires Ghidra. Ghidra remains an analysis and provenance
tool, not a source compilation dependency.
