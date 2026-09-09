// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00103340
extern "C" const uint8_t* YellowAuto_00103340(const uint8_t* arg0) __asm__("_ZNKSt14__rw_exception4whatEv");
extern "C" const uint8_t* YellowAuto_00103340(const uint8_t* arg0) {
return (const uint8_t*)(*(uint32_t*)(arg0 + 4));
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00103B18
void operator delete[](void*);
extern "C" uint8_t* YellowAuto_00103b18(uint8_t* arg0) __asm__("_ZNSt14__rw_exceptionD2Ev");
extern "C" uint8_t* YellowAuto_00103b18(uint8_t* arg0) {
*(uint32_t*)arg0 = *(uint32_t*)0x00103B30; operator delete[]((void*)(*(uint32_t*)(arg0 + 4))); return arg0;
}
#endif
