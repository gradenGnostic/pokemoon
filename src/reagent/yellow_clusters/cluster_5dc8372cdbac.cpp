// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0032C7B0
extern "C" void YellowAuto_0032c7b0(uint8_t* arg0) __asm__("_ZN4gfl215renderingengine10scenegraph8resource15GfBinaryEnvDataC1Ev");
extern "C" void YellowAuto_0032c7b0(uint8_t* arg0) {
*(uint32_t*)(arg0 + 4) = 0; *(uint32_t*)(arg0 + 8) = 0; *(uint16_t*)(arg0 + 12) = 0; *(uint16_t*)(arg0 + 14) = 0; *(uint16_t*)(arg0 + 16) = 0; *(uint32_t*)(arg0 + 20) = 0; *(uint32_t*)(arg0 + 24) = 0;
}
#endif
