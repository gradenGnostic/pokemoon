// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00306E2C
void GFLassertStop(uint32_t, uint32_t, uint32_t);
void GetInstance();
extern "C" void YellowAuto_00306e2c(uint32_t arg0, uint8_t* arg1) __asm__("_ZN3app4util12FileAccessor9FileCloseEjPN4gfl24heap11CtrHeapBaseE");
extern "C" void YellowAuto_00306e2c(uint32_t arg0, uint8_t* arg1) {
if (arg1 == (uint8_t*)0) { GFLassertStop(0, 0, 0); } else { ((uint32_t (*)(uint8_t*))(*(uint32_t*)(*(uint32_t*)arg1 + 0x34)))(arg1); } (void)arg0; GetInstance();
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00306D74
void GetInstance();
extern "C" void YellowAuto_00306d74(uint32_t arg0, uint8_t* arg1, bool arg2, uint8_t arg3) __asm__("_ZN3app4util12FileAccessor8FileOpenEjPN4gfl24heap11CtrHeapBaseEbNS2_2fs10ToolDefine11ArcLangType3TagE");
extern "C" void YellowAuto_00306d74(uint32_t arg0, uint8_t* arg1, bool arg2, uint8_t arg3) {
if (arg2) { ((uint32_t (*)(uint8_t*))(*(uint32_t*)(*(uint32_t*)arg1 + 0x34)))(arg1); } ((uint32_t (*)(uint8_t*))(*(uint32_t*)(*(uint32_t*)arg1 + 0x34)))(arg1); (void)arg0; (void)arg3; GetInstance();
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00306A2C
void GetInstance();
extern "C" void YellowAuto_00306a2c(uint32_t arg0, uint8_t* arg1, bool arg2, uint8_t arg3) __asm__("_ZN3app4util12FileAccessor12FileOpenSyncEjPN4gfl24heap11CtrHeapBaseEbNS2_2fs10ToolDefine11ArcLangType3TagE");
extern "C" void YellowAuto_00306a2c(uint32_t arg0, uint8_t* arg1, bool arg2, uint8_t arg3) {
if (arg2) { ((uint32_t (*)(uint8_t*))(*(uint32_t*)(*(uint32_t*)arg1 + 0x34)))(arg1); } ((uint32_t (*)(uint8_t*))(*(uint32_t*)(*(uint32_t*)arg1 + 0x34)))(arg1); (void)arg0; (void)arg3; GetInstance();
}
#endif
