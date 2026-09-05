// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00287F9C
extern "C" uint32_t* YellowAuto_00287f9c(uint32_t* arg0, uint32_t* arg1, uint32_t* arg2) __asm__("_ZN2nw2ut8internal12LinkListImpl6insertENS2_8iteratorEPNS0_12LinkListNodeE");
extern "C" uint32_t* YellowAuto_00287f9c(uint32_t* arg0, uint32_t* arg1, uint32_t* arg2) {
uint32_t* next = (uint32_t*)arg1[1]; arg2[0] = (uint32_t)arg1; arg2[1] = (uint32_t)next; arg1[1] = (uint32_t)arg2; *next = (uint32_t)arg2; arg0[0] = arg0[0] + 1; return arg2;
}
#endif
