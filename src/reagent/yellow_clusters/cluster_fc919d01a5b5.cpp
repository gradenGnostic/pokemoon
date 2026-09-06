// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002EC050
extern "C" void YellowAuto_002ec050(uint8_t* arg0) __asm__("_ZN3app4tool13ButtonManager14ResetHoldStateEv");
extern "C" void YellowAuto_002ec050(uint8_t* arg0) {
((void (*)(void *))((void **)(*(void **)(arg0 + 0x28)))[13])(*(void **)(arg0 + 0x28));
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0048D9E8
extern "C" int32_t YellowAuto_0048d9e8(const uint8_t* arg0) __asm__("_ZNK3app4tool13ButtonManager18GetHoldingButtonIdEv");
extern "C" int32_t YellowAuto_0048d9e8(const uint8_t* arg0) {
return ((int32_t (*)(const void *))((const void **)(*(const void **)(arg0 + 0x28)))[4])(*(const void **)(arg0 + 0x28));
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0048D9F8
extern "C" int32_t YellowAuto_0048d9f8(const uint8_t* arg0) __asm__("_ZNK3app4tool13ButtonManager19GetSelectedButtonIdEv");
extern "C" int32_t YellowAuto_0048d9f8(const uint8_t* arg0) {
return ((int32_t (*)(const void *))((const void **)(*(const void **)(arg0 + 0x28)))[5])(*(const void **)(arg0 + 0x28));
}
#endif
