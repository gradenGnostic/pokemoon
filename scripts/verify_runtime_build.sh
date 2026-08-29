#!/usr/bin/env bash
set -euo pipefail

ROOT=$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)
WORK_DIR=${POKEMOON_DECOMP_WORK_DIR:-"$ROOT/.decomp"}
SOURCE_CXI=${POKEMOON_SOURCE_CXI:-"$ROOT/extracted/cxi/main.fully-decrypted.cxi"}
RUNTIME_DIR=${POKEMOON_RUNTIME_DIR:-"$ROOT/build/runtime"}
IMAGE=${1:-"$RUNTIME_DIR/baseline/PokemonMoon_rebuilt_baseline.cxi"}
CODE=${2:-"$WORK_DIR/out/code.bin"}

python "$ROOT/scripts/verify_runtime_build.py" \
  "$IMAGE" "$CODE" --source-image "$SOURCE_CXI"
