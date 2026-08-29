# Ghidra

## Environment

- Ghidra: 12.1.2 DEV, build 2026-06-29, installed at `/opt/ghidra`
- Ghidra runtime: OpenJDK 26
- ghidra-mcp: commit `6f7e7e8988e1efde5dd23372df71fe05c115722e`
- MCP reachability: live, but no project/program was open during bootstrap

## CTR Loader

- Repository: `https://github.com/Martmists-GH/ghidra-ctr-loader`
- Commit: `72dc758138c395a821f06c996fc2e4af7cb0d640`
- Upstream CI target: Ghidra 11.0
- Local target: Ghidra 12.1.2

Ghidra 12 changed `AbstractLibrarySupportLoader.load` to accept
`Loader.ImporterSettings`. A minimal local compatibility patch was applied to
`CROLoader.kt`; behavior was unchanged. The extension then built successfully:

```sh
JAVA_HOME=/usr/lib/jvm/java-21-openjdk GHIDRA_INSTALL_DIR=/opt/ghidra ./gradlew clean buildExtension
```

Built archive:
`tools/ghidra-ctr-loader/dist/ghidra_12.1.2_DEV_20260829_ghidra-ctr-loader.zip`

Installed under:
`/home/granddijay/.config/ghidra/ghidra_12.1.2_DEV/Extensions/ghidra-ctr-loader`

Ghidra must be restarted to load the newly installed extension.

The loader was additionally hardened to reject encrypted inner NCCH regions
with a clear message. Previously it parsed encrypted RomFS bytes as metadata
and exhausted Java heap while allocating a bogus filename.

## Import Finding

CTR Loader implements CIA/CXI as nested Ghidra filesystems. It does not expose
the top-level CIA as a program loader: a disposable headless direct-CIA test
failed with `No load spec found`. The correct executable import is
`/romfs/static.crs` from inside `extracted/cxi/main.fully-decrypted.cxi`. This
matters because
the CRS loader uses the enclosing CXI exheader and `/exefs/.code` to create the
correct `.text`, `.rodata`, and `.data` blocks. Do not import raw `code.bin`.

The loader's standalone `static.crs` path is explicitly unimplemented, so the
extracted CRS alone must not be used for the primary program.

## Imported Program

- Project: `PokemonMoon_US_v1_0`
- Path: `/mnt/samsung/pokemonMoondecomp/pokemoon-decomp/ghidra/PokemonMoon_US_v1_0`
- Program: `/romfs/static.crs`
- Loader: `CRS Loader`
- Language: `ARM:LE:32:v7`, default compiler specification
- Sections: `.text 0x00100000-0x00595FFF`, `.rodata 0x00596000-0x00635FFF`,
  `.data 0x00636000-0x00672FFF`, plus CRS metadata and externals
- Auto-analysis: complete
- Functions detected: 18,945
- Symbols detected: 98,458

The nominal Ghidra image base is zero because CRS metadata occupies low memory;
the executable sections themselves use the correct exheader virtual addresses.

### CRS to `code.bin` mapping

The program name does not mean that executable instructions come from the CRS
file. The loader uses `static.crs` for symbols and module metadata, then maps
the enclosing CXI's `/exefs/.code` into the executable sections described by
the exheader.

This was checked directly at three unrelated virtual addresses:

| Ghidra address | `code.bin` offset | Use |
|---|---:|---|
| `0x00317C94` | `0x00217C94` | Egg-construction wrapper |
| `0x00385AB8` | `0x00285AB8` | `FieldSodateya::EggAdopt` |
| `0x00444BFC` | `0x00344BFC` | `Sodateya::EggClear` |

At each location, the bytes in Ghidra exactly match
`extracted/exefs/code.bin[address - 0x00100000]`. Therefore executable virtual
addresses may be converted to file offsets by subtracting `0x00100000` within
the mapped code range. The low `header`, `name`, and `tables` CRS blocks are why
Ghidra still reports a nominal image base of zero.

The GNU demangler reported one non-fatal apply conflict at `0x006721F8` for
`_ZZN4gfl23gfx8GLMemorynwEjE5count` because data was already defined there.
No existing data was cleared merely to silence that warning.

## Modifications

- Renamed `FUN_00104de0` to `IsDebugMode` with a provenance plate comment.
- Added five `BehaviorAnchor` bookmarks.
- Added three instruction comments at validated behavior sites.
- Existing CTR/CRS recovered names were retained and not overwritten.
- Saved the program after modifications.

Phase 2 daycare/TinyMT additions:

- Created exact `gfl2_math_RandomState` (`0x10`) and
  `gfl2_math_RandomTinyMT` (`0x1C`) structures.
- Applied aggregate-aware prototypes to `Random::Initialize(State)`,
  `Random::Next(unsigned int)`, and `Random::SaveState()`.
- Renamed `FUN_00359158` to `RandomNext32_TinyMT`. The plate comment explicitly
  records that this is an AI semantic name, not an original recovered symbol.
- Added behavior/data-layout plate comments at `0x00316B90`, `0x0031747C`,
  `0x00317C94`, `FieldSodateya::EggAdopt`, and `Sodateya::EggClear`.
- Retained the three egg-generation `FUN_*` names because their original class
  and function names are not known.
- Created exact semantic structures for the 20-byte egg context, 92-byte egg
  construction data, `0xE8` boxed PK7 data, `0x1C` party extension, and 16-byte
  `CoreParam` wrapper layout.
- Applied those types to `0x00316B90`, `0x0031747C`, `0x00317C94`,
  `0x003186E0`, `0x00318C64`, and `0x0031DEF8`.
- Added provenance comments for the boxed-data construction boundary, PK7
  checksum, symmetric XOR transform, and `PokemonParam` conversion.
- Saved the program after these changes.

`scripts/generate_ghidra_labels.py` regenerates
`scripts/ImportKnownSymbols.java` from high-confidence CSV rows.
