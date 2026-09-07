// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00436B88
void GFLassertStop();
void Deserialize_Core(void*, void*);
extern "C" void YellowAuto_00436b88(uint8_t* arg0, void* arg1, uint32_t arg2, uint32_t arg3) __asm__("_ZN8Savedata10BoxPokemon10GetPokemonEPN3pml8pokepara9CoreParamEjj");
extern "C" void YellowAuto_00436b88(uint8_t* arg0, void* arg1, uint32_t arg2, uint32_t arg3) {
if (arg2 >= 32 || arg3 >= 30) { GFLassertStop(); return; } Deserialize_Core(arg1, (void*)(arg0 + 4 + arg2 * 30 * 232 + arg3 * 232));
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00436F74
void GFLassertStop();
void Deserialize_Core(void*, void*);
bool IsNull(void*);
bool IsEgg(void*, uint32_t);
extern "C" bool YellowAuto_00436f74(uint8_t* arg0, uint32_t arg1, uint32_t arg2, void* arg3, bool arg4) __asm__("_ZN8Savedata10BoxPokemon12CheckPokemonEjjPN3pml8pokepara9CoreParamEb");
extern "C" bool YellowAuto_00436f74(uint8_t* arg0, uint32_t arg1, uint32_t arg2, void* arg3, bool arg4) {
if (arg1 >= 32 || arg2 >= 30) { GFLassertStop(); } else { Deserialize_Core(arg3, (void*)(arg0 + 4 + arg1 * 30 * 232 + arg2 * 232)); } if (!IsNull(arg3)) { if (arg4 || !IsEgg(arg3, 2)) { return true; } } return false;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00437718
bool CheckPokemon(uint8_t*, uint32_t, uint32_t, void*, bool);
extern "C" int32_t YellowAuto_00437718(uint8_t* arg0, uint32_t arg1, void* arg2) __asm__("_ZN8Savedata10BoxPokemon22CheckPokemonTrayRetPosEjPN3pml8pokepara9CoreParamE");
extern "C" int32_t YellowAuto_00437718(uint8_t* arg0, uint32_t arg1, void* arg2) {
for (uint32_t _i = 0; _i < 30; ++_i) { if (!CheckPokemon(arg0, arg1, _i, arg2, true)) { return _i; } } return -1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00437460
bool CheckPokemon(uint8_t*, uint32_t, uint32_t, void*, bool);
extern "C" int32_t YellowAuto_00437460(uint8_t* arg0, void* arg1, bool arg2) __asm__("_ZN8Savedata10BoxPokemon18GetPokemonCountAllEPN3pml8pokepara9CoreParamEb");
extern "C" int32_t YellowAuto_00437460(uint8_t* arg0, void* arg1, bool arg2) {
int32_t _c = 0; for (uint32_t _t = 0; _t < 32; ++_t) { for (uint32_t _p = 0; _p < 30; ++_p) { if (CheckPokemon(arg0, _t, _p, arg1, arg2)) { _c += 1; } } } return _c;
}
#endif
