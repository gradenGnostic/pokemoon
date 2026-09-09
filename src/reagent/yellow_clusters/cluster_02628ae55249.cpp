// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00241E40
extern "C" void YellowAuto_00241e40(uint8_t* arg0, const uint8_t* arg1) __asm__("_ZN2nn3nex8DateTimeC1ERKS1_");
extern "C" void YellowAuto_00241e40(uint8_t* arg0, const uint8_t* arg1) {
((uint32_t*)arg0)[0] = ((const uint32_t*)arg1)[0]; ((uint32_t*)arg0)[1] = ((const uint32_t*)arg1)[1];
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00241F4C
extern "C" void YellowAuto_00241f4c(uint8_t* arg0, const uint8_t* arg1) __asm__("_ZN2nn3nex8DateTimeaSERKS1_");
extern "C" void YellowAuto_00241f4c(uint8_t* arg0, const uint8_t* arg1) {
((uint32_t*)arg0)[0] = ((const uint32_t*)arg1)[0]; ((uint32_t*)arg0)[1] = ((const uint32_t*)arg1)[1];
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00241F3C
extern "C" void YellowAuto_00241f3c(uint8_t* arg0) __asm__("_ZN2nn3nex8DateTimeC1Ev");
extern "C" void YellowAuto_00241f3c(uint8_t* arg0) {
((uint32_t*)arg0)[0] = 0; ((uint32_t*)arg0)[1] = 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00484288
extern "C" uint32_t YellowAuto_00484288(const uint8_t* arg0) __asm__("_ZNK2nn3nex8DateTime6GetDayEv");
extern "C" uint32_t YellowAuto_00484288(const uint8_t* arg0) {
return (((const uint32_t*)arg0)[0] & 0x3E0000U) >> 17;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004842A4
extern "C" uint32_t YellowAuto_004842a4(const uint8_t* arg0) __asm__("_ZNK2nn3nex8DateTime7GetHourEv");
extern "C" uint32_t YellowAuto_004842a4(const uint8_t* arg0) {
return (((const uint32_t*)arg0)[0] & 0x1F000U) >> 12;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004842C0
extern "C" uint32_t YellowAuto_004842c0(const uint8_t* arg0) __asm__("_ZNK2nn3nex8DateTime7GetYearEv");
extern "C" uint32_t YellowAuto_004842c0(const uint8_t* arg0) {
return (((const uint32_t*)arg0)[0] >> 26) | ((((const uint32_t*)arg0)[1] & 0xFFU) << 6);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004842DC
extern "C" uint32_t YellowAuto_004842dc(const uint8_t* arg0) __asm__("_ZNK2nn3nex8DateTime8GetMonthEv");
extern "C" uint32_t YellowAuto_004842dc(const uint8_t* arg0) {
return (((const uint32_t*)arg0)[0] & 0x3C00000U) >> 22;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004842F8
extern "C" uint32_t YellowAuto_004842f8(const uint8_t* arg0) __asm__("_ZNK2nn3nex8DateTime9GetMinuteEv");
extern "C" uint32_t YellowAuto_004842f8(const uint8_t* arg0) {
return (((const uint32_t*)arg0)[0] & 0xFC0U) >> 6;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00484330
extern "C" bool YellowAuto_00484330(const uint8_t* arg0, const uint8_t* arg1) __asm__("_ZNK2nn3nex8DateTimegtERKS1_");
extern "C" bool YellowAuto_00484330(const uint8_t* arg0, const uint8_t* arg1) {
return ((const uint32_t*)arg0)[1] != ((const uint32_t*)arg1)[1] ? ((const uint32_t*)arg0)[1] > ((const uint32_t*)arg1)[1] : ((const uint32_t*)arg0)[0] > ((const uint32_t*)arg1)[0];
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00484354
extern "C" bool YellowAuto_00484354(const uint8_t* arg0, const uint8_t* arg1) __asm__("_ZNK2nn3nex8DateTimeltERKS1_");
extern "C" bool YellowAuto_00484354(const uint8_t* arg0, const uint8_t* arg1) {
return ((const uint32_t*)arg0)[1] != ((const uint32_t*)arg1)[1] ? ((const uint32_t*)arg0)[1] < ((const uint32_t*)arg1)[1] : ((const uint32_t*)arg0)[0] < ((const uint32_t*)arg1)[0];
}
#endif
