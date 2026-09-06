// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00453388
uint8_t* FUN_0045248c(uint8_t*, int32_t, int32_t, int32_t);
void setupLayout(uint8_t*, int32_t, int32_t);
void FUN_00452938(uint8_t*);
void FUN_00452b0c(uint8_t*);
extern const uint8_t *DAT_00453414;
extern "C" uint8_t* YellowAuto_00453388(uint8_t* arg0, int32_t arg1, int32_t arg2, int32_t arg3) __asm__("_ZN9NetAppLib11JoinFestaUI34JoinFestaAttractionSelectLowerViewC1EPNS_6System19ApplicationWorkBaseEii");
extern "C" uint8_t* YellowAuto_00453388(uint8_t* arg0, int32_t arg1, int32_t arg2, int32_t arg3) {
arg0 = FUN_0045248c(arg0, arg1, arg2, arg3);
*(uint32_t *)(arg0 + 0x0) = (uint32_t)DAT_00453414;
*(uint32_t *)(arg0 + 0xc4) = (uint32_t)(DAT_00453414 + 0x7c);
*(uint32_t *)(arg0 + 0xc8) = (uint32_t)(DAT_00453414 + 0xa0);
*(uint32_t *)(arg0 + 0xcc) = (uint32_t)(DAT_00453414 + 0xb8);
*(uint32_t *)(arg0 + 0xd0) = 0;
*(uint32_t *)(arg0 + 0xd4) = 0;
*(uint32_t *)(arg0 + 0xd8) = 0;
*(uint32_t *)(arg0 + 0xdc) = 0;
*(uint32_t *)(arg0 + 0xe0) = 0;
*(uint32_t *)(arg0 + 0xe4) = 0;
*(uint8_t *)(arg0 + 0xe8) = 0;
*(uint32_t *)(arg0 + 0xec) = 0;
*(uint32_t *)(arg0 + 0xf0) = 0;
*(uint32_t *)(arg0 + 0xf4) = 0;
*(uint32_t *)(arg0 + 0xf8) = 0;
*(uint8_t *)(arg0 + 0xfc) = 0;
*(uint8_t *)(arg0 + 0xfd) = 0;
setupLayout(arg0, 0, 1);
FUN_00452938(arg0);
FUN_00452b0c(arg0);
*(uint32_t *)(arg0 + 0x14) = (uint32_t)(arg0 + 0xc4);
return arg0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004525A0
void GetCursorData(uint8_t*, uint32_t*, void*);
uint32_t GetPosPaneIndex(uint8_t*, uint32_t);
void StartAnime(uint8_t*, int32_t, uint32_t, int32_t, int32_t);
extern const uint32_t *DAT_0045265c;
void FUN_003029a0(uint8_t*, uint32_t, uint32_t);
void FUN_00304038(uint8_t*, uint32_t, uint32_t);
extern "C" void YellowAuto_004525a0(uint8_t* arg0) __asm__("_ZN9NetAppLib11JoinFestaUI34JoinFestaAttractionSelectLowerView10SetPassiveEv");
extern "C" void YellowAuto_004525a0(uint8_t* arg0) {
uint8_t *pane;
uint32_t cursor;
uint32_t idx;
if (*(uint32_t *)(arg0 + 0xf0) == 0) return;
pane = *(uint8_t **)(*(uint32_t *)(arg0 + 0xf0) + 0x88);
if (pane == 0) return;
cursor = 0;
GetCursorData(pane, &cursor, (void *)0);
idx = GetPosPaneIndex(pane, cursor);
if (idx >= 8) return;
StartAnime(*(uint8_t **)(arg0 + 0x60), 0, DAT_0045265c[idx * 2 + 1], 1, 1);
FUN_003029a0(pane, idx, 0);
FUN_00304038(pane, idx, 0);
}
#endif
