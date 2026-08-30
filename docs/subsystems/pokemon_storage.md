# Pokemon Storage

- `0x00437388`: `Savedata::BoxPokemon::GetSpaceCountAll`.
- `0x00436F74`: `Savedata::BoxPokemon::CheckPokemon`.
- `EggAdopt` reaches box storage through save data at `+0x3F0C`.
- Sun/Moon patch research uses 30 slots/box, 960 slots total, and `0xE8` bytes
  per stored PK7. These layout claims remain research-derived until typed.
- `Savedata::BOX` now has a source-backed partial layout through offset `0x5E7`.
  Proven fields include 32 tray names at `+0x004`, six team names at `+0x444`,
  team locks at `+0x5BE`, wallpapers at `+0x5C4`, tray maximum at `+0x5E5`,
  and current tray at `+0x5E7`.
- Seven BOX accessors compile: five are `ASM_MATCH` and two are semantic
  equivalents with different ARM.
