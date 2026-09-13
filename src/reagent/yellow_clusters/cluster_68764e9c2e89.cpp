// Autonomous Qwen reconstruction approved by GPT-5.4 mini.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00468424
extern "C" void YellowAuto_00468424(uint8_t* arg0) __asm__("_ZN9NetAppLib9JoinFesta21JoinFestaPersonalData23SetLastP2PPersonalEventEv");
extern "C" void YellowAuto_00468424(uint8_t* arg0) {
arg0[0x200] = 0x12;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00469064
extern "C" void YellowAuto_00469064(uint8_t* arg0) __asm__("_ZN9NetAppLib9JoinFesta21JoinFestaPersonalData6UnLockEv");
extern "C" void YellowAuto_00469064(uint8_t* arg0) {
arg0[0x23a] = 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004AB2FC
extern "C" bool YellowAuto_004ab2fc(const uint8_t* arg0) __asm__("_ZNK9NetAppLib9JoinFesta21JoinFestaPersonalData26IsEnablePacketBattleInviteEv");
extern "C" bool YellowAuto_004ab2fc(const uint8_t* arg0) {
return arg0[9] == 0x10 || arg0[9] == 0x11 || arg0[9] == 0x12;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00468524
extern "C" void YellowAuto_00468524(uint8_t* arg0) __asm__("_ZN9NetAppLib9JoinFesta21JoinFestaPersonalData23SetupTutorialDummyEventEv");
extern "C" void YellowAuto_00468524(uint8_t* arg0) {
if (arg0[0x23e] == 1) arg0[0x200] = 1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004AB2C4
extern "C" bool YellowAuto_004ab2c4(const uint8_t* arg0) __asm__("_ZNK9NetAppLib9JoinFesta21JoinFestaPersonalData25IsEnablePacketTradeInviteEv");
extern "C" bool YellowAuto_004ab2c4(const uint8_t* arg0) {
return arg0[9] == 0x17 || arg0[9] == 0x18 || arg0[9] == 0x19;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00467DE0
extern "C" void YellowAuto_00467de0(uint8_t* arg0, uint32_t arg1) __asm__("_ZN9NetAppLib9JoinFesta21JoinFestaPersonalData17SetCommRouteForceEN15JoinFestaScript13CommRouteTypeE");
extern "C" void YellowAuto_00467de0(uint8_t* arg0, uint32_t arg1) {
if (arg1 < 8) arg0[0x202] = (uint8_t)arg1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00468F00
extern "C" void YellowAuto_00468f00(uint8_t* arg0, const uint8_t* arg1) __asm__("_ZN9NetAppLib9JoinFesta21JoinFestaPersonalData4CopyERKNS1_8CoreDataE");
extern "C" void YellowAuto_00468f00(uint8_t* arg0, const uint8_t* arg1) {
for (uint32_t i = 0; i < 0x200; ++i) arg0[8 + i] = arg1[i];
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00468774
void FUN_004681ac(uint8_t*);
extern "C" void YellowAuto_00468774(uint8_t* arg0) __asm__("_ZN9NetAppLib9JoinFesta21JoinFestaPersonalData25SetRequestCancelingBattleEv");
extern "C" void YellowAuto_00468774(uint8_t* arg0) {
arg0[9] = 17; arg0[10] = 1; FUN_004681ac(arg0);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004684D8
void FUN_004681ac(uint8_t*);
extern "C" void YellowAuto_004684d8(uint8_t* arg0, const uint8_t* arg1, uint32_t arg2, bool arg3, bool arg4, uint8_t arg5) __asm__("_ZN9NetAppLib9JoinFesta21JoinFestaPersonalData23SetRequestRecieveBattleERK18nnfriendsFriendKeyjbbh");
extern "C" void YellowAuto_004684d8(uint8_t* arg0, const uint8_t* arg1, uint32_t arg2, bool arg3, bool arg4, uint8_t arg5) {
if (arg3 == 0) arg0[9] = 20; else arg0[9] = 19; arg0[10] = 2; *(uint32_t*)(arg0 + 0x208) = arg2; *(uint32_t*)(arg0 + 0x20C) = *(const uint32_t*)(arg1 + 0x0); *(uint32_t*)(arg0 + 0x210) = *(const uint32_t*)(arg1 + 0x8); *(uint32_t*)(arg0 + 0x214) = *(const uint32_t*)(arg1 + 0xC); arg0[0x218] = arg4; arg0[0x219] = arg5; FUN_004681ac(arg0);
}
#endif
