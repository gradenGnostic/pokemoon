#!/usr/bin/env bash
set -euo pipefail

ROOT=$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)
PIPELINE_DIR=${POKEMOON_PIPELINE_DIR:-"$ROOT/tools/3DS-Decomp-Pipeline"}
WORK_DIR=${POKEMOON_DECOMP_WORK_DIR:-"$ROOT/.decomp"}
SOURCE_CXI=${POKEMOON_SOURCE_CXI:-"$ROOT/extracted/cxi/main.fully-decrypted.cxi"}
RUNTIME_DIR=${POKEMOON_RUNTIME_DIR:-"$ROOT/build/runtime"}
OUTPUT_DIR="$RUNTIME_DIR/baseline"
OUTPUT_CXI="$OUTPUT_DIR/PokemonMoon_rebuilt_baseline.cxi"
EXPECTED_SHA256=fbe0ce6da21542542f49645fff78ba1b7e5e7cc172ce4daceeb5c26ab54adba1

mkdir -p "$OUTPUT_DIR/logs"

python "$PIPELINE_DIR/main.py" "$WORK_DIR" \
  --single-binary code.bin \
  --skip-split \
  --use-splits-only \
  --recreate-binaries \
  --no-objdiff \
  2>&1 | tee "$OUTPUT_DIR/logs/pipeline.log"

REBUILT_CODE="$WORK_DIR/out/code.bin"
printf '%s  %s\n' "$EXPECTED_SHA256" "$REBUILT_CODE" | sha256sum --check
cmp "$ROOT/extracted/exefs/code.bin" "$REBUILT_CODE"

python "$ROOT/scripts/repack_decrypted_cxi.py" \
  "$SOURCE_CXI" "$REBUILT_CODE" "$OUTPUT_CXI" \
  2>&1 | tee "$OUTPUT_DIR/logs/repack.log"

python "$ROOT/scripts/verify_runtime_build.py" \
  "$OUTPUT_CXI" "$REBUILT_CODE" \
  --source-image "$SOURCE_CXI" \
  --manifest "$OUTPUT_DIR/verification.json" \
  2>&1 | tee "$OUTPUT_DIR/logs/verification.log"

printf 'Baseline image: %s\n' "$OUTPUT_CXI"
