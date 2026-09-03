// Autonomous Qwen reconstruction approved by GPT-5.4 mini.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00304C04
extern "C" void PaneList_SetConfig(uint8_t* arg0, uint32_t arg1, int8_t arg2, int8_t arg3, int8_t arg4, int8_t arg5);
extern "C" void YellowAuto_00304c04(uint8_t* arg0, uint32_t arg1, int8_t arg2, int8_t arg3, int8_t arg4, int8_t arg5) __asm__("_ZN3app4tool8PaneList9SetConfigENS1_12PageSkipModeEaaaa");
extern "C" void YellowAuto_00304c04(uint8_t* arg0, uint32_t arg1, int8_t arg2, int8_t arg3, int8_t arg4, int8_t arg5) {
arg0[0x44] = arg1; arg0[0x45] = arg2; arg0[0x46] = arg3; arg0[0x47] = arg4; arg0[0x48] = arg5;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00301B9C
extern "C" void PaneList_MakeTouchArea(uint8_t* arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4);
extern "C" void YellowAuto_00301b9c(uint8_t* arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4) __asm__("_ZN3app4tool8PaneList13MakeTouchAreaEffff");
extern "C" void YellowAuto_00301b9c(uint8_t* arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4) {
float fVar1 = 0.5f; float arg3f = *(float*)&arg3; float arg4f = *(float*)&arg4; *(uint32_t*)(arg0 + 0x58) = arg1; *(uint32_t*)(arg0 + 0x5c) = arg2; *(float*)(arg0 + 0x60) = arg3f - fVar1; *(float*)(arg0 + 0x64) = arg4f + fVar1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0048E6FC
extern "C" void PaneList_GetCursorData(const uint8_t* arg0, uint32_t* arg1, uint32_t* arg2);
extern "C" void YellowAuto_0048e6fc(const uint8_t* arg0, uint32_t* arg1, uint32_t* arg2) __asm__("_ZNK3app4tool8PaneList13GetCursorDataEPjPf");
extern "C" void YellowAuto_0048e6fc(const uint8_t* arg0, uint32_t* arg1, uint32_t* arg2) {
if (arg1 != 0) *arg1 = *(uint32_t*)(arg0 + 0x18); if (arg2 != 0) *arg2 = *(uint32_t*)(arg0 + 0x6c);
}
#endif
