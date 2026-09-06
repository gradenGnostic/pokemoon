// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0035DF90
void FUN_0029af40(void*, void*);
extern "C" void YellowAuto_0035df90(uint8_t* arg0, void* arg1) __asm__("_ZN4gfl26Effect6System14KillEmitterSetEPNS0_10EmitterSetE");
extern "C" void YellowAuto_0035df90(uint8_t* arg0, void* arg1) {
FUN_0029af40((void*)(*(uint32_t*)(arg0 + 4)), arg1);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0035DF78
void FUN_0029ae5c(void*, void*, void*, int32_t, void*);
extern "C" void YellowAuto_0035df78(uint8_t* arg0, void* arg1, void* arg2, int32_t arg3, void* arg4) __asm__("_ZN4gfl26Effect6System13EntryResourceEPN2nw3eft4HeapEPviPNS3_7EnvInfoE");
extern "C" void YellowAuto_0035df78(uint8_t* arg0, void* arg1, void* arg2, int32_t arg3, void* arg4) {
FUN_0029ae5c((void*)(*(uint32_t*)(arg0 + 4)), arg1, arg2, arg3, arg4);
}
#endif
