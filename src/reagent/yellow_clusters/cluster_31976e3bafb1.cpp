// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0033820C
extern "C" void YellowAuto_0033820c(uint8_t* arg0, uint32_t arg1) __asm__("_ZN4gfl215renderingengine8renderer4util17MakeBlurImagePath13ChangeDofTypeENS0_7DofTypeE");
extern "C" void YellowAuto_0033820c(uint8_t* arg0, uint32_t arg1) {
arg0[4] = (uint8_t)arg1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0033823C
extern "C" void YellowAuto_0033823c(uint8_t* arg0, uint32_t arg1) __asm__("_ZN4gfl215renderingengine8renderer4util17MakeBlurImagePath20SetAvailableLayerNumEj");
extern "C" void YellowAuto_0033823c(uint8_t* arg0, uint32_t arg1) {
*(uint32_t*)(arg0 + 316) = arg1;
}
#endif
