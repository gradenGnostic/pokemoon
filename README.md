# Pokemon Moon decompilation

This repository reconstructs the North American base release of Pokemon Moon
from its Nintendo 3DS ARM executable. It contains source code, build tooling,
symbol metadata, and reverse engineering notes. It does not contain retail game
binaries or assets.

## Target

- Title ID: `0004000000175E00`
- Product code: `CTR-P-BNEA`
- Revision: base v1.0, title version 0
- Main program: `static.crs`, ARMv7 little-endian, image base `0x00100000`
- Retail `code.bin` SHA-256: `fbe0ce6da21542542f49645fff78ba1b7e5e7cc172ce4daceeb5c26ab54adba1`
- Retail `static.crs` SHA-256: `e18db06b0609739e8e62cd4786c6b2da838d20347050e4c2ac822bf35c016957`

`config/target.json` and `docs/TARGET.md` contain the complete identity and
layout record.

## Current state

The canonical manifest currently records 536 source-backed functions out of
18,945 inventoried internal functions:

| Status | Count |
|---|---:|
| Exact ARM match | 291 |
| Near match | 1 |
| Semantic, nonmatching | 244 |
| Runtime-ready | 53 |
| Remaining YELLOW review queue | 1,083 |

The status terms are deliberately separate:

- **Source-backed** means the function has maintained C or C++ source in this repository.
- **Exact** means the selected compiler output matches the retail ARM bytes.
- **Semantic** means the reconstruction is accepted but compiler output differs from retail.
- **Runtime-ready** means the function is approved for inclusion in a semantic runtime image.

Exact matching remains useful evidence, but it is not required for every
source reconstruction. Most compile-first promotions remain runtime-inactive
until they receive stronger validation.

## Local game input

You must provide files extracted from your own legally obtained copy of the
game. The build expects these ignored local paths:

```text
extracted/exefs/code.bin
extracted/metadata/exheader.bin
extracted/cxi/main.fully-decrypted.cxi
```

Retail CIA, CXI, ExeFS, RomFS, CRO, CRS, audio, models, textures, and other game
assets are excluded by `.gitignore`. Nothing in the normal build copies those
files into Git.

## Building

Requirements include Python 3, GNU Make, `arm-none-eabi-g++` 16.2.0, ARM GNU
binutils 2.47, and 3DS Decomp Pipeline commit
`621bbce909ad2f9c551563c7443ed80c0123fe77` under
`tools/3DS-Decomp-Pipeline`. Local path overrides belong in ignored
`config.mk`; start from `config.mk.example`.

Useful commands:

```sh
make check
make MODE=semantic check
make progress
make status
make verify
```

`make verify` builds the exact profile and performs the full replacement proof.
Semantic runtime images use only explicitly runtime-ready functions. See
`docs/BUILD.md` for the complete build workflow.

## Repository layout

- `src/`, `include/`: reconstructed source and declarations
- `config/reconstructed_functions.csv`: authoritative function manifest
- `symbols/`: recovered symbols and compatibility status
- `analysis/`: function catalogs, queues, and compact progress reports
- `scripts/`: build, verification, Ghidra export, and queue tooling
- `docs/`: target, runtime, subsystem, and research notes

The autonomous YELLOW resolver is currently stopped with its resumable local
state preserved under ignored `analysis/reagent/` files. The next planned work
is PC-critical dependency analysis. A PC port will live in a separate
repository; this decompilation repository remains the source authority.

## Contributions

Keep retail data out of commits. New reconstructions should preserve address,
symbol, module, status, and provenance metadata in the canonical manifest.
Run `make status`, `make check`, and `make MODE=semantic check` before submitting
changes. Avoid changing shared layouts without evidence from multiple functions.
