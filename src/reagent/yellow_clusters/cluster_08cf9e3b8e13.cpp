// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0032CAE4
extern "C" void YellowAuto_0032cae4(uint8_t* arg0) __asm__("_ZN4gfl215renderingengine10scenegraph8resource15GfBinaryMotDataC1Ev");
extern "C" void YellowAuto_0032cae4(uint8_t* arg0) {
*(uint32_t*)arg0 = *(uint32_t*)0x32caf4; *(uint32_t*)(arg0 + 4) = 0;
}
#endif
