// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003E8FA8
extern "C" void YellowAuto_003e8fa8(uint8_t* arg0) __asm__("_ZN6System6Camera19CModelViewerInFrameC1Ev");
extern "C" void YellowAuto_003e8fa8(uint8_t* arg0) {
*(uint8_t*)(arg0 + 0x0) = 0; *(uint8_t*)(arg0 + 0x1) = 0; *(uint8_t*)(arg0 + 0x2) = 0; *(uint32_t*)(arg0 + 0x4) = *(uint32_t*)0x003e9084; *(uint32_t*)(arg0 + 0x8) = *(uint32_t*)(0x003e9084 + 4); *(uint32_t*)(arg0 + 0xc) = *(uint32_t*)0x003e9084; *(uint32_t*)(arg0 + 0x10) = *(uint32_t*)(0x003e9084 + 4); *(uint32_t*)(arg0 + 0x14) = *(uint32_t*)0x003e9088; *(uint32_t*)(arg0 + 0x18) = *(uint32_t*)0x003e908c; *(uint32_t*)(arg0 + 0x1c) = 0; *(uint32_t*)(arg0 + 0x20) = *(uint32_t*)0x003e908c; *(uint32_t*)(arg0 + 0x24) = *(uint32_t*)0x003e908c; *(uint32_t*)(arg0 + 0x28) = *(uint32_t*)0x003e908c; *(uint32_t*)(arg0 + 0x2c) = *(uint32_t*)0x003e908c; *(uint8_t*)(arg0 + 0x30) = 1; *(uint32_t*)(arg0 + 0x34) = *(uint32_t*)0x003e9090; *(uint32_t*)(arg0 + 0x38) = *(uint32_t*)0x003e9094; *(uint32_t*)(arg0 + 0x3c) = *(uint32_t*)0x003e908c; *(uint8_t*)(arg0 + 0x40) = 1; *(uint8_t*)(arg0 + 0x41) = 0; *(uint32_t*)(arg0 + 0x44) = *(uint32_t*)0x003e909c; *(uint32_t*)(arg0 + 0x48) = *(uint32_t*)(0x003e909c + 4); *(uint32_t*)(arg0 + 0x4c) = *(uint32_t*)(0x003e909c + 8); *(uint32_t*)(arg0 + 0x50) = *(uint32_t*)0x003e9098; *(uint32_t*)(arg0 + 0x54) = *(uint32_t*)(0x003e9098 + 4); *(uint32_t*)(arg0 + 0x58) = *(uint32_t*)(0x003e9098 + 8); *(uint32_t*)(arg0 + 0x5c) = *(uint32_t*)0x003e9098; *(uint32_t*)(arg0 + 0x60) = *(uint32_t*)(0x003e9098 + 4); *(uint32_t*)(arg0 + 0x64) = *(uint32_t*)(0x003e9098 + 8); *(uint32_t*)(arg0 + 0x68) = *(uint32_t*)0x003e9098; *(uint32_t*)(arg0 + 0x6c) = *(uint32_t*)(0x003e9098 + 4); *(uint32_t*)(arg0 + 0x70) = *(uint32_t*)(0x003e9098 + 8); *(uint32_t*)(arg0 + 0x74) = *(uint32_t*)0x003e908c; *(uint8_t*)(arg0 + 0x78) = 2; *(uint32_t*)(arg0 + 0x7c) = *(uint32_t*)0x003e908c; *(uint32_t*)(arg0 + 0x80) = *(uint32_t*)0x003e908c; *(uint32_t*)(arg0 + 0x84) = *(uint32_t*)0x003e908c; *(uint32_t*)(arg0 + 0x88) = *(uint32_t*)0x003e9088; *(uint32_t*)(arg0 + 0x8c) = *(uint32_t*)0x003e9088; *(uint32_t*)(arg0 + 0x90) = *(uint32_t*)0x003e9088; *(uint8_t*)(arg0 + 0x94) = 1; return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003E8640
uint32_t VectorSignedToFloat(int32_t, uint32_t);
void SetAndInitModel(uint8_t*, uint32_t);
extern "C" void YellowAuto_003e8640(uint8_t* arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6) __asm__("_ZN6System6Camera19CModelViewerInFrame4InitENS0_13CModelInFrame7EScreenEiiiiNS1_14ETurnDirectionE");
extern "C" void YellowAuto_003e8640(uint8_t* arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6) {
*(uint8_t*)(arg0 + 0x0) = arg1; *(uint8_t*)(arg0 + 0x1) = arg6; *(uint32_t*)(arg0 + 0x4) = VectorSignedToFloat(arg2, 0); *(uint32_t*)(arg0 + 0x8) = VectorSignedToFloat(arg3, 0); *(uint32_t*)(arg0 + 0xc) = VectorSignedToFloat(arg4, 0); *(uint32_t*)(arg0 + 0x10) = VectorSignedToFloat(arg5, 0); SetAndInitModel(arg0, 0); return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003E851C
extern "C" void YellowAuto_003e851c(uint8_t* arg0, bool arg1) __asm__("_ZN6System6Camera19CModelViewerInFrame15SetModelVisibleEb");
extern "C" void YellowAuto_003e851c(uint8_t* arg0, bool arg1) {
*(uint8_t*)(arg0 + 0x94) = arg1; if (*(uint8_t**)(arg0 + 0x1c) != 0 && (*(uint8_t*)(arg0 + 0x78) == 2 || arg1 == 0)) ((void (*)(uint8_t*))(*(uint32_t*)(*(uint8_t**)(arg0 + 0x1c) + 0x14)))(*(uint8_t**)(arg0 + 0x1c)); return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A2FE0
extern "C" bool YellowAuto_004a2fe0(const uint8_t* arg0) __asm__("_ZNK6System6Camera19CModelViewerInFrame16IsModelOnDisplayEv");
extern "C" bool YellowAuto_004a2fe0(const uint8_t* arg0) {
if (*(uint8_t*)(arg0 + 0x94) != 0 && *(uint8_t**)(arg0 + 0x1c) != 0 && ((int32_t (*)(uint8_t*))(*(uint32_t*)(*(uint8_t**)(arg0 + 0x1c) + 0x18)))(*(uint8_t**)(arg0 + 0x1c)) != 0) return true; return false;
}
#endif
