# Building and Function Diffing

## Toolchain

- `arm-none-eabi-g++` 16.2.0
- GNU binutils 2.47
- Target flags currently used for exploratory matching:
  `-std=gnu++11 -mcpu=mpcore -marm -mfpu=vfp -mfloat-abi=softfp -O2`
- Freestanding flags:
  `-fno-exceptions -fno-rtti -fno-unwind-tables`
  `-fno-asynchronous-unwind-tables -ffunction-sections`

The installed cross-compiler does not include newlib headers. Reconstructed
target headers therefore avoid host C/C++ library dependencies unless the
required headers are supplied explicitly.

## Pipeline

`AlgebraManiacABC/3DS-Decomp-Pipeline` is cloned, but ignored, at
`tools/3DS-Decomp-Pipeline` at commit
`621bbce909ad2f9c551563c7443ed80c0123fe77`.

The upstream pipeline expects a complete Ghidra symbol CSV and one source file
per split object. The project currently has focused research symbols rather
than a complete executable export, so full split/relink is deferred until that
export is generated. This is a tooling prerequisite, not a binary or compiler
failure.

## Focused loop

Compile a source with one section per function:

```sh
arm-none-eabi-g++ -std=gnu++11 -mcpu=mpcore -marm \
  -mfpu=vfp -mfloat-abi=softfp -O2 -fno-exceptions -fno-rtti \
  -fno-unwind-tables -fno-asynchronous-unwind-tables -ffunction-sections \
  -Iinclude -c src/savedata/sodateya.cpp -o /tmp/sodateya.o
```

Compare one symbol against the local, ignored executable:

```sh
python3 tools/compare_function.py /tmp/sodateya.o \
  _ZNK8Savedata8Sodateya10IsEggExistENS_10SodateyaIDE 0x00444A68
```

The comparator converts the virtual address to a `code.bin` offset by
subtracting `0x00100000`, extracts the symbol's ELF section, and exits zero only
for an exact byte match.

## Current result

`Savedata::Sodateya::IsEggExist` compiles to the exact 16 target bytes:

```text
810480e0 1e0e80e2 d000d0e1 1eff2fe1
```

This establishes a working compile/extract/compare loop. The TinyMT functions
are semantically reconstructed but not matching under GCC 16 due to register
allocation and aggregate-copy differences from the original compiler.
