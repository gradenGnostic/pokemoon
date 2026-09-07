// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00337750
extern "C" void YellowAuto_00337750(uint8_t* arg0, uint32_t arg1) __asm__("_ZN4gfl215renderingengine8renderer4util13DofRenderPath12SetBlurScaleEf");
extern "C" void YellowAuto_00337750(uint8_t* arg0, uint32_t arg1) {
*reinterpret_cast<uint32_t*>(arg0 + 8) = arg1;
}
#endif
