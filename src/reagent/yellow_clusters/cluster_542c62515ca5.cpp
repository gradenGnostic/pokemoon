// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0032CE6C
extern "C" void YellowAuto_0032ce6c(uint8_t* arg0) __asm__("_ZN4gfl215renderingengine10scenegraph8resource15GfBinaryTexDataC1Ev");
extern "C" void YellowAuto_0032ce6c(uint8_t* arg0) {
*reinterpret_cast<uint32_t*>(arg0) = *reinterpret_cast<const uint32_t*>(0x0032CE84); *reinterpret_cast<uint32_t*>(arg0 + 4) = 0; *reinterpret_cast<uint32_t*>(arg0 + 8) = 0; *reinterpret_cast<uint32_t*>(arg0 + 12) = 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0032CD5C
extern "C" bool YellowAuto_0032cd5c(uint8_t* arg0, uint32_t* arg1) __asm__("_ZN4gfl215renderingengine10scenegraph8resource15GfBinaryTexData14SetTextureDataEPc");
extern "C" bool YellowAuto_0032cd5c(uint8_t* arg0, uint32_t* arg1) {
if (!arg1) return false; *reinterpret_cast<uint32_t*>(arg0 + 8) = arg1[0]; *reinterpret_cast<uint32_t**>(arg0 + 4) = arg1 + 2; *reinterpret_cast<uint32_t*>(arg0 + 12) = arg1[1]; return true;
}
#endif
