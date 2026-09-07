// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0045B680
extern "C" void YellowAuto_0045b680(uint8_t* arg0) __asm__("_ZN9NetAppLib4Util14NetAppDateTimeC1Ev");
extern "C" void YellowAuto_0045b680(uint8_t* arg0) {
*(uint16_t *)(arg0 + 4) = 0;
arg0[6] = 0;
arg0[7] = 0;
arg0[8] = 0;
arg0[9] = 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0045B64C
extern "C" void YellowAuto_0045b64c(uint8_t* arg0, uint16_t arg1, uint8_t arg2, uint8_t arg3, uint8_t arg4, uint8_t arg5) __asm__("_ZN9NetAppLib4Util14NetAppDateTimeC1Ethhhh");
extern "C" void YellowAuto_0045b64c(uint8_t* arg0, uint16_t arg1, uint8_t arg2, uint8_t arg3, uint8_t arg4, uint8_t arg5) {
*(uint16_t *)(arg0 + 4) = arg1;
arg0[6] = arg2;
arg0[7] = arg3;
arg0[8] = arg4;
arg0[9] = arg5;
}
#endif
