# Decompilation progress

Updated: 2026-08-31

## Target

- Pokemon Moon, North America, base v1.0
- `static.crs`, ARMv7 little-endian
- 18,945 inventoried internal functions
- Retail `code.bin` SHA-256:
  `fbe0ce6da21542542f49645fff78ba1b7e5e7cc172ce4daceeb5c26ab54adba1`

## Function status

| Metric | Count |
|---|---:|
| Source-backed | 536 |
| Compiling | 536 |
| `ASM_MATCH` | 291 |
| `ASM_NEAR_MATCH` | 1 |
| Semantic/nonmatching | 244 |
| Runtime-ready | 53 |
| Remaining YELLOW | 1,083 |

`config/reconstructed_functions.csv` is authoritative. The compact resolver
reports under `analysis/reagent/` record the paused queue snapshot. The local
SQLite queue, proposals, logs, and candidate scratch files remain ignored but
are preserved for an exact resume.

## Runtime evidence

The Phase 4C semantic image was tested manually in Citra. It booted, entered
gameplay, and completed a Pokemon League battle. The tested image hash and
runtime-ready function metadata are recorded in
`config/runtime_verifications.json`.

## Current boundary

Exact ARM matching is tracked as evidence but is not required for all source.
Compile-first semantic promotions remain runtime-inactive by default. Shared
canonical layouts and higher-risk ownership, networking, and state-machine code
remain on the careful review path.

General decompilation is paused at this checkpoint. The next planned task is
PC-critical dependency analysis, followed by work in a separate PC-port
repository.
