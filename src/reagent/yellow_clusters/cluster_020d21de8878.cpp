// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0041EF84
extern bool g_41EF84;
extern "C" bool YellowAuto_0041ef84() __asm__("_ZN8NetEvent10BattleSpot15BattleSpotEvent17IsEnterBattleSpotEv");
extern "C" bool YellowAuto_0041ef84() {
return g_41EF84;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0041EF94
extern bool g_41EF94[2];
extern "C" bool YellowAuto_0041ef94() __asm__("_ZN8NetEvent10BattleSpot15BattleSpotEvent17IsSessionLeftFlagEv");
extern "C" bool YellowAuto_0041ef94() {
return g_41EF94[1];
}
#endif
