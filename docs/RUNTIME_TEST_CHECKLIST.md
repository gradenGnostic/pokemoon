# Runtime test checklist

Record observed results only. A successful structural verification or
byte-identical executable does not count as an emulator or gameplay pass.

## Baseline

- [ ] Game boots
- [ ] Title screen appears
- [ ] Save loads
- [ ] Overworld is reachable

## Hybrid exact

- [ ] Game boots
- [ ] Title screen appears
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
