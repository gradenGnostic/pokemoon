// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00332158
extern "C" const uint8_t* YellowAuto_00332158() __asm__("_ZN4gfl215renderingengine10scenegraph8resource26TextureResourceNodeFactory18GetFactoryTypeNameEv");
extern "C" const uint8_t* YellowAuto_00332158() {
return (const uint8_t*)*(uint32_t*)0x332160;
}
#endif
