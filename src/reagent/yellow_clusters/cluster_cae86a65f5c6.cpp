// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0041882C
extern "C" void YellowAuto_0041882c(uint8_t* arg0, const uint8_t* arg1) __asm__("_ZN7poke_3d8renderer15BloomRenderPath14SetDrawEnvNodeEPKN4gfl215renderingengine10scenegraph8instance11DrawEnvNodeE");
extern "C" void YellowAuto_0041882c(uint8_t* arg0, const uint8_t* arg1) {
*reinterpret_cast<const uint8_t**>(arg0 + 0x4) = arg1; if (*reinterpret_cast<uint8_t**>(arg0 + 0xC) != 0) *reinterpret_cast<const uint8_t**>(*reinterpret_cast<uint8_t**>(arg0 + 0xC) + 0x34) = arg1;
}
#endif
