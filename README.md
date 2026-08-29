# Pokemon Moon clean-room decompilation

This repository records reproducible metadata, research provenance, signatures,
and independently reconstructed source for a local, legally obtained Pokemon
Moon executable.

Proprietary game binaries and extracted assets are intentionally excluded from
version control. The original CIA was intentionally deleted after extraction;
the local ignored extraction is the only binary input used by this project.

Phase 1 established a reproducible target, CTR-aware Ghidra project, research
provenance, and subsystem anchors. Phase 2 reconstructed the daycare breeding
path and its TinyMT32 generator with function-level ARM comparisons. Phase 2.5
is harvesting retail CRS/CRO symbols and preparing conservative cross-version
matching against a separately analyzed, user-supplied Special Demo donor.

Current verified source matches are tracked in `symbols/decomp_status.csv`.
Build and comparison instructions are in `docs/BUILDING.md`.
Symbol-recovery evidence and constraints are in
`docs/PHASE_2_5_SYMBOL_RECOVERY.md`.
Phase 2.75 runtime build and repack commands are in `docs/RUNTIME_BUILD.md`.
