// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003D6874
extern "C" bool YellowAuto_003d6874(const uint8_t* arg0) __asm__("_ZN6NetLib3P2P20P2pConnectionManager16IsConnectSuccessEv");
extern "C" bool YellowAuto_003d6874(const uint8_t* arg0) {
return arg0[0x14] == 0x0b;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003D6BA4
extern "C" bool YellowAuto_003d6ba4(const uint8_t* arg0) __asm__("_ZN6NetLib3P2P20P2pConnectionManager19IsDisconnectSuccessEv");
extern "C" bool YellowAuto_003d6ba4(const uint8_t* arg0) {
return arg0[0x18d] == 0x01 || arg0[0x14] == 0x11;
}
#endif
