// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00399F38
extern "C" void YellowAuto_00399f38(uint8_t* arg0, void* arg1, void* arg2, void* arg3) __asm__("_ZN5Field9EventList20EventListDataManagerC1EPN7GameSys11GameManagerEPN4gfl24heap11CtrHeapBaseEPNS5_2fs16AsyncFileManagerE");
extern "C" void YellowAuto_00399f38(uint8_t* arg0, void* arg1, void* arg2, void* arg3) {
*(void**)(arg0 + 0) = arg2; *(void**)(arg0 + 8) = arg1; *(void**)(arg0 + 4) = arg3; *(arg0 + 16) = 0; *(uint32_t*)(arg0 + 20) = 0; *(uint32_t*)(arg0 + 24) = 0; *(uint32_t*)(arg0 + 28) = 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0049EF80
extern "C" const uint8_t* YellowAuto_0049ef80(const uint8_t* arg0, uint32_t arg1) __asm__("_ZNK5Field9EventList20EventListDataManager11GetMainListEj");
extern "C" const uint8_t* YellowAuto_0049ef80(const uint8_t* arg0, uint32_t arg1) {
if (arg1 < *(const uint32_t*)(arg0 + 20)) return *(const uint8_t**)(arg0 + 24) + arg1 * 20; return *(const uint8_t**)(arg0 + 24);
}
#endif
