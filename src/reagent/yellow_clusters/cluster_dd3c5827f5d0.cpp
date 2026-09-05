// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003E5BC4
extern "C" uint8_t* YellowAuto_003e5bc4(uint8_t* arg0) __asm__("_ZN6System17DeviceTurnWatcherD1Ev");
extern "C" uint8_t* YellowAuto_003e5bc4(uint8_t* arg0) {
(*(void (**)(void *, int32_t))(*(uint32_t *)(*(uint32_t *)arg0 + 16)))((void *)(*(uint32_t *)arg0), 0); return arg0;
}
#endif
