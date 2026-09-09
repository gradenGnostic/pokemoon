// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003541A4
extern "C" const uint16_t* YellowAuto_003541a4(const uint16_t* arg0) __asm__("_ZN4gfl23str11SkipTagCodeEPKw");
extern "C" const uint16_t* YellowAuto_003541a4(const uint16_t* arg0) {
if (arg0[0] == 0x10) return arg0 + arg0[1] + 2;
return arg0;
}
#endif
