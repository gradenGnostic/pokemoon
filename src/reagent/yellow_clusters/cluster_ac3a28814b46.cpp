// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00103D64
void _ZNSt8numpunctIcED1Ev(uint8_t*);
void operator delete(void*);
extern "C" void YellowAuto_00103d64(uint8_t* arg0) __asm__("_ZNSt8numpunctIcED0Ev");
extern "C" void YellowAuto_00103d64(uint8_t* arg0) {
_ZNSt8numpunctIcED1Ev(arg0); operator delete(arg0);
}
#endif
