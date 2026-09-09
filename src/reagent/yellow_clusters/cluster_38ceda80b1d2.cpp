// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00302F3C
extern "C" void YellowAuto_00302f3c(uint8_t* arg0) __asm__("_ZN4__rw12__string_refIcSt11char_traitsIcESaIcEE10_C_inc_refEv");
extern "C" void YellowAuto_00302f3c(uint8_t* arg0) {
if (arg0 != (uint8_t*)*(uint32_t*)0x302F4C) ++*(uint32_t*)arg0;
}
#endif
