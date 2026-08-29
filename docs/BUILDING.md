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
per split object. A focused CSV containing `IsEggExist` was used to validate the
whole mechanism while preserving the unsymbolized regions as two gap objects.

The pipeline successfully:

1. Split all 5,713,920 bytes of `code.bin` around `0x00444A68`.
2. Compiled and accepted the C++ replacement without a mismatch.
3. Relinked both split-only and compiled-replacement configurations.
4. Recreated a byte-identical `code.bin` and passed its built-in SHA-256 check.

A complete symbol-granularity split remains deferred because the live Ghidra
bridge has inline script execution disabled. Exporting with upstream
`ExportSymbols.java` requires restarting the bridge with
`GHIDRA_MCP_ALLOW_SCRIPTS=1`. The focused round trip proves that neither the
binary layout nor the linker/toolchain is blocking further work.

## Focused loop

Compile a source with one section per function:

```sh
arm-none-eabi-g++ -std=gnu++11 -mcpu=mpcore -marm \
  -mfpu=vfp -mfloat-abi=softfp -O2 -fno-exceptions -fno-rtti \
  -fno-unwind-tables -fno-asynchronous-unwind-tables -ffunction-sections \
  -Iinclude -c src/savedata/is_egg_exist.cpp -o /tmp/is_egg_exist.o
```

Compare one symbol against the local, ignored executable:

```sh
python3 tools/compare_function.py /tmp/is_egg_exist.o \
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

This establishes a working compile/extract/compare/relink loop. The TinyMT
functions are semantically reconstructed but not matching under GCC 16 due to
register allocation and aggregate-copy differences from the original compiler.
