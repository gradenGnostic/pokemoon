// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0048CBA8
extern "C" bool YellowAuto_0048cba8(uint8_t* arg0, int32_t arg1) __asm__("_ZNK3App6Resort17ResortDataManager16IsFileAccessibleEi");
extern "C" bool YellowAuto_0048cba8(uint8_t* arg0, int32_t arg1) {
if (*(uint8_t*)(arg0 + 4) == 0) return false; if (arg1 == 0) return *(uint32_t*)(arg0 + 0x14) - 1u <= 2u; if (arg1 != 1) return false; return *(uint32_t*)(arg0 + 0x14) == 3u;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002D8970
uint8_t* __aeabi_vec_ctor_nocookie_nodtor(uint8_t*, const void*, uint32_t, uint32_t);
extern "C" void YellowAuto_002d8970(uint8_t* arg0) __asm__("_ZN3App6Resort17ResortDataManagerC1Ev");
extern "C" void YellowAuto_002d8970(uint8_t* arg0) {
*(uint32_t*)(arg0 + 0) = *(uint32_t*)0x002d8a04u; *(uint8_t*)(arg0 + 4) = 0; *(uint32_t*)(arg0 + 8) = 0; *(uint32_t*)(arg0 + 0xC) = 0; *(uint32_t*)(arg0 + 0x10) = 0; *(uint32_t*)(arg0 + 0x14) = 0; *(uint32_t*)(arg0 + 0x18) = 0; *(uint8_t*)(arg0 + 0x1C) = 0; *(uint32_t*)(arg0 + 0x20) = 0; *(uint32_t*)(arg0 + 0x24) = 0; __aeabi_vec_ctor_nocookie_nodtor(arg0 + 0x28, (const void*)0x002d8a08u, 4u, 4u); *(uint32_t*)(arg0 + 0x28) = 0; *(uint32_t*)(arg0 + 0x2C) = 0; *(uint32_t*)(arg0 + 0x30) = 0; *(uint32_t*)(arg0 + 0x34) = 0; *(uint32_t*)(arg0 + 0x38) = 0;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002D82D8
extern "C" void YellowAuto_002d82d8(uint8_t* arg0) __asm__("_ZN3App6Resort17ResortDataManager11ReleaseStopEv");
extern "C" void YellowAuto_002d82d8(uint8_t* arg0) {
if (*(arg0 + 4) == 0) return; *(arg0 + 28) = 1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0048CC24
void* PackGetData(const void*, int32_t, uint32_t);
extern "C" void* YellowAuto_0048cc24(const uint8_t* arg0, int32_t arg1) __asm__("_ZNK3App6Resort17ResortDataManager7GetDataEi");
extern "C" void* YellowAuto_0048cc24(const uint8_t* arg0, int32_t arg1) {
if (*(arg0 + 4) == 0) return 0; if (arg1 == 5) { if (*(const uint32_t*)(arg0 + 20) == 3) return (void*)*(const uint32_t*)(arg0 + 36); return 0; } if ((*(const uint32_t*)(arg0 + 20) - 1U) >= 3U) return 0; if (arg1 == 0) return PackGetData((const void*)(arg0 + 40), 4, 0); if (arg1 == 1) return PackGetData((const void*)(arg0 + 40), 0, 0); if (arg1 == 2) return PackGetData((const void*)(arg0 + 40), 1, 0); if (arg1 == 3) return PackGetData((const void*)(arg0 + 40), 3, 0); if (arg1 == 4) return PackGetData((const void*)(arg0 + 40), 2, 0); return 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002D8388
void GFLassert();
void* CreateHeap(void*, int32_t, uint32_t, uint32_t, uint32_t, uint32_t);
extern "C" void YellowAuto_002d8388(uint8_t* arg0, void* arg1) __asm__("_ZN3App6Resort17ResortDataManager6CreateEPN4gfl24heap11CtrHeapBaseE");
extern "C" void YellowAuto_002d8388(uint8_t* arg0, void* arg1) {
if (*(arg0 + 4) != 0) { GFLassert(); return; } *(uint32_t*)(arg0 + 8) = 0; *(uint32_t*)(arg0 + 12) = 0; *(uint32_t*)(arg0 + 16) = 0; *(uint32_t*)(arg0 + 20) = 0; *(uint32_t*)(arg0 + 24) = 0; *(arg0 + 28) = 0; *(uint32_t*)(arg0 + 32) = 0; *(uint32_t*)(arg0 + 36) = 0; *(uint32_t*)(arg0 + 40) = 0; *(uint32_t*)(arg0 + 44) = 0; *(uint32_t*)(arg0 + 48) = 0; *(uint32_t*)(arg0 + 52) = 0; *(uint32_t*)(arg0 + 56) = 0; *(void**)(arg0 + 8) = CreateHeap(arg1, -2, 0, 0, 0, 0); *(void**)(arg0 + 12) = CreateHeap(arg1, -2, 0, 0, 0, 0); *(arg0 + 4) = 1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002D8870
void SubUpdate(uint8_t*);
void CurrentSleep(uint32_t);
void FreeBlock(void*);
void DeleteHeap(void*);
extern "C" void YellowAuto_002d8870(uint8_t* arg0) __asm__("_ZN3App6Resort17ResortDataManager7DestroyEv");
extern "C" void YellowAuto_002d8870(uint8_t* arg0) {
if (*(arg0 + 4) == 0) return; *(arg0 + 28) = 1; while (*(arg0 + 4) != 0 && *(uint32_t*)(arg0 + 20) < 5U) { SubUpdate(arg0); CurrentSleep(1); } if (*(uint32_t*)(arg0 + 32) != 0) { FreeBlock((void*)*(uint32_t*)(arg0 + 32)); *(uint32_t*)(arg0 + 32) = 0; } if (*(uint32_t*)(arg0 + 36) != 0) { FreeBlock((void*)*(uint32_t*)(arg0 + 36)); *(uint32_t*)(arg0 + 36) = 0; } DeleteHeap((void*)*(uint32_t*)(arg0 + 12)); *(uint32_t*)(arg0 + 12) = 0; DeleteHeap((void*)*(uint32_t*)(arg0 + 8)); *(uint32_t*)(arg0 + 8) = 0; *(arg0 + 4) = 0; *(uint32_t*)(arg0 + 12) = 0; *(uint32_t*)(arg0 + 16) = 0; *(uint32_t*)(arg0 + 20) = 0; *(uint32_t*)(arg0 + 24) = 0; *(arg0 + 28) = 0; *(uint32_t*)(arg0 + 32) = 0; *(uint32_t*)(arg0 + 36) = 0; *(uint32_t*)(arg0 + 40) = 0; *(uint32_t*)(arg0 + 44) = 0; *(uint32_t*)(arg0 + 48) = 0; *(uint32_t*)(arg0 + 52) = 0; *(uint32_t*)(arg0 + 56) = 0;
}
#endif
