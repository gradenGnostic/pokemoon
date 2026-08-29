# Egg Generator at `0x00317C94`

## Role

`0x00317C94-0x00317D13` is an 0x80-byte construction wrapper, not the primary
breeding-mechanics routine. Its only observed caller is
`Field::FieldSodateya::EggAdopt` at call site `0x00385C3C`.

The current partial prototype is:

```cpp
pml::pokepara::PokemonParam* CreateEggPokemon(
    HeapContext* heap_context,
    pml::pokepara::CoreParam* parent0,
    pml::pokepara::CoreParam* parent1,
    EggGenerateContext* context);
```

`HeapContext` and `EggGenerateContext` are semantic placeholders, not recovered
original type names.

## Call graph

1. Calls `0x0031747C` with the allocator/context, both parents, and generation
   context. That routine fills a temporary `CoreParam` and performs high-level
   setup around the deeper mechanics function at `0x00316B90`.
2. Calls virtual slot `+0x34` on the first argument to obtain the allocator used
   for the returned object.
3. Allocates `0x10` bytes through `operator new` at `0x00105500`.
4. Calls `PokemonParam::PokemonParam` at `0x00317F24`, constructing the wrapper
   from the temporary `CoreParam`.
5. Destroys the temporary through virtual slot `+0x08` and returns the allocated
   `PokemonParam`.

## Mechanics below the wrapper

`0x0031747C` calls `0x00316B90`, then applies higher-level Pokémon operations
including `StartFastMode`, `EndFastMode`, `SetWaza`, `SetParentName`,
`SetNickName`, and `SetMemories`. Its helper range also contains logic for:

- parent species, form, sex, and held-item inspection;
- inherited and shared level-up moves;
- regional form selection;
- trainer name and trainer ID propagation;
- language/region context and the item `0x278` check;
- repeated bounded draws through `Random::Next(unsigned int)`.

These observations justify the wrapper's semantic role, but do not justify
assigning an original symbol name. It remains unnamed in Ghidra until stronger
symbol provenance or a fully recovered class boundary is available.
