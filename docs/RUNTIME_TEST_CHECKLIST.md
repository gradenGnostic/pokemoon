# Runtime test checklist

Record observed results only. A successful structural verification or
byte-identical executable does not count as an emulator or gameplay pass.

## Baseline

- [x] Game boots
- [x] Title screen appears
- [ ] Save loads
- [ ] Overworld is reachable

## Hybrid exact

- [x] Game boots
- [x] Title screen appears
- [ ] Save loads
- [ ] No crash during basic navigation

## Daycare

- [ ] Daycare opens
- [ ] Deposited parents are recognized
- [ ] Egg can be generated
- [ ] Egg can be received
- [ ] Egg appears in party or storage
- [ ] Egg summary works
- [ ] Save succeeds
- [ ] Reload succeeds
- [ ] Egg remains valid after reload
- [ ] Egg hatches

## Test record

For every run, record the image path, image SHA-256, emulator name and version,
launch command, date, last successful screen or action, and any log path. Do not
commit save files or personal save data.

Baseline record, 2026-08-30: the user confirmed
`build/runtime/baseline/PokemonMoon_rebuilt_baseline.cxi` works normally in
Citra. The Citra version and launch command were not available to OpenCode.

Hybrid #1 record, 2026-08-30: the user confirmed
`build/runtime/hybrid_exact/PokemonMoon_hybrid_exact.cxi` boots successfully in
Citra. This records the boot gate only; save loading and gameplay behavior were
not separately reported. The Citra version and launch command were not
available to OpenCode.
