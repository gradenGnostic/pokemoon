# Breeding TinyMT32

## Runtime layout

`gfl2::math::Random` is a 28-byte TinyMT32 wrapper:

| Offset | Size | Meaning |
|---:|---:|---|
| `0x00` | `0x10` | Four mutable TinyMT status words |
| `0x10` | `4` | `mat1 = 0x8F7011EE` |
| `0x14` | `4` | `mat2 = 0xFC78FF1F` |
| `0x18` | `4` | `tmat = 0x3793FDFF` |

The daycare save record persists only the four status words. Reinitializing a
runtime object restores the three fixed parameters around that saved state.

## Functions

| Address | Size | Meaning |
|---:|---:|---|
| `0x00358FA4` | `0x2C` | `Random::Initialize(State)` |
| `0x00359000` | `0x30` | `Random::Initialize()` from an internal seed source |
| `0x003590D8` | `0x80` | `Random::Next(limit)` |
| `0x00359158` | `0x7C` | Raw transition, tempering, and next `uint32_t` |
| `0x003591D4` | `0x0C` | `Random::SaveState()` |
| `0x003591E0` | `0x04` | Empty constructor |

`Next(limit)` duplicates the transition and tempering sequence, passes the
result and `limit` to `__aeabi_uidivmod`, and returns the remainder from `r1`.
It therefore has the ordinary `value % limit` semantics and the same undefined
zero-divisor precondition as unsigned division.

`SaveState()` is a structure return. ARM passes the hidden destination in `r0`
and `this` in `r1`; the implementation is exactly one 16-byte VFP load/store
pair followed by `bx lr`.

## Exact transition

All operations use wrapping 32-bit unsigned arithmetic:

```cpp
x = (status[0] & 0x7fffffff) ^ status[1] ^ status[2];
x ^= x << 1;
y = status[3];
y ^= (y >> 1) ^ x;
status[0] = status[1];
status[1] = status[2] ^ ((0u - (y & 1u)) & mat1);
status[2] = x ^ (y << 10) ^ ((0u - (y & 1u)) & mat2);
status[3] = y;
t = status[0] + (status[2] >> 8);
return t ^ status[3] ^ ((0u - (t & 1u)) & tmat);
```

The constants and shifts match the reference TinyMT32 parameter set. This is
separate from `gfl2::math::SFMTRandom` at `0x003589CC`.

## Daycare sequencing

`FieldSodateya::EggAdopt` restores the four words from record offsets
`+0x1E4..+0x1F0`, lets breeding mechanics consume the generator, advances it
once more, saves it, and calls `EggClear`. `EggClear` restores that newly saved
state, advances once again, saves it, and clears the egg-present byte. Thus a
successful adoption performs two explicit post-generation advances in addition
to every random draw made by the breeding mechanics.
