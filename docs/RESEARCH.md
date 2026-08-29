# Research

## Repositories

Exact commits are pinned in `research/repos.lock`. The target code hash exactly
matches SMPatcher's Pokémon Moon v1.0 hash, making its SM 1.0 table directly
applicable after per-site byte checks.

- SunMoonPatches: genuine-name claims and hand-written QR/box ARM payloads.
- sumoCheatMenu: v1.0/v1.1/v1.2 behavior patches and restoration words.
- AlolanCTRPluginFramework: broad semantic hook map; most names are plugin
  behaviors and most original words are captured only at runtime.
- SMPatcher: authoritative whole-file hashes and QR/no-outline offsets.
- sun-moon-rng: TinyMT breeding reconstruction and bibliographic trail.

## Archaeology

The Kaphotics breeding disassembly itself was not recovered. The strongest
surviving trail is RNG-chan's explicit README credit and issues #10, #12, and
#19, where maintainers corrected parent ordering, PID assumptions, and ball
inheritance after consulting/interpreting that disassembly. No URL, address,
build, region, listing, or archive identifier survives in the repository.

GitHub code/issue/repository searches for the exact credit phrase and common
Sun/Moon disassembly terms produced no additional public artifact in this pass.
The negative result is recorded rather than treating the reconstructed Python
algorithm as the lost disassembly.

RNG-chan models **TinyMT32**, not SFMT, for breeding. Parameters are
`mat1=0x8F7011EE`, `mat2=0xFC78FF1F`, and `tmat=0x3793FDFF`. Its current Python
master has a known unmerged 32-bit overflow correction, so it is useful as
algorithmic evidence but not a bit-perfect oracle without review.

## Provenance Rule

CTR/CRS recovered names and independently corroborated SDK/game names are kept
separate from cheat labels. `WalkThroughWalls`, `InstantEggHatch`, and
`NoOutlines` describe modifications; they are not original function names.
