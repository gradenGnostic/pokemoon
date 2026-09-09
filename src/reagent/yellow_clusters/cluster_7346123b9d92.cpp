// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00214AAC
void FUN_00592d04(uint8_t*, const uint8_t*);
extern "C" uint8_t* YellowAuto_00214aac(uint8_t* arg0, const uint8_t* arg1) __asm__("_ZN2nn3nex24_DDL_DataStorePermissionaSERKS1_");
extern "C" uint8_t* YellowAuto_00214aac(uint8_t* arg0, const uint8_t* arg1) {
arg0[4] = arg1[4]; arg0[5] = arg1[5]; FUN_00592d04(arg0 + 8, arg1 + 8); return arg0;
}
#endif
