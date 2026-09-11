// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003DFAB8
extern "C" void YellowAuto_003dfab8(void* arg0) __asm__("_ZN6NetLib5Error28NijiNetworkErrorDialogStatus28ResetNetworkErrorDialogEventEv");
extern "C" void YellowAuto_003dfab8(void* arg0) {
(void)arg0; *(uint8_t *)(*(uint32_t *)0x3DFAC8) = 0;
}
#endif
