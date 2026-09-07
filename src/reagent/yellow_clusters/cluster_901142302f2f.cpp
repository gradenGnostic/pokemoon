// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0032554C
extern "C" void* YellowAuto_0032554c(uint8_t* arg0, uint32_t arg1) __asm__("_ZN4gfl215renderingengine10scenegraph8instance11DrawEnvNode11GetLightSetEi");
extern "C" void* YellowAuto_0032554c(uint8_t* arg0, uint32_t arg1) {
if (arg1 >= 32) return nullptr; return *(void**)(arg0 + 0x168 + arg1 * 4);
}
#endif
