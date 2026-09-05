// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0038D544
extern "C" void YellowAuto_0038d544(uint8_t* arg0, uint32_t arg1) __asm__("_ZN5Field16ZoneDataAccessorC1EPv");
extern "C" void YellowAuto_0038d544(uint8_t* arg0, uint32_t arg1) {
*(uint32_t *)(arg0 + 4) = arg1;
*(uint32_t *)arg0 = *(const uint32_t *)0x38d554;
}
#endif
