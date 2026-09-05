// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002CB7CC
uint32_t VectorFloatToUnsigned(uint32_t, uint32_t);
extern "C" int32_t YellowAuto_002cb7cc(uint8_t* arg0) __asm__("_ZN3App4Tool11NewPaneList10GetListPosEv");
extern "C" int32_t YellowAuto_002cb7cc(uint8_t* arg0) {
return (int32_t)(VectorFloatToUnsigned(*(const uint32_t *)(arg0 + 0xa0), 3) + *(const int32_t *)(arg0 + 0x9c));
}
#endif
