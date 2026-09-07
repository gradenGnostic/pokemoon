// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00159E9C
extern "C" bool YellowAuto_00159e9c(const uint8_t* arg0) __asm__("_ZN10BattleInst10BattleInst5IsWinEv");
extern "C" bool YellowAuto_00159e9c(const uint8_t* arg0) {
return arg0[0x440] == 1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00159368
extern "C" int32_t YellowAuto_00159368(const uint8_t* arg0, int32_t arg1) __asm__("_ZN10BattleInst10BattleInst19GetBattleStartMsgIdEi");
extern "C" int32_t YellowAuto_00159368(const uint8_t* arg0, int32_t arg1) {
return (int32_t)(*(const uint32_t*)(arg0 + (arg1 > 0 ? 1 : 0) * 4 + 4)) * 5;
}
#endif
