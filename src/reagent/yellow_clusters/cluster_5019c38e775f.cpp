// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0032CA20
extern "C" bool YellowAuto_0032ca20(uint8_t* arg0, uint8_t* arg1) __asm__("_ZN4gfl215renderingengine10scenegraph8resource15GfBinaryMotData13SetMotionDataEPc");
extern "C" bool YellowAuto_0032ca20(uint8_t* arg0, uint8_t* arg1) {
if (arg1 != 0) { *(uint8_t**)(arg0 + 4) = arg1; } return arg1 != 0;
}
#endif
