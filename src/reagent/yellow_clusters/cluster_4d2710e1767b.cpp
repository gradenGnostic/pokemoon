// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0045B56C
uint8_t* Date(uint8_t*);
extern "C" void YellowAuto_0045b56c(uint8_t* arg0) __asm__("_ZN9NetAppLib4Util13NetAppTimeoutC1Ev");
extern "C" void YellowAuto_0045b56c(uint8_t* arg0) {
*reinterpret_cast<uint32_t*>(arg0) = *reinterpret_cast<uint32_t*>(0x45B5A8u);
*reinterpret_cast<uint32_t*>(arg0 + 4) = 0;
Date(arg0 + 8);
*reinterpret_cast<uint32_t*>(arg0 + 0x10) = 0;
*reinterpret_cast<uint32_t*>(arg0 + 0x14) = 0;
*(arg0 + 0x18) = 0;
*(arg0 + 0x19) = 0;
Date(arg0 + 0x20);
*reinterpret_cast<uint32_t*>(arg0 + 0x28) = 0;
}
#endif
