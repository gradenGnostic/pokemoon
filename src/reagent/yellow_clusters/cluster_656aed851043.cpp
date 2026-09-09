// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002FD28C
extern "C" uint32_t YellowAuto_002fd28c(uint32_t arg0, bool arg1) __asm__("_ZN3app4tool27AppToolTrainerIconRendering20GetUseSystemHeapSizeEjb");
extern "C" uint32_t YellowAuto_002fd28c(uint32_t arg0, bool arg1) {
return arg0 * (arg1 ? 0xC800U : 0xD000U);
}
#endif
