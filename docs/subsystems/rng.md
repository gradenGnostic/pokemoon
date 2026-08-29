# RNG

- `gfl2::math::Random` is the 28-byte TinyMT32 wrapper documented in
  [`daycare/tinymt.md`](daycare/tinymt.md).
- `0x00358FA4`: `Random::Initialize(Random::State)`.
- `0x00359000`: `Random::Initialize()` using an internally generated seed.
- `0x003590D8`: `Random::Next(unsigned int)`.
- `0x00359158`: raw 32-bit `Random::Next()` transition and tempering routine.
- `0x003591D4`: `Random::SaveState()`, returning only the 16-byte mutable state.
- `0x003589CC`: `gfl2::math::SFMTRandom::SFMTRandom` is a separate generator.
  Breeding does not use it.
