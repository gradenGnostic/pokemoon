// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0022E7A4
extern "C" void YellowAuto_0022e7a4(uint8_t* arg0, const uint8_t* arg1) __asm__("_ZN2nn3nex32_DDL_GlobalTradeStationRecordKeyaSERKS1_");
extern "C" void YellowAuto_0022e7a4(uint8_t* arg0, const uint8_t* arg1) {
arg0[4] = arg1[4]; *(uint32_t*)(arg0 + 8) = *(const uint32_t*)(arg1 + 8); *(uint32_t*)(arg0 + 12) = *(const uint32_t*)(arg1 + 12); *(uint32_t*)(arg0 + 16) = *(const uint32_t*)(arg1 + 16); *(uint32_t*)(arg0 + 20) = *(const uint32_t*)(arg1 + 20);
}
#endif
