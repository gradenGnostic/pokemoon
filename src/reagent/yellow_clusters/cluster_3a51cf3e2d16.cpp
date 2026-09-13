// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00103F56
void operator delete[](void*);
extern "C" uint8_t* YellowAuto_00103f56(uint8_t* arg0) __asm__("_ZN4__rw18__rw_locale_vectorIPNS_8__rw_catEED2Ev");
extern "C" uint8_t* YellowAuto_00103f56(uint8_t* arg0) {
operator delete[](*(void**)arg0); return arg0;
}
#endif
