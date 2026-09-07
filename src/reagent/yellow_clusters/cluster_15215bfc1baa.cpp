// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0035B2B4
extern "C" void YellowAuto_0035b2b4(uint8_t* arg0, void* arg1) __asm__("_ZN4gfl24util15GLHeapAllocatorC1EPNS_4heap11CtrHeapBaseE");
extern "C" void YellowAuto_0035b2b4(uint8_t* arg0, void* arg1) {
*reinterpret_cast<void**>(arg0 + 4) = arg1;
}
#endif
