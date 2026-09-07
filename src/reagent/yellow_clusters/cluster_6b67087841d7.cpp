// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0048E764
extern "C" uint8_t* YellowAuto_0048e764(const uint8_t* arg0, uint32_t arg1) __asm__("_ZNK3app4util10EffectUtil7GetDataEj");
extern "C" uint8_t* YellowAuto_0048e764(const uint8_t* arg0, uint32_t arg1) {
return arg1 < *(const uint32_t *)(arg0 + 4) ? (uint8_t *)(*(const uint32_t *)(arg0 + 0x20) + arg1 * 12) : (uint8_t *)0;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00306130
extern "C" void YellowAuto_00306130(uint8_t* arg0) __asm__("_ZN3app4util10EffectUtilC1Ev");
extern "C" void YellowAuto_00306130(uint8_t* arg0) {
*reinterpret_cast<uint32_t*>(arg0) = *reinterpret_cast<const uint32_t*>(0x00306164); *reinterpret_cast<uint32_t*>(arg0 + 4) = 0; *reinterpret_cast<uint32_t*>(arg0 + 8) = 0; *(arg0 + 12) = 0; *reinterpret_cast<uint32_t*>(arg0 + 16) = 0; *reinterpret_cast<uint32_t*>(arg0 + 20) = 0; *reinterpret_cast<uint32_t*>(arg0 + 24) = 0; *reinterpret_cast<uint32_t*>(arg0 + 28) = 0; *reinterpret_cast<uint32_t*>(arg0 + 32) = 0; *reinterpret_cast<uint32_t*>(arg0 + 36) = 0;
}
#endif
