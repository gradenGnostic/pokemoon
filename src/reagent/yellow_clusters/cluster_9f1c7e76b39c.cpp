// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0032CB88
extern "C" bool YellowAuto_0032cb88(uint8_t* arg0, uint8_t* arg1) __asm__("_ZN4gfl215renderingengine10scenegraph8resource15GfBinaryShdData13SetShaderDataEPc");
extern "C" bool YellowAuto_0032cb88(uint8_t* arg0, uint8_t* arg1) {
if (!arg1) return false; *(uint32_t*)(arg0 + 8) = *(uint32_t*)arg1; *(uint32_t*)(arg0 + 12) = *(uint32_t*)(arg1 + 4); *(uint32_t*)(arg0 + 4) = (uint32_t)(arg1 + 16); return true;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0032CC98
extern "C" void YellowAuto_0032cc98(uint8_t* arg0) __asm__("_ZN4gfl215renderingengine10scenegraph8resource15GfBinaryShdDataC1Ev");
extern "C" void YellowAuto_0032cc98(uint8_t* arg0) {
*(uint32_t*)arg0 = *(uint32_t*)0x32CCB0u; *(uint32_t*)(arg0 + 4u) = 0u; *(uint32_t*)(arg0 + 8u) = 0u; *(uint32_t*)(arg0 + 12u) = 0u;
}
#endif
