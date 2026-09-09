// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00302D84
void FUN_00302130(uint8_t*, const uint8_t*);
extern "C" uint8_t* YellowAuto_00302d84(uint8_t* arg0, const uint8_t* arg1) __asm__("_ZNSt18__rw_open_cat_dataaSERKS_");
extern "C" uint8_t* YellowAuto_00302d84(uint8_t* arg0, const uint8_t* arg1) {
*reinterpret_cast<int32_t*>(arg0) = *reinterpret_cast<const int32_t*>(arg1); FUN_00302130(arg0 + 4, arg1 + 4); return arg0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00103B64
void* FUN_00302164(int32_t, int32_t);
uint8_t* FUN_00103D0E(uint8_t*, void*);
extern "C" uint8_t* YellowAuto_00103b64(uint8_t* arg0, int32_t arg1) __asm__("_ZNSt18__rw_open_cat_dataC2Ev");
extern "C" uint8_t* YellowAuto_00103b64(uint8_t* arg0, int32_t arg1) {
*reinterpret_cast<int32_t*>(arg0) = -1; return FUN_00103D0E(arg0 + 4, FUN_00302164(-1, arg1)) - 4;
}
#endif
