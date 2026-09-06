// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002C7DD0
uint32_t IsFileOpen();
uint32_t IsFileLoad();
extern "C" uint32_t YellowAuto_002c7dd0(uint8_t* arg0) __asm__("_ZN3App3Box11BoxAppSetup13IsBinLinkLoadEv");
extern "C" uint32_t YellowAuto_002c7dd0(uint8_t* arg0) {
return (IsFileOpen() != 0 && IsFileLoad() != 0) ? 1u : 0u;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002C82C0
uint32_t IsArcFileLoadDataFinished(void*, void*);
extern "C" void YellowAuto_002c82c0(uint8_t* arg0, void* arg1) __asm__("_ZN3App3Box11BoxAppSetup6UpdateEPN4gfl22fs16AsyncFileManagerE");
extern "C" void YellowAuto_002c82c0(uint8_t* arg0, void* arg1) {
for (int32_t i = 0; i < 11; ++i) if ((*(uint8_t *)(arg0 + 0x34 + i) == 0) && (*(void **)(arg0 + 8 + i * 4) != 0) && (IsArcFileLoadDataFinished(arg1, arg0 + 8 + i * 4) != 0)) *(uint8_t *)(arg0 + 0x34 + i) = 1;
}
#endif
