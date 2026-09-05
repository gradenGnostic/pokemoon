// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00407AB0
extern const int8_t* DAT_00407abc;
extern "C" int32_t YellowAuto_00407ab0() __asm__("_ZN7gflnet23p2p7NetGame8IsMasterEv");
extern "C" int32_t YellowAuto_00407ab0() {
return (int32_t)*DAT_00407abc;
}
#endif
