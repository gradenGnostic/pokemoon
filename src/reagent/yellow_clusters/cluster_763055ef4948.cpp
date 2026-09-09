// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002388EC
void FUN_0023887c(uint8_t*);
extern "C" void* YellowAuto_002388ec(uint8_t* arg0) __asm__("_ZN2nn3nex7Message9GetBufferEv");
extern "C" void* YellowAuto_002388ec(uint8_t* arg0) {
FUN_0023887c(arg0); return (void*)(*(uint32_t*)(arg0 + 8));
}
#endif
