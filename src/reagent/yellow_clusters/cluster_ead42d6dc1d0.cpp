// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00103A5C
uint8_t* sub_00302408(uint8_t* arg0);
void operator delete(void* arg0);
extern "C" void YellowAuto_00103a5c(uint8_t* arg0) __asm__("_ZNSt12ctype_bynameIcED0Ev");
extern "C" void YellowAuto_00103a5c(uint8_t* arg0) {
operator delete(sub_00302408(arg0));
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00103A68
uint8_t* sub_00302408(uint8_t* arg0);
extern "C" void YellowAuto_00103a68(uint8_t* arg0) __asm__("_ZNSt12ctype_bynameIcED2Ev");
extern "C" void YellowAuto_00103a68(uint8_t* arg0) {
sub_00302408(arg0);
}
#endif
