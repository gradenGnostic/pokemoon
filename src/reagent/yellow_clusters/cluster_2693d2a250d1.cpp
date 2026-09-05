// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0045ED4C
void FUN_003f4b4c(void);
extern "C" uint8_t* YellowAuto_0045ed4c(uint8_t* arg0) __asm__("_ZN9NetAppLib6System15NetAppFrameBaseD1Ev");
extern "C" uint8_t* YellowAuto_0045ed4c(uint8_t* arg0) {
*(uint32_t *)arg0 = *(const uint32_t *)0x0045ED68;
FUN_003f4b4c();
return arg0;
}
#endif
