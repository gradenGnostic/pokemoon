// Autonomous Qwen reconstruction approved by GPT-5.4 mini.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043E738
extern "C" void YellowAuto_0043e738(uint8_t* arg0, uint8_t arg1) __asm__("_ZN8Savedata17JoinFestaDataSave16SetTempSaveThemeEh");
extern "C" void YellowAuto_0043e738(uint8_t* arg0, uint8_t arg1) {
arg0[0x39f5] = arg1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043EA58
extern "C" void YellowAuto_0043ea58(uint8_t* arg0, bool arg1) __asm__("_ZN8Savedata17JoinFestaDataSave21SetIsSkipMessageStallEb");
extern "C" void YellowAuto_0043ea58(uint8_t* arg0, bool arg1) {
arg0[0x39f3] = arg1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043EA68
extern "C" void YellowAuto_0043ea68(uint8_t* arg0, bool arg1) __asm__("_ZN8Savedata17JoinFestaDataSave22SetIsSkipMessageAirToyEb");
extern "C" void YellowAuto_0043ea68(uint8_t* arg0, bool arg1) {
arg0[0x39f2] = arg1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043ECD8
extern "C" void YellowAuto_0043ecd8(uint8_t* arg0) __asm__("_ZN8Savedata17JoinFestaDataSave24SetSelectWordAppTutorialEv");
extern "C" void YellowAuto_0043ecd8(uint8_t* arg0) {
arg0[0x308b] = 1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043EDA0
extern "C" void YellowAuto_0043eda0(uint8_t* arg0) __asm__("_ZN8Savedata17JoinFestaDataSave25SetProfileAppTutorialFlagEv");
extern "C" void YellowAuto_0043eda0(uint8_t* arg0) {
arg0[0x3089] = 1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043EFE4
extern "C" void YellowAuto_0043efe4(uint8_t* arg0, uint8_t arg1) __asm__("_ZN8Savedata17JoinFestaDataSave30SetFacilitiesIndexOfScriptCallEN15JoinFestaScript15FacilitiesIndexE");
extern "C" void YellowAuto_0043efe4(uint8_t* arg0, uint8_t arg1) {
arg0[0x39a0] = arg1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043F160
extern "C" void YellowAuto_0043f160(uint8_t* arg0) __asm__("_ZN8Savedata17JoinFestaDataSave32SetPlayerListShowAppTutorialFlagEv");
extern "C" void YellowAuto_0043f160(uint8_t* arg0) {
arg0[0x308a] = 1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043E6A8
extern "C" void YellowAuto_0043e6a8(uint8_t* arg0, bool arg1) __asm__("_ZN8Savedata17JoinFestaDataSave16SetAlwaysTradeOkEb");
extern "C" void YellowAuto_0043e6a8(uint8_t* arg0, bool arg1) {
arg0[0x1e] = (arg0[0x1e] & 0xef) | (arg1 << 4);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043E87C
extern "C" void YellowAuto_0043e87c(uint8_t* arg0, bool arg1) __asm__("_ZN8Savedata17JoinFestaDataSave17SetAlwaysBattleOkEb");
extern "C" void YellowAuto_0043e87c(uint8_t* arg0, bool arg1) {
arg0[0x1e] = (arg0[0x1e] & 0xf7) | (arg1 << 3);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043EA44
extern "C" void YellowAuto_0043ea44(uint8_t* arg0, bool arg1) __asm__("_ZN8Savedata17JoinFestaDataSave21SetAlwaysAttractionOkEb");
extern "C" void YellowAuto_0043ea44(uint8_t* arg0, bool arg1) {
arg0[0x1e] = (arg0[0x1e] & 0xdf) | (arg1 << 5);
}
#endif
