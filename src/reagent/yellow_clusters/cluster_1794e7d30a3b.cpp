// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00163B48
extern "C" uint8_t* YellowAuto_00163b48(uint8_t* arg0) __asm__("_ZN2mw3qre9QREncoderC1Ev");
extern "C" uint8_t* YellowAuto_00163b48(uint8_t* arg0) {
*(uint32_t *)arg0 = *(const uint32_t *)0x00163B6C;
return arg0;
}
#endif
