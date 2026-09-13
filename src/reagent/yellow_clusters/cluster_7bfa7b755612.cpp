// Autonomous Qwen reconstruction approved by GPT-5.4 mini.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00158D00
extern "C" void YellowAuto_00158d00(uint8_t* arg0, int32_t arg1, int32_t arg2) __asm__("_ZN10BattleInst10BattleInst17SetNoEntryTrainerEii");
extern "C" void YellowAuto_00158d00(uint8_t* arg0, int32_t arg1, int32_t arg2) {
*(uint32_t *)(arg0 + arg1 * 4 + 0x1320) = arg2;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00158570
extern "C" void YellowAuto_00158570(uint8_t* arg0) __asm__("_ZN10BattleInst10BattleInst14DeleteForRoyalEv");
extern "C" void YellowAuto_00158570(uint8_t* arg0) {
if (*(uint32_t *)(arg0 + 0x1330) != 0) (*(void (**)(void))(*(uint32_t *)(*(uint32_t *)(arg0 + 0x1330)) + 4))(), *(uint32_t *)(arg0 + 0x1330) = 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x001587B0
extern "C" void YellowAuto_001587b0(uint8_t* arg0, int32_t arg1) __asm__("_ZN10BattleInst10BattleInst15SetCommWinCountEi");
extern "C" void YellowAuto_001587b0(uint8_t* arg0, int32_t arg1) {
*(int32_t *)(arg0 + 0x5c0) = arg1; if (*(uint8_t *)(arg0 + 0x5ac) == 0 && 0x13 < arg1) *(int32_t *)(arg0 + 0x5c0) = 0;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x001577C0
void Deserialize(uint8_t*, uint8_t*);
void FUN_0031ed60(uint8_t*, uint8_t*);
extern "C" void YellowAuto_001577c0(uint8_t* arg0, uint8_t* arg1) __asm__("_ZN10BattleInst10BattleInst11SetCommDataEPNS0_12CommSendDataE");
extern "C" void YellowAuto_001577c0(uint8_t* arg0, uint8_t* arg1) {
Deserialize(*(uint8_t**)(arg0 + 0x12F8), arg1); FUN_0031ed60(*(uint8_t**)(arg0 + 0x12EC), arg1 + 0xC0); *(arg0 + 0x12F0) = *(arg1 + 0x6DC); *(uint32_t*)(arg0 + 0x12F4) = *(uint32_t*)(arg1 + 0x6E0);
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00159E38
void RegisterWord(void*, uint32_t, void*, uint32_t, uint32_t);
extern "C" void YellowAuto_00159e38(uint8_t* arg0, uint16_t arg1, uint16_t arg2) __asm__("_ZN10BattleInst10BattleInst36WordSetBinstTrainerNameFromTrainerNoEtt");
extern "C" void YellowAuto_00159e38(uint8_t* arg0, uint16_t arg1, uint16_t arg2) {
RegisterWord(*(void**)(*(uint32_t*)(*(uint32_t*)(*(uint32_t*)(arg0 + 0x1318) + 0x34) + 0x20) + 0x0), arg1, *(void**)(arg0 + 0x132C), *(uint32_t*)(arg0 + arg2 * 4 + 0x4), 0);
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x001585FC
void Serialize(uint8_t*, uint8_t*);
void FUN_00493a2c(uint32_t, uint8_t*);
extern "C" void YellowAuto_001585fc(uint8_t* arg0, uint8_t* arg1) __asm__("_ZN10BattleInst10BattleInst15GetSendCommDataEPNS0_12CommSendDataE");
extern "C" void YellowAuto_001585fc(uint8_t* arg0, uint8_t* arg1) {
Serialize(reinterpret_cast<uint8_t*>(*reinterpret_cast<uint32_t*>(reinterpret_cast<uint8_t*>(*reinterpret_cast<uint32_t*>(reinterpret_cast<uint8_t*>(*reinterpret_cast<uint32_t*>(arg0 + 0x1318)) + 0x24)) + 0x4)) + 0xEA0, arg1); FUN_00493a2c(*reinterpret_cast<uint32_t*>(arg0 + 0x12E0), arg1 + 0xC0); *reinterpret_cast<uint8_t*>(arg1 + 0x6DC) = *reinterpret_cast<uint8_t*>(arg0 + *reinterpret_cast<uint32_t*>(0x158644)); *reinterpret_cast<uint32_t*>(arg1 + 0x6E0) = *reinterpret_cast<uint32_t*>(arg0 + 0x12E8); return;
}
#endif
