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
