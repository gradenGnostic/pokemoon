// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002CA2B0
void FUN_002c9ed8(uint8_t*);
void FUN_00350cd8(void*);
extern "C" void YellowAuto_002ca2b0(uint8_t* arg0) __asm__("_ZN3App4Tool10MapManager6UpdateEv");
extern "C" void YellowAuto_002ca2b0(uint8_t* arg0) {
if (*(uint32_t*)(arg0 + 0x20) != 0) { FUN_002c9ed8(arg0); FUN_00350cd8((void*)(*(uint32_t*)(arg0 + 0x20))); }
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002C9E54
uint8_t* GetPane(void*, uint32_t);
extern const uint32_t DAT_002c9e90[];
extern "C" void YellowAuto_002c9e54(uint8_t* arg0, int32_t arg1, bool arg2) __asm__("_ZN3App4Tool10MapManager19SetVisibleEventIconENS1_11EventIconIDEb");
extern "C" void YellowAuto_002c9e54(uint8_t* arg0, int32_t arg1, bool arg2) {
uint8_t* pane = GetPane((void*)(*(uint32_t*)(arg0 + 0x20)), DAT_002c9e90[arg1]); *(uint8_t*)(pane + 0x44) = (uint8_t)((*(uint8_t*)(pane + 0x44) & 0xFE) | (uint32_t)arg2); *(uint8_t*)(arg0 + arg1 * 12 + 0x1A4) = (uint8_t)arg2;
}
#endif
