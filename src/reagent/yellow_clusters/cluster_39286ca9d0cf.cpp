// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0031222C
extern "C" void* YellowAuto_0031222c(void* arg0) __asm__("_ZN3app4util9ScrollBarD1Ev");
extern "C" void* YellowAuto_0031222c(void* arg0) {
if (*(uint32_t *)arg0 != 0)
  ((void (*)(void *))(*(uint32_t *)(*(uint32_t *)arg0 + 4)))(arg0);
return arg0;
}
#endif
