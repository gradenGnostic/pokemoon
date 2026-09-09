// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0036CE1C
extern const uint16_t* DAT_0036ce84;
extern "C" bool YellowAuto_0036ce1c(uint16_t arg0) __asm__("_ZN4item14ITEM_CheckNutsEt");
extern "C" bool YellowAuto_0036ce1c(uint16_t arg0) {
const uint16_t* p = DAT_0036ce84; if (p[0] == arg0) return true; for (uint32_t i = 1; i < 0x43; i += 2) if (p[i] == arg0 || p[i + 1] == arg0) return true; return false;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0036D020
extern const uint16_t* DAT_0036d068;
extern "C" bool YellowAuto_0036d020(uint16_t arg0) __asm__("_ZN4item15ITEM_CheckBeadsEt");
extern "C" bool YellowAuto_0036d020(uint16_t arg0) {
const uint16_t* p = DAT_0036d068; if (p[0] == arg0) return true; for (uint32_t i = 1; i < 0x1d; i += 2) if (p[i] == arg0 || p[i + 1] == arg0) return true; return false;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0036D06C
extern const uint16_t* DAT_0036d0a8;
extern "C" bool YellowAuto_0036d06c(uint16_t arg0) __asm__("_ZN4item15ITEM_CheckJewelEt");
extern "C" bool YellowAuto_0036d06c(uint16_t arg0) {
const uint16_t* p = DAT_0036d0a8; for (uint32_t i = 0; i < 0x12; i += 2) if (p[i] == arg0 || p[i + 1] == arg0) return true; return false;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0036D0AC
extern const uint16_t* DAT_0036d0f4;
extern "C" bool YellowAuto_0036d0ac(uint16_t arg0) __asm__("_ZN4item15ITEM_CheckPieceEt");
extern "C" bool YellowAuto_0036d0ac(uint16_t arg0) {
const uint16_t* p = DAT_0036d0f4; if (p[0] == arg0) return true; for (uint32_t i = 1; i < 0x1d; i += 2) if (p[i] == arg0 || p[i + 1] == arg0) return true; return false;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0036D190
extern const uint16_t* DAT_0036d1d8;
extern "C" bool YellowAuto_0036d190(uint16_t arg0) __asm__("_ZN4item19ITEM_CheckMegaStoneEt");
extern "C" bool YellowAuto_0036d190(uint16_t arg0) {
const uint16_t* p = DAT_0036d1d8; if (p[0] == arg0) return true; for (uint32_t i = 1; i < 0x2f; i += 2) if (p[i] == arg0 || p[i + 1] == arg0) return true; return false;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0036D638
uint32_t ITEM_UTIL_GetHealingItemType(const void*);
uint32_t GetParam(const void*, uint32_t);
extern "C" bool YellowAuto_0036d638(const void* arg0) __asm__("_ZN4item27ITEM_UTIL_IsNeedSelectSkillEPKNS_9ITEM_DATAE");
extern "C" bool YellowAuto_0036d638(const void* arg0) {
const uint32_t v = ITEM_UTIL_GetHealingItemType(arg0); if ((v != 0x19 && v != 0x1a) && (v != 0x1b || GetParam(arg0, 0x29) == 0)) return false; return true;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0036CE88
const uint16_t* Tbl_36CE88();
extern "C" uint32_t YellowAuto_0036ce88(uint32_t arg0) __asm__("_ZN4item14ITEM_GetBallIDEt");
extern "C" uint32_t YellowAuto_0036ce88(uint32_t arg0) {
const uint16_t* t = Tbl_36CE88();
uint32_t i = 0;
for (;;) {
if (t[i] == arg0) return (i + 1u) & 255u;
if (t[i + 1u] == arg0) return (i + 2u) & 255u;
i += 2u;
if (25u < i) return 0;
}
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0036CF00
const uint16_t* Tbl_36CF00();
extern "C" uint32_t YellowAuto_0036cf00(uint32_t arg0) __asm__("_ZN4item14ITEM_GetNutsNoEt");
extern "C" uint32_t YellowAuto_0036cf00(uint32_t arg0) {
const uint16_t* t = Tbl_36CF00();
if (t[0] == arg0) return 0;
uint32_t i = 1u;
for (;;) {
if (t[i] == arg0) return i & 255u;
if (t[i + 1u] == arg0) return (i + 1u) & 255u;
i += 2u;
if (66u < i) return 255u;
}
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0036D328
const uint16_t* TblA_36D328();
const uint16_t* TblB_36D328();
extern "C" uint32_t YellowAuto_0036d328(uint32_t arg0) __asm__("_ZN4item21ITEM_GetWazaMashineNoEt");
extern "C" uint32_t YellowAuto_0036d328(uint32_t arg0) {
const uint16_t* a = TblA_36D328();
uint32_t i = 0;
for (;;) {
if (a[i] == arg0) return i;
if (a[i + 1u] == arg0) return i + 1u;
i += 2u;
if (100u <= i) break;
}
const uint16_t* b = TblB_36D328();
uint32_t j = 0;
if (b[0] != arg0) {
j = 1u;
for (;;) {
if (b[j] == arg0) break;
if (b[j + 1u] == arg0) {
j += 1u;
break;
}
j += 2u;
if (6u < j) return 4294967295u;
}
}
return j + 100u;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0036D274
const uint16_t* TblA_36D274();
const uint16_t* TblB_36D274();
extern "C" uint32_t YellowAuto_0036d274(uint32_t arg0) __asm__("_ZN4item21ITEM_CheckWazaMachineEt");
extern "C" uint32_t YellowAuto_0036d274(uint32_t arg0) {
const uint16_t* a = TblA_36D274();
uint32_t i = 0;
for (;;) {
if (a[i] == arg0) return 1u;
if (a[i + 1u] == arg0) return 1u;
i += 2u;
if (100u <= i) break;
}
const uint16_t* b = TblB_36D274();
uint32_t j = 0;
if (b[0] != arg0) {
j = 1u;
for (;;) {
if (b[j] == arg0) break;
if (b[j + 1u] == arg0) break;
j += 2u;
if (6u < j) return 0;
}
}
return 1u;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0036CF60
const uint16_t* ItemA_36CF60();
const uint16_t* MoveA_36CF60();
const uint16_t* ItemB_36CF60();
const uint16_t* MoveB_36CF60();
extern "C" uint16_t YellowAuto_0036cf60(uint32_t arg0) __asm__("_ZN4item14ITEM_GetWazaNoEt");
extern "C" uint16_t YellowAuto_0036cf60(uint32_t arg0) {
const uint16_t* itemA = ItemA_36CF60();
const uint16_t* moveA = MoveA_36CF60();
uint32_t i = 0;
for (;;) {
if (itemA[i] == arg0) return moveA[i];
if (itemA[i + 1u] == arg0) return moveA[i + 1u];
i += 2u;
if (100u <= i) break;
}
const uint16_t* itemB = ItemB_36CF60();
const uint16_t* moveB = MoveB_36CF60();
if (itemB[0] == arg0) return moveB[0];
uint32_t j = 1u;
for (;;) {
if (itemB[j] == arg0) return moveB[j];
if (itemB[j + 1u] == arg0) return moveB[j + 1u];
j += 2u;
if (6u < j) return 0;
}
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0036D3DC
extern uint32_t g_btlFlag;
extern uint8_t* g_btlInfo;
extern void* g_asyncMgr;
void AddArcFileOpenReq(void*, void*);
void AddArcFileLoadDataReq(void*, void*);
extern "C" void YellowAuto_0036d3dc(void* arg0, void* arg1) __asm__("_ZN4item22AsyncLoadBtlPocketDataEPN4gfl24heap11CtrHeapBaseES3_");
extern "C" void YellowAuto_0036d3dc(void* arg0, void* arg1) {
if (g_btlFlag != 0) return;
uint32_t* vtbl = *(uint32_t**)arg0;
uint32_t heapRes = ((uint32_t(*)(void*))vtbl[13])(arg0);
uint8_t req0[44] = {0};
*(uint32_t*)(req0 + 0) = *(uint32_t*)(g_btlInfo + 68);
*(uint32_t*)(req0 + 4) = 4294967295u;
*(uint8_t*)(req0 + 8) = 16;
*(uint32_t*)(req0 + 12) = heapRes;
*(uint8_t*)(req0 + 16) = 255;
*(void**)(req0 + 20) = arg1;
*(uint8_t*)(req0 + 24) = 1;
*(uint8_t*)(req0 + 25) = 0;
*(uint8_t*)(req0 + 26) = 1;
*(uint32_t*)(req0 + 28) = 0;
*(uint32_t*)(req0 + 32) = 0;
*(uint32_t*)(req0 + 36) = 0;
*(uint32_t*)(req0 + 40) = 0;
AddArcFileOpenReq(g_asyncMgr, req0);
uint8_t req1[60] = {0};
*(uint32_t*)(req1 + 0) = *(uint32_t*)(g_btlInfo + 68);
*(uint32_t*)(req1 + 4) = 4294967295u;
*(uint32_t*)(req1 + 8) = *(uint32_t*)(g_btlInfo + 72);
*(uint8_t*)(req1 + 12) = 255;
*(uint8_t*)(req1 + 13) = 16;
*(uint32_t**)(req1 + 16) = &g_btlFlag;
*(uint32_t*)(req1 + 20) = 0;
*(uint32_t*)(req1 + 24) = 0;
*(void**)(req1 + 28) = arg0;
*(uint32_t*)(req1 + 32) = 4;
*(void**)(req1 + 36) = arg1;
*(uint32_t*)(req1 + 40) = 0;
*(uint8_t*)(req1 + 44) = 0;
*(uint32_t*)(req1 + 48) = 0;
*(uint32_t*)(req1 + 52) = 0;
*(uint32_t*)(req1 + 56) = 0;
AddArcFileLoadDataReq(g_asyncMgr, req1);
}
#endif
