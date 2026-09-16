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

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002C97AC
extern "C" void YellowAuto_002c97ac(uint8_t* arg0, uint32_t* arg1, uint32_t* arg2) __asm__("_ZN3App4Tool10MapManager12GetCenterPosEPfS2_");
extern "C" void YellowAuto_002c97ac(uint8_t* arg0, uint32_t* arg1, uint32_t* arg2) {
*arg1 = *(uint32_t*)(arg0 + 0x174); *arg2 = *(uint32_t*)(arg0 + 0x178);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002C9E20
void* GetPane(void* arg0, uint32_t arg1);
extern "C" void YellowAuto_002c9e20(uint8_t* arg0, bool arg1) __asm__("_ZN3App4Tool10MapManager18SetVisibleHeroIconEb");
extern "C" void YellowAuto_002c9e20(uint8_t* arg0, bool arg1) {
arg0 = (uint8_t*)GetPane(*(void**)(arg0 + 0x20), 63); *(arg0 + 0x44) = (uint8_t)((*(arg0 + 0x44) & 0xFE) | (uint8_t)arg1);
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002C9E94
void* GetPartsPane(void* arg0, uint32_t arg1);
void* GetPane(void* arg0, void* arg1, uint32_t arg2, void* arg3);
extern "C" void YellowAuto_002c9e94(uint8_t* arg0, bool arg1) __asm__("_ZN3App4Tool10MapManager19SetVisibleHeroArrowEb");
extern "C" void YellowAuto_002c9e94(uint8_t* arg0, bool arg1) {
void* p0 = GetPartsPane(*(void**)(arg0 + 0x20), 0x3F);
void* p1 = GetPane(*(void**)(arg0 + 0x20), p0, 0x13, (void*)(arg0 + 0x24));
*(uint8_t*)((uint8_t*)p1 + 0x44) = (uint8_t)((*(uint8_t*)((uint8_t*)p1 + 0x44) & 0xFE) | arg1);
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002C9AE4
void* GetPane(const void*, int32_t);
extern "C" void YellowAuto_002c9ae4(uint8_t* arg0) __asm__("_ZN3App4Tool10MapManager14SetupEventAreaEv");
extern "C" void YellowAuto_002c9ae4(uint8_t* arg0) {
uint8_t* pane = (uint8_t*)GetPane(*(void**)(arg0 + 0x20), 0x40);
float cx = *(float*)(pane + 0x1c);
float cy = *(float*)(pane + 0x20);
float w = *(float*)(pane + 0x3c) * *(const float*)0x002C9B3C;
float h = *(float*)(pane + 0x40) * *(const float*)0x002C9B3C;
*(float*)(arg0 + 0x18c) = cy + h;
*(float*)(arg0 + 0x190) = cy - h;
*(float*)(arg0 + 0x194) = cx - w;
*(float*)(arg0 + 0x198) = cx + w;
}
#endif
