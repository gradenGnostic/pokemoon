// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00354600
void* GflHeapAllocMemoryBlock(void*, uint32_t);
void FUN_00356704(uint16_t*, const uint16_t*, uint32_t);
extern "C" uint8_t* YellowAuto_00354600(uint8_t* arg0, const uint8_t* arg1, void* arg2) __asm__("_ZN4gfl23str6StrBufC1ERKS1_PNS_4heap11CtrHeapBaseE");
extern "C" uint8_t* YellowAuto_00354600(uint8_t* arg0, const uint8_t* arg1, void* arg2) {
*(uint32_t *)arg0 = *(const uint32_t *)0x00354660; *(uint8_t *)(arg0 + 0xC) = 0; *(uint16_t *)(arg0 + 0xA) = *(const uint16_t *)(arg1 + 0xA); *(uint16_t *)(arg0 + 0x8) = *(const uint16_t *)(arg1 + 0x8); *(uint16_t **)(arg0 + 0x4) = (uint16_t *)GflHeapAllocMemoryBlock(arg2, (uint32_t)(*(uint16_t *)(arg0 + 0x8) << 1)); if (*(uint16_t **)(arg0 + 0x4) != 0) (FUN_00356704(*(uint16_t **)(arg0 + 0x4), *(const uint16_t **)(arg1 + 0x4), (uint32_t)*(uint16_t *)(arg0 + 0x8)), *(uint8_t *)(arg0 + 0xC) = 1); return arg0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00354704
void GflHeapFreeMemoryBlock(void*, void*);
extern "C" uint8_t* YellowAuto_00354704(uint8_t* arg0) __asm__("_ZN4gfl23str6StrBufD1Ev");
extern "C" uint8_t* YellowAuto_00354704(uint8_t* arg0) {
*(uint32_t *)arg0 = *(const uint32_t *)0x00354728; if (*(void **)(arg0 + 0x4) != 0) GflHeapFreeMemoryBlock(*(void **)(arg0 + 0x4), *(void **)0x00354728); return arg0;
}
#endif
