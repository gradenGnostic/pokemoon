// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00225774
extern "C" void YellowAuto_00225774(uint8_t* arg0, const uint8_t* arg1) __asm__("_ZN2nn3nex29_DDL_DataStoreRatingInitParamaSERKS1_");
extern "C" void YellowAuto_00225774(uint8_t* arg0, const uint8_t* arg1) {
arg0[4] = arg1[4];
arg0[5] = arg1[5];
arg0[6] = arg1[6];
arg0[7] = arg1[7];
*(uint32_t*)(arg0 + 8) = *(uint32_t*)(arg1 + 8);
*(uint32_t*)(arg0 + 12) = *(uint32_t*)(arg1 + 12);
*(uint32_t*)(arg0 + 16) = *(uint32_t*)(arg1 + 16);
*(uint32_t*)(arg0 + 20) = *(uint32_t*)(arg1 + 20);
arg0[24] = arg1[24];
*(uint16_t*)(arg0 + 26) = *(uint16_t*)(arg1 + 26);
}
#endif
