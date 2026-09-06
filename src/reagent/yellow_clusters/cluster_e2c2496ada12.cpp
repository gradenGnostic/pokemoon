// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x001036E8
extern "C" uint8_t YellowAuto_001036e8(const uint8_t* arg0, uint8_t arg1) __asm__("_ZNKSt5ctypeIcE8do_widenEc");
extern "C" uint8_t YellowAuto_001036e8(const uint8_t* arg0, uint8_t arg1) {
return arg1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x001036FC
extern "C" uint8_t YellowAuto_001036fc(const uint8_t* arg0, uint8_t arg1, uint8_t arg2) __asm__("_ZNKSt5ctypeIcE9do_narrowEcc");
extern "C" uint8_t YellowAuto_001036fc(const uint8_t* arg0, uint8_t arg1, uint8_t arg2) {
return arg1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003021AC
extern "C" bool YellowAuto_003021ac(const uint8_t* arg0, uint16_t arg1, uint8_t arg2) __asm__("_ZNKSt5ctypeIcE2isENSt10ctype_base4maskEc");
extern "C" bool YellowAuto_003021ac(const uint8_t* arg0, uint16_t arg1, uint8_t arg2) {
return (*(const uint16_t *)(*(const uint32_t *)(arg0 + 0x14) + (uint32_t)arg2 * 2) & arg1) != 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0010363C
extern "C" uint8_t* YellowAuto_0010363c(const uint8_t* arg0, uint8_t* arg1, const uint8_t* arg2) __asm__("_ZNKSt5ctypeIcE10do_tolowerEPcPKc");
extern "C" uint8_t* YellowAuto_0010363c(const uint8_t* arg0, uint8_t* arg1, const uint8_t* arg2) {
for (; arg1 < arg2; arg1 = arg1 + 1) if ((*(const uint16_t *)(*(const uint32_t *)(arg0 + 0x14) + (uint32_t)*arg1 * 2) & 8) != 0) *arg1 = *(const uint8_t *)(*(const uint32_t *)(arg0 + 0x30) + ((uint32_t)*arg1 - *(const uint32_t *)(arg0 + 0x24))); return arg1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0010368A
extern "C" uint8_t* YellowAuto_0010368a(const uint8_t* arg0, uint8_t* arg1, const uint8_t* arg2) __asm__("_ZNKSt5ctypeIcE10do_toupperEPcPKc");
extern "C" uint8_t* YellowAuto_0010368a(const uint8_t* arg0, uint8_t* arg1, const uint8_t* arg2) {
for (; arg1 < arg2; arg1 = arg1 + 1) if ((*(const uint16_t *)(*(const uint32_t *)(arg0 + 0x14) + (uint32_t)*arg1 * 2) & 16) != 0) *arg1 = *(const uint8_t *)(*(const uint32_t *)(arg0 + 0x2c) + ((uint32_t)*arg1 - *(const uint32_t *)(arg0 + 0x1c))); return arg1;
}
#endif
