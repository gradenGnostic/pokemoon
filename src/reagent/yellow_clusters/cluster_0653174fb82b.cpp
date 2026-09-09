// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00163374
void __aeabi_memclr4(void*, uint32_t);
uint8_t* state_base();
uint8_t* static_buffer();
extern "C" bool YellowAuto_00163374(uint8_t* arg0, void* arg1, uint32_t arg2) __asm__("_ZN2mw3qrd9QRDecoder10InitializeEPvj");
extern "C" bool YellowAuto_00163374(uint8_t* arg0, void* arg1, uint32_t arg2) {
(void)arg0; uint8_t* s = state_base(); if (arg1 != (void*)0 && arg2 != 0) *(void**)(s + 4) = arg1, *(uint32_t*)(s + 8) = arg2, *(uint32_t*)(s + 12) = 0, *(uint32_t*)(s + 16) = 0, __aeabi_memclr4(static_buffer(), 0x3000); return arg1 != (void*)0 && arg2 != 0;
}
#endif
