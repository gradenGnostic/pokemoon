// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0044C3E0
uint8_t* FUN_0057f9cc(uint8_t* arg0, void* arg1, uint32_t arg2);
uint8_t* JoinFestaRecordRankingManager(uint8_t* arg0);
extern "C" void YellowAuto_0044c3e0(uint8_t* arg0, void* arg1) __asm__("_ZN9NetAppLib11JoinFestaUI26JoinFestaPlayerListManagerC1EPN4gfl24heap11CtrHeapBaseE");
extern "C" void YellowAuto_0044c3e0(uint8_t* arg0, void* arg1) {
*(uint32_t*)arg0 = *(uint32_t*)0x0044c448; arg0 = FUN_0057f9cc(arg0 + 4, arg1, 0x32); arg0 = FUN_0057f9cc(arg0 + 0x14, arg1, 0x32); arg0 = FUN_0057f9cc(arg0 + 0x14, arg1, 0x64); arg0 = FUN_0057f9cc(arg0 + 0x14, arg1, 0x32); arg0 = JoinFestaRecordRankingManager(arg0 + 0x18); *(uint8_t*)(*(uint32_t*)0x0044c44c + (uint32_t)arg0 - 0x58) = 0;
}
#endif
