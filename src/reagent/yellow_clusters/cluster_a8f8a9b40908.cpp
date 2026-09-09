// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x001CA384
extern "C" void YellowAuto_001ca384(uint8_t* arg0, const uint8_t* arg1) __asm__("_ZN2nn3nex16_DDL_ResultRangeaSERKS1_");
extern "C" void YellowAuto_001ca384(uint8_t* arg0, const uint8_t* arg1) {
arg0[4] = arg1[4]; *reinterpret_cast<uint32_t*>(arg0 + 8) = *reinterpret_cast<const uint32_t*>(arg1 + 8); *reinterpret_cast<uint32_t*>(arg0 + 12) = *reinterpret_cast<const uint32_t*>(arg1 + 12);
}
#endif
