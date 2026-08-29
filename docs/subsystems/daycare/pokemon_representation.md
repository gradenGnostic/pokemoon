# Egg Pokémon Representation

## Construction boundary

The egg work structure becomes a serialized Pokémon at `0x00318C64`:

1. Allocate and clear exactly `0xE8` bytes.
2. Copy and normalize the `0x5C`-byte egg construction data through
   `0x00318348`.
3. Bind an accessor to the `0xE8` destination and populate its fields through
   `0x003186E0`.
4. Return the allocation, which is installed at `CoreParam +0x04` by
   `0x0031DEF8`.

This proves that egg mechanics do not first create a separate, larger runtime
format. They directly create the standard boxed `0xE8` PK7 payload, then wrap
it in runtime objects.

## `0xE8` boxed data

| Offset | Size | Meaning |
|---:|---:|---|
| `0x00` | `4` | Encryption constant / personality seed |
| `0x04` | `2` | Sanity/flags word |
| `0x06` | `2` | 16-bit checksum |
| `0x08` | `0xE0` | Four encrypted data blocks |

`0x00318258` sums 16-bit words to produce the checksum.
`0x003182B8` and `0x00318300` implement the same symmetric XOR transform: for
each 16-bit word, advance `seed = seed * 0x41C64E6D + 0x6073` and XOR the word
with `seed >> 16`. The encryption constant at offset zero is the seed.

Accessor routine `0x0031A3B0` decrypts `+0x08..+0xE7`, validates the checksum,
and marks the accessor decrypted. `0x0031A338` recomputes the checksum, encrypts
the same range, and marks it encrypted. The same transform is used for both
directions because it is XOR-based.

## Runtime wrappers

The common 16-byte `CoreParam`-family wrapper has this partial layout:

| Offset | Meaning |
|---:|---|
| `+0x00` | Virtual table pointer |
| `+0x04` | Pointer to `0xE8` boxed data |
| `+0x08` | Pointer to `0x1C` party extension, or null |
| `+0x0C` | Pointer to a 16-byte data accessor |

`0x0031DEF8` builds the temporary box-capable wrapper used by egg setup. The
`PokemonParam` constructor at `0x00317F24` allocates the `0x1C` party extension,
copies the temporary through a `0x104`-byte scratch representation, recalculates
party-only values, and returns the final wrapper. The combined serialized
runtime copy is therefore `0xE8 + 0x1C = 0x104` bytes.

`PokemonParam::CopyFrom` exports `0xE8` bytes followed by `0x1C` bytes through
`0x00319E64`, then imports them through `0x0031A0BC`. This copy path preserves
the encrypted boxed payload and party extension while rebinding the destination
accessor.

## Persistence boundary

`FieldSodateya::EggAdopt` returns the allocated `PokemonParam`. No static direct
caller is present in the imported main executable, which is consistent with a
module/export or virtual dispatch boundary. The later decision to append the
returned object to the party or store only its `0xE8` boxed portion is therefore
not assigned to an unobserved main-executable function. That final caller should
be recovered by importing/linking the relevant field module.
