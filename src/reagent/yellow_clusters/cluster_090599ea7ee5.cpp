// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00478B40
extern uint32_t DAT_00478bc0;
extern uint32_t DAT_00478bc4;
extern uint32_t DAT_00478bc8;
extern uint32_t DAT_00478bcc;
uint32_t __aeabi_ldivmod(uint32_t, uint32_t, uint32_t, uint32_t);
extern "C" uint32_t YellowAuto_00478b40(const uint8_t* arg0) __asm__("_ZNK4gfl26system4Date7GetWeekEv");
extern "C" uint32_t YellowAuto_00478b40(const uint8_t* arg0) {
return (__aeabi_ldivmod(DAT_00478bc0 + *(const uint32_t *)(arg0 + 0), *(const uint32_t *)(arg0 + 4) + DAT_00478bc4 + ((DAT_00478bc0 + *(const uint32_t *)(arg0 + 0)) < DAT_00478bc0), DAT_00478bc8, 0u) + DAT_00478bcc + 6u) % 7u;
}
#endif
