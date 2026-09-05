// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00103D4A
uint8_t* sub_103d56(uint8_t*);
void operator delete(void*);
extern "C" void YellowAuto_00103d4a(uint8_t* arg0) __asm__("_ZNSt8messagesIcED0Ev");
extern "C" void YellowAuto_00103d4a(uint8_t* arg0) {
operator delete(sub_103d56(arg0));
}
#endif
