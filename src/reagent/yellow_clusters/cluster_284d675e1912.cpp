// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00459C98
uint32_t GetBattleRule(uint8_t* arg0);
extern "C" uint32_t YellowAuto_00459c98(uint8_t* arg0) __asm__("_ZN9NetAppLib2UI18RegulationDrawInfo22GetBattleNameMessageIDEv");
extern "C" uint32_t YellowAuto_00459c98(uint8_t* arg0) {
return GetBattleRule(arg0 + 8) == 2 ? 0x35 : 0x34;
}
#endif
