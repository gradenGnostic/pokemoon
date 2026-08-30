# Pokemon Moon clean-room decompilation

This repository records reproducible metadata, research provenance, signatures,
and independently reconstructed source for a local, legally obtained Pokemon
Moon executable.

Proprietary game binaries and extracted assets are intentionally excluded from
version control. The original CIA was intentionally deleted after extraction;
the local ignored extraction is the only binary input used by this project.

Phase 1 established a reproducible target, CTR-aware Ghidra project, research
provenance, and subsystem anchors. Phase 2 reconstructed the daycare breeding
path and its TinyMT32 generator with function-level ARM comparisons. Phase 3 is
scaling source reconstruction across the retail `static.crs` and inventoried
CRO modules. Phase 2.5 donor work is paused indefinitely and is not required.

`config/reconstructed_functions.csv` is the canonical source/build status
manifest. Run `make check`, `make`, and `make verify` for the conservative
exact-only build. Full instructions are in `docs/BUILD.md`.
Symbol-recovery evidence and constraints are in
`docs/PHASE_2_5_SYMBOL_RECOVERY.md`.
Historical runtime evidence is in `docs/RUNTIME_BUILD.md`.
