// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00163A24
extern uint8_t* DAT_00163a48;
extern uint8_t* DAT_00163a4c;
void __aeabi_memclr4(void*, uint32_t);
extern "C" void YellowAuto_00163a24() __asm__("_ZN2mw3qrd9QRDecoder8FinalizeEv");
extern "C" void YellowAuto_00163a24() {
*(uint32_t *)(DAT_00163a48 + 4) = 0;
*(uint32_t *)(DAT_00163a48 + 0x10) = 0;
*(uint32_t *)(DAT_00163a48 + 0xc) = 0;
*(uint32_t *)(DAT_00163a48 + 8) = 0;
__aeabi_memclr4(DAT_00163a4c, 0x3000);
}
#endif
