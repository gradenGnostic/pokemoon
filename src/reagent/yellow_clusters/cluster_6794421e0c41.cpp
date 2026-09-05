// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00357718
extern "C" void* YellowAuto_00357718() __asm__("_ZN4gfl24base17SingletonAccessorIN7gflnet23nex20NexMatchMakingClientEE11GetInstanceEv");
extern "C" void* YellowAuto_00357718() {
return *(void * const *)0x00357724;
}
#endif
