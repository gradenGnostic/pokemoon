// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002F6830
void LytMultiResID(uint8_t* arg0);
extern "C" void YellowAuto_002f6830(uint8_t* arg0) __asm__("_ZN3app4tool18AppToolBaseGrpFontC1Ev");
extern "C" void YellowAuto_002f6830(uint8_t* arg0) {
*(uint32_t *)arg0 = *(const uint32_t *)0x002f685c; LytMultiResID(arg0 + 16); *(uint32_t *)(arg0 + 4) = 0; *(uint32_t *)(arg0 + 12) = 0; *(uint32_t *)(arg0 + 20) = 0; *(uint32_t *)(arg0 + 8) = 0;
}
#endif
