# Symbols

The database currently contains 28 validated anchors:

- `CONFIRMED_SYMBOL`: 14
- `SIGNATURE_CONFIRMED`: 1
- `BEHAVIOR_CONFIRMED`: 9
- `ALGORITHM_CONFIRMED`: 4
- `INFERRED`: 0
- `SPECULATIVE`: 0

CTR/CRS named exports independently confirm high-value names including
`BatteryQuery`, `IsRegisteredData`, `AnalyzeQRBinaryForApp`, `IsEggExist`,
`IsMyPokemon`, `SetEdgeMapTexture`, `Crc16`, and `GetInstance`.

`IsDebugMode` was missing from the imported symbols but its historical name,
exact v1.0 prologue, SDK memory access, and decompilation agree; it is therefore
`SIGNATURE_CONFIRMED`, not represented as a loader-recovered export.

Source and target addresses remain separate columns. Behavior-only addresses
receive bookmarks/comments rather than invented original names.

`RandomNext32_TinyMT` is the sole AI semantic Ghidra rename. Its CSV row and
plate comment explicitly distinguish it from loader-recovered original names.
