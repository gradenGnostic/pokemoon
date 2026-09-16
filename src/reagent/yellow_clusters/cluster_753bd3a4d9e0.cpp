// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00158E08
uint32_t GetBattleCategory(uint8_t*);
extern "C" uint32_t YellowAuto_00158e08(uint8_t* arg0) __asm__("_ZN10BattleInst10BattleInst18GetSelectRankRoyalEv");
extern "C" uint32_t YellowAuto_00158e08(uint8_t* arg0) {
uint32_t v = GetBattleCategory(arg0 + 0x5d0); if (v == 7) return 0; if (v == 8) return 1; if (v == 9) return 2; if (v == 10) return 3; return 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00157728
uint32_t GetBattleCategory(uint8_t*);
bool IsMaxWinCountRoyal(uint8_t*);
extern "C" bool YellowAuto_00157728(uint8_t* arg0) __asm__("_ZN10BattleInst10BattleInst11IsBossRoyalEv");
extern "C" bool YellowAuto_00157728(uint8_t* arg0) {
uint32_t v = GetBattleCategory(arg0 + 0x5d0); int32_t r = 0; if (v == 7) r = 0; else if (v == 8) r = 1; else if (v == 9) r = 2; else if (v == 10) r = 3; else r = 0; uint8_t* v0 = *(uint8_t**)(arg0 + 0x1318); uint8_t* v1 = *(uint8_t**)(v0 + 0x24); uint8_t* v2 = *(uint8_t**)(v1 + 0x4); bool b = IsMaxWinCountRoyal(v2 + 0x690cc); return (r == 3 && b);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00159384
extern "C" bool YellowAuto_00159384(uint8_t* arg0) __asm__("_ZN10BattleInst10BattleInst19SetPokeSelectResultEv");
extern "C" bool YellowAuto_00159384(uint8_t* arg0) {
if (*(arg0 + 0x6eb) != 4) return false; *(uint32_t*)(arg0 + 0x50) = 0; for (int32_t i = 0; i < 6; ++i) { int32_t v = *(int8_t*)(arg0 + 0x6f2 + i); if (v >= 0) { uint32_t n = *(uint32_t*)(arg0 + 0x50); *(int32_t*)(arg0 + 0x38 + n * 4) = v; *(uint32_t*)(arg0 + 0x50) = n + 1; } } return true;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00157AEC
extern "C" int32_t YellowAuto_00157aec(uint8_t* arg0, int32_t arg1) __asm__("_ZN10BattleInst10BattleInst12GetTrainerIDEi");
extern "C" int32_t YellowAuto_00157aec(uint8_t* arg0, int32_t arg1) {
return *(int32_t*)(arg0 + arg1 * 4 + 4);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00159E70
void RegisterTrTypeName(void*, uint16_t, uint16_t);
extern "C" void YellowAuto_00159e70(uint8_t* arg0, uint16_t arg1, uint16_t arg2) __asm__("_ZN10BattleInst10BattleInst40WordSetBinstTrainerTypeNameFromTrainerNoEtt");
extern "C" void YellowAuto_00159e70(uint8_t* arg0, uint16_t arg1, uint16_t arg2) {
uint8_t* v0 = *(uint8_t**)(arg0 + 0x1318); uint8_t* v1 = *(uint8_t**)(v0 + 0x34); uint8_t* v2 = *(uint8_t**)(v1 + 0x20); void* ws = *(void**)(v2 + 0x0); uint16_t tt = *(uint16_t*)(*(uint8_t**)(arg0 + arg2 * 4 + 0xc)); RegisterTrTypeName(ws, arg1, tt); return;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0015851C
void* operator_new(uint32_t, void*);
uint32_t GetMessageArcId(uint32_t);
void* MsgData(void*, uint32_t, uint32_t, void*, uint32_t);
extern "C" void YellowAuto_0015851c(uint8_t* arg0) __asm__("_ZN10BattleInst10BattleInst14CreateForRoyalEv");
extern "C" void YellowAuto_0015851c(uint8_t* arg0) {
if (*(uint32_t*)(arg0 + 0x1330) == 0) {
void* v0 = *(void**)(arg0 + 0x1310);
void* v1 = operator_new(0x30, v0);
void* v2 = (void*)0;
if (v1 != (void*)0) {
uint32_t v3 = GetMessageArcId(10);
v2 = MsgData(v1, v3, 0x56, *(void**)(arg0 + 0x1310), 1);
}
*(void**)(arg0 + 0x1330) = v2;
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

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00158348
void FUN_00158648(uint8_t*, uint32_t, uint8_t*, void*);
int32_t GetBattleRule(uint8_t*, uint32_t);
int32_t GetWinCount(uint8_t*, int32_t, uint32_t);
extern "C" void YellowAuto_00158348(uint8_t* arg0) __asm__("_ZN10BattleInst10BattleInst13SetupSendDataEv");
extern "C" void YellowAuto_00158348(uint8_t* arg0) {
FUN_00158648(arg0, 0, arg0 + 0x38, reinterpret_cast<void*>(*(uint32_t*)(arg0 + 0x12E0)));
*(uint8_t*)(arg0 + 0x12E4) = static_cast<uint8_t>(*(int8_t*)(arg0 + 0x5AC));
uint32_t v0 = *(uint32_t*)(*(uint32_t*)(*(uint32_t*)(arg0 + 0x1318) + 0x24) + 0x4);
int32_t r = GetBattleRule(arg0 + 0x5D0, v0);
int32_t m;
if (r == 0) m = 0; else if (r == 1) m = 1; else if (r == 3) m = 3; else m = 0;
uint32_t nz = (*(int8_t*)(arg0 + 0x5AC) != 0) ? 1u : 0u;
int32_t w = GetWinCount(reinterpret_cast<uint8_t*>(v0 + 0x690CC), m, nz);
*(int32_t*)(arg0 + 0x12E8) = w;
if (*(uint8_t*)(arg0 + 0x5AC) == 0 && w > 0x13) *(int32_t*)(arg0 + 0x12E8) = 0;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0015859C
void TrainerTypeData_ctor(void* arg0);
void* BattleInst_GetAuxData(void* arg0);
void TrainerTypeData_LoadData(void* arg0, void* arg1, uint32_t arg2);
extern "C" uint16_t YellowAuto_0015859c(uint8_t* arg0, int32_t arg1) __asm__("_ZN10BattleInst10BattleInst14GetCharacterIDEi");
extern "C" uint16_t YellowAuto_0015859c(uint8_t* arg0, int32_t arg1) {
uint8_t _b[28];
TrainerTypeData_ctor(_b);
uint16_t _v = *(uint16_t*)(*(uint8_t**)(arg0 + arg1 * 4 + 12));
uint32_t _id = (uint32_t)(_v & 255u);
void* _aux = BattleInst_GetAuxData((void*)arg0);
TrainerTypeData_LoadData(_b, _aux, _id);
return *(uint16_t*)(_b + 12);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x001597F4
void* GetAsyncFileManager(void* arg0);
uint32_t GetTrainerFileId();
int32_t TrainerData_GetSize(void* arg0, void* arg1, uint32_t arg2, uint32_t arg3);
void FreeMemoryBlock(void* arg0);
void* AllocMemoryAlign(void* arg0, int32_t arg1, uint32_t arg2);
void LoadTrainerData(void* arg0, void* arg1, uint32_t arg2, uint32_t arg3, void* arg4, int32_t arg5);
uint32_t GetBattleRule(uint8_t* arg0, uint32_t arg1);
uint32_t GetWinCount(uint8_t* arg0, uint32_t arg1, uint32_t arg2);
extern "C" void YellowAuto_001597f4(uint8_t* arg0, int32_t arg1, uint32_t arg2) __asm__("_ZN10BattleInst10BattleInst23MakeTrainerDataWithBossEii");
extern "C" void YellowAuto_001597f4(uint8_t* arg0, int32_t arg1, uint32_t arg2) {
*(uint32_t*)(arg0 + arg1 * 4 + 4) = arg2;
uint8_t* _mgr = *(uint8_t**)(arg0 + 0x1318);
void* _async = GetAsyncFileManager(_mgr);
uint8_t* _heap = *(uint8_t**)(arg0 + 0x1310);
uint32_t _fid = GetTrainerFileId();
int32_t _sz = TrainerData_GetSize(_heap, _async, _fid, arg2);
if (_sz != 0) {
uint8_t* _slot = arg0 + arg1 * 4;
void* _old = *(void**)(_slot + 12);
if (_old != (void*)0) {
FreeMemoryBlock(_old);
*(void**)(_slot + 12) = (void*)0;
}
void* _new = AllocMemoryAlign(_heap, _sz, 4294967292u);
*(void**)(_slot + 12) = _new;
uint8_t* _mgr2 = *(uint8_t**)(arg0 + 0x1318);
void* _async2 = GetAsyncFileManager(_mgr2);
LoadTrainerData(_heap, _async2, _fid, arg2, _new, _sz);
}
arg0[1] = 0;
uint32_t _wc;
if (arg0[0x5b4] != 0) {
_wc = *(uint32_t*)(arg0 + 0x5c0);
} else {
uint32_t _f = (arg0[0x5ac] != 0) ? 1u : 0u;
uint32_t _r = GetBattleRule(arg0 + 0x5d0, 0u);
uint32_t _nr = 0u;
if (_r == 0u) { _nr = 0u; } else if (_r == 1u) { _nr = 1u; } else if (_r == 3u) { _nr = 3u; } else { _nr = 0u; }
uint8_t* _a = *(uint8_t**)(arg0 + 0x1318);
uint8_t* _b2 = *(uint8_t**)(_a + 0x24);
uint8_t* _save = *(uint8_t**)(_b2 + 4) + 0x690cc;
_wc = GetWinCount(_save, _nr, _f);
}
if (arg0[0x5ac] == 0) {
if (_wc != 19u) { return; }
} else {
if (_wc != 49u) { return; }
}
arg0[1] = 1;
return;
}
#endif
