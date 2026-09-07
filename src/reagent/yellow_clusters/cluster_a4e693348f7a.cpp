// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0032F5C4
extern "C" bool YellowAuto_0032f5c4(uint8_t* arg0, void* arg1) __asm__("_ZN4gfl215renderingengine10scenegraph8resource19GfBinaryMdlDataPack12SetModelDataEPc");
extern "C" bool YellowAuto_0032f5c4(uint8_t* arg0, void* arg1) {
if (arg1 != 0) *(uint32_t*)(arg0 + 4) = (uint32_t)arg1; return arg1 != 0;
}
#endif
