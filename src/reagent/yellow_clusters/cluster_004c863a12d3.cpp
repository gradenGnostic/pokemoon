// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003BE598
uint32_t FUN_00354100(const uint16_t* arg0);
extern "C" uint32_t YellowAuto_003be598(const uint16_t* arg0) __asm__("_ZN5print11GetTagGroupEPKw");
extern "C" uint32_t YellowAuto_003be598(const uint16_t* arg0) {
return FUN_00354100(arg0) >> 8;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003BE5A8
uint32_t FUN_00354100(const uint16_t* arg0);
extern "C" uint32_t YellowAuto_003be5a8(const uint16_t* arg0) __asm__("_ZN5print11GetTagIndexEPKw");
extern "C" uint32_t YellowAuto_003be5a8(const uint16_t* arg0) {
return FUN_00354100(arg0) & 255u;
}
#endif
