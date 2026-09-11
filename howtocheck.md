# How to check decompilation progress

## Check the live worker

Connect to the worker host:

```sh
ssh -p 6769 debian@100.126.128.42
cd /app/pokemonMoondecomp/pokemoon
```

Check whether Supervisor is running the worker:

```sh
/app/pokemonMoondecomp/.venv-reagent/bin/supervisorctl \
  -c /app/pokemonMoondecomp/pokemonmoon-yellow-supervisord.conf status
```

Check detailed progress:

```sh
python3 scripts/reagent/yellow_worker.py status
```

Important fields in the JSON output:

- `worker`: current worker state, such as `RUNNING`, `STOPPED`, or
  `HIGH_CONFIDENCE_EXHAUSTED`.
- `source_backed`: live number of reconstructed functions.
- `remaining_yellow`: unresolved functions in the current YELLOW queue.
- `current_cluster` and `current_namespace`: job being processed.
- `cluster_states`: pending, partial, deferred, and completed job counts.
- `rolling_rate.60m.promotions_per_hour`: recent hourly throughput.

## Calculate percentages

The current worker target is 3,000 functions. Calculate target progress with:

```text
target percentage = source_backed / 3000 * 100
```

The catalog contains 18,945 functions. Calculate overall progress with:

```text
overall percentage = source_backed / 18945 * 100
```

For example, 2,500 reconstructed functions would be 83.33% of the worker
target and 13.20% of the full catalog.

## Estimate completion time

Use the 60-minute promotion rate when it is nonzero:

```text
remaining target = 3000 - source_backed
estimated hours = remaining target / rolling_rate.60m.promotions_per_hour
```

The estimate becomes unreliable when the worker is stopped, model calls are
timing out, or only difficult clusters remain. A zero rate does not produce a
meaningful ETA.

## Check validated repository progress

From a current local checkout, run:

```sh
git pull --ff-only
make progress
```

`make progress` reads `config/reconstructed_functions.csv` and reports the
validated repository total and overall percentage. This is the authoritative
number for merged progress.

The live worker number can temporarily be higher because its generated batch
has not yet been integrated. Before a batch is merged, it must pass manifest
overlap validation and the exact and semantic consistency checks:

```sh
make MODE=exact check
make MODE=semantic check
```

Use the live worker status for operational monitoring and `make progress` for
the clean, integrated project percentage.
