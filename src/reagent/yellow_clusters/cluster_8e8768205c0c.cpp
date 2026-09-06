// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00483FB0
extern "C" bool YellowAuto_00483fb0(const void* arg0) __asm__("_ZNK2nn3nex7qResultcvbEv");
extern "C" bool YellowAuto_00483fb0(const void* arg0) {
return ((*(const int32_t *)arg0 >> 31) + 1) != 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00240C90
extern const uint32_t DAT_00240cac;
extern "C" void YellowAuto_00240c90(uint8_t* arg0, const void* arg1) __asm__("_ZN2nn3nex7qResultC1ERKi");
extern "C" void YellowAuto_00240c90(uint8_t* arg0, const void* arg1) {
*(int32_t *)arg0 = *(const int32_t *)arg1; *(uint32_t *)((uint8_t *)arg0 + 4) = DAT_00240cac; *(uint32_t *)((uint8_t *)arg0 + 8) = 0x73; return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00240C5C
extern const uint32_t DAT_00240c84;
extern const uint32_t DAT_00240c88;
extern const uint32_t DAT_00240c8c;
extern "C" void YellowAuto_00240c5c(uint8_t* arg0, const uint8_t* arg1) __asm__("_ZN2nn3nex7qResultC1ERKb");
extern "C" void YellowAuto_00240c5c(uint8_t* arg0, const uint8_t* arg1) {
*(uint32_t *)((uint8_t *)arg0 + 8) = 0x81; *(uint32_t *)((uint8_t *)arg0 + 4) = DAT_00240c8c; *(uint32_t *)arg0 = (*(const uint8_t *)arg1 != 0) ? DAT_00240c84 : DAT_00240c88; return;
}
#endif
