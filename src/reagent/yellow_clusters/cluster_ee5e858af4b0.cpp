// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002F0520
void GflHeapFreeMemoryBlock(void*, int32_t);
extern "C" uint8_t* YellowAuto_002f0520(uint8_t* arg0, int32_t arg1) __asm__("_ZN3app4tool14ResourceLoaderD1Ev");
extern "C" uint8_t* YellowAuto_002f0520(uint8_t* arg0, int32_t arg1) {
*(uint32_t *)(arg0 + 0x0) = 0x002f0540; GflHeapFreeMemoryBlock(*(void **)(arg0 + 0x8), arg1); return arg0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002F03C8
void GflHeapFreeMemoryBlock(void*, int32_t);
extern "C" bool YellowAuto_002f03c8(uint8_t* arg0) __asm__("_ZN3app4tool14ResourceLoader11ReleaseDataEv");
extern "C" bool YellowAuto_002f03c8(uint8_t* arg0) {
if (*(uint32_t *)(arg0 + 0x14) != 5) return *(uint32_t *)(arg0 + 0x14) == 0; GflHeapFreeMemoryBlock(*(void **)(arg0 + 0x8), 5); *(void **)(arg0 + 0x8) = 0; *(uint32_t *)(arg0 + 0xc) = 0xffffffff; *(uint32_t *)(arg0 + 0x14) = 0; *(uint32_t *)(arg0 + 0x10) = 0xffffffff; *(uint8_t *)(arg0 + 0x18) = 0; return true;
}
#endif
