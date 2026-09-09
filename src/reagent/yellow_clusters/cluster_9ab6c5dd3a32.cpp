// Autonomous Qwen reconstruction approved by GPT-5.4 mini.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00306FAC
extern "C" uint32_t YellowAuto_00306fac(void* arg0) __asm__("_ZN3app4util13GetPaneHelper4PeekEv");
extern "C" uint32_t YellowAuto_00306fac(void* arg0) {
if (*(uint32_t *)((uint8_t *)arg0 + 0xc) == 0)
    return 0;
return *(uint32_t *)((uint8_t *)arg0 + *(uint32_t *)((uint8_t *)arg0 + 0xc) * 4 + 0xc);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00307088
extern "C" void YellowAuto_00307088(void* arg0) __asm__("_ZN3app4util13GetPaneHelper5ClearEv");
extern "C" void YellowAuto_00307088(void* arg0) {
*(uint32_t *)((uint8_t *)arg0 + 0xc) = 0;
*(uint32_t *)((uint8_t *)arg0 + 0x10) = 0;
*(uint32_t *)((uint8_t *)arg0 + 0x14) = 0;
*(uint32_t *)((uint8_t *)arg0 + 0x18) = 0;
*(uint32_t *)((uint8_t *)arg0 + 0x1c) = 0;
*(uint32_t *)((uint8_t *)arg0 + 0x20) = 0;
*(uint32_t *)((uint8_t *)arg0 + 0x24) = 0;
*(uint32_t *)((uint8_t *)arg0 + 0x28) = 0;
*(uint32_t *)((uint8_t *)arg0 + 0x2c) = 0;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003070E8
extern "C" void YellowAuto_003070e8(uint8_t* arg0, void* arg1, void* arg2) __asm__("_ZN3app4util13GetPaneHelperC1EPN4gfl23lyt5LytWkEPNS3_13LytMultiResIDE");
extern "C" void YellowAuto_003070e8(uint8_t* arg0, void* arg1, void* arg2) {
*(void**)(arg0 + 4) = arg1; *(void**)(arg0 + 8) = arg2; *(uint32_t*)(arg0 + 12) = 0; *(uint32_t*)(arg0 + 16) = 0; *(uint32_t*)(arg0 + 20) = 0; *(uint32_t*)(arg0 + 24) = 0; *(uint32_t*)(arg0 + 28) = 0; *(uint32_t*)(arg0 + 32) = 0; *(uint32_t*)(arg0 + 36) = 0; *(uint32_t*)(arg0 + 40) = 0; *(uint32_t*)(arg0 + 44) = 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00306EB8
void* Call_004995F4(void* arg0, uint32_t arg1);
void* Call_00499A98(void* arg0, uint32_t arg1, uint32_t arg2, void* arg3);
extern "C" void* YellowAuto_00306eb8(uint8_t* arg0, uint32_t arg1) __asm__("_ZN3app4util13GetPaneHelper12GetPartsPaneEj");
extern "C" void* YellowAuto_00306eb8(uint8_t* arg0, uint32_t arg1) {
if (*(uint32_t*)(arg0 + 12) != 0) return Call_00499A98(*(void**)(arg0 + 4), *(uint32_t*)(arg0 + *(uint32_t*)(arg0 + 12) * 4 + 12), arg1, *(void**)(arg0 + 8)); return Call_004995F4(*(void**)(arg0 + 4), arg1);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00306EEC
void* Call_00499634(void* arg0, uint32_t arg1);
void* Call_00499D30(void* arg0, uint32_t arg1, uint32_t arg2, void* arg3);
extern "C" void* YellowAuto_00306eec(uint8_t* arg0, uint32_t arg1) __asm__("_ZN3app4util13GetPaneHelper14GetPicturePaneEj");
extern "C" void* YellowAuto_00306eec(uint8_t* arg0, uint32_t arg1) {
if (*(uint32_t*)(arg0 + 12) != 0) return Call_00499D30(*(void**)(arg0 + 4), *(uint32_t*)(arg0 + *(uint32_t*)(arg0 + 12) * 4 + 12), arg1, *(void**)(arg0 + 8)); return Call_00499634(*(void**)(arg0 + 4), arg1);
}
#endif
