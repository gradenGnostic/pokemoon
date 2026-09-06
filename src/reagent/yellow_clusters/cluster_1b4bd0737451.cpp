// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00103D04
void operator delete(void*);
extern "C" void YellowAuto_00103d04(uint8_t* arg0) __asm__("_ZNSt6locale5facetD0Ev");
extern "C" void YellowAuto_00103d04(uint8_t* arg0) {
operator delete(arg0);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00103D0C
extern "C" void YellowAuto_00103d0c(uint8_t* arg0) __asm__("_ZNSt6locale5facetD2Ev");
extern "C" void YellowAuto_00103d0c(uint8_t* arg0) {
return;
}
#endif
