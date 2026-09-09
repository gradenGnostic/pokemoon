// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x001C9220
extern "C" void YellowAuto_001c9220(uint8_t* arg0) __asm__("_ZN2nn3nex16RefCountedObjectC1Ev");
extern "C" void YellowAuto_001c9220(uint8_t* arg0) {
*reinterpret_cast<uint32_t*>(arg0 + 4) = 1U; *(arg0 + 8) = 0;
}
#endif
