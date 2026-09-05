// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002EBEB4
uint8_t* FUN_002e7fb8(uint8_t*, uint8_t*, uint32_t, uint32_t);
extern "C" void YellowAuto_002ebeb4(uint8_t* arg0, uint8_t* arg1, bool arg2) __asm__("_ZN3app4tool12PaneListViewC1EPNS_4util4HeapEb");
extern "C" void YellowAuto_002ebeb4(uint8_t* arg0, uint8_t* arg1, bool arg2) {
FUN_002e7fb8(arg0, arg1, *(uint32_t *)(arg1 + 0x14), *(uint32_t *)(arg1 + 0x14)); *(uint32_t *)(arg0 + 0x88) = 0; *(uint32_t *)(arg0 + 0x0) = *(uint32_t *)0x002ebef8; *(uint32_t *)(arg0 + 0x80) = *(uint32_t *)0x002ebef8 + 0x78; *(uint8_t **)(arg0 + 0x84) = arg1; *(uint32_t *)(arg0 + 0x8c) = 0; *(uint32_t *)(arg0 + 0x90) = 0; *(uint8_t *)(arg0 + 0x94) = arg2;
}
#endif
