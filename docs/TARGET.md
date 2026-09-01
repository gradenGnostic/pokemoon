# Target

The target was identified from local CIA, TMD, NCCH, exheader, and SMDH data.
The source archive used for this project is the European multilingual base
release. The Title ID and product code are retained as executable identity
fields, but they are not used here to override the source-region record.

## Original CIA

- Filename: `Pokemon Moon (Europe) (EnJaFrDeEsItZhKo).cia`
- Original location: parent of the project directory; never copied into project
- Current presence: intentionally deleted by the user after extraction
- Size: 3,204,281,344 bytes
- SHA-256: `95bfa9a0bda15fd478c409f3e30a239eae621054512e2b77615c4efec4ce6b75`
- SHA-1: `e459f0ed376fac7ce4709cb1d2f80ae12417fdfd`
- Initial `file(1)` classification: generic data

The hash, size, mtime, and inode were rechecked unchanged after all extraction
operations. The user subsequently confirmed intentional deletion of the
original CIA; no project tool moved or modified it.

## Identity

- Title: Pokemon Moon (confirmed by local ExeFS SMDH)
- Title ID / program ID: `0004000000175E00`
- Product code: `CTR-P-BNEA`
- Region: Europe
- Region evidence: source CIA is the Europe-labelled multilingual release used
  for this decompilation; executable IDs are retained separately as identity
  metadata
- SMDH region mask: `0x7FFFFFFF` (the application advertises broad region support)
- TMD title version: `0.0.0 (0)`, corresponding to base game v1.0
- Update content: absent; this CIA contains base application and manual only
- Decryption: the CIA content layer is unencrypted, but the executable NCCH's
  exheader, ExeFS, and RomFS regions remain encrypted. CTR Loader cannot decrypt
  those regions. A fully decrypted derived CXI was therefore reconstructed
  locally from `ctrtool` output; the original CIA and source CXI were untouched.

## CIA Contents

- Content 0: executable CXI, 3,202,183,168 bytes
  - SHA-256: `84f94651a981cc484c5345f642008b281d05b742815058d98cde22bf7b67296e`
  - SHA-1: `1349b91f6d05afdea43bc589ad540bdace7afc17`
- Content 1: electronic-manual CFA, 2,068,480 bytes
  - SHA-256: `fc15ea2df7abfb0e3c318918e74d1fb5f3affa8afd3764ef3fc78ea0280e457b`
  - SHA-1: `b44d4be78217d42c099c1ed1db4312dcb69be1d3`

## Executable

- Exheader process name: `niji_loc`
- Architecture: 32-bit little-endian ARMv7
- Text: `0x00100000`, size `0x004957A0`, mapped through `0x00595FFF`
- Read-only data: `0x00596000`, size `0x0009FE88`
- Data: `0x00636000`, size `0x0003C430`
- BSS size: `0x000300F4`
- `code.bin` size: 5,713,920 bytes
- `code.bin` SHA-256: `fbe0ce6da21542542f49645fff78ba1b7e5e7cc172ce4daceeb5c26ab54adba1`
- `code.bin` SHA-1: `90b2a20adcf67a0508f7380381e4f32b2d9255d3`
- `static.crs` SHA-256: `e18db06b0609739e8e62cd4786c6b2da838d20347050e4c2ac822bf35c016957`
- CRO modules: 115
- Fully decrypted derived CXI SHA-256: `1a348d4cfe65473b4c5e85f1c5e6e797449fcfd23372ce30c35e303eda701626`
- Fully decrypted derived CXI SHA-1: `430b0f6449d10512ed47be72ac429cb4bda4ebfa`

High-value modules already recovered include `Battle.cro`, `Box.cro`,
`EggHatching.cro`, `FieldRo.cro`, `QRReader.cro`, and `static.crs`.

## Extraction Log

`ctrtool` was built locally from `3DSGuy/Project_CTR` commit
`e8f5f529c54ff9b22a2491a480ffa69206bf7b19` using its documented commands:

```sh
make deps
make
```

Inspection:

```sh
./bin/ctrtool -i -v "/mnt/samsung/pokemonMoondecomp/Pokemon Moon (Europe) (EnJaFrDeEsItZhKo).cia"
```

CIA extraction (the README advertises `--footer`, but v1.3.0 rejected that
option; the successful command omitted it):

```sh
./bin/ctrtool --contents="/mnt/samsung/pokemonMoondecomp/pokemoon-decomp/extracted/cia" --certs="/mnt/samsung/pokemonMoondecomp/pokemoon-decomp/extracted/metadata/certificates.bin" --tik="/mnt/samsung/pokemonMoondecomp/pokemoon-decomp/extracted/metadata/title.tik" --tmd="/mnt/samsung/pokemonMoondecomp/pokemoon-decomp/extracted/metadata/title.tmd" "/mnt/samsung/pokemonMoondecomp/Pokemon Moon (Europe) (EnJaFrDeEsItZhKo).cia"
```

The generated content files were classified before being moved to
`extracted/cxi/main.cxi` and `extracted/cia/manual.cfa`.

Executable/ROM filesystem extraction:

```sh
./bin/ctrtool --exheader="/mnt/samsung/pokemonMoondecomp/pokemoon-decomp/extracted/metadata/exheader.bin" --exefsdir="/mnt/samsung/pokemonMoondecomp/pokemoon-decomp/extracted/exefs" --romfsdir="/mnt/samsung/pokemonMoondecomp/pokemoon-decomp/extracted/romfs" "/mnt/samsung/pokemonMoondecomp/pokemoon-decomp/extracted/cxi/main.cxi"
```

This recovered ExeFS and all 115 root CRO modules plus `static.crs`. The tool
reported `VirtualFileSystem::openFile(): File does not exist` when continuing
into the large asset subtree, so full proprietary RomFS extraction remains
incomplete and is not required for the current executable bootstrap.

Raw decrypted NCCH regions were subsequently extracted with:

```sh
./bin/ctrtool --exheader="/mnt/samsung/pokemonMoondecomp/pokemoon-decomp/extracted/metadata/exheader.decrypted.bin" --exefs="/mnt/samsung/pokemonMoondecomp/pokemoon-decomp/extracted/exefs/main.decrypted.exefs" --romfs="/mnt/samsung/pokemonMoondecomp/pokemoon-decomp/extracted/romfs/main.decrypted.romfs" "/mnt/samsung/pokemonMoondecomp/pokemoon-decomp/extracted/cxi/main.cxi"
```

These regions were inserted at their original NCCH offsets in a derived copy,
`extracted/cxi/main.fully-decrypted.cxi`, and the NCCH no-crypto flag was set.
Changing that flag necessarily invalidates the copied NCCH RSA signature; this
is expected for the local derived analysis image.
