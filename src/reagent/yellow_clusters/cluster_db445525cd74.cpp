// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003E4BC0
uint8_t* sub_0036be9c(uint8_t* arg0);
extern "C" uint8_t* YellowAuto_003e4bc0(uint8_t* arg0) __asm__("_ZN6System11EnvAccessorD1Ev");
extern "C" uint8_t* YellowAuto_003e4bc0(uint8_t* arg0) {
*(uint32_t *)arg0 = 0x003e4bd8; sub_0036be9c(arg0 + 8); return arg0;
}
#endif
