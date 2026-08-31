// Autonomous Qwen reconstruction approved by GPT-5.4 mini.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00438298
bool IsGimBonusTime(const uint8_t* arg0);
extern "C" bool YellowAuto_00438298(const uint8_t* arg0) __asm__("_ZN8Savedata10ResortSave14IsGimBonusTimeEv");
extern "C" bool YellowAuto_00438298(const uint8_t* arg0) {
return arg0[0x56ef] != 0 || arg0[0x56f0] != 0 || arg0[0x56f1] != 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00438AD8
bool IsHotSpaBonusTime(const uint8_t* arg0);
extern "C" bool YellowAuto_00438ad8(const uint8_t* arg0) __asm__("_ZN8Savedata10ResortSave17IsHotSpaBonusTimeEv");
extern "C" bool YellowAuto_00438ad8(const uint8_t* arg0) {
return arg0[0x5701] != 0 || arg0[0x5702] != 0 || arg0[0x5703] != 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00438EF8
bool IsAdventureBonusTime(const uint8_t* arg0);
extern "C" bool YellowAuto_00438ef8(const uint8_t* arg0) __asm__("_ZN8Savedata10ResortSave20IsAdventureBonusTimeEv");
extern "C" bool YellowAuto_00438ef8(const uint8_t* arg0) {
return arg0[0x56ec] != 0 || arg0[0x56ed] != 0 || arg0[0x56ee] != 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00438F20
bool IsFarmFertilizerTime(const uint8_t* arg0);
extern "C" bool YellowAuto_00438f20(const uint8_t* arg0) __asm__("_ZN8Savedata10ResortSave20IsFarmFertilizerTimeEv");
extern "C" bool YellowAuto_00438f20(const uint8_t* arg0) {
return arg0[0x56e5] != 0 || arg0[0x56e6] != 0 || arg0[0x56e7] != 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043921C
bool IsWildPokemonServiceTime(const uint8_t* arg0);
extern "C" bool YellowAuto_0043921c(const uint8_t* arg0) __asm__("_ZN8Savedata10ResortSave24IsWildPokemonServiceTimeEv");
extern "C" bool YellowAuto_0043921c(const uint8_t* arg0) {
return arg0[0x5680] != 0 || arg0[0x5681] != 0 || arg0[0x5682] != 0;
}
#endif
