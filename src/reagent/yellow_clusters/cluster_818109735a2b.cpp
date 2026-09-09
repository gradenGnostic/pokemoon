// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00103B3E
void func_00103b4c(uint8_t*);
void func_0030181c(void*);
extern "C" void YellowAuto_00103b3e(uint8_t* arg0) __asm__("_ZNSt14collate_bynameIcED0Ev");
extern "C" void YellowAuto_00103b3e(uint8_t* arg0) {
func_00103b4c(arg0); func_0030181c(arg0);
}
#endif
