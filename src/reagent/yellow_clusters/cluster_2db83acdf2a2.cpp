// Autonomous Qwen reconstruction approved by GPT-5.4 mini.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043B0A8
extern "C" void YellowAuto_0043b0a8(uint8_t* arg0) __asm__("_ZN8Savedata14BattleInstSave14ResetBattleBgmEv");
extern "C" void YellowAuto_0043b0a8(uint8_t* arg0) {
*(uint32_t*)(arg0 + 0x1c) = 0xffffffff;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043B0CC
extern "C" uint16_t YellowAuto_0043b0cc(uint8_t* arg0) __asm__("_ZN8Savedata14BattleInstSave16GetPrizeWinCountEv");
extern "C" uint16_t YellowAuto_0043b0cc(uint8_t* arg0) {
return *(uint16_t*)(arg0 + 0x156);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A6CD8
extern "C" uint16_t YellowAuto_004a6cd8(const uint8_t* arg0) __asm__("_ZNK8Savedata14BattleInstSave16GetWinCountRoyalEv");
extern "C" uint16_t YellowAuto_004a6cd8(const uint8_t* arg0) {
return *(uint16_t*)(arg0 + 0x154);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043B100
extern "C" void YellowAuto_0043b100(uint8_t* arg0) __asm__("_ZN8Savedata14BattleInstSave18ClearWinCountRoyalEv");
extern "C" void YellowAuto_0043b100(uint8_t* arg0) {
*(uint16_t*)(arg0 + 0x154) = 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043B110
extern "C" void YellowAuto_0043b110(uint8_t* arg0) __asm__("_ZN8Savedata14BattleInstSave18ResetPrizeWinCountEv");
extern "C" void YellowAuto_0043b110(uint8_t* arg0) {
*(uint16_t*)(arg0 + 0x156) = 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043B280
extern "C" void YellowAuto_0043b280(uint8_t* arg0) __asm__("_ZN8Savedata14BattleInstSave22ResetBattleTypeAndRankEv");
extern "C" void YellowAuto_0043b280(uint8_t* arg0) {
arg0[0x20] = 0x4;
arg0[0x21] = 0x0;
}
#endif
