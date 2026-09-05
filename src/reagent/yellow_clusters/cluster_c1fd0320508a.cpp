// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0010328C
void helper_00301904(uint8_t *arg0);
void helper_00103280(uint8_t *arg0);
extern "C" void YellowAuto_0010328c(uint8_t* arg0) __asm__("_ZN4__rw23__rw_numpunct_impl_dataIcED2Ev");
extern "C" void YellowAuto_0010328c(uint8_t* arg0) {
helper_00301904(arg0 + 12); helper_00301904(arg0 + 8); helper_00103280(arg0);
}
#endif
