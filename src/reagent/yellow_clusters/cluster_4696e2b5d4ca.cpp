// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00163A50
extern "C" void YellowAuto_00163a50(uint8_t* arg0) __asm__("_ZN2mw3qrd9QRDecoderC1Ev");
extern "C" void YellowAuto_00163a50(uint8_t* arg0) {
*(uint32_t*)arg0 = *(uint32_t*)0x163A5C;
}
#endif
