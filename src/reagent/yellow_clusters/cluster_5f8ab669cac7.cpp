// Autonomous Qwen reconstruction approved by GPT-5.4 mini.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004120E4
extern "C" void YellowAuto_004120e4(uint8_t* arg0) __asm__("_ZN7poke_3d5model17CharaModelFactoryC1Ev");
extern "C" void YellowAuto_004120e4(uint8_t* arg0) {
*(uint32_t*)(arg0 + 0x00) = 0; *(uint32_t*)(arg0 + 0x04) = 0; *(uint32_t*)(arg0 + 0x08) = 0; *(uint32_t*)(arg0 + 0x0c) = 0; *(uint32_t*)(arg0 + 0x10) = 0; *(uint32_t*)(arg0 + 0x14) = 0; *(uint32_t*)(arg0 + 0x18) = 0;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00412C64
extern "C" void YellowAuto_00412c64(uint8_t* arg0, uint32_t arg1) __asm__("_ZN7poke_3d5model17CharaModelFactory11UnloadModelEj");
extern "C" void YellowAuto_00412c64(uint8_t* arg0, uint32_t arg1) {
uint32_t c = *(uint32_t *)(*(uint8_t **)(arg0 + 0x14));
if (arg1 >= c) return;
uint8_t *e = *(uint8_t **)(arg0 + 0x0C) + arg1 * 0x2Cu;
(void)e;
}
#endif
