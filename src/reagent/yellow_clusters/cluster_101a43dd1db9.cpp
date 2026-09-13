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

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003CEBC0
int32_t SendDataCommand(void*, const void*, uint32_t, uint32_t);
extern "C" bool YellowAuto_003cebc0(uint8_t* arg0, const uint32_t* arg1) __asm__("_ZN6NetApp3NBR6NBRNet12SendPriorityEPKh");
extern "C" bool YellowAuto_003cebc0(uint8_t* arg0, const uint32_t* arg1) {
void* _ng = *(void**)(arg0 + 8); uint32_t _b[2]; _b[0] = *arg1; return SendDataCommand(_ng, _b, 8, 41) != 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003CEF74
int32_t SendDataCommand(void*, const void*, uint32_t, uint32_t);
extern "C" bool YellowAuto_003cef74(uint8_t* arg0, const uint32_t* arg1) __asm__("_ZN6NetApp3NBR6NBRNet15SendMultiDecideEPKh");
extern "C" bool YellowAuto_003cef74(uint8_t* arg0, const uint32_t* arg1) {
void* _ng = *(void**)(arg0 + 8); uint32_t _b[2]; _b[0] = *arg1; _b[1] = 0; return SendDataCommand(_ng, _b, 8, 52) != 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003CF0EC
int32_t SendDataCommand(void*, const void*, uint32_t, uint32_t);
extern "C" bool YellowAuto_003cf0ec(uint8_t* arg0, const uint8_t* arg1) __asm__("_ZN6NetApp3NBR6NBRNet16SendPokePartyRetEPKNS0_12NBRNetDefine19PokePartyRetCommandE");
extern "C" bool YellowAuto_003cf0ec(uint8_t* arg0, const uint8_t* arg1) {
void* _ng = *(void**)(arg0 + 8); uint8_t _b[8]; _b[0] = arg1[0]; _b[1] = arg1[1]; _b[2] = arg1[2]; _b[3] = arg1[3]; return SendDataCommand(_ng, _b, 8, 51) != 0;
}
#endif
