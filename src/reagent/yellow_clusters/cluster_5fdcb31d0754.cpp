// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00301904
void _C_unlink(void*);
extern "C" uint8_t* YellowAuto_00301904(uint8_t* arg0) __asm__("_ZNSsD2Ev");
extern "C" uint8_t* YellowAuto_00301904(uint8_t* arg0) {
_C_unlink(arg0); return arg0;
}
#endif
