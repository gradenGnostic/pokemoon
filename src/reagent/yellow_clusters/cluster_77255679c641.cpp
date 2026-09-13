// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002CEE80
void DeleteTexture(void*);
bool LoadTexture(void*, void*, uint32_t);
bool ReplaceTextureStatic(void*, void*, uint32_t, uint32_t);
extern "C" bool YellowAuto_002cee80(uint8_t* arg0, void* arg1, uint32_t arg2, uint32_t arg3) __asm__("_ZN3App4Tool15PokeIconTexData18ReplectPaneTextureEPN2nw3lyt7PictureEjj");
extern "C" bool YellowAuto_002cee80(uint8_t* arg0, void* arg1, uint32_t arg2, uint32_t arg3) {
uint32_t idx = *(uint32_t*)(arg0 + 0x44);
uint8_t flag = *(uint8_t*)(arg0 + idx * 32 + 0x20);
if (flag == 1)
DeleteTexture((void*)(arg0 + idx * 32 + 0x04));
*(uint8_t*)(arg0 + idx * 32 + 0x20) = 0;
uint8_t info[20];
for (uint32_t i = 0; i < 20; ++i)
info[i] = 0;
void* buf = *(void**)(arg0 + idx * 32 + 0x18);
uint32_t sz = *(uint32_t*)(arg0 + idx * 32 + 0x1C);
bool ok = LoadTexture((void*)info, buf, sz);
if (!ok)
return false;
for (uint32_t i = 0; i < 20; ++i)
*(uint8_t*)(arg0 + idx * 32 + 0x04 + i) = info[i];
*(uint8_t*)(arg0 + idx * 32 + 0x20) = 1;
*(uint32_t*)(arg0 + 0x44) = (uint32_t)(~idx & 1);
bool ok2 = ReplaceTextureStatic((void*)info, arg1, arg2, arg3);
if (!ok2)
return false;
return true;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002CEFBC
void* __aeabi_vec_ctor_nocookie_nodtor(uint8_t*, void*, uint32_t, uint32_t);
void* GflHeapAllocMemoryBlockAlign(void*, uint32_t, uint32_t);
extern "C" uint8_t* YellowAuto_002cefbc(uint8_t* arg0, void* arg1) __asm__("_ZN3App4Tool15PokeIconTexDataC1EPN4gfl24heap11CtrHeapBaseE");
extern "C" uint8_t* YellowAuto_002cefbc(uint8_t* arg0, void* arg1) {
*(uint32_t*)arg0 = *(uint32_t*)0x002CF038;
__aeabi_vec_ctor_nocookie_nodtor(arg0 + 4, *(void**)0x002CF03C, 32, 2);
*(uint32_t*)(arg0 + 68) = 0;
*(void**)(arg0 + 24) = GflHeapAllocMemoryBlockAlign(arg1, *(uint32_t*)0x002CF040, 128);
*(void**)(arg0 + 56) = GflHeapAllocMemoryBlockAlign(arg1, *(uint32_t*)0x002CF040, 128);
return arg0;
}
#endif
