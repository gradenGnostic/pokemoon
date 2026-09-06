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
