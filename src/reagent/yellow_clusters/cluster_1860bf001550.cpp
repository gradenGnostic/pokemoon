// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003DF43C
extern "C" void YellowAuto_003df43c(uint8_t* arg0) __asm__("_ZN6NetLib5Error23NijiNetworkErrorManager15NotNotifySpanOnEv");
extern "C" void YellowAuto_003df43c(uint8_t* arg0) {
arg0[0x2E] = 1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003DF4F8
extern "C" void YellowAuto_003df4f8(uint8_t* arg0) __asm__("_ZN6NetLib5Error23NijiNetworkErrorManager16NotNotifySpanOffEv");
extern "C" void YellowAuto_003df4f8(uint8_t* arg0) {
arg0[0x2E] = 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003DF580
extern "C" void YellowAuto_003df580(uint8_t* arg0) __asm__("_ZN6NetLib5Error23NijiNetworkErrorManager20P2pDisconnectSpanOffEv");
extern "C" void YellowAuto_003df580(uint8_t* arg0) {
arg0[0x2C] = 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003DF5E0
extern "C" void YellowAuto_003df5e0(uint8_t* arg0) __asm__("_ZN6NetLib5Error23NijiNetworkErrorManager31UnregistForceDisconnectListenerEv");
extern "C" void YellowAuto_003df5e0(uint8_t* arg0) {
*(uint32_t *)(arg0 + 0x28) = 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A2D24
extern "C" bool YellowAuto_004a2d24(const uint8_t* arg0) __asm__("_ZNK6NetLib5Error23NijiNetworkErrorManager12IsFatalErrorEv");
extern "C" bool YellowAuto_004a2d24(const uint8_t* arg0) {
return (arg0[0x04] == 1 || arg0[0x04] == 2) && arg0[0x08] == 4;
}
#endif
