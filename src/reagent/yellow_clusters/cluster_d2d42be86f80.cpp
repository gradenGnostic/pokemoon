// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002F0418
extern "C" bool YellowAuto_002f0418(uint8_t* arg0, void* arg1, uint32_t arg2, uint32_t arg3, bool arg4, bool arg5) __asm__("_ZN3app4tool14ResourceLoader11RequestLoadEPNS_4util4HeapEjjbb");
extern "C" bool YellowAuto_002f0418(uint8_t* arg0, void* arg1, uint32_t arg2, uint32_t arg3, bool arg4, bool arg5) {
*(void **)(arg0 + 4) = arg1;
uint32_t arg1_state = *(uint32_t *)(arg0 + 0x14);
if (arg1_state == 0) (*(uint32_t *)(arg0 + 0x14) = 1, *(bool *)(arg0 + 0x19) = arg5, *(uint32_t *)(arg0 + 0xc) = arg2, *(uint32_t *)(arg0 + 0x10) = arg3, *(bool *)(arg0 + 0x18) = arg4);
return arg1_state == 0;
}
#endif
