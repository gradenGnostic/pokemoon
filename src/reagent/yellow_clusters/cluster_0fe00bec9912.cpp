// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00322F58
extern "C" void YellowAuto_00322f58(uint8_t* arg0, const uint8_t* arg1, uint32_t arg2) __asm__("_ZN4gfl215renderingengine10scenegraph11Inheritance8GenerateEPKS2_NS_4util7FnvHashE");
extern "C" void YellowAuto_00322f58(uint8_t* arg0, const uint8_t* arg1, uint32_t arg2) {
*reinterpret_cast<uint32_t*>(arg0) = arg2; *reinterpret_cast<const uint8_t**>(arg0 + 4) = arg1;
}
#endif
