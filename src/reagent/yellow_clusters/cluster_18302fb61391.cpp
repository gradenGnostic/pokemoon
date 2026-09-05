// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0040F3D8
uint8_t* CharaModel(uint8_t*, uint32_t, uint32_t, uint32_t);
uint8_t* __aeabi_vec_ctor_nocookie_nodtor(uint8_t*, const void*, uint32_t, uint32_t);
extern "C" void YellowAuto_0040f3d8(uint8_t* arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3) __asm__("_ZN7poke_3d5model12DressUpModelC1Ev");
extern "C" void YellowAuto_0040f3d8(uint8_t* arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3) {
arg0 = CharaModel(arg0, arg1, arg2, arg3); *(uint32_t*)arg0 = 0x0040f408u; arg0 = (uint8_t*)__aeabi_vec_ctor_nocookie_nodtor(arg0 + 0x114, (const void*)0x0040f40cu, 0xD8u, 0xEu) - 0x114; *(uint32_t*)(arg0 + 0xCE4) = 0u;
}
#endif
