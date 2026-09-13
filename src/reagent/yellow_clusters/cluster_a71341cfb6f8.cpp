// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0031F154
extern "C" uint32_t YellowAuto_0031f154() __asm__("_ZN3pml9PokeParty27GetSerializeShortStructSizeEv");
extern "C" uint32_t YellowAuto_0031f154() {
return *(const uint32_t*)0x0031F15Cu;
}
#endif
