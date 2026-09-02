# Decompilation progress

Updated: 2026-09-02

## Target

- Pokemon Moon, Europe, base v1.0
- `static.crs`, ARMv7 little-endian
- 18,945 inventoried internal functions
- Retail `code.bin` SHA-256:
  `fbe0ce6da21542542f49645fff78ba1b7e5e7cc172ce4daceeb5c26ab54adba1`

## Function status

| Metric | Count |
|---|---:|
| Source-backed | 545 |
| Compiling | 545 |
| `ASM_MATCH` | 291 |
| `ASM_NEAR_MATCH` | 1 |
| Semantic verified/nonmatching | 250 |
| Semantic unverified | 3 |
| Runtime-ready | 53 |
| Remaining YELLOW | 1,083 |

`config/reconstructed_functions.csv` is authoritative. Nine retail `static.crs`
functions reimplemented during the portable PC work are now registered in the
manifest. Six have prior checker-passed semantic evidence; three remain
source-backed but explicitly semantic-unverified because their older ARM
candidates still had layout/store discrepancies.

Host-only SDL/OpenGL/resource-decoder glue and work that maps only to
`LangSelect.cro` are not counted in the `static.crs` headline. The compact
resolver reports under `analysis/reagent/` remain a paused queue snapshot, so
the displayed Remaining YELLOW count is retained as that checkpoint value.

## Runtime evidence

The Phase 4C semantic image was tested manually in Citra. It booted, entered
gameplay, and completed a Pokemon League battle. The tested image hash and
runtime-ready function metadata are recorded in
`config/runtime_verifications.json`.

The native PC runtime now also boots reconstructed core logic, drives portable
process/frame scheduling, loads external retail title resources, and includes a
working optional fresh-profile language selector.

## decomp.dev reporting

`scripts/decomp_dev_report.py` generates an objdiff v2 report from the committed
function inventory and canonical reconstructed-function manifest. GitHub Actions
publishes it as the `eu_report` artifact.

Because Pokemoon accepts semantic reconstructions instead of requiring every
function to match retail compiler output byte-for-byte, the top-level
decomp.dev `decompiled` percentage is normalized to source-backed function
coverage. At this checkpoint that is 545 / 18,945 = 2.877%.

Exact ARM and partial byte-match evidence remains attached to individual report
units. The `fully linked` field remains byte-weighted source coverage.

## Current boundary

Exact ARM matching is tracked as evidence but is not required for all source.
Compile-first semantic promotions remain runtime-inactive by default. Shared
canonical layouts and higher-risk ownership, networking, and state-machine code
remain on the careful review path.

The portable PC runtime now lives in this repository alongside the unchanged
Nintendo 3DS Makefile path. Further PC work should register newly reconstructed
retail functions in the canonical manifest when a defensible address/function
mapping exists, while host-only platform code remains outside decomp progress.
