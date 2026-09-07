// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043B66C
extern "C" void YellowAuto_0043b66c(uint8_t* arg0, uint32_t arg1, uint32_t arg2, bool arg3) __asm__("_ZN8Savedata14PokeFinderSave12SetSpotFlagsEjjb");
extern "C" void YellowAuto_0043b66c(uint8_t* arg0, uint32_t arg1, uint32_t arg2, bool arg3) {
if (arg1 >= 0x3c) return; if (arg3) *(uint32_t *)(arg0 + arg1 * 0x30 + 0x24) |= arg2; else *(uint32_t *)(arg0 + arg1 * 0x30 + 0x24) &= ~arg2;
}
#endif
