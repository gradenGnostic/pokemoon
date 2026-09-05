// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00305674
extern "C" void YellowAuto_00305674(uint8_t* arg0, bool arg1) __asm__("_ZN3app4util9ScrollBar13SetDrawEnableEb");
extern "C" void YellowAuto_00305674(uint8_t* arg0, bool arg1) {
arg0[0x1d] = (uint8_t)arg1;
*(uint8_t*)(*(uint32_t*)(*(uint32_t*)arg0 + 4) + 0x44) = (uint8_t)arg1 | (*(uint8_t*)(*(uint32_t*)(*(uint32_t*)arg0 + 4) + 0x44) & 0xfe);
}
#endif
