#!/usr/bin/env bash
set -euo pipefail

root="$(cd "$(dirname "${BASH_SOURCE[0]}")/../.." && pwd)"
python_bin="$root/.venv-reagent/bin/python"
agent="$root/.venv-reagent/bin/re-agent"

if [[ ! -x "$agent" ]]; then
    printf 'Missing isolated auto-re-agent installation: %s\n' "$agent" >&2
    exit 127
fi

"$python_bin" "$root/scripts/reagent/targets.py" preflight

address=""
previous=""
for argument in "$@"; do
    if [[ "$previous" == "--address" ]]; then
        address="$argument"
        break
    fi
    previous="$argument"
done
if [[ -z "$address" ]]; then
    printf 'An explicit --address from the filtered target manifest is required\n' >&2
    exit 2
fi
"$python_bin" "$root/scripts/reagent/targets.py" validate --address "$address"

if [[ "${1:-}" == "--dry-run" ]]; then
    shift
    PATH="$root/scripts/reagent/bin:$PATH" exec "$agent" --config "$root/re-agent.yaml" reverse --dry-run "$@"
fi

"$python_bin" "$root/scripts/reagent/ollama_openai_proxy.py" --context 8192 &
proxy_pid=$!
cleanup() {
    kill "$proxy_pid" 2>/dev/null || true
    wait "$proxy_pid" 2>/dev/null || true
}
trap cleanup EXIT INT TERM

for _ in {1..50}; do
    if "$python_bin" -c 'import urllib.request; urllib.request.urlopen("http://127.0.0.1:11435/healthz", timeout=1).read()' 2>/dev/null; then
        break
    fi
    sleep 0.1
done
"$python_bin" -c 'import urllib.request; urllib.request.urlopen("http://127.0.0.1:11435/healthz", timeout=1).read()'

PATH="$root/scripts/reagent/bin:$PATH" "$agent" --config "$root/re-agent.yaml" reverse "$@"
