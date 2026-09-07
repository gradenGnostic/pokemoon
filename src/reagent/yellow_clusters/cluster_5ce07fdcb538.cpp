// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00357F54
extern "C" void YellowAuto_00357f54(uint8_t* arg0, void* arg1) __asm__("_ZN4gfl24heap11NwAllocatorC1EPNS0_11CtrHeapBaseE");
extern "C" void YellowAuto_00357f54(uint8_t* arg0, void* arg1) {
*(uint32_t*)(arg0 + 4) = (uint32_t)arg1; arg0[8] = 0;
}
#endif
