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
