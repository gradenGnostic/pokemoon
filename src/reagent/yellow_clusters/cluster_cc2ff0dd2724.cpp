// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0030F44C
extern "C" void YellowAuto_0030f44c(uint8_t* arg0) __asm__("_ZN3app4util4HeapC1Ev");
extern "C" void YellowAuto_0030f44c(uint8_t* arg0) {
*(uint32_t *)(arg0 + 4) = 0; *(uint32_t *)arg0 = *(uint32_t *)0x0030f47c; *(uint32_t *)(arg0 + 8) = 0; *(uint32_t *)(arg0 + 12) = 0; *(uint32_t *)(arg0 + 16) = 0; *(uint32_t *)(arg0 + 20) = 0; *(uint32_t *)(arg0 + 24) = 0; *(uint32_t *)(arg0 + 28) = 0; *(uint8_t *)(arg0 + 32) = 0;
}
#endif
