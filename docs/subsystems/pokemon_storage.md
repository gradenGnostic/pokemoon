# Pokemon Storage

- `0x00437388`: `Savedata::BoxPokemon::GetSpaceCountAll`.
- `0x00436F74`: `Savedata::BoxPokemon::CheckPokemon`.
- `EggAdopt` reaches box storage through save data at `+0x3F0C`.
- Sun/Moon patch research uses 30 slots/box, 960 slots total, and `0xE8` bytes
  per stored PK7. These layout claims remain research-derived until typed.
