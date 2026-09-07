// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002FCFF8
void sub_002fd2b0(uint8_t*, uint32_t, const uint8_t*, bool, uint32_t);
extern "C" void YellowAuto_002fcff8(uint8_t* arg0, uint32_t arg1, const uint8_t* arg2, bool arg3) __asm__("_ZN3app4tool27AppToolTrainerIconRendering17SetIconObjectDataEjRKNS1_16ICON_OBJECT_DATAEb");
extern "C" void YellowAuto_002fcff8(uint8_t* arg0, uint32_t arg1, const uint8_t* arg2, bool arg3) {
sub_002fd2b0(arg0, arg1, arg2, arg3, 0);
}
#endif
