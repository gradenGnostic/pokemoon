// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0040F914
extern "C" void YellowAuto_0040f914(uint8_t* arg0, uint32_t arg1) __asm__("_ZN7poke_3d5model12PokemonModel13SetLightSetNoEj");
extern "C" void YellowAuto_0040f914(uint8_t* arg0, uint32_t arg1) {
*(uint32_t*)(*(uint32_t*)(arg0 + 0x11ec) + 0x7c) = arg1; for (uint32_t i = 0; i < 0x10; i += 2) *(uint8_t*)(arg0 + i * 0xa8 + 0x7fc) = (uint8_t)arg1, *(uint8_t*)(arg0 + (i + 1) * 0xa8 + 0x7fc) = (uint8_t)arg1; return;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0040F9D8
void helper_set_enable(uint8_t*, bool);
extern "C" void YellowAuto_0040f9d8(uint8_t* arg0, bool arg1) __asm__("_ZN7poke_3d5model12PokemonModel15SetSpringEnableEb");
extern "C" void YellowAuto_0040f9d8(uint8_t* arg0, bool arg1) {
if (*(uint32_t*)(arg0 + 0x120C) == 0) return; helper_set_enable((uint8_t*)(*(uint32_t*)(arg0 + 0x120C)), arg1);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004100D0
extern "C" uint32_t YellowAuto_004100d0(uint8_t* arg0) __asm__("_ZN7poke_3d5model12PokemonModel21IsEnabledAmbientColorEv");
extern "C" uint32_t YellowAuto_004100d0(uint8_t* arg0) {
return *(uint32_t*)(arg0 + 0x2CC);
}
#endif
