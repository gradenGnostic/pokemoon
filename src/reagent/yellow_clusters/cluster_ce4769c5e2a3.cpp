// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00326894
void YellowAuto_0032689c(uint8_t*, const uint8_t*, uint8_t);
extern "C" void YellowAuto_00326894(uint8_t* arg0, const uint8_t* arg1) __asm__("_ZN4gfl215renderingengine10scenegraph8instance12DrawableNode20SetBillboardRotationERKNS_4math8Matrix34E");
extern "C" void YellowAuto_00326894(uint8_t* arg0, const uint8_t* arg1) {
YellowAuto_0032689c(arg0, arg1, (uint8_t)(*(uint32_t*)(arg0 + 184) & 255));
}
#endif
