// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0041EFA4
uint8_t* Helper0();
extern "C" void YellowAuto_0041efa4(bool arg0) __asm__("_ZN8NetEvent10BattleSpot15BattleSpotEvent18SetSessionLeftFlagEb");
extern "C" void YellowAuto_0041efa4(bool arg0) {
Helper0()[1] = arg0;
}
#endif
