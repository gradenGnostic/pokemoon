// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043908C
extern "C" bool YellowAuto_0043908c(uint8_t* arg0) __asm__("_ZN8Savedata10ResortSave21GimBonusTimeDownCountEv");
extern "C" bool YellowAuto_0043908c(uint8_t* arg0) {
if (*(arg0 + 0x56F0) != 0) {
  *(arg0 + 0x56F0) = (uint8_t)(*(arg0 + 0x56F0) - 1);
  return true;
}
if (*(arg0 + 0x56F1) == 0) {
  return false;
}
*(arg0 + 0x56F1) = (uint8_t)(*(arg0 + 0x56F1) - 1);
*(arg0 + 0x56F0) = 59;
return true;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004391D4
extern "C" bool YellowAuto_004391d4(uint8_t* arg0) __asm__("_ZN8Savedata10ResortSave24HotSpaBonusTimeDownCountEv");
extern "C" bool YellowAuto_004391d4(uint8_t* arg0) {
if (*(arg0 + 0x5702) != 0) {
  *(arg0 + 0x5702) = (uint8_t)(*(arg0 + 0x5702) - 1);
  return true;
}
if (*(arg0 + 0x5703) == 0) {
  return false;
}
*(arg0 + 0x5703) = (uint8_t)(*(arg0 + 0x5703) - 1);
*(arg0 + 0x5702) = 59;
return true;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004396D8
extern "C" bool YellowAuto_004396d8(uint8_t* arg0) __asm__("_ZN8Savedata10ResortSave27AdventureBonusTimeDownCountEv");
extern "C" bool YellowAuto_004396d8(uint8_t* arg0) {
if (*(arg0 + 0x56ED) != 0) {
  *(arg0 + 0x56ED) = (uint8_t)(*(arg0 + 0x56ED) - 1);
  return true;
}
if (*(arg0 + 0x56EE) == 0) {
  return false;
}
*(arg0 + 0x56EE) = (uint8_t)(*(arg0 + 0x56EE) - 1);
*(arg0 + 0x56ED) = 59;
return true;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00439720
extern "C" bool YellowAuto_00439720(uint8_t* arg0) __asm__("_ZN8Savedata10ResortSave27FarmFertilizerTimeDownCountEv");
extern "C" bool YellowAuto_00439720(uint8_t* arg0) {
if (*(arg0 + 0x56E6) != 0) {
  *(arg0 + 0x56E6) = (uint8_t)(*(arg0 + 0x56E6) - 1);
  return true;
}
if (*(arg0 + 0x56E7) == 0) {
  return false;
}
*(arg0 + 0x56E7) = (uint8_t)(*(arg0 + 0x56E7) - 1);
*(arg0 + 0x56E6) = 59;
return true;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043991C
extern "C" bool YellowAuto_0043991c(uint8_t* arg0) __asm__("_ZN8Savedata10ResortSave31WildPokemonServiceTimeDownCountEv");
extern "C" bool YellowAuto_0043991c(uint8_t* arg0) {
if (*(arg0 + 0x5681) != 0) {
  *(arg0 + 0x5681) = (uint8_t)(*(arg0 + 0x5681) - 1);
  return true;
}
if (*(arg0 + 0x5682) == 0) {
  return false;
}
*(arg0 + 0x5682) = (uint8_t)(*(arg0 + 0x5682) - 1);
*(arg0 + 0x5681) = 59;
return true;
}
#endif
