// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0022FE18
extern "C" void YellowAuto_0022fe18(uint8_t* arg0, const uint8_t* arg1) __asm__("_ZN2nn3nex37_DDL_DataStoreRatingInitParamWithSlotaSERKS1_");
extern "C" void YellowAuto_0022fe18(uint8_t* arg0, const uint8_t* arg1) {
arg0[0x4] = arg1[0x4];
arg0[0x5] = arg1[0x5];
arg0[0xC] = arg1[0xC];
arg0[0xD] = arg1[0xD];
arg0[0xE] = arg1[0xE];
arg0[0xF] = arg1[0xF];
*(uint32_t *)(arg0 + 0x10) = *(const uint32_t *)(arg1 + 0x10);
*(uint32_t *)(arg0 + 0x14) = *(const uint32_t *)(arg1 + 0x14);
*(uint32_t *)(arg0 + 0x18) = *(const uint32_t *)(arg1 + 0x18);
*(uint32_t *)(arg0 + 0x1C) = *(const uint32_t *)(arg1 + 0x1C);
arg0[0x20] = arg1[0x20];
*(uint16_t *)(arg0 + 0x22) = *(const uint16_t *)(arg1 + 0x22);
}
#endif
