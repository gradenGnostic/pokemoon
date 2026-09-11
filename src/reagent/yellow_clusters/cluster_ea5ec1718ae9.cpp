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
