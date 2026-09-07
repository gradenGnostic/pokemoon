// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003D25C8
extern "C" bool YellowAuto_003d25c8() __asm__("_ZN6NetLib17NijiNetworkSystem18IsWLANSwitchEnableEv");
extern "C" bool YellowAuto_003d25c8() {
return *reinterpret_cast<const uint8_t*>(0x250BCCu + 0x67) != 7;
}
#endif
