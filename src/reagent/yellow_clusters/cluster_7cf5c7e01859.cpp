// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00104184
void sub_003018c8(void*, const uint8_t*);
extern "C" void YellowAuto_00104184(void* arg0, const uint8_t* arg1) __asm__("_ZNKSt8numpunctIcE11do_groupingEv");
extern "C" void YellowAuto_00104184(void* arg0, const uint8_t* arg1) {
sub_003018c8(arg0, arg1 + 0x14); return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0010418E
void sub_003018c8(void*, const uint8_t*);
extern "C" void YellowAuto_0010418e(void* arg0, const uint8_t* arg1) __asm__("_ZNKSt8numpunctIcE11do_truenameEv");
extern "C" void YellowAuto_0010418e(void* arg0, const uint8_t* arg1) {
sub_003018c8(arg0, arg1 + 0x18); return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00104198
void sub_003018c8(void*, const uint8_t*);
extern "C" void YellowAuto_00104198(void* arg0, const uint8_t* arg1) __asm__("_ZNKSt8numpunctIcE12do_falsenameEv");
extern "C" void YellowAuto_00104198(void* arg0, const uint8_t* arg1) {
sub_003018c8(arg0, arg1 + 0x1c); return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x001041A2
extern "C" uint8_t YellowAuto_001041a2(const uint8_t* arg0) __asm__("_ZNKSt8numpunctIcE16do_decimal_pointEv");
extern "C" uint8_t YellowAuto_001041a2(const uint8_t* arg0) {
return arg0[0x10];
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x001041A6
extern "C" uint8_t YellowAuto_001041a6(const uint8_t* arg0) __asm__("_ZNKSt8numpunctIcE16do_thousands_sepEv");
extern "C" uint8_t YellowAuto_001041a6(const uint8_t* arg0) {
return arg0[0x11];
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00103D70
void sub_0010328c(uint8_t*);
extern "C" void YellowAuto_00103d70(uint8_t* arg0) __asm__("_ZNSt8numpunctIcED2Ev");
extern "C" void YellowAuto_00103d70(uint8_t* arg0) {
sub_0010328c(arg0 + 0x10); return;
}
#endif
