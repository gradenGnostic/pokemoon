// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00103D0E
extern "C" void YellowAuto_00103d0e(uint8_t* arg0, const uint8_t* arg1) __asm__("_ZNSt6localeC2ERKS_");
extern "C" void YellowAuto_00103d0e(uint8_t* arg0, const uint8_t* arg1) {
uint32_t v = *(const uint32_t *)arg1; *(uint32_t *)arg0 = v; *(uint32_t *)(v + 0x1c) = *(uint32_t *)(v + 0x1c) + 1; return;
}
#endif
