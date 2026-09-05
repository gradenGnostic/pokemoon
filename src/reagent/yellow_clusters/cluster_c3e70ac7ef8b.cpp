// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003576E8
extern void** DAT_003576f4;
extern "C" void* YellowAuto_003576e8() __asm__("_ZN4gfl24base17SingletonAccessorIN7gflnet212ServerClient26ServerClientRequestManagerEE11GetInstanceEv");
extern "C" void* YellowAuto_003576e8() {
return *DAT_003576f4;
}
#endif
