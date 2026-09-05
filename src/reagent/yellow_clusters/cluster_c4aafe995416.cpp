// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003576A8
extern "C" uint32_t YellowAuto_003576a8() __asm__("_ZN4gfl24base17SingletonAccessorIN6System18SystemEventManagerEE11GetInstanceEv");
extern "C" uint32_t YellowAuto_003576a8() {
return *(uint32_t*)0x003576b4;
}
#endif
