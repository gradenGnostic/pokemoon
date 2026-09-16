// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004391AC
extern "C" uint32_t YellowAuto_004391ac(uint8_t* arg0) __asm__("_ZN8Savedata10ResortSave22AdventureTimeDownCountEv");
extern "C" uint32_t YellowAuto_004391ac(uint8_t* arg0) {
uint8_t v = arg0[0x56E9];
if (v == 0) {
if (arg0[0x56EA] != 0) {
arg0[0x56EA] = (uint8_t)(arg0[0x56EA] - 1);
arg0[0x56E9] = 0x3B;
}
} else {
arg0[0x56E9] = (uint8_t)(v - 1);
if (v == 1 && arg0[0x56EA] == 0) return 1;
}
return 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004391C8
extern "C" uint32_t YellowAuto_004391c8(uint8_t* arg0) __asm__("_ZN8Savedata10ResortSave23FriendShipTimeDownCountEv");
extern "C" uint32_t YellowAuto_004391c8(uint8_t* arg0) {
uint8_t v = arg0[0x5687];
if (v == 0) {
if (arg0[0x5688] != 0) {
arg0[0x5688] = (uint8_t)(arg0[0x5688] - 1);
arg0[0x5687] = 0x3B;
}
} else {
arg0[0x5687] = (uint8_t)(v - 1);
if (v == 1 && arg0[0x5688] == 0) return 1;
}
return 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004394D4
extern "C" uint32_t YellowAuto_004394d4(uint8_t* arg0) __asm__("_ZN8Savedata10ResortSave24WildPokemonTimeDownCountEv");
extern "C" uint32_t YellowAuto_004394d4(uint8_t* arg0) {
uint8_t v = arg0[0x567E];
if (v == 0) {
if (arg0[0x567F] != 0) {
arg0[0x567F] = (uint8_t)(arg0[0x567F] - 1);
arg0[0x567E] = 0x3B;
}
} else {
arg0[0x567E] = (uint8_t)(v - 1);
if (v == 1 && arg0[0x567F] == 0) return 1;
}
return 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004395DC
extern "C" uint32_t YellowAuto_004395dc(uint8_t* arg0) __asm__("_ZN8Savedata10ResortSave25PokemonEventTimeDownCountEv");
extern "C" uint32_t YellowAuto_004395dc(uint8_t* arg0) {
uint8_t v = arg0[0x5676];
if (v == 0) {
if (arg0[0x5677] != 0) {
arg0[0x5677] = (uint8_t)(arg0[0x5677] - 1);
arg0[0x5676] = 0x3B;
}
} else {
arg0[0x5676] = (uint8_t)(v - 1);
if (v == 1 && arg0[0x5677] == 0) return 1;
}
return 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00439910
extern "C" uint32_t YellowAuto_00439910(uint8_t* arg0) __asm__("_ZN8Savedata10ResortSave31BeansBottleServiceTimeDownCountEv");
extern "C" uint32_t YellowAuto_00439910(uint8_t* arg0) {
uint8_t v = arg0[0x5679];
if (v == 0) {
if (arg0[0x567A] != 0) {
arg0[0x567A] = (uint8_t)(arg0[0x567A] - 1);
arg0[0x5679] = 0x3B;
}
} else {
arg0[0x5679] = (uint8_t)(v - 1);
if (v == 1 && arg0[0x567A] == 0) return 1;
}
return 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00438D7C
extern "C" uint32_t YellowAuto_00438d7c(uint8_t* arg0, int32_t arg1) __asm__("_ZN8Savedata10ResortSave19GimEndTimeDownCountEi");
extern "C" uint32_t YellowAuto_00438d7c(uint8_t* arg0, int32_t arg1) {
uint8_t v = arg0[arg1 * 3 + 0x56F9];
if (v == 0) {
if (arg0[arg1 * 3 + 0x56FA] != 0) {
arg0[arg1 * 3 + 0x56FA] = (uint8_t)(arg0[arg1 * 3 + 0x56FA] - 1);
arg0[arg1 * 3 + 0x56F9] = 0x3B;
}
} else {
arg0[arg1 * 3 + 0x56F9] = (uint8_t)(v - 1);
if (v == 1 && arg0[arg1 * 3 + 0x56FA] == 0) return 1;
}
return 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00439694
extern "C" uint32_t YellowAuto_00439694(uint8_t* arg0, int32_t arg1) __asm__("_ZN8Savedata10ResortSave26HotSpaPokemonTimeDownCountEi");
extern "C" uint32_t YellowAuto_00439694(uint8_t* arg0, int32_t arg1) {
uint8_t v = arg0[arg1 * 3 + 0x5705];
if (v == 0) {
if (arg0[arg1 * 3 + 0x5706] != 0) {
arg0[arg1 * 3 + 0x5706] = (uint8_t)(arg0[arg1 * 3 + 0x5706] - 1);
arg0[arg1 * 3 + 0x5705] = 0x3B;
}
} else {
arg0[arg1 * 3 + 0x5705] = (uint8_t)(v - 1);
if (v == 1 && arg0[arg1 * 3 + 0x5706] == 0) return 1;
}
return 0;
}
#endif
