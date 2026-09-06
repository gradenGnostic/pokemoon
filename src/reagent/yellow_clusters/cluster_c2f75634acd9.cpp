// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043EAB8
extern "C" void __aeabi_memclr4(void*, uint32_t);
extern "C" void YellowAuto_0043eab8(uint8_t* arg0) __asm__("_ZN8Savedata17JoinFestaDataSave23FacilitiesFakeChangeEndEv");
extern "C" void YellowAuto_0043eab8(uint8_t* arg0) {
__aeabi_memclr4((void *)(arg0 + 0x39a8), 0x48);
*((uint8_t *)(arg0 + 0x39f0)) = 7;
}
#endif
