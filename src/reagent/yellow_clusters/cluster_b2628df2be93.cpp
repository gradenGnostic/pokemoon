// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003980A8
extern "C" void YellowAuto_003980a8(uint8_t* arg0, void* arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4) __asm__("_ZN5Field7Encount18EventSymbolEncount8SetParamEPNS0_7PokeSetEjjj");
extern "C" void YellowAuto_003980a8(uint8_t* arg0, void* arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4) {
*(void **)(arg0 + 0x34) = arg1;
*(uint32_t *)(arg0 + 0x38) = arg2;
*(uint32_t *)(arg0 + 0x3c) = arg3;
*(uint32_t *)(arg0 + 0x40) = arg4;
}
#endif
