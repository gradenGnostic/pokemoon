// Autonomous Qwen reconstruction approved by GPT-5.4 mini.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0031679C
extern "C" uint32_t YellowAuto_0031679c(uint8_t arg0) __asm__("_ZN3pml8personal9GetMinExpEh");
extern "C" uint32_t YellowAuto_0031679c(uint8_t arg0) {
if (arg0 > 100) arg0 = 100; return *(uint32_t *)(*(int *)(*(int*)0x3167b4 + 0x14) + (uint32_t)arg0 * 4 + 8);
}
#endif

// Autonomous Qwen reconstruction approved by GPT-5.4 mini.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00315410
const uint8_t* DAT_0031541c;
extern "C" uint8_t YellowAuto_00315410() __asm__("_ZN3pml8personal14GetWazaOboeNumEv");
extern "C" uint8_t YellowAuto_00315410() {
return *(uint8_t *)(*(int *)(DAT_0031541c + 0x1c) + 8);
}
#endif
