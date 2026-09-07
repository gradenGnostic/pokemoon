// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002FB3EC
extern "C" void YellowAuto_002fb3ec(uint8_t* arg0, int32_t arg1) __asm__("_ZN3app4tool22PokeSimpleModelInFrame23SetLightParamForInFrameEPN4gfl215renderingengine10scenegraph8instance9LightNodeEN6System6Camera19CModelViewerInFrame14ETurnDirectionE");
extern "C" void YellowAuto_002fb3ec(uint8_t* arg0, int32_t arg1) {
if (arg1 == 1) {
*(float*)(arg0 + 0x108) = 0.129392f;
*(float*)(arg0 + 0x10c) = -0.865968f;
*(float*)(arg0 + 0x110) = -0.482898f;
} else {
*(float*)(arg0 + 0x108) = -0.129392f;
*(float*)(arg0 + 0x10c) = -0.865968f;
*(float*)(arg0 + 0x110) = -0.482898f;
}
*(float*)(arg0 + 0x114) = 1.0f;
*(float*)(arg0 + 0x118) = 1.0f;
*(float*)(arg0 + 0x11c) = 1.0f;
*(float*)(arg0 + 0x120) = 1.0f;
}
#endif
