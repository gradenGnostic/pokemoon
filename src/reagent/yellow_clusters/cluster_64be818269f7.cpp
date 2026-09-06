// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0048CBA8
extern "C" bool YellowAuto_0048cba8(uint8_t* arg0, int32_t arg1) __asm__("_ZNK3App6Resort17ResortDataManager16IsFileAccessibleEi");
extern "C" bool YellowAuto_0048cba8(uint8_t* arg0, int32_t arg1) {
if (*(uint8_t*)(arg0 + 4) == 0) return false; if (arg1 == 0) return *(uint32_t*)(arg0 + 0x14) - 1u <= 2u; if (arg1 != 1) return false; return *(uint32_t*)(arg0 + 0x14) == 3u;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002D8970
uint8_t* __aeabi_vec_ctor_nocookie_nodtor(uint8_t*, const void*, uint32_t, uint32_t);
extern "C" void YellowAuto_002d8970(uint8_t* arg0) __asm__("_ZN3App6Resort17ResortDataManagerC1Ev");
extern "C" void YellowAuto_002d8970(uint8_t* arg0) {
*(uint32_t*)(arg0 + 0) = *(uint32_t*)0x002d8a04u; *(uint8_t*)(arg0 + 4) = 0; *(uint32_t*)(arg0 + 8) = 0; *(uint32_t*)(arg0 + 0xC) = 0; *(uint32_t*)(arg0 + 0x10) = 0; *(uint32_t*)(arg0 + 0x14) = 0; *(uint32_t*)(arg0 + 0x18) = 0; *(uint8_t*)(arg0 + 0x1C) = 0; *(uint32_t*)(arg0 + 0x20) = 0; *(uint32_t*)(arg0 + 0x24) = 0; __aeabi_vec_ctor_nocookie_nodtor(arg0 + 0x28, (const void*)0x002d8a08u, 4u, 4u); *(uint32_t*)(arg0 + 0x28) = 0; *(uint32_t*)(arg0 + 0x2C) = 0; *(uint32_t*)(arg0 + 0x30) = 0; *(uint32_t*)(arg0 + 0x34) = 0; *(uint32_t*)(arg0 + 0x38) = 0;
}
#endif
