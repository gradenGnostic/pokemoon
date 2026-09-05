// Autonomous Qwen reconstruction approved by GPT-5.4 mini.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0030F5A4
extern "C" void YellowAuto_0030f5a4(int32_t arg0, const void* arg1) __asm__("_ZN3app4util7G2DUtil10SetMessageEPKN4gfl23str6StrBufE");
extern "C" void YellowAuto_0030f5a4(int32_t arg0, const void* arg1) {
(**(void (**)(const void*))( *(const uint8_t**)(*(const uint8_t**)(arg0 + 0x34)) + 0x18 ))(arg1);
}
#endif

// Autonomous Qwen reconstruction approved by GPT-5.4 mini.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0048EEC0
extern "C" void YellowAuto_0048eec0(uint32_t* arg0, const void* arg1, const void* arg2) __asm__("_ZNK3app4util7G2DUtil15GetPaneLocalPosEPKN2nw3lyt4PaneE");
extern "C" void YellowAuto_0048eec0(uint32_t* arg0, const void* arg1, const void* arg2) {
arg0[0] = *(const uint32_t*)((const uint8_t*)arg2 + 0x1c); arg0[1] = *(const uint32_t*)((const uint8_t*)arg2 + 0x20); arg0[2] = *(const uint32_t*)((const uint8_t*)arg2 + 0x24);
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00310E58
void SetFinishMode(void*, uint32_t, uint8_t);
extern "C" void YellowAuto_00310e58(uint8_t* arg0, uint32_t arg1, uint8_t arg2) __asm__("_ZN3app4util7G2DUtil20SetMessageFinishModeEN4gfl23str6StrWin10FinishTypeEh");
extern "C" void YellowAuto_00310e58(uint8_t* arg0, uint32_t arg1, uint8_t arg2) {
SetFinishMode(*(void **)(arg0 + 0x34), arg1, arg2);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0048EF28
int32_t FUN_00499ba4(int32_t);
void* GetInstance(void);
extern "C" void YellowAuto_0048ef28(uint8_t* arg0, uint32_t arg1, void* arg2) __asm__("_ZNK3app4util7G2DUtil15IsPaneTouchHoldEjPN2nw3lyt4PaneE");
extern "C" void YellowAuto_0048ef28(uint8_t* arg0, uint32_t arg1, void* arg2) {
if (FUN_00499ba4(*(int32_t *)(*(int32_t *)(arg0 + 0x14) + arg1 * 8)) != 0) GetInstance();
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003102A4
void RegisterWord(void*, uint32_t, const void*, uint32_t, uint32_t);
extern "C" void YellowAuto_003102a4(uint8_t* arg0, uint32_t arg1, const void* arg2, uint32_t arg3, uint32_t arg4) __asm__("_ZN3app4util7G2DUtil15SetRegisterWordEjRKN4gfl23str6StrBufEN5print7WordSet7GrammerENS8_4FormE");
extern "C" void YellowAuto_003102a4(uint8_t* arg0, uint32_t arg1, const void* arg2, uint32_t arg3, uint32_t arg4) {
RegisterWord(*(void **)(arg0 + 0x28), arg1, arg2, arg3, arg4);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00310988
void RegisterNumber(void*, uint32_t, uint32_t, uint32_t, int32_t, int32_t);
extern "C" void YellowAuto_00310988(uint8_t* arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3, int32_t arg4, int32_t arg5) __asm__("_ZN3app4util7G2DUtil17SetRegisterNumberEjjjN5print14NumberDispTypeENS2_14NumberCodeTypeE");
extern "C" void YellowAuto_00310988(uint8_t* arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3, int32_t arg4, int32_t arg5) {
RegisterNumber(*(void **)(arg0 + 0x28), arg1, arg2, arg3, arg4, arg5);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0030F778
void* GetPane(void*, uint32_t);
extern "C" uint8_t YellowAuto_0030f778(uint8_t* arg0, uint32_t arg1, uint32_t arg2) __asm__("_ZN3app4util7G2DUtil12GetPaneAlphaEjj");
extern "C" uint8_t YellowAuto_0030f778(uint8_t* arg0, uint32_t arg1, uint32_t arg2) {
void* p = GetPane(*(void **)((uint8_t *)(*(void **)(arg0 + 0x14)) + arg1 * 8), arg2);
return p == 0 ? 0 : *(uint8_t *)((uint8_t *)p + 0x45);
}
#endif
