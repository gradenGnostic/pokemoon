# Daycare and Breeding

- `0x00444A68`: `Savedata::Sodateya::IsEggExist`; reads byte
  `this[id * 0x200 + 0x1E0]`.
- `0x00385AB8`: `Field::FieldSodateya::EggAdopt`.
- `0x00444BFC`: `Savedata::Sodateya::EggClear`.
- Daycare record RNG state is four words at `+0x1E4..+0x1F0`.
- `0x00317C94`: egg-construction wrapper called by `EggAdopt` with two parents
  and a context containing trainer data, item `0x278`, and TinyMT state. It
  delegates breeding mechanics to `0x0031747C`, then heap-constructs a
  `PokemonParam` from the resulting temporary `CoreParam`.
- `0x004919BC` contains the validated instant-hatching hook site at `+0x24`.

Detailed Phase 2 notes:

- [`daycare/egg_generator_00317C94.md`](daycare/egg_generator_00317C94.md)
- [`daycare/tinymt.md`](daycare/tinymt.md)
- [`daycare/egg_adopt.md`](daycare/egg_adopt.md)
- [`daycare/egg_fields.md`](daycare/egg_fields.md)
- [`daycare/pokemon_representation.md`](daycare/pokemon_representation.md)
