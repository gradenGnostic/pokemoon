// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0038A440
uint8_t* FUN_0053d9c4(uint8_t*, const uint8_t*);
void FUN_0038a494(uint8_t*, uint8_t*, const uint8_t*, uint32_t);
extern "C" uint8_t* YellowAuto_0038a440(uint8_t* arg0, const uint8_t* arg1, uint32_t arg2) __asm__("_ZN5Field15EventBattleCall11CallTrainerEPN7GameSys11GameManagerERKNS_18TrainerBattleParamEj");
extern "C" uint8_t* YellowAuto_0038a440(uint8_t* arg0, const uint8_t* arg1, uint32_t arg2) {
uint8_t* p_event;
int32_t retBGMID;
p_event = FUN_0053d9c4(*(uint8_t**)(arg0 + 0x20), arg1);
FUN_0038a494(p_event, arg0, arg1, arg2);
retBGMID = *(const int32_t*)(arg1 + 0x10);
if (retBGMID != -1 && retBGMID != 0) *(int32_t*)(p_event + 0x598) = retBGMID;
return p_event;
}
#endif
