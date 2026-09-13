// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00163BA0
extern const uint32_t DAT_00163bc0;
extern const void *DAT_00163bc4;
void FUN_00447cc0(const void *);
extern "C" void* YellowAuto_00163ba0(void* arg0) __asm__("_ZN2mw3qre9QREncoderD1Ev");
extern "C" void* YellowAuto_00163ba0(void* arg0) {
*(uint32_t *)arg0 = DAT_00163bc0; FUN_00447cc0(DAT_00163bc4); return arg0;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00163ADC
extern "C" int32_t YellowAuto_00163adc(uint32_t arg0, uint32_t arg1, uint32_t arg2) __asm__("_ZN2mw3qre9QREncoder19GetEncodeBufferSizeEjjj");
extern "C" int32_t YellowAuto_00163adc(uint32_t arg0, uint32_t arg1, uint32_t arg2) {
if (arg2 == 0) arg2 = (uint32_t)((arg0 * 1ULL * *(const uint32_t*)0x00163B20U >> 39U) + 1U); return (int32_t)(arg1 * arg1 * arg2 * *(const uint32_t*)0x00163B1CU + 0x280000U);
}
#endif
