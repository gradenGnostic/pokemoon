// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003E492C
void sub_0036aed4(uint8_t*);
extern "C" void YellowAuto_003e492c(uint8_t* arg0) __asm__("_ZN6System11EnvAccessor6UpdateEv");
extern "C" void YellowAuto_003e492c(uint8_t* arg0) {
sub_0036aed4(arg0 + 8);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003E4B64
void sub_0036bbe4(uint8_t*);
extern "C" void YellowAuto_003e4b64(uint8_t* arg0) __asm__("_ZN6System11EnvAccessor9TerminateEv");
extern "C" void YellowAuto_003e4b64(uint8_t* arg0) {
sub_0036bbe4(arg0 + 8);
*(uint32_t*)(arg0 + 4) = 0;
}
#endif
