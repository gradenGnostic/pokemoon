// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004371CC
int32_t CheckPokemon(void* arg0, uint32_t arg1, uint32_t arg2, void* arg3, bool arg4);
extern "C" int32_t YellowAuto_004371cc(void* arg0, uint32_t arg1, void* arg2) __asm__("_ZN8Savedata10BoxPokemon13GetSpaceCountEjPN3pml8pokepara9CoreParamE");
extern "C" int32_t YellowAuto_004371cc(void* arg0, uint32_t arg1, void* arg2) {
int32_t count = 0; for (uint32_t i = 0; i < 0x1e; ++i) if (CheckPokemon(arg0, arg1, i, arg2, true) != 0) ++count; return 0x1e - count;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00437338
int32_t CheckPokemon(void* arg0, uint32_t arg1, uint32_t arg2, void* arg3, bool arg4);
extern "C" int32_t YellowAuto_00437338(void* arg0, uint32_t arg1, void* arg2, bool arg3) __asm__("_ZN8Savedata10BoxPokemon15GetPokemonCountEjPN3pml8pokepara9CoreParamEb");
extern "C" int32_t YellowAuto_00437338(void* arg0, uint32_t arg1, void* arg2, bool arg3) {
int32_t count = 0; for (uint32_t i = 0; i < 0x1e; ++i) if (CheckPokemon(arg0, arg1, i, arg2, arg3) != 0) ++count; return count;
}
#endif
