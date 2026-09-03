# Pokemon Moon decompilation

This repository reconstructs the European base release of Pokemon Moon
from its Nintendo 3DS ARM executable. It contains source code, build tooling,
symbol metadata, and reverse engineering notes. It does not contain retail game
binaries or assets.

## Target

- Region: Europe
- Title ID: `0004000000175E00`
- Product code: `CTR-P-BNEA`
- Revision: base v1.0, title version 0
- Main program: `static.crs`, ARMv7 little-endian, image base `0x00100000`
- Retail `code.bin` SHA-256: `fbe0ce6da21542542f49645fff78ba1b7e5e7cc172ce4daceeb5c26ab54adba1`
- Retail `static.crs` SHA-256: `e18db06b0609739e8e62cd4786c6b2da838d20347050e4c2ac822bf35c016957`

`config/target.json` and `docs/TARGET.md` contain the complete identity and
layout record.

## Current state

The canonical manifest currently records 647 source-backed functions out of
18,945 inventoried internal functions:

| Status | Count |
|---|---:|
| Exact ARM match | 292 |
| Near match | 1 |
| Semantic verified, nonmatching | 351 |
| Semantic unverified | 3 |
| Runtime-ready | 53 |
| Remaining YELLOW review queue | 981 |

The status terms are deliberately separate:

- **Source-backed** means the function has maintained C or C++ source in this repository.
- **Exact** means the selected compiler output matches the retail ARM bytes.
- **Semantic verified** means the reconstruction is accepted but compiler output differs from retail.
- **Semantic unverified** means maintained source is mapped to a retail function but still needs stronger equivalence evidence.
- **Runtime-ready** means the function is approved for inclusion in a semantic runtime image.

Exact matching remains useful evidence, but it is not required for every
source reconstruction. Most compile-first promotions remain runtime-inactive
until they receive stronger validation.

The latest YELLOW-resolution pass promoted 102 additional reviewed ARM
reconstructions. The portable PC runtime also contributes mapped retail
reconstructions for `gfl2::proc::Manager`, `applib::frame::Manager`, GameManager
singleton access, and GameManager buffer-clear handling. Host-only SDL/OpenGL
glue and code that belongs only to `LangSelect.cro` are not counted in the
`static.crs` headline.

## decomp.dev

GitHub Actions publishes an objdiff v2 progress artifact named `eu_report` on
pushes to `main`. Pokemoon is semantic-first rather than matching-first, so the
top-level decomp.dev **decompiled** percentage is normalized to maintained
source coverage: source-backed functions divided by inventoried functions.
With the current manifest that is 647 / 18,945 = 3.415%.

Byte-weighted exact ARM evidence is still retained inside the report for
per-function/detail views, while the `fully linked` field remains byte-weighted
source coverage.

## Local game input

You must provide files extracted from your own legally obtained copy of the
game. The build expects these ignored local paths:

```text
extracted/exefs/code.bin
extracted/metadata/exheader.bin
extracted/cxi/main.fully-decrypted.cxi
```


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

### Portable PC runtime

The repository also provides an independent CMake target for the native PC
runtime. It uses SDL2/OpenGL for host input and rendering while sharing portable
reconstructed game logic. This target does not participate in the Nintendo 3DS
`Makefile` build and does not replace any 3DS rendering code.

Linux requirements are CMake 3.20 or newer, a C++17 compiler, SDL2, OpenGL, and
Ninja. SDL2_ttf is required only when the optional fresh-profile language
selector is enabled.

```sh
cmake --preset linux-debug
cmake --build --preset linux-debug
ctest --preset linux-debug
```

Enable the startup language selector with a separate build directory:

```sh
cmake -S . -B build/linux-language -G Ninja \
  -DCMAKE_BUILD_TYPE=Debug -DPC_STARTUP_LANGUAGE=ON
cmake --build build/linux-language
ctest --test-dir build/linux-language --output-on-failure
```

Run `build/linux-debug/pokemoon-pc` with `--headless` for a session without a
window. Use `--data-root <path>`, `POKEMOON_DATA_DIR`, or
`POKEMOON_DATA_ROOT` to select external data. Retail resources remain external
and use ID-preserving paths such as `romfs/arc/AAAA/DDDD.bin` under the selected
data root.

## Repository layout

- `src/`, `include/`: reconstructed source and declarations
- `pc/`: portable host runtime, platform adapters, and tests
- `config/reconstructed_functions.csv`: authoritative function manifest
- `symbols/`: recovered symbols and compatibility status
- `analysis/`: function catalogs, queues, and compact progress reports
- `scripts/`: build, verification, Ghidra export, and queue tooling
- `docs/`: target, runtime, subsystem, and research notes


## Contributions

Keep retail data out of commits. New reconstructions should preserve address,
symbol, module, status, and provenance metadata in the canonical manifest.
Run `make status`, `make check`, and `make MODE=semantic check` before submitting
changes. Avoid changing shared layouts without evidence from multiple functions.
