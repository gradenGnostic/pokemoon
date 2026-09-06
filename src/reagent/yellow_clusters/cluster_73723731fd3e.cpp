// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003020F0
extern uint32_t *DAT_00302120;
extern uint32_t *DAT_00302124;
extern void *DAT_00302128;
extern void *DAT_0030212c;
int32_t __cxa_guard_acquire(uint32_t *);
int32_t __aeabi_atexit(void *, void *, void *);
extern "C" uint32_t* YellowAuto_003020f0() __asm__("_ZSt13__rw_get_catsv");
extern "C" uint32_t* YellowAuto_003020f0() {
if (((*DAT_00302120 & 1u) == 0) && __cxa_guard_acquire((uint32_t *)DAT_00302120) != 0) DAT_00302124[0] = 0, DAT_00302124[1] = 0, __aeabi_atexit(DAT_00302124, DAT_0030212c, DAT_00302128);
return DAT_00302124;
}
#endif
