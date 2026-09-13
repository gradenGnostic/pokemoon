// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0045B0A0
extern "C" void YellowAuto_0045b0a0(void* arg0) __asm__("_ZN9NetAppLib2UI25NetAppRegulationUpperViewD1Ev");
extern "C" void YellowAuto_0045b0a0(void* arg0) {
((void (*)(void *))0x004611D8)(arg0);
}
#endif
