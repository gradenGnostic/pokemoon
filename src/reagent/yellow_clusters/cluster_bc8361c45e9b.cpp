// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0048CB7C
extern "C" void* YellowAuto_0048cb7c(const uint8_t* arg0, int32_t arg1) __asm__("_ZNK3App6Resort17ResortDataManager10GetArcFileEi");
extern "C" void* YellowAuto_0048cb7c(const uint8_t* arg0, int32_t arg1) {
if (arg0[4] == 0) return 0; if (arg1 == 1 && *(const uint32_t *)(arg0 + 0x14) == 3) return *(void **)(arg0 + 0x38); return 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0048CBFC
extern "C" void* YellowAuto_0048cbfc(const uint8_t* arg0) __asm__("_ZNK3App6Resort17ResortDataManager17GetUncompWorkHeapEv");
extern "C" void* YellowAuto_0048cbfc(const uint8_t* arg0) {
if (arg0[4] == 0 || *(const uint32_t *)(arg0 + 0x14) - 2 > 3) return 0; return *(void **)(arg0 + 0xc);
}
#endif
