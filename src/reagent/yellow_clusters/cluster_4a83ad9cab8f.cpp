// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00103F64
extern "C" void* YellowAuto_00103f64(const void* arg0, uint32_t arg1) __asm__("_ZN4__rw18__rw_locale_vectorISsEixEj");
extern "C" void* YellowAuto_00103f64(const void* arg0, uint32_t arg1) {
return (void*)(*(const uint32_t*)arg0 + (arg1 << 2));
}
#endif
