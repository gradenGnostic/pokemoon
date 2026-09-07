// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0035F8D4
extern "C" void YellowAuto_0035f8d4(uint8_t* arg0, void* arg1, void* arg2, uint32_t arg3) __asm__("_ZN4gfl27imagedb15ImageDBAccessorC1EPNS_4heap11CtrHeapBaseES4_j");
extern "C" void YellowAuto_0035f8d4(uint8_t* arg0, void* arg1, void* arg2, uint32_t arg3) {
*(uint32_t*)(arg0 + 0x4) = 0; *(uint32_t*)(arg0 + 0x8) = 0; *(uint8_t*)(arg0 + 0x2C) = 0; *(uint8_t*)(arg0 + 0x2D) = 0; *(uint32_t*)(arg0 + 0x18) = 0; *(uint32_t*)(arg0 + 0x1C) = 0; *(uint32_t*)(arg0 + 0x20) = 0; *(uint32_t*)(arg0 + 0x24) = 0; *(uint8_t*)(arg0 + 0x14) = 8; *(uint16_t*)(arg0 + 0x2E) = 0; *(uint32_t*)(arg0 + 0x28) = arg3; *(void**)(arg0 + 0xC) = arg1; *(void**)(arg0 + 0x10) = arg2; return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0035F844
void FUN_003af698();
void GflHeapFreeMemoryBlock(void*);
void FUN_00174bfc(void*);
extern "C" void YellowAuto_0035f844(uint8_t* arg0) __asm__("_ZN4gfl27imagedb15ImageDBAccessor8FinalizeEv");
extern "C" void YellowAuto_0035f844(uint8_t* arg0) {
if (*(uint8_t*)(arg0 + 0x2C) == 0) return; FUN_003af698(); if (*(void**)(arg0 + 0x18) != (void*)0) { GflHeapFreeMemoryBlock(*(void**)(arg0 + 0x18)); *(uint32_t*)(arg0 + 0x18) = 0; } if (*(void**)(arg0 + 0x1C) != (void*)0) { GflHeapFreeMemoryBlock(*(void**)(arg0 + 0x1C)); *(uint32_t*)(arg0 + 0x1C) = 0; } if (*(void**)(arg0 + 0x8) != (void*)0) { FUN_00174bfc((void*)((uint8_t*)(*(void**)(arg0 + 0x8)) + 4)); } if (*(void**)(arg0 + 0x8) != (void*)0) { ((void (*)(void*))((*(void***)(*(void**)(arg0 + 0x8)))[3]))(*(void**)(arg0 + 0x8)); *(uint32_t*)(arg0 + 0x8) = 0; } if (*(void**)(arg0 + 0x4) != (void*)0) { GflHeapFreeMemoryBlock(*(void**)(arg0 + 0x4)); *(uint32_t*)(arg0 + 0x4) = 0; } *(uint8_t*)(arg0 + 0x2C) = 0; return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0035F3F0
void* GflHeapAllocMemoryBlock(void*, uint32_t);
void* FUN_00105500(uint32_t, void*);
void FUN_00174ad0(void*, void*, uint32_t, uint32_t);
void FUN_003af6d8(void*);
uint32_t FUN_003b5e6c(uint32_t, uint32_t, uint8_t);
void GflHeapFreeMemoryBlock(void*);
void* GflHeapAllocMemoryBlockAlign(void*, uint32_t, uint32_t);
extern "C" int32_t YellowAuto_0035f3f0(uint8_t* arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3, bool arg4) __asm__("_ZN4gfl27imagedb15ImageDBAccessor10InitializeEjjjb");
extern "C" int32_t YellowAuto_0035f3f0(uint8_t* arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3, bool arg4) {
if (*(uint8_t*)(arg0 + 0x2C) == 0) { *(uint32_t*)(arg0 + 0x20) = arg2; *(uint32_t*)(arg0 + 0x24) = arg3; if (*(void**)(arg0 + 0x4) == (void*)0) { void* tmp = GflHeapAllocMemoryBlock(*(void**)(arg0 + 0xC), arg1); *(void**)(arg0 + 0x4) = tmp; if (tmp == (void*)0) return 1; } if (*(void**)(arg0 + 0x8) == (void*)0) { void* tmp2 = FUN_00105500(92, *(void**)(arg0 + 0xC)); if (tmp2 != (void*)0) { for (uint32_t i = 0; i < 92; i++) ((uint8_t*)tmp2)[i] = 0; } *(void**)(arg0 + 0x8) = tmp2; if (tmp2 == (void*)0) return 1; FUN_00174ad0((void*)((uint8_t*)tmp2 + 4), *(void**)(arg0 + 0x4), arg1, 0); } *(uint8_t*)(arg0 + 0x2C) = 1; FUN_003af6d8(*(void**)(arg0 + 0x8)); } if (arg4) return 0; uint32_t sz = FUN_003b5e6c(*(uint32_t*)(arg0 + 0x20), *(uint32_t*)(arg0 + 0x24), *(uint8_t*)(arg0 + 0x14)); if (*(void**)(arg0 + 0x18) != (void*)0) { GflHeapFreeMemoryBlock(*(void**)(arg0 + 0x18)); *(uint32_t*)(arg0 + 0x18) = 0; } if (*(void**)(arg0 + 0x1C) != (void*)0) { GflHeapFreeMemoryBlock(*(void**)(arg0 + 0x1C)); *(uint32_t*)(arg0 + 0x1C) = 0; } void* tmp3 = GflHeapAllocMemoryBlockAlign(*(void**)(arg0 + 0x10), sz, 4); *(void**)(arg0 + 0x18) = tmp3; if (tmp3 == (void*)0) return 1; void* tmp4 = GflHeapAllocMemoryBlockAlign(*(void**)(arg0 + 0x10), sz, 4); *(void**)(arg0 + 0x1C) = tmp4; if (tmp4 == (void*)0) return 1; return 0;
}
#endif
