# Symbols

The database currently contains 14 validated anchors:

- `CONFIRMED_SYMBOL`: 8
- `SIGNATURE_CONFIRMED`: 1
- `BEHAVIOR_CONFIRMED`: 5
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
