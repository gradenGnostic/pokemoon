#!/usr/bin/env bash
set -euo pipefail

ROOT=$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)
PIPELINE_DIR=${POKEMOON_PIPELINE_DIR:-"$ROOT/tools/3DS-Decomp-Pipeline"}
WORK_DIR=${POKEMOON_DECOMP_WORK_DIR:-"$ROOT/.decomp"}
SOURCE_CXI=${POKEMOON_SOURCE_CXI:-"$ROOT/extracted/cxi/main.fully-decrypted.cxi"}
RUNTIME_DIR=${POKEMOON_RUNTIME_DIR:-"$ROOT/build/runtime"}
OUTPUT_DIR="$RUNTIME_DIR/hybrid_exact"
OUTPUT_CXI="$OUTPUT_DIR/PokemonMoon_hybrid_exact.cxi"
EXPECTED_SHA256=fbe0ce6da21542542f49645fff78ba1b7e5e7cc172ce4daceeb5c26ab54adba1
SOURCE="$ROOT/src/savedata/is_egg_exist.cpp"
PIPELINE_SOURCE="$WORK_DIR/src/code.bin/IsEggExist_00444a68.cpp"
COMPILED_OBJECT="$WORK_DIR/build/code.bin/IsEggExist_00444a68.o"
SPLIT_OBJECT="$WORK_DIR/split/code.bin/IsEggExist_00444a68.o"
SYMBOL=_ZNK8Savedata8Sodateya10IsEggExistENS_10SodateyaIDE

if [[ ! -f "$RUNTIME_DIR/baseline/CITRA_BOOT_CONFIRMED" ]]; then
  printf 'Baseline Citra boot is not confirmed; refusing Hybrid #1.\n' >&2
  exit 1
fi

mkdir -p "$OUTPUT_DIR/logs"
ln -sfn "$SOURCE" "$PIPELINE_SOURCE"
touch "$WORK_DIR/cc.yaml"

CPLUS_INCLUDE_PATH="$ROOT/include${CPLUS_INCLUDE_PATH:+:$CPLUS_INCLUDE_PATH}" \
python "$PIPELINE_DIR/main.py" "$WORK_DIR" \
  --single-binary code.bin \
  --skip-split \
  --recreate-binaries \
  --no-objdiff \
  --verbose-compilation \
  2>&1 | tee "$OUTPUT_DIR/logs/pipeline.log"

python "$ROOT/tools/compare_function.py" \
  "$COMPILED_OBJECT" "$SYMBOL" 0x00444A68 \
  --code-bin "$ROOT/extracted/exefs/code.bin" \
  2>&1 | tee "$OUTPUT_DIR/logs/function-compare.log"

HYBRID_CODE="$WORK_DIR/out/code.bin"
printf '%s  %s\n' "$EXPECTED_SHA256" "$HYBRID_CODE" | sha256sum --check
cmp "$ROOT/extracted/exefs/code.bin" "$HYBRID_CODE"

python "$ROOT/scripts/repack_decrypted_cxi.py" \
  "$SOURCE_CXI" "$HYBRID_CODE" "$OUTPUT_CXI" \
  2>&1 | tee "$OUTPUT_DIR/logs/repack.log"

python "$ROOT/scripts/verify_runtime_build.py" \
  "$OUTPUT_CXI" "$HYBRID_CODE" \
  --source-image "$SOURCE_CXI" \
  --manifest "$OUTPUT_DIR/verification.json" \
  2>&1 | tee "$OUTPUT_DIR/logs/verification.log"

python "$ROOT/scripts/prove_hybrid_replacement.py" \
  --source "$SOURCE" \
  --pipeline-source "$PIPELINE_SOURCE" \
  --compiled-object "$COMPILED_OBJECT" \
  --split-object "$SPLIT_OBJECT" \
  --response-file "$WORK_DIR/out/code.bin.txt" \
  --original-code "$ROOT/extracted/exefs/code.bin" \
  --hybrid-code "$HYBRID_CODE" \
  --hybrid-image "$OUTPUT_CXI" \
  --symbol "$SYMBOL" \
  --address 0x00444A68 \
  --output "$OUTPUT_DIR/manifest.json" \
  2>&1 | tee "$OUTPUT_DIR/logs/replacement-proof.log"

printf 'Hybrid #1 image: %s\n' "$OUTPUT_CXI"
