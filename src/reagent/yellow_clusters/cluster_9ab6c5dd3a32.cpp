// Autonomous Qwen reconstruction approved by GPT-5.4 mini.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00306FAC
extern "C" uint32_t YellowAuto_00306fac(void* arg0) __asm__("_ZN3app4util13GetPaneHelper4PeekEv");
extern "C" uint32_t YellowAuto_00306fac(void* arg0) {
if (*(uint32_t *)((uint8_t *)arg0 + 0xc) == 0)
    return 0;
return *(uint32_t *)((uint8_t *)arg0 + *(uint32_t *)((uint8_t *)arg0 + 0xc) * 4 + 0xc);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00307088
extern "C" void YellowAuto_00307088(void* arg0) __asm__("_ZN3app4util13GetPaneHelper5ClearEv");
extern "C" void YellowAuto_00307088(void* arg0) {
*(uint32_t *)((uint8_t *)arg0 + 0xc) = 0;
*(uint32_t *)((uint8_t *)arg0 + 0x10) = 0;
*(uint32_t *)((uint8_t *)arg0 + 0x14) = 0;
*(uint32_t *)((uint8_t *)arg0 + 0x18) = 0;
*(uint32_t *)((uint8_t *)arg0 + 0x1c) = 0;
*(uint32_t *)((uint8_t *)arg0 + 0x20) = 0;
*(uint32_t *)((uint8_t *)arg0 + 0x24) = 0;
*(uint32_t *)((uint8_t *)arg0 + 0x28) = 0;
*(uint32_t *)((uint8_t *)arg0 + 0x2c) = 0;
}
#endif
