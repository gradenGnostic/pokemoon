// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00357688
extern "C" uint8_t* YellowAuto_00357688() __asm__("_ZN4gfl24base17SingletonAccessorIN6NetLib5Error23NijiNetworkErrorManagerEE11GetInstanceEv");
extern "C" uint8_t* YellowAuto_00357688() {
return **(uint8_t***)0x357694;
}
#endif
