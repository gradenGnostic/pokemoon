// Autonomous Qwen reconstruction approved by GPT-5.4 mini.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002FE948
extern "C" uint8_t* ClearRecvPacketEnableCommand(void* arg0);
extern "C" uint8_t* YellowAuto_002fe948(void* arg0) __asm__("_ZN6NetApp3NBR6NBRNet28ClearRecvPacketEnableCommandEv");
extern "C" uint8_t* YellowAuto_002fe948(void* arg0) {
return (uint8_t *)arg0 + 0x10;
}
#endif

// Autonomous Qwen reconstruction approved by GPT-5.4 mini.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A2C40
bool IsWifi(void);
void* GetInstance();
bool FUN_0040c9d8(void* arg0);
extern "C" bool YellowAuto_004a2c40() __asm__("_ZN6NetApp3NBR6NBRNet6IsWifiEv");
extern "C" bool YellowAuto_004a2c40() {
void* p0 = GetInstance(); return FUN_0040c9d8((void*)(*(int32_t*)((uint8_t*)p0 + 0x18) + 0x18));
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003CEBF4
bool SendRuleOther(void* arg0);
int32_t SendDataCommand(void* arg0, const uint8_t* arg1, int32_t arg2, int32_t arg3);
extern "C" bool YellowAuto_003cebf4(void* arg0) __asm__("_ZN6NetApp3NBR6NBRNet13SendRuleOtherEv");
extern "C" bool YellowAuto_003cebf4(void* arg0) {
uint32_t local_10[2]; local_10[0] = 0; local_10[1] = 0; return SendDataCommand(*(void**)((uint8_t*)arg0 + 0x8), (const uint8_t*)local_10, 8, 0x2b) != 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003CF214
bool SendCantParticipate(void* arg0);
int32_t SendDataCommand(void* arg0, const uint8_t* arg1, int32_t arg2, int32_t arg3);
extern "C" bool YellowAuto_003cf214(void* arg0) __asm__("_ZN6NetApp3NBR6NBRNet19SendCantParticipateEv");
extern "C" bool YellowAuto_003cf214(void* arg0) {
uint32_t local_10[2]; local_10[0] = 0; local_10[1] = 0; return SendDataCommand(*(void**)((uint8_t*)arg0 + 0x8), (const uint8_t*)local_10, 8, 0x32) != 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003CF288
bool SendRuleSelectorIsMe(void* arg0);
int32_t SendDataCommand(void* arg0, const uint8_t* arg1, int32_t arg2, int32_t arg3);
extern "C" bool YellowAuto_003cf288(void* arg0) __asm__("_ZN6NetApp3NBR6NBRNet20SendRuleSelectorIsMeEv");
extern "C" bool YellowAuto_003cf288(void* arg0) {
uint32_t local_10[2]; local_10[0] = 0; local_10[1] = 0; return SendDataCommand(*(void**)((uint8_t*)arg0 + 0x8), (const uint8_t*)local_10, 8, 0x2c) != 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003CF42C
bool SendEnd(void* arg0);
int32_t SendDataCommand(void* arg0, const uint8_t* arg1, int32_t arg2, int32_t arg3);
extern "C" bool YellowAuto_003cf42c(void* arg0) __asm__("_ZN6NetApp3NBR6NBRNet7SendEndEv");
extern "C" bool YellowAuto_003cf42c(void* arg0) {
uint32_t local_10[2]; local_10[0] = 0; local_10[1] = 0; return SendDataCommand(*(void**)((uint8_t*)arg0 + 0x8), (const uint8_t*)local_10, 8, 0x28) != 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003CEE88
bool SendRegulation(void* arg0, uint8_t arg1);
int32_t SendDataCommand(void* arg0, const uint8_t* arg1, int32_t arg2, int32_t arg3);
extern "C" bool YellowAuto_003cee88(void* arg0, uint8_t arg1) __asm__("_ZN6NetApp3NBR6NBRNet14SendRegulationEN10Regulation6PRESETE");
extern "C" bool YellowAuto_003cee88(void* arg0, uint8_t arg1) {
uint32_t local_10[2]; local_10[0] = (uint32_t)arg1; local_10[1] = 0; return SendDataCommand(*(void**)((uint8_t*)arg0 + 0x8), (const uint8_t*)local_10, 8, 0x2e) != 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003CF24C
bool SendRegulationReady(void* arg0, uint8_t arg1);
int32_t SendDataCommand(void* arg0, const uint8_t* arg1, int32_t arg2, int32_t arg3);
extern "C" bool YellowAuto_003cf24c(void* arg0, uint8_t arg1) __asm__("_ZN6NetApp3NBR6NBRNet19SendRegulationReadyEb");
extern "C" bool YellowAuto_003cf24c(void* arg0, uint8_t arg1) {
uint32_t local_10[2]; local_10[0] = (uint32_t)arg1; local_10[1] = 0; return SendDataCommand(*(void**)((uint8_t*)arg0 + 0x8), (const uint8_t*)local_10, 8, 0x2d) != 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003D6B54
bool IsRecvPokePartyEnd(void);
void* GetInstance();
int32_t FUN_003d34f8(void* arg0);
bool FUN_003d35d0(void* arg0);
extern "C" bool YellowAuto_003d6b54() __asm__("_ZN6NetApp3NBR6NBRNet18IsRecvPokePartyEndEv");
extern "C" bool YellowAuto_003d6b54() {
void* p0 = GetInstance(); return *(int32_t*)((uint8_t*)p0 + 0x80) != 0 ? (FUN_003d34f8(*(void**)((uint8_t*)p0 + 0x80)), FUN_003d35d0(*(void**)((uint8_t*)p0 + 0x80)) != 0) : true;
}
#endif
