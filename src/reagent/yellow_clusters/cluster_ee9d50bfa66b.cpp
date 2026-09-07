// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0015D5AC
uint8_t* GetNijiExtSaveSystem(uint8_t*);
uint32_t FUN_0015b348(uint8_t*, uint32_t, uint32_t);
uint8_t FUN_0015d4c4(uint8_t*, uint32_t, uint32_t);
extern "C" uint8_t YellowAuto_0015d5ac(uint8_t* arg0) __asm__("_ZN11ExtSavedata22BattleRecorderSaveData17LiveCupDeleteDataEv");
extern "C" uint8_t YellowAuto_0015d5ac(uint8_t* arg0) {
return FUN_0015d4c4(arg0, FUN_0015b348(GetNijiExtSaveSystem(*(uint8_t**)(arg0 + 4)), 0, 100), 0);
}
#endif
