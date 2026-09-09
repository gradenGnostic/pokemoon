// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0022AA80
extern "C" void YellowAuto_0022aa80(uint8_t* arg0, const uint8_t* arg1) __asm__("_ZN2nn3nex31_DDL_DataStorePersistenceTargetaSERKS1_");
extern "C" void YellowAuto_0022aa80(uint8_t* arg0, const uint8_t* arg1) {
*(uint8_t *)(arg0 + 4) = *(const uint8_t *)(arg1 + 4);
*(uint32_t *)(arg0 + 8) = *(const uint32_t *)(arg1 + 8);
*(uint16_t *)(arg0 + 12) = *(const uint16_t *)(arg1 + 12);
}
#endif
