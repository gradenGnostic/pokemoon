// Autonomous Qwen reconstruction approved by GPT-5.4 mini.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003CF2C0
void UnregistRecvListener(void *arg0);
extern "C" void YellowAuto_003cf2c0(void* arg0) __asm__("_ZN6NetApp3NBR6NBRNet20UnregistRecvListenerEv");
extern "C" void YellowAuto_003cf2c0(void* arg0) {
*(uint32_t *)((uint8_t *)arg0 + 0xc) = 0;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003CEB90
int32_t SendDataCommand(void*, void*, uint32_t, uint32_t);
extern "C" bool YellowAuto_003ceb90(uint8_t* arg0, uint8_t arg1) __asm__("_ZN6NetApp3NBR6NBRNet12SendContinueENS0_12NBRNetDefine15ContinueCommandE");
extern "C" bool YellowAuto_003ceb90(uint8_t* arg0, uint8_t arg1) {
uint8_t buf[8]; buf[0] = arg1; return SendDataCommand(*(void**)(arg0 + 8), buf, 8, 0x36) != 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003CF138
int32_t SendDataCommand(void*, void*, uint32_t, uint32_t);
extern "C" bool YellowAuto_003cf138(uint8_t* arg0, uint8_t arg1) __asm__("_ZN6NetApp3NBR6NBRNet16SendRuleSelectorENS0_12NBRNetDefine19RuleSelectorCommandE");
extern "C" bool YellowAuto_003cf138(uint8_t* arg0, uint8_t arg1) {
uint8_t buf[8]; buf[0] = arg1; return SendDataCommand(*(void**)(arg0 + 8), buf, 8, 0x2A) != 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003CF168
int32_t SendDataCommand(void*, void*, uint32_t, uint32_t);
extern "C" bool YellowAuto_003cf168(uint8_t* arg0, uint8_t arg1) __asm__("_ZN6NetApp3NBR6NBRNet17SendRegulationRetENS0_12NBRNetDefine20RegulationRetCommandE");
extern "C" bool YellowAuto_003cf168(uint8_t* arg0, uint8_t arg1) {
uint8_t buf[8]; buf[0] = arg1; return SendDataCommand(*(void**)(arg0 + 8), buf, 8, 0x30) != 0;
}
#endif
