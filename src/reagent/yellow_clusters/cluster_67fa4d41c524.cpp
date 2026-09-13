// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00103F00
void* h003017f0(uint32_t, const uint8_t*);
void* h003022d4(void*, uint32_t, uint32_t, uint32_t);
void* h0010391c(void*, const uint8_t*, uint32_t);
extern "C" void* YellowAuto_00103f00(int32_t arg0, const uint8_t* arg1, uint32_t arg2) __asm__("_ZN4__rw16__rw_facet_makerISt5ctypeIcEE13_C_maker_funcEiPKcj");
extern "C" void* YellowAuto_00103f00(int32_t arg0, const uint8_t* arg1, uint32_t arg2) {
if (arg0 == 0) return h003022d4(h003017f0(52, arg1), 0, 0, 0); if (arg0 == 1) return h003022d4(h003017f0(52, arg1), 0, 0, 1); return h0010391c(h003017f0(52, arg1), arg1, arg2);
}
#endif
