// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0015ED7C
void GFLassert();
extern "C" void YellowAuto_0015ed7c(uint8_t* arg0, void* arg1) __asm__("_ZN14PokeRegulation13SetRegulationEP10Regulation");
extern "C" void YellowAuto_0015ed7c(uint8_t* arg0, void* arg1) {
if (*(uint32_t*)(arg0 + 8) != 0) GFLassert(); else *(uint32_t*)(arg0 + 8) = (uint32_t)arg1;
}
#endif
