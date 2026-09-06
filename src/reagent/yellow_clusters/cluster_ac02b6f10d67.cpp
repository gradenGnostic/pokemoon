// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00103B34
extern "C" void YellowAuto_00103b34(uint8_t* arg0) __asm__("_ZNSt14codecvt_bynameIwcSt11__mbstate_tED0Ev");
extern "C" void YellowAuto_00103b34(uint8_t* arg0) {
delete arg0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00103B3C
extern "C" void YellowAuto_00103b3c(uint8_t* arg0) __asm__("_ZNSt14codecvt_bynameIwcSt11__mbstate_tED2Ev");
extern "C" void YellowAuto_00103b3c(uint8_t* arg0) {
return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0010338C
extern "C" bool YellowAuto_0010338c(const uint8_t* arg0) __asm__("_ZNKSt14codecvt_bynameIwcSt11__mbstate_tE16do_always_noconvEv");
extern "C" bool YellowAuto_0010338c(const uint8_t* arg0) {
return false;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00103344
using codecvt_byname_do_unshift_fn = int32_t (*)(const uint8_t*, void*, uint16_t*, uint8_t*, uint32_t*, void*, void*, void*);
extern "C" int32_t YellowAuto_00103344(const uint8_t* arg0, void* arg1, void* arg2, void* arg3, void* arg4) __asm__("_ZNKSt14codecvt_bynameIwcSt11__mbstate_tE10do_unshiftERS0_PcS3_RS3_");
extern "C" int32_t YellowAuto_00103344(const uint8_t* arg0, void* arg1, void* arg2, void* arg3, void* arg4) {
uint16_t local_0 = 0; uint8_t local_1[2]; uint32_t local_2 = 0; return reinterpret_cast<codecvt_byname_do_unshift_fn>((*reinterpret_cast<void***>(const_cast<uint8_t*>(arg0)))[3])(arg0, arg1, &local_0, local_1, &local_2, arg2, arg3, arg4);
}
#endif
