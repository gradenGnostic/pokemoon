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
