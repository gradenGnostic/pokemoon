// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x001601E4
extern "C" void YellowAuto_001601e4(uint8_t* arg0, void* arg1) __asm__("_ZN14PokeRegulationC1EPN4gfl24heap11CtrHeapBaseE");
extern "C" void YellowAuto_001601e4(uint8_t* arg0, void* arg1) {
*(uint32_t *)arg0 = *(const uint32_t *)0x001601FC; *(void **)(arg0 + 4) = arg1; *(uint32_t *)(arg0 + 8) = 0;
}
#endif
