// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0045F560
void FUN_0045f3d8(void*, int32_t, int32_t, int32_t);
extern "C" uint8_t* YellowAuto_0045f560(uint8_t* arg0, int32_t arg1, int32_t arg2, int32_t arg3) __asm__("_ZN9NetAppLib6System19ApplicationWorkBaseC1Eijj");
extern "C" uint8_t* YellowAuto_0045f560(uint8_t* arg0, int32_t arg1, int32_t arg2, int32_t arg3) {
*(uint32_t *)(arg0 + 0x4) = 0; *(uint32_t *)(arg0 + 0x8) = 0; *(uint32_t *)(arg0 + 0xc) = 0; *(uint32_t *)(arg0 + 0x10) = 0; *(uint32_t *)(arg0 + 0x14) = 0; *(uint32_t *)(arg0 + 0x18) = 0xffffffff; *(uint32_t *)(arg0 + 0x1c) = 0xffffffff; *(uint32_t *)(arg0 + 0x20) = 0xffffffff; arg0[0x24] = 0; *(uint32_t *)(arg0 + 0x28) = 0; *(uint32_t *)(arg0 + 0x2c) = 0; *(uint32_t *)(arg0 + 0x30) = 0; *(uint32_t *)(arg0 + 0x34) = 0; *(uint32_t *)(arg0 + 0x38) = 0; FUN_0045f3d8((void*)arg0, arg1, arg2, arg3); return arg0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0045F5C4
void FUN_0045f3d8(void*, int32_t, int32_t, int32_t);
extern "C" uint8_t* YellowAuto_0045f5c4(uint8_t* arg0, int32_t arg1, int32_t arg2) __asm__("_ZN9NetAppLib6System19ApplicationWorkBaseC1Ejj");
extern "C" uint8_t* YellowAuto_0045f5c4(uint8_t* arg0, int32_t arg1, int32_t arg2) {
*(uint32_t *)(arg0 + 0x4) = 0; *(uint32_t *)(arg0 + 0x8) = 0; *(uint32_t *)(arg0 + 0xc) = 0; *(uint32_t *)(arg0 + 0x10) = 0; *(uint32_t *)(arg0 + 0x14) = 0; *(uint32_t *)(arg0 + 0x18) = 0xffffffff; *(uint32_t *)(arg0 + 0x1c) = 0xffffffff; *(uint32_t *)(arg0 + 0x20) = 0xffffffff; arg0[0x24] = 0; *(uint32_t *)(arg0 + 0x28) = 0; *(uint32_t *)(arg0 + 0x2c) = 0; *(uint32_t *)(arg0 + 0x30) = 0; *(uint32_t *)(arg0 + 0x34) = 0; *(uint32_t *)(arg0 + 0x38) = 0; FUN_0045f3d8((void*)arg0, 5, arg1, arg2); return arg0;
}
#endif
