// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0015C6CC
void* heap_new(uint32_t, void*);
void* ctor_void(void*);
void deserialize_void_p(void*, uint8_t*);
extern "C" void* YellowAuto_0015c6cc(uint8_t* arg0, int32_t arg1, void* arg2) __asm__("_ZN11ExtSavedata22BattleRecorderSaveData11GetMyStatusE13BTL_CLIENT_IDPN4gfl24heap11CtrHeapBaseE");
extern "C" void* YellowAuto_0015c6cc(uint8_t* arg0, int32_t arg1, void* arg2) {
if (*(arg0 + 12) == 0) return 0; uint8_t* base = *(uint8_t**)(arg0 + 8); int32_t off = arg1 * 193; if (*(base + off + 9908) == 0) return 0; void* obj = heap_new(208u, arg2); if (obj != 0) obj = ctor_void(obj); deserialize_void_p(obj, base + off + 9909); return obj;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0015D91C
void GFLassertStop(uint32_t, uint32_t, uint32_t);
extern "C" void* YellowAuto_0015d91c(uint8_t* arg0) __asm__("_ZN11ExtSavedata22BattleRecorderSaveData22GetBattleRecDataDirectEv");
extern "C" void* YellowAuto_0015d91c(uint8_t* arg0) {
if (*(uint32_t*)(arg0 + 8) == 0u) GFLassertStop(0u, 0u, 0u); return *(void**)(arg0 + 8);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00474FF8
void GFLassertStop(uint32_t, uint32_t, uint32_t);
extern "C" const void* YellowAuto_00474ff8(const uint8_t* arg0) __asm__("_ZNK11ExtSavedata22BattleRecorderSaveData22GetBattleRecUploadDataEv");
extern "C" const void* YellowAuto_00474ff8(const uint8_t* arg0) {
if (*(const uint32_t*)(arg0 + 8) == 0u) GFLassertStop(0u, 0u, 0u); return *(const void**)(arg0 + 8);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0015D5DC
void BATTLE_SETUP_Clear(void*);
void virtual_delete(void*);
extern "C" void YellowAuto_0015d5dc(uint8_t* arg0, uint8_t* arg1) __asm__("_ZN11ExtSavedata22BattleRecorderSaveData21ClearBattleSetupParamEP18BATTLE_SETUP_PARAM");
extern "C" void YellowAuto_0015d5dc(uint8_t* arg0, uint8_t* arg1) {
(void)arg0; BATTLE_SETUP_Clear(arg1); if (*(void**)(arg1 + 768) != 0) virtual_delete(*(void**)(arg1 + 768)); *(void**)(arg1 + 768) = 0; void* p0 = *(void**)(arg1 + 716); if (p0 != 0) virtual_delete(p0); *(void**)(arg1 + 716) = 0; void* p1 = *(void**)(arg1 + 720); if (p1 != 0) virtual_delete(p1); *(void**)(arg1 + 720) = 0; void* p2 = *(void**)(arg1 + 724); if (p2 != 0) virtual_delete(p2); *(void**)(arg1 + 724) = 0; void* p3 = *(void**)(arg1 + 728); if (p3 != 0) virtual_delete(p3); *(void**)(arg1 + 728) = 0; return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0015DFC4
void* GetNijiExtSaveSystem(void*);
bool WaitWriteFile(void*, uint8_t*);
uint8_t GetSaveLoadResult(uint8_t*, uint8_t, bool);
extern "C" uint8_t YellowAuto_0015dfc4(uint8_t* arg0, bool arg1) __asm__("_ZN11ExtSavedata22BattleRecorderSaveData9WaitAsyncEb");
extern "C" uint8_t YellowAuto_0015dfc4(uint8_t* arg0, bool arg1) {
void* xess; uint8_t r; if (*(arg0 + 24) == 0) return 9u; if (arg1 != false) goto L1; if (*(uint32_t*)(arg0 + 36) >= 30u) goto L1; *(uint32_t*)(arg0 + 36) = *(uint32_t*)(arg0 + 36) + 1u; return 11u; L1: xess = GetNijiExtSaveSystem(*(void**)(arg0 + 4)); r = 0u; if (WaitWriteFile(xess, &r) == false) return 11u; *(arg0 + 24) = 0; return GetSaveLoadResult(arg0, r, true);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0015D324
void* GetNijiExtSaveSystem(void*);
int32_t IsFileExists(void*, int32_t, int32_t);
uint8_t ReadFile(void*, int32_t, int32_t, void*, uint32_t);
uint8_t GetSaveLoadResult(uint8_t*, uint8_t, bool);
extern "C" uint8_t YellowAuto_0015d324(uint8_t* arg0) __asm__("_ZN11ExtSavedata22BattleRecorderSaveData15LiveCupLoadDataEv");
extern "C" uint8_t YellowAuto_0015d324(uint8_t* arg0) {
uint8_t ret = 4u; void* xess = GetNijiExtSaveSystem(*(void**)(arg0 + 4)); if (IsFileExists(xess, 0, 100) == 0) return ret; uint8_t rf = ReadFile(xess, 0, 100, *(void**)(arg0 + 8), 11200u); uint8_t g = GetSaveLoadResult(arg0, rf, false); ret = g; if (g == 0u) *(arg0 + 12) = 1u; return ret;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0015D390
void* GetNijiExtSaveSystem(uint32_t);
int32_t FUN_0015b250(void*, int32_t, int32_t);
uint32_t FUN_0015b2e0(void*, int32_t, int32_t, int32_t);
uint8_t FUN_0015d4c4(uint8_t*, uint32_t, int32_t);
uint8_t FUN_0015be48(void*, int32_t, int32_t, uint32_t, int32_t);
extern "C" uint8_t YellowAuto_0015d390(uint8_t* arg0) __asm__("_ZN11ExtSavedata22BattleRecorderSaveData15LiveCupSaveDataEv");
extern "C" uint8_t YellowAuto_0015d390(uint8_t* arg0) {
if (arg0[12] == 0) return 10;
void* v0 = GetNijiExtSaveSystem(*(uint32_t*)(arg0 + 4));
int32_t v1 = FUN_0015b250(v0, 0, 100);
if (v1 == 0) {
uint32_t v2 = FUN_0015b2e0(v0, 0, 100, 11200);
uint8_t v3 = FUN_0015d4c4(arg0, v2, 0);
if (v3 > 1) return v3;
}
uint8_t v4 = FUN_0015be48(v0, 0, 100, *(uint32_t*)(arg0 + 8), 11200);
return FUN_0015d4c4(arg0, v4, 1);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0015D9CC
void* GflHeapAllocMemoryBlock(void*, uint32_t);
void __aeabi_memcpy4(void*, void*, uint32_t);
void* GetNijiExtSaveSystem(uint32_t);
int32_t FUN_0015b250(void*, int32_t, int32_t);
uint8_t FUN_0015bdec(void*, int32_t, int32_t, uint32_t, int32_t);
uint8_t FUN_0015d4c4(uint8_t*, uint32_t, int32_t);
uint8_t FUN_0015b348(void*, int32_t, int32_t);
void GflHeapFreeMemoryBlock(void*);
extern "C" uint32_t YellowAuto_0015d9cc(uint8_t* arg0, void* arg1) __asm__("_ZN11ExtSavedata22BattleRecorderSaveData28CheckLiveCupSaveDataValidityEPN4gfl24heap11CtrHeapBaseE");
extern "C" uint32_t YellowAuto_0015d9cc(uint8_t* arg0, void* arg1) {
void* v0 = arg1;
if (v0 == (void*)0) v0 = (void*)(*(uint32_t*)arg0);
uint32_t v1 = 1;
void* v2 = GflHeapAllocMemoryBlock(v0, 11200);
__aeabi_memcpy4(v2, (void*)(*(uint32_t*)(arg0 + 8)), 11200);
void* v3 = GetNijiExtSaveSystem(*(uint32_t*)(arg0 + 4));
int32_t v4 = FUN_0015b250(v3, 0, 100);
if (v4 != 0) {
uint8_t v5 = FUN_0015bdec(v3, 0, 100, *(uint32_t*)(arg0 + 8), 11200);
uint8_t v6 = FUN_0015d4c4(arg0, v5, 0);
if (v6 == 0) arg0[12] = 1;
else if (v6 == 6) {
v1 = 0;
void* v7 = GetNijiExtSaveSystem(*(uint32_t*)(arg0 + 4));
uint8_t v8 = FUN_0015b348(v7, 0, 100);
FUN_0015d4c4(arg0, v8, 0);
}
}
__aeabi_memcpy4((void*)(*(uint32_t*)(arg0 + 8)), v2, 11200);
*(uint32_t*)(arg0 + 16) = 4294967295U;
GflHeapFreeMemoryBlock(v2);
return v1;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0015C740
void* func_00105500(uint32_t, void*);
void* func_0031f2d4(void*, void*);
void func_0031ecac(void*, const uint8_t*);
extern "C" void* YellowAuto_0015c740(uint8_t* arg0, int16_t arg1, void* arg2) __asm__("_ZN11ExtSavedata22BattleRecorderSaveData12GetPokePartyE13BTL_CLIENT_IDPN4gfl24heap11CtrHeapBaseE");
extern "C" void* YellowAuto_0015c740(uint8_t* arg0, int16_t arg1, void* arg2) {
if (arg0[0xC] == 0) return (void*)0;
int32_t s = (int32_t)(int16_t)(*(uint16_t*)0x15C7B8);
int32_t o = (int32_t)arg1 * s;
uint8_t* b = (uint8_t*)(*(uint32_t*)(arg0 + 8));
if (b[o + 0xE40] == 0) return (void*)0;
void* p = func_00105500(0x1Cu, arg2);
void* q = (void*)0;
if (p != (void*)0) q = func_0031f2d4(p, arg2);
func_0031ecac(q, (const uint8_t*)(b + o + 0xE41));
return q;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0015DAAC
void* heap_alloc(void*, uint32_t);
void memcpy4(void*, void*, uint32_t);
void heap_free(void*);
void* get_ext_save(void*);
uint32_t ext_slot_valid(void*, uint32_t, int32_t);
uint8_t ext_slot_read(void*, uint32_t, int32_t, void*, uint32_t);
uint8_t rec_validate(uint8_t*, uint32_t, uint32_t);
uint8_t ext_slot_flag(void*, uint32_t, int32_t);
extern "C" uint32_t YellowAuto_0015daac(uint8_t* arg0, void* arg1, uint8_t* arg2, int32_t arg3, bool arg4) __asm__("_ZN11ExtSavedata22BattleRecorderSaveData32CheckAllSaveDataValidityContinueEPN4gfl24heap11CtrHeapBaseEPbib");
extern "C" uint32_t YellowAuto_0015daac(uint8_t* arg0, void* arg1, uint8_t* arg2, int32_t arg3, bool arg4) {
if (arg4) {
if (arg3 == 0) arg3 = 1;
arg0[25] = 1;
*(uint32_t*)(arg0 + 28) = (uint32_t)arg3;
*(uint32_t*)(arg0 + 32) = 0;
arg0[26] = 1;
}
if (!arg4 && arg0[25] == 0) return 0;
if (arg1 == (void*)0) arg1 = (void*)(*(uint32_t*)(arg0 + 0));
uint32_t _ret = 1;
void* _tmp = heap_alloc(arg1, 11200);
memcpy4(_tmp, (void*)(*(uint32_t*)(arg0 + 8)), 11200);
int32_t _cur = (int32_t)(*(uint32_t*)(arg0 + 32));
int32_t _cnt = (int32_t)(*(uint32_t*)(arg0 + 28));
int32_t _end = _cur + _cnt;
while (_cur < _end) {
void* _sys = get_ext_save((void*)(*(uint32_t*)(arg0 + 4)));
uint32_t _v = ext_slot_valid(_sys, 0, _cur);
if (_v != 0) {
uint8_t _b = ext_slot_read(_sys, 0, _cur, (void*)(*(uint32_t*)(arg0 + 8)), 11200);
uint8_t _c = rec_validate(arg0, _b, 0);
if (_c == 0) {
*(uint32_t*)(arg0 + 16) = (uint32_t)_cur;
arg0[12] = 1;
} else {
if (_c == 6) {
arg0[26] = 0;
*(uint32_t*)(arg0 + 20) = 4294967295;
void* _sys2 = get_ext_save((void*)(*(uint32_t*)(arg0 + 4)));
uint8_t _b2 = ext_slot_flag(_sys2, 0, _cur);
rec_validate(arg0, _b2, 0);
}
}
}
if (_cur + 1 > 99) {
_ret = 0;
arg0[25] = 0;
break;
}
_cur = _cur + 1;
}
*(uint32_t*)(arg0 + 32) = (uint32_t)_cur;
memcpy4((void*)(*(uint32_t*)(arg0 + 8)), _tmp, 11200);
*(uint32_t*)(arg0 + 16) = 4294967295;
heap_free(_tmp);
if (arg2 != (uint8_t*)0) *arg2 = arg0[26];
return _ret;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0015DCCC
void* get_ext_save(void*);
uint8_t sub_15de84(uint8_t*, int32_t, bool);
uint32_t ext_slot_valid(void*, uint32_t, int32_t);
uint32_t sub_15b2e0(void*, uint32_t, int32_t, uint32_t);
uint8_t rec_validate(uint8_t*, uint32_t, uint32_t);
uint32_t sub_15be48(void*, uint32_t, int32_t, void*, uint32_t);
int32_t sub_15b448(void*, void*, uint32_t, int32_t, void*, uint32_t);
extern "C" uint8_t YellowAuto_0015dccc(uint8_t* arg0, bool arg1) __asm__("_ZN11ExtSavedata22BattleRecorderSaveData8SaveDataEb");
extern "C" uint8_t YellowAuto_0015dccc(uint8_t* arg0, bool arg1) {
if (arg0[12] == 0) return 10;
void* _sys = get_ext_save((void*)(*(uint32_t*)(arg0 + 4)));
int32_t _slot = (int32_t)(*(uint32_t*)(arg0 + 16));
if (_slot != -1) return sub_15de84(arg0, _slot, arg1);
int32_t _i = 0;
while (ext_slot_valid(_sys, 0, _i) != 0) {
_i = _i + 1;
if (_i > 99) return 2;
}
if (arg0[12] == 0) return 10;
if (arg1 == 0 && arg0[24] != 0) return 8;
_sys = get_ext_save((void*)(*(uint32_t*)(arg0 + 4)));
if (_i > 99) return 2;
if (ext_slot_valid(_sys, 0, _i) != 0) {
*(uint32_t*)(arg0 + 20) = 4294967295;
} else {
uint32_t _c = sub_15b2e0(_sys, 0, _i, 11200);
uint8_t _r = rec_validate(arg0, _c, 0);
*(uint32_t*)(arg0 + 20) = 4294967295;
if (_r > 1) return _r;
}
if (arg1 == 0) {
uint32_t _b = sub_15be48(_sys, 0, _i, (void*)(*(uint32_t*)(arg0 + 8)), 11200);
uint8_t _r2 = rec_validate(arg0, _b, 1);
arg0[24] = 0;
if (_r2 < 2) {
*(uint32_t*)(arg0 + 16) = (uint32_t)_i;
return _r2;
}
*(uint32_t*)(arg0 + 16) = 4294967295;
return _r2;
} else {
int32_t _q = sub_15b448(_sys, (void*)(*(uint32_t*)(arg0 + 0)), 0, _i, (void*)(*(uint32_t*)(arg0 + 8)), 11200);
uint8_t _ret = 10;
if (_q != 0) {
*(uint32_t*)(arg0 + 36) = 0;
arg0[24] = 1;
_ret = 11;
}
*(uint32_t*)(arg0 + 16) = 4294967295;
return _ret;
}
}
#endif
