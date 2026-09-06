// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0041CE54
void AddDrawEnv(void*, void*);
extern "C" void YellowAuto_0041ce54(uint8_t* arg0, void* arg1) __asm__("_ZN7poke_3d8renderer24DistortionPostRenderPath10AddDrawEnvEPN4gfl215renderingengine10scenegraph8instance11DrawEnvNodeE");
extern "C" void YellowAuto_0041ce54(uint8_t* arg0, void* arg1) {
AddDrawEnv(*(void**)(arg0 + 4), arg1);
}
#endif
