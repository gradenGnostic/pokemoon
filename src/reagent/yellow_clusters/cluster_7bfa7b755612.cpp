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
