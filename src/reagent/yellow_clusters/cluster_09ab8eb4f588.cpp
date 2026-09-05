// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002F6864
extern const uint32_t DAT_002f687c;
extern "C" uint8_t* YellowAuto_002f6864(uint8_t* arg0) __asm__("_ZN3app4tool18AppToolBaseGrpFontD1Ev");
extern "C" uint8_t* YellowAuto_002f6864(uint8_t* arg0) {
*(uint32_t*)arg0 = DAT_002f687c; return arg0;
}
#endif
