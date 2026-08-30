# Runtime build validation

## Scope and gates

Phase 2.75 validates reconstructed ARM code inside a launchable Pokemon Moon
image. Phase 2.5 is paused as recorded in `docs/PHASE_2_5_PAUSED.md`; its symbol
and demo-matching artifacts remain preserved.

The mandatory order is baseline executable equality, baseline repack, baseline
Citra boot, one exact C++ replacement, hybrid Citra boot, then broader daycare
coverage. A later gate is not treated as passed merely because an earlier
binary is byte-identical.

## Local toolchain

- Python 3.14.6
- `arm-none-eabi-g++` 16.2.0
- GNU `arm-none-eabi-ld` and `objcopy` 2.47.20260726
- `3DS-Decomp-Pipeline` commit
  `621bbce909ad2f9c551563c7443ed80c0123fe77`
- Project_CTR commit `e8f5f529c54ff9b22a2491a480ffa69206bf7b19`
- Project_CTR `ctrtool` 1.3.0

Project_CTR `makerom` source is local but is not needed for the fixed-size
ExeFS replacement. Rebuilding a fresh NCCH through makerom would require
reconstructing RSF metadata and would introduce more variables than patching a
copy of the already-valid decrypted container.

## Existing pipeline workspace

The ignored `.decomp/` workspace contains:

- `orig/code.bin`: original decompressed executable.
- `orig/exheader.bin`: executable layout input.
- `symbols/code.bin.csv`: focused split around
  `Savedata::Sodateya::IsEggExist` at `0x00444A68`.
- `split/code.bin/`: original split objects and gap objects.
- `src/code.bin/IsEggExist_00444a68.cpp`: pipeline-specific exact source.
- `build/code.bin/IsEggExist_00444a68.o`: compiled ARM object.
- `out/code.bin_linked` and `.map`: linked ELF and map.
- `out/code.bin`: recreated executable.

The source compiler configuration is `.decomp/cc.yaml`. The pipeline uses the
compiler, linker, and objcopy symlinks under `.decomp/tools/`.

## Pipeline commands

Generate splits, compile reconstructed source, and compare objects:

```sh
python tools/3DS-Decomp-Pipeline/main.py .decomp \
  --single-binary code.bin --no-objdiff --verbose-compilation
```

Recreate a split-only baseline executable:

```sh
python tools/3DS-Decomp-Pipeline/main.py .decomp \
  --single-binary code.bin --skip-split --use-splits-only \
  --recreate-binaries --no-objdiff
```

Compile and recreate the exact-match hybrid after the baseline boot gate:

```sh
python tools/3DS-Decomp-Pipeline/main.py .decomp \
  --single-binary code.bin --skip-split --recreate-binaries \
  --no-objdiff --verbose-compilation
```

The hybrid command is intentionally not run during the current baseline gate.
When run, the response file `.decomp/out/code.bin.txt` must contain the compiled
object path, not the corresponding split object, and `tools/compare_function.py`
must independently report an exact match.

## Baseline executable verification

The baseline was rebuilt on 2026-08-30. These files are all 5,713,920 bytes and
have SHA-256
`fbe0ce6da21542542f49645fff78ba1b7e5e7cc172ce4daceeb5c26ab54adba1`:

- `extracted/exefs/code.bin`
- `.decomp/orig/code.bin`
- `.decomp/out/code.bin`

Both `cmp` comparisons completed with no differences. This proves executable
recreation only; it does not prove emulator boot or gameplay behavior.

## Repacking

`scripts/repack_decrypted_cxi.py` copies
`extracted/cxi/main.fully-decrypted.cxi`, refuses an in-place output, verifies
the replacement fits the existing `.code` allocation exactly, replaces the
payload, updates its ExeFS file hash, then updates the NCCH ExeFS-superblock
hash. No address, section size, exheader, RomFS, CRO, or unrelated ExeFS byte is
allowed to change.

For this target:

- ExeFS starts at CXI offset `0x2E00`.
- `.code` starts at CXI offset `0x3000`.
- `.code` size is `0x573000` (5,713,920 bytes).
- `.code` is uncompressed.
- Its ExeFS hash occupies hash slot 7.

The complete baseline command is:

```sh
./scripts/build_baseline.sh
```

Equivalent explicit repack command:

```sh
python scripts/repack_decrypted_cxi.py \
  extracted/cxi/main.fully-decrypted.cxi \
  .decomp/out/code.bin \
  build/runtime/baseline/PokemonMoon_rebuilt_baseline.cxi
```

Verification command:

```sh
./scripts/verify_runtime_build.sh
```

The verifier checks embedded code equality, both ExeFS hash layers, image size,
and that all changes relative to the source image are restricted to `.code` and
its two hash records.

## Baseline result

Output image:

`/mnt/samsung/pokemonMoondecomp/pokemoon-decomp/build/runtime/baseline/PokemonMoon_rebuilt_baseline.cxi`

