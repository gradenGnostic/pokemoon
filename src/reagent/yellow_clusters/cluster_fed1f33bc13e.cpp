// Autonomous Qwen reconstruction approved by GPT-5.4 mini.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00310CEC
int32_t GetLayoutResourceID(uint8_t* arg0, uint32_t arg1);
extern "C" int32_t YellowAuto_00310cec(uint8_t* arg0, uint32_t arg1) __asm__("_ZN3app4util7G2DUtil19GetLayoutResourceIDEj");
extern "C" int32_t YellowAuto_00310cec(uint8_t* arg0, uint32_t arg1) {
uint32_t limit = *(uint32_t*)(arg0 + 0x1c); bool zero = limit == arg1; if (limit <= arg1) zero = *(uint8_t*)(arg0 + 0x41) == 0; if (zero) arg1 = 0; return *(int32_t*)(arg0 + 8) + arg1 * 4;
}
#endif

// Autonomous Qwen reconstruction approved by GPT-5.4 mini.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0031183C
extern "C" uint32_t* SetTexMap(uint8_t* arg0, void* arg1, uint32_t arg2, uint32_t arg3);
extern "C" int32_t GetMaterial(void* arg0);
extern "C" void* GetResource(void* arg0, uint16_t* arg1);
extern "C" void* GetTexture(void* arg0, uint32_t arg1, uint16_t arg2);
extern "C" void Set(void* arg0, void* arg1);
extern "C" uint32_t* YellowAuto_0031183c(uint8_t* arg0, void* arg1, uint32_t arg2, uint32_t arg3) __asm__("_ZN3app4util7G2DUtil9SetTexMapEPN2nw3lyt4PaneEjj");
extern "C" uint32_t* YellowAuto_0031183c(uint8_t* arg0, void* arg1, uint32_t arg2, uint32_t arg3) {
uint32_t local_18; int32_t material = GetMaterial(arg1); local_18 = *(uint32_t *)(*(int *)(arg0 + 8) + arg2 * 4); void *resource = GetResource(*(void **)(arg0 + 4), (uint16_t *)&local_18); void *texture = GetTexture(resource, arg3, local_18 >> 16); Set(*(void **)(material + 0x78), texture); *(uint8_t *)(material + 0x7c) &= 0xf7; return (uint32_t *)&local_18;
}
#endif

// Autonomous Qwen reconstruction approved by GPT-5.4 mini.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0048EFA4
extern "C" int32_t GetPane(int param_1, int param_2);
extern "C" int32_t YellowAuto_0048efa4(const uint8_t* arg0, uint32_t arg1, uint32_t arg2) __asm__("_ZNK3app4util7G2DUtil7GetSizeEjj");
extern "C" int32_t YellowAuto_0048efa4(const uint8_t* arg0, uint32_t arg1, uint32_t arg2) {
return GetPane(*(int32_t *)(*(int32_t *)(arg0 + 0x14) + arg1 * 8), arg2) + 0x3c;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0048EDF4
extern "C" uint16_t GetX(const void* param_1);
extern "C" uint16_t GetY(const void* param_1);
extern "C" bool GetHitPane(int param_1, uint32_t param_2, uint32_t param_3, const void* param_4);
extern "C" bool YellowAuto_0048edf4(const uint8_t* arg0, const void* arg1, uint32_t arg2, const void* arg3) __asm__("_ZNK3app4util7G2DUtil11IsTouchPaneEPN4gfl22ui10TouchPanelEjPN2nw3lyt4PaneE");
extern "C" bool YellowAuto_0048edf4(const uint8_t* arg0, const void* arg1, uint32_t arg2, const void* arg3) {
uint16_t uVar2 = GetX(arg1); uint16_t uVar3 = GetY(arg1); return GetHitPane(*(int32_t *)(*(int32_t *)(arg0 + 0x14) + arg2 * 8), (uint32_t)uVar2, (uint32_t)uVar3, arg3);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0048EE78
extern "C" int32_t GetPane(int param_1, int param_2);
extern "C" uint8_t YellowAuto_0048ee78(const uint8_t* arg0, uint32_t arg1, uint32_t arg2) __asm__("_ZNK3app4util7G2DUtil14GetPaneVisibleEjj");
extern "C" uint8_t YellowAuto_0048ee78(const uint8_t* arg0, uint32_t arg1, uint32_t arg2) {
int32_t iVar1 = GetPane(*(int32_t *)(*(int32_t *)(arg0 + 0x14) + arg1 * 8), arg2); if (iVar1 != 0) return *(uint8_t *)(iVar1 + 0x44) & 1; return 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0030F7B4
extern "C" int32_t IsBindAnime(int param_1, uint32_t param_2);
extern "C" uint32_t FUN_004999f4(int param_1, uint32_t param_2);
extern "C" uint32_t YellowAuto_0030f7b4(uint8_t* arg0, uint32_t arg1, uint32_t arg2) __asm__("_ZN3app4util7G2DUtil12IsAnimePauseEjj");
extern "C" uint32_t YellowAuto_0030f7b4(uint8_t* arg0, uint32_t arg1, uint32_t arg2) {
int32_t iVar1 = IsBindAnime(*(int32_t *)(*(int32_t *)(arg0 + 0x14) + arg1 * 8), arg2); if (iVar1 != 0) return FUN_004999f4(*(int32_t *)(*(int32_t *)(arg0 + 0x14) + arg1 * 8), arg2) ^ 1u; return 0;
}
#endif
