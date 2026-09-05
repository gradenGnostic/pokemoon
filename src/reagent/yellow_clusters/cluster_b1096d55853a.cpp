// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003C2390
void FUN_003c128c(uint8_t* arg0, uint32_t arg1, uint32_t arg2, void* arg3);
extern "C" uint8_t* YellowAuto_003c2390(uint8_t* arg0, void* arg1) __asm__("_ZN5print7WordSetC1EPN4gfl24heap11CtrHeapBaseE");
extern "C" uint8_t* YellowAuto_003c2390(uint8_t* arg0, void* arg1) {
*(uint32_t *)arg0 = 0; *(uint32_t *)(arg0 + 8) = 0; *(uint8_t *)(arg0 + 0x10) = 0; *(uint32_t *)(arg0 + 0x14) = 0; FUN_003c128c(arg0, 8, 0x40, arg1); return arg0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003C23C8
void FUN_003c128c(uint8_t* arg0, uint32_t arg1, uint32_t arg2, void* arg3);
extern "C" uint8_t* YellowAuto_003c23c8(uint8_t* arg0, uint32_t arg1, uint32_t arg2, void* arg3) __asm__("_ZN5print7WordSetC1EjjPN4gfl24heap11CtrHeapBaseE");
extern "C" uint8_t* YellowAuto_003c23c8(uint8_t* arg0, uint32_t arg1, uint32_t arg2, void* arg3) {
*(uint32_t *)arg0 = 0; *(uint32_t *)(arg0 + 8) = 0; *(uint8_t *)(arg0 + 0x10) = 0; *(uint32_t *)(arg0 + 0x14) = 0; FUN_003c128c(arg0, arg1, arg2, arg3); return arg0;
}
#endif
