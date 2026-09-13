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

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002EFDC8
int32_t IsFileOpen(void*);
int32_t IsLoadFinished(void*, uint32_t);
void FileCloseSync(void*);
void FileClose(void*, void*);
int32_t IsFileClose(void*);
int32_t IsModuleFree(void*);
void operator delete[](void*);
extern "C" int32_t YellowAuto_002efdc8(uint8_t* arg0) __asm__("_ZN3app4tool14PokeIconToolEx7EndFuncEv");
extern "C" int32_t YellowAuto_002efdc8(uint8_t* arg0) {
int32_t s = *(int32_t*)(arg0 + 0x20);
switch (s) {
case 0:
if (*(uint8_t*)(arg0 + 0x1C) == (uint8_t)0) {
if (IsFileOpen(*(void**)(arg0)) == 0)
return 0;
}
*(int32_t*)(arg0 + 0x20) = *(int32_t*)(arg0 + 0x20) + 1;
case 1: {
uint32_t n = *(uint32_t*)(arg0 + 0x14);
bool ok = true;
if (n != (uint32_t)0) {
uint8_t* a = *(uint8_t**)(arg0 + 0x28);
for (uint32_t i = (uint32_t)0; i < n; ++i) {
if (a[i] == (uint8_t)1) {
if (IsLoadFinished(*(void**)(arg0), i) != 0)
a[i] = (uint8_t)2;
ok = false;
}
}
if (!ok)
return 0;
}
*(int32_t*)(arg0 + 0x20) = *(int32_t*)(arg0 + 0x20) + 1;
}
case 2:
if (*(uint8_t*)(arg0 + 0x1C) == (uint8_t)0) {
FileClose(*(void**)(arg0), *(void**)(*(uint8_t**)(arg0 + 0x04) + 0x08));
*(int32_t*)(arg0 + 0x20) = *(int32_t*)(arg0 + 0x20) + 1;
} else {
FileCloseSync(*(void**)(arg0));
*(int32_t*)(arg0 + 0x20) = 4;
return 0;
}
case 3:
if (IsFileClose(*(void**)(arg0)) == 0)
return 0;
*(int32_t*)(arg0 + 0x20) = *(int32_t*)(arg0 + 0x20) + 1;
case 4:
if (IsModuleFree(*(void**)(arg0)) == 0)
return 0;
*(int32_t*)(arg0 + 0x20) = *(int32_t*)(arg0 + 0x20) + 1;
case 5: {
void* v0 = *(void**)(arg0);
if (v0 != (void*)0) {
void* vt = *(void**)(v0);
void (*fn)(void*) = *(void (**)(void*))((uint8_t*)vt + 4);
fn(v0);
*(void**)(arg0) = (void*)0;
}
void* d1 = *(void**)(arg0 + 0x28);
if (d1 != (void*)0) {
operator delete[](d1);
*(void**)(arg0 + 0x28) = (void*)0;
}
void* d2 = *(void**)(arg0 + 0x30);
if (d2 != (void*)0) {
operator delete[](d2);
*(void**)(arg0 + 0x30) = (void*)0;
}
void* d3 = *(void**)(arg0 + 0x2C);
if (d3 != (void*)0) {
operator delete[](d3);
*(void**)(arg0 + 0x2C) = (void*)0;
}
*(int32_t*)(arg0 + 0x20) = *(int32_t*)(arg0 + 0x20) + 1;
}
case 6:
return 1;
default:
return 0;
}
return 0;
}
#endif