Format: decrypted NCCH/CXI. Size: 3,202,183,168 bytes. SHA-256:
`1a348d4cfe65473b4c5e85f1c5e6e797449fcfd23372ce30c35e303eda701626`.

Because the replacement executable is byte-identical, the rebuilt image is
also byte-identical to the known decrypted source CXI. This is expected and
does not mean the copy/replacement workflow was skipped: the repacker located
and wrote the rebuilt `.code`, then regenerated the same hashes.

Project_CTR `ctrtool -i -y` reports the exheader, ExeFS, all ExeFS entries,
RomFS IVFC levels, and RomFS hash as good. The NCCH RSA signature is invalid,
as it already was on the source analysis image after its no-crypto conversion.
Re-extracted code, banner, and icon are byte-equal to their known inputs.

## Citra gate

No `citra` or `citra-qt` executable, desktop entry, Flatpak, or system package
was found. Azahar 2125.1.1 is installed, but it was not used because the user
specifically requested Citra and did not authorize switching forks.

Baseline boot status: `PASS_USER_CONFIRMED` on 2026-08-30. The user reported
that the baseline image works normally in Citra. The emulator version and exact
launch command were not visible inside the OpenCode environment.

The baseline gate is satisfied, so the exact `IsEggExist` replacement may now
be activated. Record later observed results in `docs/RUNTIME_TEST_CHECKLIST.md`
and keep emulator logs under the ignored `build/runtime/logs/` tree.

## Reconstruction state

`config/runtime_reconstruction.json` records the current source-backed runtime
coverage. Baseline metadata remains separate and immutable.

## Hybrid #1: exact C++ replacement

After the user confirmed the baseline works normally in Citra,
`./scripts/build_hybrid.sh` performed a fresh Hybrid #1 build. It symlinked the
pipeline source name to `src/savedata/is_egg_exist.cpp`, supplied `include/`
through `CPLUS_INCLUDE_PATH`, forced recompilation, and invoked the existing
pipeline with verbose compiler output.

Active replacement:

| Address | Function | Source | Generated size | ASM |
|---|---|---|---:|---|
| `0x00444A68` | `Savedata::Sodateya::IsEggExist` | `src/savedata/is_egg_exist.cpp` | 16 bytes | exact |

Replacement proof:

- GCC compiled the repository source into
  `.decomp/build/code.bin/IsEggExist_00444a68.o`.
- The object SHA-256 is
  `ba31d7f091875619b15142f053a5568ce54769904a5717b9bc15198d55ecee18`.
- Its generated 16 bytes have SHA-256
  `0ce95f10aae2bb51a62fab482cb2785e1116eafa5648e2c92edac2ba6589fd39`.
- `tools/compare_function.py` reported `16/16` matching bytes and `exact match:
  yes`.
- `.decomp/out/code.bin.txt` selected the compiled object and did not select
  `.decomp/split/code.bin/IsEggExist_00444a68.o`.
- The pipeline relinked and recreated the complete executable from that object
  plus the two unchanged split gap objects.

The final hybrid `code.bin` remains 5,713,920 bytes and byte-identical to
retail, with SHA-256
`fbe0ce6da21542542f49645fff78ba1b7e5e7cc172ce4daceeb5c26ab54adba1`.
This equality is expected because the active reconstructed function is an exact
match; the linker-selection evidence proves the original split object was not
silently reused.

Hybrid image:

`/mnt/samsung/pokemonMoondecomp/pokemoon-decomp/build/runtime/hybrid_exact/PokemonMoon_hybrid_exact.cxi`

The decrypted NCCH/CXI is 3,202,183,168 bytes with SHA-256
`1a348d4cfe65473b4c5e85f1c5e6e797449fcfd23372ce30c35e303eda701626`.
Internal verification passed: code placement, code hash slot, ExeFS superblock,
fixed image size, and unchanged ranges are valid. Quiet `ctrtool -y` reported
only the already-known invalid NCCH signature inherited from the decrypted
source image.

Hybrid #1 Citra status is `VERIFIED_WORKING`: the user confirmed that it boots.
This closes the end-to-end compiler, linker, repack, and emulator gate.

## Canonical exact build

Phase 3.5 replaced the batch-specific entry point with the canonical Make
interface. Build and prove all 17 exact reconstructed functions with:

```sh
make check
make cxi
make verify
```

The build contains `IsEggExist`, the exact `Random` constructor, five exact
`Savedata::BOX` accessors, and ten exact `Savedata::Situation` accessors.
`prove_exact_hybrid.py` independently checks all 17 compiled-object selections,
split-object exclusions, and function bytes.

Output:

`build/runtime/exact/PokemonMoon_exact.cxi`

The final `code.bin` SHA-256 remains
`fbe0ce6da21542542f49645fff78ba1b7e5e7cc172ce4daceeb5c26ab54adba1`.
The CXI remains byte-identical with SHA-256
`1a348d4cfe65473b4c5e85f1c5e6e797449fcfd23372ce30c35e303eda701626`.
Structural verification passed. No immediate user test is requested because
this build introduces only exact bytes and remains identical to the already
tested image.
