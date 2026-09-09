// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002A5DD4
extern "C" void YellowAuto_002a5dd4(void* arg0) __asm__("_ZN2nw3lyt6Layout12SetAllocatorEPNS_2os10IAllocatorE");
extern "C" void YellowAuto_002a5dd4(void* arg0) {
*reinterpret_cast<void**>(*reinterpret_cast<uint32_t*>(0x002A5DE0)) = arg0;
}
#endif
