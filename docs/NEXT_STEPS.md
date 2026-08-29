# Next Steps

Recommended Phase 2 clusters, in order:

1. `0x00317C94` egg generator and its immediate callees.
2. `Random::Initialize` / `0x00359158` / `Random::SaveState` TinyMT cluster.
3. `FieldSodateya::EggAdopt`, `Sodateya::EggClear`, and daycare record layout.
4. `BoxPokemon::GetSpaceCountAll` / `CheckPokemon` and the `0xE8` storage slot.
5. `QRUtility::AnalyzeQRBinaryForApp` and sibling QR analyzers.
6. `QRReaderSaveData::BatteryQuery` / `IsRegisteredData` savedata structure.
7. `GameManager` singleton accessor and save-manager object graph.
8. Field position path around the two validated `SetPosition` callsites.
9. Import/link `EggHatching.cro`, `Box.cro`, `QRReader.cro`, and `Battle.cro`.
10. Capture flow from `RequestFieldCapture` through `OpenPokemonCapture`.

Do not begin broad `FUN_*` conversion; each cluster should start with type and
call-graph recovery around these anchors.
