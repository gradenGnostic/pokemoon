# Phase 3 progress

Updated: 2026-08-30

## Ground truth

- Target: Pokemon Moon, North America, base v1.0.
- Main program: `static.crs`, ARMv7 little-endian.
- Retail `code.bin` SHA-256:
  `fbe0ce6da21542542f49645fff78ba1b7e5e7cc172ce4daceeb5c26ab54adba1`.
- Hybrid #1 with reconstructed `Savedata::Sodateya::IsEggExist` was confirmed
  booting in Citra by the user.
- Phase 2.5 demo work is paused indefinitely; no Phase 3 work depends on it.

## Function metrics

| Metric | Count |
|---|---:|
| Internal retail functions exported | 18,945 |
| Ghidra function-manager total | 18,946 |
| Named functions | 4,703 |
| Remaining `FUN_*` functions | 14,242 |
| Source reconstructed | 25 |
| Compiling | 25 |
| `ASM_MATCH` | 17 |
| `ASM_NEAR_MATCH` | 1 |
| Semantic verified, nonmatching | 7 |
| Runtime tested | 1 |
| Analyzer-confirmed thunks | 388 |
| Class namespaces in Ghidra | 446 |
| Export-backed classes | 54 |
| Export-backed vtables | 20 |
| Export-backed RTTI records | 75 |
| Inventoried `.cro` modules | 115 |
| Inventoried modules including `static.crs` | 116 |

The function-manager total includes one function not returned by the internal
function iterator. Phase 3 catalogs use the 18,945 exported internal functions
and preserve the manager total separately rather than hiding the discrepancy.

## Difficulty queue

| Tier | Count |
|---|---:|
| Tier 0 | 2,307 |
| Tier 1 | 3,779 |
| Tier 2 | 5,027 |
| Tier 3 | 3,877 |
| Tier 4 | 3,955 |

`analysis/functions.csv` is the provenance/status-enriched catalog.
`analysis/function_queue.csv` contains the reproducible score and rationale.
The conservative trivial pass staged 125 candidates: 76 empty ARM functions
and 49 direct branch thunks. They remain candidates, not accepted source.

Duplicate analysis found 299 exact-byte groups and 1,275 additional groups
with identical mnemonic sequences but differing bytes. These are recorded in
`analysis/duplicate_functions.csv` for reuse, not treated as semantic matches.

## Source by subsystem

| Subsystem | Source functions | ASM match | Near | Semantic/nonmatching |
|---|---:|---:|---:|---:|
| Daycare | 2 | 1 | 0 | 1 |
| RNG | 5 | 1 | 0 | 4 |
| Box | 7 | 5 | 0 | 2 |
| Egg/situation | 11 | 10 | 1 | 0 |

## Pokemon and Box

- Added a partial `Savedata::BOX` layout with proven offsets for 32 tray names,
  six team names, team-lock bytes, wallpapers, tray maximum, and current tray.
- Reconstructed seven BOX accessors. Five match ARM exactly; `GetTeamName` and
  `GetTrayLevel` are semantic equivalents with different code generation.
- `Box.cro` has one named export and 437 named imports in the preserved CRO
  inventory. Its executable body has not yet been imported as a separate
  Ghidra program, so no Box.cro-internal function is claimed reconstructed.
- Existing PK7, `CoreParam`, `PokemonParam`, 0xe8 box, and 0x104 party research
  remains the type foundation for subsequent work.

## EggHatching

- Added a partial `Savedata::Situation` layout and reconstructed 11 location,
  egg-step, friendship-step, and petting-step accessors.
- Ten match exactly. `HasWarpContinueRequest` is a 15/16-byte near match.
- `EggHatching.cro` has one named export and 116 imports inventoried; its body
  has not yet been imported or reconstructed.

## Other subsystems

- GameManager: existing graph notes preserved; no new source functions yet.
- QR: `QRReader.cro` inventory preserved; no new source functions yet.
- Field: `FieldRo.cro` inventory preserved; no new source functions yet.
- Battle: intentionally deferred; no new source functions yet.

## Build status

- `scripts/verify_source_batch.py` compiles a coherent source batch once per
  translation unit and records per-function ARM results.
- `analysis/batches/savedata_accessors_results.csv` records 18 compiling
  functions: 15 exact, one near, and two semantic/nonmatching.
- `scripts/build_exact_hybrid.sh` generates one-function pipeline adapters,
  rejects any status other than `ASM_MATCH`, regenerates splits, builds, links,
  repacks, and verifies the complete image.
- `hybrid_0016` contains 16 reconstructed exact-match functions. Every compiled
  object was selected and every corresponding retail split object was excluded.
- Final `code.bin` and CXI remain byte-identical to retail/source respectively.

## Next queue

1. Expand `Savedata::BOX` with the first group of short slot/tray accessors.
2. Import and map `Box.cro` as a separate module before claiming internal code.
3. Reconstruct small `CoreParam` methods with real bodies; skip CRS relocation
   stubs whose terminal NOP is patched at runtime.
4. Extend `Situation` and daycare step-counter users toward EggHatching.
5. Generalize exact-hybrid checkpoints toward 50 source-backed functions.
