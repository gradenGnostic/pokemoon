// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0033097C
extern "C" void YellowAuto_0033097c(uint8_t* arg0) __asm__("_ZN4gfl215renderingengine10scenegraph8resource24GfBinaryCollisionMdlDataC1Ev");
extern "C" void YellowAuto_0033097c(uint8_t* arg0) {
*(uint32_t*)(arg0 + 0) = *(uint32_t*)0x00330998;
*(uint32_t*)(arg0 + 4) = 0;
*(uint32_t*)(arg0 + 8) = 0;
*(uint32_t*)(arg0 + 12) = 0;
*(uint32_t*)(arg0 + 16) = 0;
}
#endif
