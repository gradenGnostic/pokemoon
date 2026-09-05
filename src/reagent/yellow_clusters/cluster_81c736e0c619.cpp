// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003577C8
extern "C" void* YellowAuto_003577c8() __asm__("_ZN4gfl24base17SingletonAccessorINS_4Fade11FadeManagerEE11GetInstanceEv");
extern "C" void* YellowAuto_003577c8() {
return (void*)*(uint32_t*)0x003577d4;
}
#endif
