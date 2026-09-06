// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0040DCC4
extern "C" void YellowAuto_0040dcc4(uint8_t* arg0, uint32_t arg1) __asm__("_ZN7poke_3d5model10CharaModel14ResetNeckAngleEj");
extern "C" void YellowAuto_0040dcc4(uint8_t* arg0, uint32_t arg1) {
*(float *)(arg0 + 0xf8) = (*(uint32_t *)(arg0 + 0x108) != 0) ? ((((*(float *)(arg0 + 0x100) - *(float *)(arg0 + 0xf8)) * (float)*(uint32_t *)(arg0 + 0x10c)) / (float)*(uint32_t *)(arg0 + 0x108)) + *(float *)(arg0 + 0xf8)) : *(float *)0x0040dd50; *(float *)(arg0 + 0xfc) = (*(uint32_t *)(arg0 + 0x108) != 0) ? ((((*(float *)(arg0 + 0x104) - *(float *)(arg0 + 0xfc)) * (float)*(uint32_t *)(arg0 + 0x10c)) / (float)*(uint32_t *)(arg0 + 0x108)) + *(float *)(arg0 + 0xfc)) : *(float *)0x0040dd50; *(uint32_t *)(arg0 + 0x108) = arg1; *(uint32_t *)(arg0 + 0x10c) = 0; *(float *)(arg0 + 0x100) = *(float *)0x0040dd50; *(float *)(arg0 + 0x104) = *(float *)0x0040dd50;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0040E0D4
uint8_t *BaseModel(uint8_t *, uint32_t, uint32_t, uint32_t);
extern "C" void YellowAuto_0040e0d4(uint8_t* arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3) __asm__("_ZN7poke_3d5model10CharaModelC1Ev");
extern "C" void YellowAuto_0040e0d4(uint8_t* arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3) {
BaseModel(arg0, arg1, arg2, arg3); *(uint32_t *)arg0 = *(uint32_t *)0x0040e144; *(uint32_t *)(arg0 + 0xd8) = 0; *(uint32_t *)(arg0 + 0xf4) = 0xffffffff; *(uint8_t *)(arg0 + 0xdc) = 0; *(uint8_t *)(arg0 + 0xdd) = 0; *(uint8_t *)(arg0 + 0xde) = 0; *(uint8_t *)(arg0 + 0xdf) = 0; *(uint8_t *)(arg0 + 0xe0) = 0; *(uint8_t *)(arg0 + 0xe1) = 0; *(uint32_t *)(arg0 + 0xe4) = 0; *(uint32_t *)(arg0 + 0xe8) = 0; *(uint8_t *)(arg0 + 0xec) = 0; *(uint8_t *)(arg0 + 0xed) = 0; *(uint32_t *)(arg0 + 0xf0) = 0; *(float *)(arg0 + 0xf8) = *(float *)0x0040e148; *(float *)(arg0 + 0xfc) = *(float *)0x0040e148; *(float *)(arg0 + 0x100) = *(float *)0x0040e148; *(float *)(arg0 + 0x104) = *(float *)0x0040e148; *(uint32_t *)(arg0 + 0x108) = 0; *(uint32_t *)(arg0 + 0x10c) = 0; *(uint32_t *)(arg0 + 0x110) = 0;
}
#endif
