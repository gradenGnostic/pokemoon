# Re-agent reports

This directory publishes compact queue and promotion reports used to reproduce
the current progress summary. Model transcripts, generated candidate scratch
files, compiler exception details, logs, caches, and SQLite worker state are
intentionally ignored.

The ignored `queue.sqlite3` and `yellow_state.sqlite3` files hold resumable local
worker state. Do not delete them when pausing work. Run the worker status command
from the repository root to inspect the local checkpoint:

```sh
python3 scripts/reagent/yellow_worker.py status
```
