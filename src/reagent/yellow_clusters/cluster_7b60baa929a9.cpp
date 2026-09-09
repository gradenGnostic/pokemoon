// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002B97DC
void* GetInstance(void);
extern void* DAT_002b9828;
extern uint32_t DAT_002b9824;
int32_t __cxa_guard_acquire(uint32_t* arg0);
void FUN_002b9f48(void* arg0);
extern "C" void* YellowAuto_002b97dc() __asm__("_ZN2nw3snd8internal6driver11SoundThread11GetInstanceEv");
extern "C" void* YellowAuto_002b97dc() {
if ((*(uint32_t*)0x002b9824 & 1) == 0 && __cxa_guard_acquire((uint32_t*)0x002b9824) != 0) FUN_002b9f48(*(void**)0x002b9828); return *(void**)0x002b9828;
}
#endif
