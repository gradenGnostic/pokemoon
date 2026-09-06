// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002EF74C
extern "C" bool YellowAuto_002ef74c(uint8_t* arg0, uint32_t arg1) __asm__("_ZN3app4tool14PokeIconToolEx10IsReplacedEj");
extern "C" bool YellowAuto_002ef74c(uint8_t* arg0, uint32_t arg1) {
if (arg1 < *(uint32_t *)(arg0 + 0x14)) return *(uint32_t *)((uint8_t *)(*(void **)(arg0 + 0x2c)) + arg1 * 0x10) == 0xffffffffu && *(uint32_t *)((uint8_t *)(*(void **)(arg0 + 0x2c)) + arg1 * 0x10 + 4) == 0 && *(uint32_t *)((uint8_t *)(*(void **)(arg0 + 0x2c)) + arg1 * 0x10 + 8) == 0 && *(uint32_t *)((uint8_t *)(*(void **)(arg0 + 0x30)) + arg1 * 0x18) == 0xffffffffu && *(uint32_t *)((uint8_t *)(*(void **)(arg0 + 0x30)) + arg1 * 0x18 + 0x10) == 0;
return true;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002EF814
int IsFileOpen();
void ReplacePaneTexture(void*, uint32_t, const void*);
void GFLassert();
extern "C" void YellowAuto_002ef814(uint8_t* arg0, uint32_t arg1, const void* arg2, uint32_t arg3, bool arg4) __asm__("_ZN3app4tool14PokeIconToolEx11SetPokeIconEjPKN3pml8pokepara9CoreParamEPN2nw3lyt7PictureEb");
extern "C" void YellowAuto_002ef814(uint8_t* arg0, uint32_t arg1, const void* arg2, uint32_t arg3, bool arg4) {
if (arg1 < *(uint32_t *)(arg0 + 0x14) && arg2 != (const void *)0 && arg3 != 0) if (*(uint8_t *)(arg0 + 0x1c) == 0 && IsFileOpen() == 0) *(uint32_t *)((uint8_t *)(*(void **)(arg0 + 0x2c)) + arg1 * 0x10) = arg1, *(uint32_t *)((uint8_t *)(*(void **)(arg0 + 0x2c)) + arg1 * 0x10 + 4) = (uint32_t)arg2, *(uint32_t *)((uint8_t *)(*(void **)(arg0 + 0x2c)) + arg1 * 0x10 + 8) = arg3, *(uint8_t *)((uint8_t *)(*(void **)(arg0 + 0x2c)) + arg1 * 0x10 + 0xc) = (uint8_t)arg4; else ReplacePaneTexture(*(void **)arg0, arg1, arg2); else GFLassert(); *(uint32_t *)(arg0 + 0x34) = arg3;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002EF8D8
void* GetPicturePane(void*, uint32_t);
void* GetPicturePane(void*, void*, uint32_t, void*);
void SetPokeIcon(uint8_t*, uint32_t, const void*, uint32_t, bool);
extern "C" void YellowAuto_002ef8d8(uint8_t* arg0, uint32_t arg1, const void* arg2, uint32_t arg3, void* arg4, bool arg5) __asm__("_ZN3app4tool14PokeIconToolEx11SetPokeIconEjPKN3pml8pokepara9CoreParamEjPN2nw3lyt5PartsEb");
extern "C" void YellowAuto_002ef8d8(uint8_t* arg0, uint32_t arg1, const void* arg2, uint32_t arg3, void* arg4, bool arg5) {
if (arg4 == (void *)0) arg4 = GetPicturePane(*(void **)(arg0 + 0xc), arg3); else arg4 = GetPicturePane(*(void **)(arg0 + 0xc), arg4, arg3, (void *)(arg0 + 0x10)); SetPokeIcon(arg0, arg1, arg2, (uint32_t)arg4, arg5);
}
#endif
