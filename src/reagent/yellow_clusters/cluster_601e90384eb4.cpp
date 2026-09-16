// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002E99BC
void GflHeapFreeMemoryBlock(void*, int32_t);
extern "C" void YellowAuto_002e99bc(uint8_t* arg0, int32_t arg1) __asm__("_ZN3app4tool10MenuCursor14DeleteResourceEv");
extern "C" void YellowAuto_002e99bc(uint8_t* arg0, int32_t arg1) {
if (*(uint8_t *)(arg0 + 0x20) != 0 && *(void **)(*(void **)(arg0 + 8)) != 0) GflHeapFreeMemoryBlock(*(void **)(*(void **)(arg0 + 8)), arg1), *(void **)(arg0 + 8) = 0, *(uint8_t *)(arg0 + 0x20) = 0; return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002E9B3C
bool IsDrawing(void*);
void FUN_00352304(void*, void*);
bool FUN_0049938c(const uint16_t*);
void FUN_0035240c(void*, const uint16_t*);
extern "C" uint32_t YellowAuto_002e9b3c(uint8_t* arg0) __asm__("_ZN3app4tool10MenuCursor16DeleteLayoutWorkEv");
extern "C" uint32_t YellowAuto_002e9b3c(uint8_t* arg0) {
if (*(void **)(arg0 + 0x10) == 0) return 1u; *(uint8_t *)(arg0 + 0x22) = 0; if (IsDrawing(*(void **)(arg0 + 0x10))) return 0u; FUN_00352304(*(void **)(arg0 + 0xc), *(void **)(arg0 + 0x10)); *(void **)(arg0 + 0x10) = 0; if (FUN_0049938c((const uint16_t *)(arg0 + 0x14))) FUN_0035240c(*(void **)(arg0 + 0xc), (const uint16_t *)(arg0 + 0x14)); return 1u;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002E9C08
void FUN_00309c34(void*, uint32_t, void*, uint32_t, uint32_t);
extern "C" void YellowAuto_002e9c08(uint8_t* arg0, void* arg1, uint8_t arg2, int32_t arg3, uint32_t arg4, uint32_t arg5) __asm__("_ZN3app4tool10MenuCursor4DrawEPNS_4util19AppRenderingManagerEN4gfl23gfx12CtrDisplayNoENS5_3lyt11DisplayTypeEhj");
extern "C" void YellowAuto_002e9c08(uint8_t* arg0, void* arg1, uint8_t arg2, int32_t arg3, uint32_t arg4, uint32_t arg5) {
void* lyt = reinterpret_cast<void*>(*reinterpret_cast<uint32_t*>(arg0 + 0x10));
if (lyt == 0) return;
if (*(arg0 + 0x22) == 0) return;
if (arg2 < 2) if (arg3 != 0) return;
if (arg2 < 2) FUN_00309c34(arg1, 0, lyt, arg5, arg4);
if (arg2 < 2) return;
if (arg2 != 2) return;
if (arg3 != 1) return;
FUN_00309c34(arg1, 1, lyt, arg5, arg4);
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002E961C
uint8_t* GetPane(void* arg0, uint32_t arg1);
extern "C" void YellowAuto_002e961c(uint8_t* arg0, bool arg1, uint32_t arg2) __asm__("_ZN3app4tool10MenuCursor10SetVisibleEbj");
extern "C" void YellowAuto_002e961c(uint8_t* arg0, bool arg1, uint32_t arg2) {
void* _lyt = (void*)(*(uint32_t*)(arg0 + 0x10));
if (_lyt == (void*)0) return;
if ((arg2 & 1u) != 0u) {
uint8_t* _p0 = GetPane(_lyt, *(uint32_t*)(*(uint32_t*)(arg0 + 0x18) + 8));
*(_p0 + 0x44) = (uint8_t)((*(_p0 + 0x44) & 0xFEu) | (uint8_t)arg1);
}
if (arg2 == 3u) {
uint8_t* _p1 = GetPane(_lyt, *(uint32_t*)(*(uint32_t*)(arg0 + 0x18) + 4));
*(_p1 + 0x44) = (uint8_t)((*(_p1 + 0x44) & 0xFEu) | (uint8_t)arg1);
} else {
if (arg1 == 0) return;
uint8_t* _p2 = GetPane(_lyt, *(uint32_t*)(*(uint32_t*)(arg0 + 0x18) + 4));
*(_p2 + 0x44) = (uint8_t)((*(_p2 + 0x44) & 0xFEu) | 1u);
}
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002E9C80
void* GetPane(void*, uint32_t);
extern "C" void YellowAuto_002e9c80(uint8_t* arg0, const uint8_t* arg1) __asm__("_ZN3app4tool10MenuCursor6SetPosEPN4gfl24math22ExtendedVectorTemplateINS3_33SpecializedExtendedVectorTemplateIN2nn4math4VEC3EEEEE");
extern "C" void YellowAuto_002e9c80(uint8_t* arg0, const uint8_t* arg1) {
if (*(void**)(arg0 + 0x10) == (void*)0) return;
void* v0 = *(void**)(arg0 + 0x10);
uint32_t v1 = *(uint32_t*)(*(uint8_t**)(arg0 + 0x18) + 4);
void* v2 = GetPane(v0, v1);
*(uint32_t*)((uint8_t*)v2 + 0x1C) = *(const uint32_t*)(arg1 + 0);
*(uint32_t*)((uint8_t*)v2 + 0x20) = *(const uint32_t*)(arg1 + 4);
*(uint32_t*)((uint8_t*)v2 + 0x24) = *(const uint32_t*)(arg1 + 8);
*(uint8_t*)((uint8_t*)v2 + 0x44) = (uint8_t)((*(uint8_t*)((uint8_t*)v2 + 0x44) & (uint8_t)0xEF) | (uint8_t)0x10);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002E9870
void* GetLayoutCore(void*);
void* GetPane(void*, uint32_t);
extern "C" void YellowAuto_002e9870(uint8_t* arg0, void* arg1, uint8_t* arg2) __asm__("_ZN3app4tool10MenuCursor13PutNonVisibleEPN4gfl23lyt5LytWkEPN2nw3lyt4PaneE");
extern "C" void YellowAuto_002e9870(uint8_t* arg0, void* arg1, uint8_t* arg2) {
void* v0 = *(void**)(arg0 + 0x10);
uint8_t* v1 = *(uint8_t**)(arg0 + 0x18);
float v2 = *(float*)(arg2 + 0x3C);
float v3 = *(float*)(arg2 + 0x1C);
float v4 = *(float*)(arg2 + 0x20);
float v5 = *(float*)(arg2 + 0x24);
void* v6 = GetLayoutCore(arg1);
void* v7 = *(void**)((uint8_t*)v6 + 0x10);
if (v0 != (void*)0) {
float v8 = *(float*)(v1 + 0x10);
if (v2 < v8) v2 = v8;
uint32_t v9 = *(uint32_t*)(v1 + 4);
void* v10 = GetPane(v0, v9);
uint32_t v11 = *(uint32_t*)((uint8_t*)v10 + 0x40);
void* v12 = GetPane(v0, v9);
*(float*)((uint8_t*)v12 + 0x3C) = v2;
*(uint32_t*)((uint8_t*)v12 + 0x40) = v11;
*(uint8_t*)((uint8_t*)v12 + 0x44) = (uint8_t)((*(uint8_t*)((uint8_t*)v12 + 0x44) & (uint8_t)0xEF) | (uint8_t)0x10);
}
uint8_t* v13 = *(uint8_t**)(arg2 + 0x0C);
while (v13 != (uint8_t*)0 && v13 != (uint8_t*)v7) {
v3 += *(float*)(v13 + 0x1C);
v4 += *(float*)(v13 + 0x20);
v5 += *(float*)(v13 + 0x24);
v13 = *(uint8_t**)(v13 + 0x0C);
}
uint32_t v14 = *(uint32_t*)(*(uint8_t**)(arg0 + 0x18) + 4);
void* v15 = GetPane(*(void**)(arg0 + 0x10), v14);
*(uint32_t*)((uint8_t*)v15 + 0x28) = *(uint32_t*)(arg2 + 0x28);
*(uint32_t*)((uint8_t*)v15 + 0x2C) = *(uint32_t*)(arg2 + 0x2C);
*(uint32_t*)((uint8_t*)v15 + 0x30) = *(uint32_t*)(arg2 + 0x30);
*(uint8_t*)((uint8_t*)v15 + 0x44) = (uint8_t)((*(uint8_t*)((uint8_t*)v15 + 0x44) & (uint8_t)0xEF) | (uint8_t)0x10);
*(uint32_t*)((uint8_t*)v15 + 0x34) = *(uint32_t*)(arg2 + 0x34);
*(uint32_t*)((uint8_t*)v15 + 0x38) = *(uint32_t*)(arg2 + 0x38);
*(uint8_t*)((uint8_t*)v15 + 0x44) = (uint8_t)((*(uint8_t*)((uint8_t*)v15 + 0x44) & (uint8_t)0xEF) | (uint8_t)0x10);
if (*(void**)(arg0 + 0x10) != (void*)0) {
uint32_t v16 = *(uint32_t*)(*(uint8_t**)(arg0 + 0x18) + 4);
void* v17 = GetPane(*(void**)(arg0 + 0x10), v16);
*(float*)((uint8_t*)v17 + 0x1C) = v3;
*(float*)((uint8_t*)v17 + 0x20) = v4;
*(float*)((uint8_t*)v17 + 0x24) = v5;
*(uint8_t*)((uint8_t*)v17 + 0x44) = (uint8_t)((*(uint8_t*)((uint8_t*)v17 + 0x44) & (uint8_t)0xEF) | (uint8_t)0x10);
}
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002E9DA0
uint8_t* func_0034fec0(uint8_t*);
extern "C" void YellowAuto_002e9da0(uint8_t* arg0, void* arg1, void* arg2) __asm__("_ZN3app4tool10MenuCursorC1EPNS_4util4HeapEPPv");
extern "C" void YellowAuto_002e9da0(uint8_t* arg0, void* arg1, void* arg2) {
*(void**)(arg0 + 4) = arg1; *(void**)(arg0 + 8) = arg2; *(uint32_t*)(arg0 + 12) = 0; *(uint32_t*)(arg0 + 16) = 0; func_0034fec0(arg0 + 20); *(uint32_t*)(arg0 + 28) = 0; *(uint8_t*)(arg0 + 32) = 0; *(uint8_t*)(arg0 + 33) = 1; *(uint8_t*)(arg0 + 34) = 1;
}
#endif
