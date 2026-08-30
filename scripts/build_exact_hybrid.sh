#!/usr/bin/env bash
set -euo pipefail

ROOT=$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)
PIPELINE_DIR=${POKEMOON_PIPELINE_DIR:-"$ROOT/tools/3DS-Decomp-Pipeline"}
WORK_DIR=${POKEMOON_DECOMP_WORK_DIR:-"$ROOT/.decomp"}
SOURCE_CXI=${POKEMOON_SOURCE_CXI:-"$ROOT/extracted/cxi/main.fully-decrypted.cxi"}
MANIFEST=${1:-"$ROOT/analysis/batches/hybrid_0016.csv"}
BUILD_NAME=${2:-hybrid_0016}
OUTPUT_DIR="$ROOT/build/runtime/$BUILD_NAME"
OUTPUT_CXI="$OUTPUT_DIR/PokemonMoon_${BUILD_NAME}.cxi"
HYBRID_CODE="$WORK_DIR/out/code.bin"
EXPECTED_SHA256=fbe0ce6da21542542f49645fff78ba1b7e5e7cc172ce4daceeb5c26ab54adba1

python3 -c 'import json,sys; d=json.load(open(sys.argv[1])); assert d.get("runtime_tested") is True and d.get("boot_verified") is True' \
  "$ROOT/config/runtime_hybrid_exact.json"
mkdir -p "$OUTPUT_DIR/logs"

python3 "$ROOT/scripts/prepare_exact_hybrid.py" "$MANIFEST" --work-dir "$WORK_DIR" \
  2>&1 | tee "$OUTPUT_DIR/logs/prepare.log"
touch "$WORK_DIR/cc.yaml"

CPLUS_INCLUDE_PATH="$ROOT/include${CPLUS_INCLUDE_PATH:+:$CPLUS_INCLUDE_PATH}" \
python3 "$PIPELINE_DIR/main.py" "$WORK_DIR" \
  --single-binary code.bin \
  --no-objdiff \
  --recreate-binaries \
  --verbose-compilation \
  2>&1 | tee "$OUTPUT_DIR/logs/pipeline.log"

printf '%s  %s\n' "$EXPECTED_SHA256" "$HYBRID_CODE" | sha256sum --check
cmp "$ROOT/extracted/exefs/code.bin" "$HYBRID_CODE"

python3 "$ROOT/scripts/repack_decrypted_cxi.py" \
  "$SOURCE_CXI" "$HYBRID_CODE" "$OUTPUT_CXI" \
  2>&1 | tee "$OUTPUT_DIR/logs/repack.log"

python3 "$ROOT/scripts/verify_runtime_build.py" \
  "$OUTPUT_CXI" "$HYBRID_CODE" \
  --source-image "$SOURCE_CXI" \
  --manifest "$OUTPUT_DIR/verification.json" \
  2>&1 | tee "$OUTPUT_DIR/logs/verification.log"

python3 "$ROOT/scripts/prove_exact_hybrid.py" "$MANIFEST" \
  --work-dir "$WORK_DIR" \
  --original-code "$ROOT/extracted/exefs/code.bin" \
  --hybrid-code "$HYBRID_CODE" \
  --hybrid-image "$OUTPUT_CXI" \
  --output "$OUTPUT_DIR/manifest.json" \
  2>&1 | tee "$OUTPUT_DIR/logs/replacement-proof.log"

printf 'Exact hybrid image: %s\n' "$OUTPUT_CXI"
