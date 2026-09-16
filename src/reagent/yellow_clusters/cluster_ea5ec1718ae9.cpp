// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043AFC0
extern "C" uint32_t YellowAuto_0043afc0(uint8_t* arg0, int32_t arg1, int32_t arg2) __asm__("_ZN8Savedata14BattleInstSave11GetWinCountENS_14BattleTreeTypeENS_14BattleTreeRankE");
extern "C" uint32_t YellowAuto_0043afc0(uint8_t* arg0, int32_t arg1, int32_t arg2) {
if (arg1 == 0) return *(uint16_t*)(arg0 + arg2 * 2 + 0x4); if (arg1 == 1) return *(uint16_t*)(arg0 + arg2 * 2 + 0xC); if (arg1 == 3) return *(uint16_t*)(arg0 + arg2 * 2 + 0x14); return 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043B04C
extern "C" uint32_t YellowAuto_0043b04c(uint8_t* arg0, int32_t arg1, int32_t arg2) __asm__("_ZN8Savedata14BattleInstSave14GetMaxWinCountENS_14BattleTreeTypeENS_14BattleTreeRankE");
extern "C" uint32_t YellowAuto_0043b04c(uint8_t* arg0, int32_t arg1, int32_t arg2) {
if (arg1 == 0) return *(uint16_t*)(arg0 + arg2 * 2 + 0x8); if (arg1 == 1) return *(uint16_t*)(arg0 + arg2 * 2 + 0x10); if (arg1 == 3) return *(uint16_t*)(arg0 + arg2 * 2 + 0x18); return 0;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A6D70
extern "C" bool YellowAuto_004a6d70(const uint8_t* arg0) __asm__("_ZNK8Savedata14BattleInstSave22IsFullScoutTrainerDataEv");
extern "C" bool YellowAuto_004a6d70(const uint8_t* arg0) {
uint32_t i = 0;
while (i < 50 && *(const uint16_t*)(arg0 + 0x28 + i * 2) != 0xFFFF) i = i + 1;
return i == 50;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A6DD0
extern "C" bool YellowAuto_004a6dd0(const uint8_t* arg0, uint16_t arg1) __asm__("_ZNK8Savedata14BattleInstSave23IsExistScoutTrainerDataEt");
extern "C" bool YellowAuto_004a6dd0(const uint8_t* arg0, uint16_t arg1) {
if (arg1 == 0xFFFF) return false;
uint32_t i = 0;
while (i < 50 && *(const uint16_t*)(arg0 + 0x28 + i * 2) != arg1) i = i + 1;
return i != 50;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043B008
extern "C" uint32_t YellowAuto_0043b008(uint8_t* arg0) __asm__("_ZN8Savedata14BattleInstSave12GetBattleBgmEv");
extern "C" uint32_t YellowAuto_0043b008(uint8_t* arg0) {
return *(const uint32_t*)(arg0 + 0x1C);
}
#endif
