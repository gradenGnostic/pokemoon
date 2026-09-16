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

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003FA5D0
void FreeHelper(uint32_t);
void DeleteHelper(void*);
extern "C" void YellowAuto_003fa5d0(uint8_t* arg0) __asm__("_ZN7gflnet23nex16NexRankingClient8FinalizeEv");
extern "C" void YellowAuto_003fa5d0(uint8_t* arg0) {
if (arg0[4]==0) return; arg0[4]=0; arg0[5]=0; *(uint32_t*)(arg0+0x2c)=0; *(uint32_t*)(arg0+0x30)=0; *(uint32_t*)(arg0+0x34)=0; *(uint32_t*)(arg0+0x38)=0; if (*(uint32_t*)(arg0+0x10)!=0) { if (*(uint32_t*)(*(uint32_t*)(arg0+0x10)+8)!=0) (*(void(**)(uint32_t))(*(uint32_t*)(*(uint32_t*)(arg0+0x10))+0x10))(*(uint32_t*)(arg0+0x10)); } if (*(uint32_t*)(arg0+0x14)!=0) { if (*(uint32_t*)(*(uint32_t*)(arg0+0x14)+8)!=0) (*(void(**)(uint32_t))(*(uint32_t*)(*(uint32_t*)(arg0+0x14))+0x10))(*(uint32_t*)(arg0+0x14)); } if (*(uint32_t*)(arg0+0x1c)!=0) { *(uint32_t*)(*(uint32_t*)(arg0+0x1c)+4)=*(uint32_t*)(*(uint32_t*)(arg0+0x1c)); FreeHelper(*(uint32_t*)(*(uint32_t*)(arg0+0x1c))); DeleteHelper(*(void**)(arg0+0x1c)); *(uint32_t*)(arg0+0x1c)=0; } if (*(uint32_t*)(arg0+0x28)!=0) { (*(void(**)(uint32_t))(*(uint32_t*)(*(uint32_t*)(arg0+0x28))+4))(*(uint32_t*)(arg0+0x28)); *(uint32_t*)(arg0+0x28)=0; } if (*(uint32_t*)(arg0+0x24)!=0) { (*(void(**)(uint32_t))(*(uint32_t*)(*(uint32_t*)(arg0+0x24))+4))(*(uint32_t*)(arg0+0x24)); *(uint32_t*)(arg0+0x24)=0; } if (*(uint32_t*)(arg0+0x20)!=0) { (*(void(**)(uint32_t))(*(uint32_t*)(*(uint32_t*)(arg0+0x20))+4))(*(uint32_t*)(arg0+0x20)); *(uint32_t*)(arg0+0x20)=0; } if (*(uint32_t*)(arg0+0x14)!=0) { (*(void(**)(uint32_t))(*(uint32_t*)(*(uint32_t*)(arg0+0x14))+4))(*(uint32_t*)(arg0+0x14)); *(uint32_t*)(arg0+0x14)=0; } if (*(uint32_t*)(arg0+0x10)!=0) { (*(void(**)(uint32_t))(*(uint32_t*)(*(uint32_t*)(arg0+0x10))+4))(*(uint32_t*)(arg0+0x10)); *(uint32_t*)(arg0+0x10)=0; } return;
}
#endif
