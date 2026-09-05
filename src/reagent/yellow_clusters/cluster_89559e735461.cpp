// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0034FEC0
extern "C" void YellowAuto_0034fec0(uint8_t* arg0) __asm__("_ZN4gfl23lyt13LytMultiResIDC1Ev");
extern "C" void YellowAuto_0034fec0(uint8_t* arg0) {
*(uint16_t *)(arg0 + 0) = (uint16_t)*(uint32_t *)0x0034fed0; *(uint16_t *)(arg0 + 2) = (uint16_t)*(uint32_t *)0x0034fed0;
}
#endif
