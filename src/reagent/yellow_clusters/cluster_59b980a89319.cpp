// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00339414
extern uint32_t DAT_0033943c;
extern uint32_t DAT_00339438;
extern "C" void YellowAuto_00339414(uint8_t* arg0) __asm__("_ZN4gfl215renderingengine8renderer4util25StretchBltFrameBufferPathC1Ev");
extern "C" void YellowAuto_00339414(uint8_t* arg0) {
*reinterpret_cast<uint32_t*>(arg0) = DAT_0033943c; *reinterpret_cast<uint32_t*>(arg0 + 4) = 0u; *reinterpret_cast<uint32_t*>(arg0 + 8) = 0u; *reinterpret_cast<uint32_t*>(arg0 + 12) = DAT_00339438; *reinterpret_cast<uint32_t*>(arg0 + 16) = DAT_00339438;
}
#endif
