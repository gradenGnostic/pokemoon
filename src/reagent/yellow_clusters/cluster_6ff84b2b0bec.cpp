// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003DF544
extern "C" void YellowAuto_003df544(uint8_t* arg0) __asm__("_ZN6NetLib5Error23NijiNetworkErrorManager18SaveCriticalSpanOnEv");
extern "C" void YellowAuto_003df544(uint8_t* arg0) {
*(arg0 + 0x2D) = 1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003DF550
extern "C" void YellowAuto_003df550(uint8_t* arg0) __asm__("_ZN6NetLib5Error23NijiNetworkErrorManager19P2pDisconnectSpanOnEv");
extern "C" void YellowAuto_003df550(uint8_t* arg0) {
*(arg0 + 0x2C) = 1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003DF55C
extern "C" void YellowAuto_003df55c(uint8_t* arg0) __asm__("_ZN6NetLib5Error23NijiNetworkErrorManager19SaveCriticalSpanOffEv");
extern "C" void YellowAuto_003df55c(uint8_t* arg0) {
*(arg0 + 0x2D) = 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A2D4C
extern "C" bool YellowAuto_004a2d4c(const uint8_t* arg0) __asm__("_ZNK6NetLib5Error23NijiNetworkErrorManager13IsSessionLeftEv");
extern "C" bool YellowAuto_004a2d4c(const uint8_t* arg0) {
if (*(arg0 + 8) == 0 && (*(arg0 + 9) == 12 || *(arg0 + 9) == 4)) return true; return false;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003DF504
extern "C" void YellowAuto_003df504(uint8_t* arg0) __asm__("_ZN6NetLib5Error23NijiNetworkErrorManager16UnregistListenerEv");
extern "C" void YellowAuto_003df504(uint8_t* arg0) {
uint8_t* _h = *(uint8_t**)(arg0 + 0x14); uint8_t* _n = *(uint8_t**)(_h + 0); if (_n == _h) return; uint8_t* _nx = *(uint8_t**)(_n + 0); uint8_t* _pr = *(uint8_t**)(_n + 4); *(uint8_t**)(_nx + 4) = _pr; *(uint8_t**)(_pr + 0) = _nx; *(_n + 12) = 0; *(uint8_t**)(_n + 0) = (uint8_t*)0; *(uint8_t**)(_n + 4) = (uint8_t*)0; *(uint32_t*)(arg0 + 0x24) = *(uint32_t*)(arg0 + 0x24) - 1;
}
#endif
