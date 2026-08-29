# `FieldSodateya::EggAdopt`

## Function

- Address: `0x00385AB8`
- Original recovered name: `Field::FieldSodateya::EggAdopt(Savedata::SodateyaID)`
- Return: allocated egg `CoreParam`/`PokemonParam` wrapper, or null when storage
  is full

## Flow

1. If the party already contains six Pokémon, call
   `Savedata::BoxPokemon::GetSpaceCountAll`. Return null when the boxes also
   contain no free slot.
2. Allocate two 16-byte `PokemonParam` wrappers and load daycare parent 0 and
   parent 1 through `0x00444AC0`.
3. Build the generation context from the player's trainer ID, trainer name,
   possession of item `0x278`, the daycare TinyMT object, and a one-byte savedata
   field currently lacking a semantic name.
4. Restore TinyMT status from daycare record offsets `+0x1E4..+0x1F0` and call
   the egg-construction wrapper at `0x00317C94`.
5. Advance TinyMT once, save its status to the daycare record, record the diary
   event, then call `Sodateya::EggClear`.
6. Destroy the temporary trainer-name buffer and both parent wrappers, then
   return the generated Pokémon.

## Capacity behavior

The early return occurs before parent allocation, RNG restoration, or daycare
mutation. A full party alone is allowed when at least one box slot remains. A
full party and full boxes leave the pending egg and RNG state untouched.

## Partial `FieldSodateya` layout

| Offset | Meaning |
|---:|---|
| `+0x04` | Heap/allocator context used for wrappers and strings |
| `+0x0C` | Field/save context object |
| `+0x10` | `Savedata::Sodateya*` |

Names for the first two members remain semantic placeholders because their
concrete class types have not yet been recovered.
