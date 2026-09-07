// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003DF9B8
extern "C" int32_t YellowAuto_003df9b8() __asm__("_ZN6NetLib5Error28NijiNetworkErrorDialogStatus25IsNetworkErrorDialogEventEv");
extern "C" int32_t YellowAuto_003df9b8() {
return (int32_t)*(int8_t*)*(uint32_t*)0x3DF9C4;
}
#endif
