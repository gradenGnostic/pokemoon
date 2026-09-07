// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002F983C
uint32_t ReplaceTextureStatic(void*, void*, uint32_t, uint32_t);
extern "C" uint32_t YellowAuto_002f983c(uint8_t* arg0, uint32_t arg1, void* arg2, uint32_t arg3, uint32_t arg4) __asm__("_ZN3app4tool19LytTexReplaceSystem14ReplaceTextureEjPN2nw3lyt7PictureEjj");
extern "C" uint32_t YellowAuto_002f983c(uint8_t* arg0, uint32_t arg1, void* arg2, uint32_t arg3, uint32_t arg4) {
if (arg1 < *(uint32_t *)(arg0 + 8) && *(uint8_t *)((uint8_t *)*(void **)(arg0 + 4) + arg1 * 4 + 4) != 0) return ReplaceTextureStatic((void *)((uint8_t *)*(void **)(arg0 + 4) + arg1 * 4 + 8), arg2, arg3, arg4); return 0;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002F9BDC
void* GetGameManager();
void* AllocArray(uint32_t, void*);
void* Alloc(uint32_t, void*);
void* CreateTexData(void*, void*, uint32_t, uint32_t, void*);
extern "C" void* YellowAuto_002f9bdc(uint8_t* arg0, void* arg1, void* arg2, uint32_t arg3, uint32_t arg4, void* arg5) __asm__("_ZN3app4tool19LytTexReplaceSystemC1EPN4gfl24heap11CtrHeapBaseES5_jjPNS2_2fs16AsyncFileManagerE");
extern "C" void* YellowAuto_002f9bdc(uint8_t* arg0, void* arg1, void* arg2, uint32_t arg3, uint32_t arg4, void* arg5) {
*(uint32_t*)(arg0 + 4) = 0;
*(uint32_t*)(arg0 + 8) = arg4;
*(void**)(arg0 + 12) = arg5;
if (arg5 == 0) GetGameManager();
void* arr = AllocArray(arg4 << 2, arg1);
*(void**)(arg0 + 4) = arr;
uint32_t i = 0;
if (arg4 != 0) {
uint32_t n = arg4;
do {
void* mem = Alloc(64, arg1);
void* obj = 0;
if (mem != 0) obj = CreateTexData(mem, arg2, arg3, 128, arg5);
((void**)arr)[i] = obj;
i = i + 1;
} while (i < n);
}
return arg0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002F9ADC
void TexMapSet(void*, const void*);
extern "C" bool YellowAuto_002f9adc(const void* arg0, void* arg1, uint32_t arg2, uint32_t arg3) __asm__("_ZN3app4tool19LytTexReplaceSystem20ReplaceTextureStaticEPKN2nw3lyt11TextureInfoEPNS3_7PictureEjj");
extern "C" bool YellowAuto_002f9adc(const void* arg0, void* arg1, uint32_t arg2, uint32_t arg3) {
if (arg0 == 0) return false;
if (arg1 == 0) return false;
void* vt = *(void**)arg1;
((uint32_t(*)(void*))((void**)vt)[9])(arg1);
void* mat = ((void*(*)(void*, uint32_t))((void**)vt)[10])(arg1, arg2);
void* arr = *(void**)((uint8_t*)mat + 120);
void* slot = (uint8_t*)arr + arg3 * 32;
TexMapSet(slot, arg0);
uint8_t f = *(uint8_t*)((uint8_t*)mat + 124);
*(uint8_t*)((uint8_t*)mat + 124) = (uint8_t)(f & 247);
return true;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002F9700
void SyncArcFileOpen(void*, void*);
void SyncArcFileClose(void*, void*);
void LoadTexData(void*, void*, uint32_t, uint32_t, bool);
extern "C" void YellowAuto_002f9700(uint8_t* arg0, void* arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, bool arg5) __asm__("_ZN3app4tool19LytTexReplaceSystem11LoadTextureEPN4gfl24heap11CtrHeapBaseEjjjb");
extern "C" void YellowAuto_002f9700(uint8_t* arg0, void* arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, bool arg5) {
void* vt = *(void**)arg1;
void* h0 = ((void*(*)(void*))((void**)vt)[13])(arg1);
void* h1 = ((void*(*)(void*))((void**)vt)[13])(arg1);
void* mgr = *(void**)(arg0 + 12);
uint8_t openReq[44];
for (uint32_t k = 0; k < 44; k++) openReq[k] = 0;
*(uint32_t*)(openReq + 4) = arg3;
*(void**)(openReq + 12) = h0;
*(void**)(openReq + 20) = h1;
openReq[8] = 16;
openReq[16] = 255;
openReq[26] = 1;
SyncArcFileOpen(mgr, openReq);
void* arr = *(void**)(arg0 + 4);
void* slot = ((void**)arr)[arg2];
LoadTexData(slot, arg1, arg3, arg4, arg5);
uint8_t closeReq[28];
for (uint32_t k = 0; k < 28; k++) closeReq[k] = 0;
*(uint32_t*)(closeReq + 4) = arg3;
closeReq[8] = 16;
closeReq[16] = 1;
SyncArcFileClose(mgr, closeReq);
return;
}
#endif
