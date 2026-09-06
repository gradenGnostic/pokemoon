// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00103D40
void operator_delete(void*);
extern "C" void YellowAuto_00103d40(uint8_t* arg0) __asm__("_ZNSt7collateIcED0Ev");
extern "C" void YellowAuto_00103d40(uint8_t* arg0) {
operator_delete(arg0);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00103D48
extern "C" void YellowAuto_00103d48(uint8_t* arg0) __asm__("_ZNSt7collateIcED2Ev");
extern "C" void YellowAuto_00103d48(uint8_t* arg0) {
return;
}
#endif
