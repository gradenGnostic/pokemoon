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
