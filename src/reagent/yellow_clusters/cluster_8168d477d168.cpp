// Autonomous Qwen reconstruction approved by GPT-5.4 mini.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0030F8FC
extern "C" uint32_t YellowAuto_0030f8fc(void* arg0, uint32_t arg1) __asm__("_ZN3app4util7G2DUtil13GetTempStrBufEj");
extern "C" uint32_t YellowAuto_0030f8fc(void* arg0, uint32_t arg1) {
return *(uint32_t*)((uint8_t*)arg0 + 0x2c + arg1 * 4);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0048EE3C
extern "C" uint32_t YellowAuto_0048ee3c(void* arg0, uint32_t arg1) __asm__("_ZNK3app4util7G2DUtil13GetLayoutWorkEj");
extern "C" uint32_t YellowAuto_0048ee3c(void* arg0, uint32_t arg1) {
return *(uint32_t*)((uint8_t*)*(void**)((uint8_t*)arg0 + 0x14) + arg1 * 8);
}
#endif
