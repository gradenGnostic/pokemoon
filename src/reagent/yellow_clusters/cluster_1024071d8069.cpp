// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0042A940
extern "C" uint32_t YellowAuto_0042a940(uint32_t arg0, uint32_t arg1, bool arg2, bool arg3) __asm__("_ZN8PokeTool10GetDrawSexE6MonsNoN3pml3SexEbb");
extern "C" uint32_t YellowAuto_0042a940(uint32_t arg0, uint32_t arg1, bool arg2, bool arg3) {
if ((!arg3) && ((arg2 != 0) || ((arg0 != 0x20) && (arg0 != 0x1d)))) return arg1; return 2;
}
#endif
