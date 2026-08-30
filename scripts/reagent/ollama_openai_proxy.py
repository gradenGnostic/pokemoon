#!/usr/bin/env python3
"""Minimal localhost OpenAI facade that forces the Ollama ARM-workflow context."""

from __future__ import annotations

import argparse
import json
import re
import time
import urllib.error
import urllib.request
import uuid
from http.server import BaseHTTPRequestHandler, ThreadingHTTPServer


MODEL = "qwen2.5-coder:7b"


def normalize_reverser_response(content: str) -> str:
    """Move re-agent's metadata tag outside a C++ fence when Qwen nests it."""
    pattern = re.compile(
        r"(```(?:cpp|c\+\+)\s*\n)(.*?)(^REVERSED_FUNCTION:\s*[^\n]+\n?)(```)",
        re.MULTILINE | re.DOTALL,
    )
    match = pattern.search(content)
    if match is None:
        return content
    replacement = f"{match.group(1)}{match.group(2).rstrip()}\n{match.group(4)}\n{match.group(3).strip()}"
    return content[:match.start()] + replacement + content[match.end():]


class Handler(BaseHTTPRequestHandler):
    upstream = "http://127.0.0.1:11434"
    context_length = 8192

    def do_GET(self) -> None:  # noqa: N802
        if self.path == "/healthz":
            self._json(200, {"ok": True, "model": MODEL, "num_ctx": self.context_length})
            return
        if self.path == "/v1/models":
            self._json(200, {"object": "list", "data": [{"id": MODEL, "object": "model"}]})
            return
        self._json(404, {"error": {"message": "not found"}})

    def do_POST(self) -> None:  # noqa: N802
        if self.path != "/v1/chat/completions":
            self._json(404, {"error": {"message": "not found"}})
            return
        try:
            length = int(self.headers.get("Content-Length", "0"))
            request = json.loads(self.rfile.read(length))
            if request.get("model") != MODEL:
                raise ValueError(f"only {MODEL} is allowed")
            if request.get("stream"):
                raise ValueError("streaming is not supported")
            payload = {
                "model": MODEL,
                "messages": request.get("messages", []),
                "stream": False,
                "options": {
                    "num_ctx": self.context_length,
                    "num_predict": int(request.get("max_tokens", 3072)),
                    "temperature": float(request.get("temperature", 0.0)),
                },
            }
            upstream_request = urllib.request.Request(
                f"{self.upstream}/api/chat",
                data=json.dumps(payload).encode("utf-8"),
                headers={"Content-Type": "application/json"},
                method="POST",
            )
            with urllib.request.urlopen(upstream_request, timeout=600) as response:
                result = json.load(response)
            content = normalize_reverser_response(result.get("message", {}).get("content", ""))
            now = int(time.time())
            self._json(200, {
                "id": f"chatcmpl-{uuid.uuid4().hex}",
                "object": "chat.completion",
                "created": now,
                "model": MODEL,
                "choices": [{
                    "index": 0,
                    "message": {"role": "assistant", "content": content},
                    "finish_reason": "stop" if result.get("done") else None,
                }],
                "usage": {
                    "prompt_tokens": int(result.get("prompt_eval_count", 0)),
                    "completion_tokens": int(result.get("eval_count", 0)),
                    "total_tokens": int(result.get("prompt_eval_count", 0)) + int(result.get("eval_count", 0)),
                },
            })
        except (ValueError, json.JSONDecodeError) as exc:
            self._json(400, {"error": {"message": str(exc)}})
        except (OSError, urllib.error.URLError) as exc:
            self._json(502, {"error": {"message": f"Ollama request failed: {exc}"}})

    def log_message(self, fmt: str, *args: object) -> None:
        return

    def _json(self, status: int, payload: object) -> None:
        body = json.dumps(payload).encode("utf-8")
        self.send_response(status)
        self.send_header("Content-Type", "application/json")
        self.send_header("Content-Length", str(len(body)))
        self.end_headers()
        self.wfile.write(body)


def main() -> None:
    parser = argparse.ArgumentParser()
    parser.add_argument("--host", default="127.0.0.1")
    parser.add_argument("--port", type=int, default=11435)
    parser.add_argument("--context", type=int, default=8192)
    args = parser.parse_args()
    if args.host not in {"127.0.0.1", "localhost"}:
        raise SystemExit("Refusing to expose the model proxy beyond localhost")
    if not 8192 <= args.context <= 16384:
        raise SystemExit("Context must stay within the approved 8192-16384 range")
    Handler.context_length = args.context
    ThreadingHTTPServer((args.host, args.port), Handler).serve_forever()


if __name__ == "__main__":
    main()
