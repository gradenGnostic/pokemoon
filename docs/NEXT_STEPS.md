# Next Steps

Phase 2 daycare status:

1. Completed: `0x00317C94`, its immediate mechanics callees, and egg fields.
2. Completed: breeding TinyMT layout, operations, saved state, and C++ source.
3. Completed: `EggAdopt`, `EggClear`, partial daycare records, and capacity flow.
4. Completed: focused ARM compile/diff loop with two exact function matches.

Next focused tasks:

1. Export a complete Ghidra symbol CSV and exercise full executable splitting
   with `3DS-Decomp-Pipeline`; attempt relinking only after split validation.
2. Refine the non-matching TinyMT codegen against likely original compiler
   behavior without replacing readable source with assembly.
3. Recover the concrete allocator/context types around `0x00317C94` and the
   constructor input consumed at `0x0031DEF8`.
4. Trace the constructed runtime Pokémon into the serialized `0xE8` PK7 form.

Do not begin broad `FUN_*` conversion; each cluster should start with type and
call-graph recovery around these anchors.
