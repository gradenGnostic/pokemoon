// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A2D4C
extern "C" bool YellowAuto_004a2d4c(const uint8_t* arg0) __asm__("_ZNK6NetLib5Error23NijiNetworkErrorManager13IsSessionLeftEv");
extern "C" bool YellowAuto_004a2d4c(const uint8_t* arg0) {
if (*(arg0 + 8) == 0 && (*(arg0 + 9) == 12 || *(arg0 + 9) == 4)) return true; return false;
}
#endif
