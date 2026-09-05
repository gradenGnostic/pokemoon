// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00302DD0
extern "C" uint32_t* YellowAuto_00302dd0(uint32_t* arg0, uint32_t* arg1) __asm__("_ZSt3maxIjERKT_S2_S2_");
extern "C" uint32_t* YellowAuto_00302dd0(uint32_t* arg0, uint32_t* arg1) {
if (*arg0 < *arg1)
  arg0 = arg1;
return arg0;
}
#endif
