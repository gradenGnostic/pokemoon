// Autonomous Qwen reconstruction approved by GPT-5.4 mini.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043EE08
extern "C" uint8_t YellowAuto_0043ee08(uint8_t* arg0) __asm__("_ZN8Savedata17JoinFestaDataSave26GetPersonalTalkCameraCountEv");
extern "C" uint8_t YellowAuto_0043ee08(uint8_t* arg0) {
return arg0[0x39f1];
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A738C
extern "C" uint32_t YellowAuto_004a738c(const uint8_t* arg0) __asm__("_ZNK8Savedata17JoinFestaDataSave11IsRejectVipEv");
extern "C" uint32_t YellowAuto_004a738c(const uint8_t* arg0) {
return (arg0[0x1e] & 2) >> 1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A73DC
extern "C" uint32_t YellowAuto_004a73dc(const uint8_t* arg0) __asm__("_ZNK8Savedata17JoinFestaDataSave13IsRejectGuestEv");
extern "C" uint32_t YellowAuto_004a73dc(const uint8_t* arg0) {
return (arg0[0x1e] & 4) >> 2;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A74B0
extern "C" uint32_t YellowAuto_004a74b0(const uint8_t* arg0) __asm__("_ZNK8Savedata17JoinFestaDataSave15IsAlwaysTradeOkEv");
extern "C" uint32_t YellowAuto_004a74b0(const uint8_t* arg0) {
return (arg0[0x1e] & 0x10) >> 4;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A7518
extern "C" uint8_t YellowAuto_004a7518(const uint8_t* arg0) __asm__("_ZNK8Savedata17JoinFestaDataSave16GetTempSaveThemeEv");
extern "C" uint8_t YellowAuto_004a7518(const uint8_t* arg0) {
return arg0[0x39f5];
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A7528
extern "C" uint32_t YellowAuto_004a7528(const uint8_t* arg0) __asm__("_ZNK8Savedata17JoinFestaDataSave16IsAlwaysBattleOkEv");
extern "C" uint32_t YellowAuto_004a7528(const uint8_t* arg0) {
return (arg0[0x1e] & 8) >> 3;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A7618
extern "C" uint32_t YellowAuto_004a7618(const uint8_t* arg0) __asm__("_ZNK8Savedata17JoinFestaDataSave20IsAlwaysAttractionOkEv");
extern "C" uint32_t YellowAuto_004a7618(const uint8_t* arg0) {
return (arg0[0x1e] & 0x20) >> 5;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A769C
extern "C" bool YellowAuto_004a769c(const uint8_t* arg0) __asm__("_ZNK8Savedata17JoinFestaDataSave22GetIsSkipMessageAirToyEv");
extern "C" bool YellowAuto_004a769c(const uint8_t* arg0) {
return arg0[0x39f2] != 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A775C
extern "C" bool YellowAuto_004a775c(const uint8_t* arg0) __asm__("_ZNK8Savedata17JoinFestaDataSave24GetSelectWordAppTutorialEv");
extern "C" bool YellowAuto_004a775c(const uint8_t* arg0) {
return arg0[0x308b] != 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A7770
extern "C" bool YellowAuto_004a7770(const uint8_t* arg0) __asm__("_ZNK8Savedata17JoinFestaDataSave25GetProfileAppTutorialFlagEv");
extern "C" bool YellowAuto_004a7770(const uint8_t* arg0) {
return arg0[0x3089] != 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A77C8
extern "C" bool YellowAuto_004a77c8(const uint8_t* arg0) __asm__("_ZNK8Savedata17JoinFestaDataSave27GetIsSkipMessageHorrorHouseEv");
extern "C" bool YellowAuto_004a77c8(const uint8_t* arg0) {
return arg0[0x39f4] != 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A77DC
extern "C" bool YellowAuto_004a77dc(const uint8_t* arg0) __asm__("_ZNK8Savedata17JoinFestaDataSave28IsFinishLastP2pPersonalEventEv");
extern "C" bool YellowAuto_004a77dc(const uint8_t* arg0) {
return arg0[0x3088] != 0;
}
#endif
