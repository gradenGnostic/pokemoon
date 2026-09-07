// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002FEFF0
extern "C" uint32_t YellowAuto_002feff0(uint32_t arg0, uint32_t arg1) __asm__("_ZN3app4tool5Gauge13GetDottoColorEjj");
extern "C" uint32_t YellowAuto_002feff0(uint32_t arg0, uint32_t arg1) {
arg0 <<= 8;
arg1 <<= 8;
if (arg0 > (arg1 / 2)) return 0;
if (arg0 > (arg1 / 5)) return 1;
if (arg0 > 0) return 2;
return 3;
}
#endif
