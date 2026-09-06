// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002348B8
extern "C" uint32_t YellowAuto_002348b8() __asm__("_ZN2nn3nex6Buffer20GetDefaultBufferSizeEv");
extern "C" uint32_t YellowAuto_002348b8() {
return *(uint32_t *)(*(uint32_t *)0x002348c4 + 0x148);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0023448C
uint32_t FUN_002347cc(uint8_t* arg0, uint32_t arg1);
extern "C" void YellowAuto_0023448c(uint8_t* arg0, uint32_t arg1, uint8_t arg2) __asm__("_ZN2nn3nex6Buffer10InitializeEjh");
extern "C" void YellowAuto_0023448c(uint8_t* arg0, uint32_t arg1, uint8_t arg2) {
arg0[0x1c] = arg2; *(uint32_t *)(arg0 + 0x10) = 0; *(uint32_t *)(arg0 + 0x14) = arg1; *(uint32_t *)(arg0 + 0x18) = 0; *(uint32_t *)(arg0 + 0xc) = FUN_002347cc(arg0, arg1); arg0[0x1d] = 0; arg0[0x1e] = 0;
}
#endif
