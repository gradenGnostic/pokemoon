# Egg Construction Fields

The work object passed from `0x0031747C` into the mechanics routine at
`0x00316B90` is at least `0x5C` bytes. `EggConstructionData` is a local semantic
name; no original class or structure symbol has been recovered.

| Offset | Size | Recovered meaning | Evidence |
|---:|---:|---|---|
| `0x00` | `4` | Personality/random word | Raw TinyMT output written after IV inheritance |
| `0x04` | `4` | Unknown companion word, set to zero | Written with personality word |
| `0x08` | `4` | Rerolled personality candidate | Language/item-dependent retry loop |
| `0x0C` | `4` | Unknown companion word, set to zero | Written with reroll candidate |
| `0x10` | `4` | Trainer ID word | Copied from generation context `+0x00` |
| `0x14` | `4` | Unknown, set to zero | Direct initialization |
| `0x18` | `2` | Species | Parent selection, evolution/species adjustment |
| `0x1A` | `1` | Form | Parent form and regional-form handling |
| `0x1B` | `1` | Padding/unknown | No confirmed access |
| `0x1C` | `2` | Level, initialized to 1 | Compared with learned-move levels |
| `0x1E` | `2` | Sex | Personal gender ratio and `Next(252)` |
| `0x20` | `2` | Nature | `Next(25)` or held-item parent nature |
| `0x22` | `1` | Ability slot/result | Parent ability and percentage selection |
| `0x23` | `1` | Unknown, initialized to 1 | Initialization only in mapped range |
| `0x24` | `0x0C` | Six 16-bit IV values | `Next(32)`, then parent IV inheritance |
| `0x30` | `4` | Personal ability parameter | Personal-data parameter `0x15` |
| `0x34` | `4` | Partially unknown | Only low byte explicitly initialized |
| `0x38` | `4` | Move count | Maintained by move inheritance helpers |
| `0x3C` | `8` | Four 16-bit moves | Level-up, shared, egg, and special moves |
| `0x44` | `4` | Memory value | Selected from parent memory slot 8 |
| `0x48` | `6` | Parent 0 inherited-IV flags | Power-item/random selection |
| `0x4E` | `6` | Parent 1 inherited-IV flags | Power-item/random selection |
| `0x54` | `4` | Number of IVs selected so far | Incremented with each inheritance flag |
| `0x58` | `4` | IV inheritance target, 3 or 5 | Five when either parent holds item `0x118` |

The six IV values are randomized first. Selection flags then replace chosen
stats with `CoreParam::GetNativeTalentPower` from the indicated parent.

## Generation context

`FieldSodateya::EggAdopt` constructs a separate 20-byte context:

| Offset | Size | Meaning |
|---:|---:|---|
| `0x00` | `4` | Player trainer ID word |
| `0x04` | `4` | Player-name `StrBuf*` |
| `0x08` | `1` | Result of checking possession of item `0x278` |
| `0x0C` | `4` | `gfl2::math::Random*` |
| `0x10` | `1` | Saved regional-form context byte |

The item byte adds two personality retries. Different parent language IDs add
six retries. The loop accepts the first candidate satisfying the predicate at
`0x0031B120`; assigning a specific charm name is deferred until the item table
is independently verified.
