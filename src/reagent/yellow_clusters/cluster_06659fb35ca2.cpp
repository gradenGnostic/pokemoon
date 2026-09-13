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

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003021BA
void* allocate_buffer(uint32_t, uint32_t);
void delete_buffer(void*);
extern "C" uint32_t* YellowAuto_003021ba(uint8_t* arg0, uint32_t arg1, const uint32_t* arg2) __asm__("_ZN4__rw18__rw_locale_vectorIPNS_15__rw_facet_baseEE6resizeEjRKS2_");
extern "C" uint32_t* YellowAuto_003021ba(uint8_t* arg0, uint32_t arg1, const uint32_t* arg2) {
void* _nb = allocate_buffer(arg1 << 2, arg1);
uint32_t _old = *(uint32_t*)(arg0 + 4);
uint32_t _n = _old < arg1 ? _old : arg1;
uint32_t _src = *(uint32_t*)(arg0);
uint32_t* _dst = (uint32_t*)_nb;
uint32_t* _s = (uint32_t*)_src;
for (uint32_t _i = 0; _i < _n; ++_i) _dst[_i] = _s[_i];
for (uint32_t _j = _n; _j < arg1; ++_j) _dst[_j] = *arg2;
delete_buffer((void*)_src);
*(uint32_t*)(arg0) = (uint32_t)_nb;
*(uint32_t*)(arg0 + 4) = arg1;
return (uint32_t*)_nb;
}
#endif
