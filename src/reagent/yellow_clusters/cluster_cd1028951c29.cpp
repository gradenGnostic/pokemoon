// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0022F368
extern "C" void YellowAuto_0022f368(uint8_t* arg0, const uint8_t* arg1) __asm__("_ZN2nn3nex34_DDL_DataStorePersistenceInitParamaSERKS1_");
extern "C" void YellowAuto_0022f368(uint8_t* arg0, const uint8_t* arg1) {
arg0[4] = arg1[4];
*(uint16_t *)(arg0 + 6) = *(const uint16_t *)(arg1 + 6);
arg0[8] = arg1[8];
}
#endif
