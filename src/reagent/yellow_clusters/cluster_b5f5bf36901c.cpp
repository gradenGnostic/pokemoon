// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0035F21C
extern "C" void YellowAuto_0035f21c(uint8_t* arg0) __asm__("_ZN4gfl26thread6Thread4WaitEv");
extern "C" void YellowAuto_0035f21c(uint8_t* arg0) {
((void (*)(void *))(*(void **)((uint8_t *)(*(void **)(*(void **)(arg0 + 4))) + 0x18)))(*(void **)(arg0 + 4));
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0035F20C
extern "C" void YellowAuto_0035f20c(uint8_t* arg0) __asm__("_ZN4gfl26thread6Thread4KillEv");
extern "C" void YellowAuto_0035f20c(uint8_t* arg0) {
((void (*)(void *))(*(void **)((uint8_t *)(*(void **)(*(void **)(arg0 + 4))) + 0x2C)))(*(void **)(arg0 + 4));
}
#endif
