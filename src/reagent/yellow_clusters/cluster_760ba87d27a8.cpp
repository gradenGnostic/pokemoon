// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0032C884
extern "C" bool YellowAuto_0032c884(uint8_t* arg0, uint8_t* arg1) __asm__("_ZN4gfl215renderingengine10scenegraph8resource15GfBinaryMdlData12SetModelDataEPc");
extern "C" bool YellowAuto_0032c884(uint8_t* arg0, uint8_t* arg1) {
if (arg1 == nullptr) return false;
*reinterpret_cast<uint32_t*>(arg0 + 8) = *reinterpret_cast<uint32_t*>(arg1);
*reinterpret_cast<uint32_t*>(arg0 + 12) = *reinterpret_cast<uint32_t*>(arg1 + 4);
*reinterpret_cast<uint8_t**>(arg0 + 4) = arg1 + 16;
return true;
}
#endif
