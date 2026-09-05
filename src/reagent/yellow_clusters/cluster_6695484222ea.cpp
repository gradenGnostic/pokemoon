// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0030CCB0
extern "C" bool YellowAuto_0030ccb0(const uint8_t* arg0) __asm__("_ZN3app4util23AppUtilFileControlState5IsEndEv");
extern "C" bool YellowAuto_0030ccb0(const uint8_t* arg0) {
return arg0[0x1f] == 0x5 || arg0[0x1f] == 0x0;
}
#endif
