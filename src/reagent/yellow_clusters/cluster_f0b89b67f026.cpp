// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003FA58C
void UnregistRankingClientListener(uint8_t* arg0, void* arg1);
extern "C" void YellowAuto_003fa58c(uint8_t* arg0, void* arg1) __asm__("_ZN7gflnet23nex16NexRankingClient29UnregistRankingClientListenerEPNS0_24NexRankingClientListenerE");
extern "C" void YellowAuto_003fa58c(uint8_t* arg0, void* arg1) {
if (*(void **)(arg0 + 0x2c) == arg1) *(void **)(arg0 + 0x2c) = 0;
else if (*(void **)(arg0 + 0x30) == arg1) *(void **)(arg0 + 0x30) = 0;
else if (*(void **)(arg0 + 0x34) == arg1) *(void **)(arg0 + 0x34) = 0;
else if (*(void **)(arg0 + 0x38) == arg1) *(void **)(arg0 + 0x38) = 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003FA2C8
bool RegistRankingClientListener(uint8_t* arg0, void* arg1);
extern "C" bool YellowAuto_003fa2c8(uint8_t* arg0, void* arg1) __asm__("_ZN7gflnet23nex16NexRankingClient27RegistRankingClientListenerEPNS0_24NexRankingClientListenerE");
extern "C" bool YellowAuto_003fa2c8(uint8_t* arg0, void* arg1) {
if (*(void **)(arg0 + 0x2c) == arg1) return false;
if (*(void **)(arg0 + 0x30) == arg1) return false;
if (*(void **)(arg0 + 0x34) == arg1) return false;
if (*(void **)(arg0 + 0x38) == arg1) return false;
if (*(void **)(arg0 + 0x2c) == 0) *(void **)(arg0 + 0x2c) = arg1;
else if (*(void **)(arg0 + 0x30) == 0) *(void **)(arg0 + 0x30) = arg1;
else if (*(void **)(arg0 + 0x34) == 0) *(void **)(arg0 + 0x34) = arg1;
else if (*(void **)(arg0 + 0x38) == 0) *(void **)(arg0 + 0x38) = arg1;
else return false;
return true;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003FA720
uint32_t Helper_003FA720_VTable();
extern "C" void YellowAuto_003fa720(uint8_t* arg0) __asm__("_ZN7gflnet23nex16NexRankingClientC1Ev");
extern "C" void YellowAuto_003fa720(uint8_t* arg0) {
*(uint32_t*)arg0 = Helper_003FA720_VTable(); arg0[4] = 0; arg0[5] = 0; *(uint32_t*)(arg0 + 8) = 0; *(uint32_t*)(arg0 + 12) = 0; *(uint32_t*)(arg0 + 16) = 0; *(uint32_t*)(arg0 + 20) = 0; *(uint32_t*)(arg0 + 24) = 0; *(uint32_t*)(arg0 + 28) = 0; *(uint32_t*)(arg0 + 32) = 0; *(uint32_t*)(arg0 + 36) = 0; *(uint32_t*)(arg0 + 40) = 0; *(uint32_t*)(arg0 + 44) = 0; *(uint32_t*)(arg0 + 48) = 0; *(uint32_t*)(arg0 + 52) = 0; *(uint32_t*)(arg0 + 56) = 0;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003F9C48
uint32_t Cancel(uint8_t*, uint32_t);
extern "C" uint32_t YellowAuto_003f9c48(uint8_t* arg0) __asm__("_ZN7gflnet23nex16NexRankingClient16CancelConnectingEv");
extern "C" uint32_t YellowAuto_003f9c48(uint8_t* arg0) {
if (arg0[5] == 0) return 0; if (*(uint8_t**)(arg0 + 24) == 0) return 0; if ((*(uint8_t**)(arg0 + 24))[16] != 1) return 0; return Cancel(*(uint8_t**)(arg0 + 24), 4);
}
#endif
