// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A2D88
extern "C" bool YellowAuto_004a2d88(const uint8_t* arg0) __asm__("_ZNK6NetLib5Error23NijiNetworkErrorManager7IsErrorEv");
extern "C" bool YellowAuto_004a2d88(const uint8_t* arg0) {
return *(arg0 + 4) == 1 || *(arg0 + 4) == 2;
}
#endif
