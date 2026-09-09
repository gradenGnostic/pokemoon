// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0017422C
uint32_t helper0(uint32_t, uint32_t);
extern "C" uint32_t YellowAuto_0017422c(uint32_t arg0, uint32_t arg1) __asm__("_ZN2nn3dsp3CTR14FlushDataCacheEjj");
extern "C" uint32_t YellowAuto_0017422c(uint32_t arg0, uint32_t arg1) {
return helper0(arg0, arg1);
}
#endif
