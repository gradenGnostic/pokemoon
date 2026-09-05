// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004375F0
void GFLassert();
void Serialize_Core(const void* arg0, uint32_t* arg1, uint32_t arg2, uint8_t arg3);
extern "C" void YellowAuto_004375f0(uint8_t* arg0, const void* arg1, uint32_t arg2, uint32_t arg3) __asm__("_ZN8Savedata10BoxPokemon18UpdatePokemonConstEPKN3pml8pokepara9CoreParamEjj");
extern "C" void YellowAuto_004375f0(uint8_t* arg0, const void* arg1, uint32_t arg2, uint32_t arg3) {
if (*((uint8_t *)(*(uint32_t *)(arg0 + 0x36604)) + 0x5e5) <= arg2 || 0x1d < arg3) GFLassert(); else Serialize_Core(arg1, (uint32_t *)(arg0 + arg3 * 0xe8 + arg2 * (*(uint32_t *)0x437660) * 0x10 + 4), arg2, (uint8_t)arg3);
}
#endif
