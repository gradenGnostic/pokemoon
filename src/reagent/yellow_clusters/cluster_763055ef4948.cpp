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

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00238900
extern "C" void YellowAuto_00238900(uint8_t* arg0, void* arg1) __asm__("_ZN2nn3nex7MessageC1EPNS0_6BufferE");
extern "C" void YellowAuto_00238900(uint8_t* arg0, void* arg1) {
*(uint8_t**)(arg0 + 8) = (uint8_t*)arg1; *(uint32_t*)((uint8_t*)arg1 + 4) = *(uint32_t*)((uint8_t*)arg1 + 4) + 1; *(uint8_t*)(arg0 + 4) = 0; *(uint32_t*)(arg0 + 12) = 0; *(uint32_t*)(arg0 + 0x18) = 0x6c; *(uint32_t*)(arg0 + 0x20) = 0; *(uint32_t*)(arg0 + 0x24) = 0; *(uint32_t*)(arg0 + 0x28) = 0; *(uint32_t*)(arg0 + 0x2c) = 0; *(uint32_t*)(arg0 + 0x30) = 0; *(uint32_t*)(arg0 + 0x34) = 0; *(uint8_t*)(arg0 + 0x38) = 0; *(uint8_t*)(arg0 + 0x39) = 0; *(uint8_t*)(arg0 + 0x3a) = 0; *(uint8_t*)(arg0 + 0x3b) = 0; *(uint32_t*)(arg0 + 0x18) = 0x73; if (*(uint32_t*)(*(uint8_t**)(arg0 + 8) + 0x10) > 3) *(uint32_t*)(arg0 + 12) = 4;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002389C4
extern "C" uint8_t* YellowAuto_002389c4(uint8_t* arg0) __asm__("_ZN2nn3nex7MessageC1Ev");
extern "C" uint8_t* YellowAuto_002389c4(uint8_t* arg0) {
*(uint8_t*)(arg0 + 4) = 0; *(uint32_t*)(arg0 + 12) = 0; *(uint32_t*)(arg0 + 0x18) = 0x6c; *(uint32_t*)(arg0 + 0x20) = 0; *(uint32_t*)(arg0 + 0x24) = 0; *(uint32_t*)(arg0 + 0x28) = 0; *(uint32_t*)(arg0 + 0x2c) = 0; *(uint32_t*)(arg0 + 0x30) = 0; *(uint32_t*)(arg0 + 0x34) = 0; *(uint8_t*)(arg0 + 0x38) = 0; *(uint8_t*)(arg0 + 0x39) = 0; *(uint8_t*)(arg0 + 0x3a) = 0; *(uint8_t*)(arg0 + 0x3b) = 0; *(uint32_t*)(*(uint8_t**)(arg0 + 8) + 0x10) = 0; *(uint32_t*)(*(uint8_t**)(arg0 + 8) + 0x18) = 0; *(uint32_t*)(arg0 + 0x18) = 0x73; if (*(uint32_t*)(*(uint8_t**)(arg0 + 8) + 0x10) > 3) *(uint32_t*)(arg0 + 12) = 4; return arg0;
}
#endif
