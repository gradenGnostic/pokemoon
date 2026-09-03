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

// Autonomous Qwen reconstruction approved by GPT-5.4 mini.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A780C
extern "C" uint16_t YellowAuto_004a780c(const uint8_t* arg0) __asm__("_ZNK8Savedata17JoinFestaDataSave7GetRankEv");
extern "C" uint16_t YellowAuto_004a780c(const uint8_t* arg0) {
return *reinterpret_cast<const uint16_t*>(arg0 + 0x542);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043EDB0
extern "C" void YellowAuto_0043edb0(uint8_t* arg0) __asm__("_ZN8Savedata17JoinFestaDataSave26AddPersonalTalkCameraCountEv");
extern "C" void YellowAuto_0043edb0(uint8_t* arg0) {
*reinterpret_cast<uint8_t*>(arg0 + 0x39f1) += 1; if (2 < *reinterpret_cast<uint8_t*>(arg0 + 0x39f1)) *reinterpret_cast<uint8_t*>(arg0 + 0x39f1) = 0;
}
#endif

// Autonomous Qwen reconstruction approved by GPT-5.4 mini.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043F3D0
extern "C" void YellowAuto_0043f3d0(uint8_t* arg0, uint16_t arg1) __asm__("_ZN8Savedata17JoinFestaDataSave7SetRankEt");
extern "C" void YellowAuto_0043f3d0(uint8_t* arg0, uint16_t arg1) {
*(uint16_t*)((uint8_t*)arg0 + 0x542) = arg1; if (999 < arg1) *(uint16_t*)((uint8_t*)arg0 + 0x542) = *(const uint16_t*)0x43f3e8;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00444C90
extern "C" void YellowAuto_00444c90(uint8_t* arg0, uint32_t arg1) __asm__("_ZN8Savedata17JoinFestaDataSave7SubCoinEj");
extern "C" void YellowAuto_00444c90(uint8_t* arg0, uint32_t arg1) {
if (arg1 < *(uint32_t*)((uint8_t*)arg0 + 0x510)) *(uint32_t*)((uint8_t*)arg0 + 0x510) -= arg1; else *(uint32_t*)((uint8_t*)arg0 + 0x510) = 0;
}
#endif

// Autonomous Qwen reconstruction approved by GPT-5.4 mini.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A76B0
extern void SetStr(void*, const uint16_t*);
extern "C" void YellowAuto_004a76b0(uint8_t* arg0, void* arg1) __asm__("_ZNK8Savedata17JoinFestaDataSave22GetJoinFestaNameStringEPN4gfl23str6StrBufE");
extern "C" void YellowAuto_004a76b0(uint8_t* arg0, void* arg1) {
SetStr(arg1, (const uint16_t *)(arg0 + 0x518));
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043EE18
extern uint32_t GetPublicRand(uint8_t*, uint32_t);
extern "C" void YellowAuto_0043ee18(uint8_t* arg0, uint32_t arg1) __asm__("_ZN8Savedata17JoinFestaDataSave26ResetFacilitiesLotterySeedEv");
extern "C" void YellowAuto_0043ee18(uint8_t* arg0, uint32_t arg1) {
*((uint32_t *)(arg0 + 0x20)) = GetPublicRand(arg0, arg1);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043E414
extern void GFLassert();
extern "C" void YellowAuto_0043e414(uint8_t* arg0, uint32_t arg1, uint32_t arg2) __asm__("_ZN8Savedata17JoinFestaDataSave14SetRewardStateEN15JoinFestaScript10RewardTypeENS1_15RewardStateTypeE");
extern "C" void YellowAuto_0043e414(uint8_t* arg0, uint32_t arg1, uint32_t arg2) {
if (10 < arg1) GFLassert(); else *((uint32_t *)(arg0 + 0x544 + arg1)) = arg2;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043E9E0
extern void __aeabi_memcpy4(void *, const void *, uint32_t);
extern "C" void YellowAuto_0043e9e0(uint8_t* arg0, uint32_t arg1, uint32_t arg2) __asm__("_ZN8Savedata17JoinFestaDataSave21FacilitiesChangeIndexEN15JoinFestaScript15FacilitiesIndexES2_");
extern "C" void YellowAuto_0043e9e0(uint8_t* arg0, uint32_t arg1, uint32_t arg2) {
if (6 < arg1 || 6 < arg2) return; uint8_t temp[0x48]; __aeabi_memcpy4(temp, arg0 + arg1 * 0x48 + 0x318, 0x48); __aeabi_memcpy4(arg0 + arg1 * 0x48 + 0x318, arg0 + arg2 * 0x48 + 0x318, 0x48); __aeabi_memcpy4(arg0 + arg2 * 0x48 + 0x318, temp, 0x48);
}
#endif
