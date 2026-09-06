// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003022CC
extern "C" void* YellowAuto_003022cc(uint8_t* arg0, uint32_t arg1) __asm__("_ZN4__rw18__rw_locale_vectorIPNS_15__rw_facet_baseEEixEj");
extern "C" void* YellowAuto_003022cc(uint8_t* arg0, uint32_t arg1) {
return (void *)((uint8_t *)(*(uint32_t *)arg0) + ((uint32_t)arg1 << 2));
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00103F48
void operator_delete__(void*);
extern "C" void YellowAuto_00103f48(uint8_t* arg0) __asm__("_ZN4__rw18__rw_locale_vectorIPNS_15__rw_facet_baseEED2Ev");
extern "C" void YellowAuto_00103f48(uint8_t* arg0) {
operator_delete__((void *)(*(uint32_t *)arg0)); return;
}
#endif
