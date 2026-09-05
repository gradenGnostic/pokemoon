// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00357668
extern void** DAT_00357674;
extern "C" void* YellowAuto_00357668() __asm__("_ZN4gfl24base17SingletonAccessorIN6NetLib3P2P20P2pConnectionManagerEE11GetInstanceEv");
extern "C" void* YellowAuto_00357668() {
return *DAT_00357674;
}
#endif
