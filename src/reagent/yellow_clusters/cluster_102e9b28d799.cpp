// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003DED8C
extern "C" void YellowAuto_003ded8c(uint8_t* arg0) __asm__("_ZN6NetLib5Error16NijiNetworkErrorC1Ev");
extern "C" void YellowAuto_003ded8c(uint8_t* arg0) {
*(uint8_t*)(arg0 + 4) = 1; *(uint8_t*)(arg0 + 5) = 0; *(uint8_t*)(arg0 + 6) = 1; *(uint32_t*)(arg0 + 8) = 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003DE400
void GFLassert(uint32_t, uint32_t, uint32_t, uint32_t);
extern "C" void YellowAuto_003de400(uint8_t* arg0) __asm__("_ZN6NetLib5Error16NijiNetworkError11SetNotErrorEv");
extern "C" void YellowAuto_003de400(uint8_t* arg0) {
if (*(uint8_t*)(arg0 + 4) == 3) { GFLassert(0, 0, 0, 0); return; } *(uint8_t*)(arg0 + 4) = 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003DE8C8
uint8_t FUN_003dea4c(uint8_t*, uint32_t);
extern "C" void YellowAuto_003de8c8(uint8_t* arg0, uint32_t arg1) __asm__("_ZN6NetLib5Error16NijiNetworkError18SetResultErrorCodeEj");
extern "C" void YellowAuto_003de8c8(uint8_t* arg0, uint32_t arg1) {
*(uint8_t*)(arg0 + 5) = 11; *(uint8_t*)(arg0 + 4) = FUN_003dea4c(arg0, 11); *(uint32_t*)(arg0 + 8) = arg1; *(uint8_t*)(arg0 + 6) = 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003DE42C
uint8_t FUN_003dea4c(uint8_t*, uint32_t);
uint32_t FUN_001d1e5c(const void*);
extern "C" void YellowAuto_003de42c(uint8_t* arg0, const void* arg1) __asm__("_ZN6NetLib5Error16NijiNetworkError12SetResultNexERKN2nn3nex7qResultE");
extern "C" void YellowAuto_003de42c(uint8_t* arg0, const void* arg1) {
*(uint8_t*)(arg0 + 5) = 10; *(uint8_t*)(arg0 + 4) = FUN_003dea4c(arg0, 10); *(uint8_t*)(arg0 + 6) = 0; *(uint32_t*)(arg0 + 8) = FUN_001d1e5c(arg1);
}
#endif
