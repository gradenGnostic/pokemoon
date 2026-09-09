// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0048E65C
extern "C" int32_t YellowAuto_0048e65c(const uint8_t* arg0) __asm__("_ZNK3app4tool8PaneList10GetItemPosEv");
extern "C" int32_t YellowAuto_0048e65c(const uint8_t* arg0) {
return *(const int32_t *)(arg0 + 0x18) + (int32_t)(uint32_t)(*(const float *)(arg0 + 0x6C));
}
#endif
