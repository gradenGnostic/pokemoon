// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004702D4
void __aeabi_memclr4(void*, uint32_t);
extern "C" uint8_t* YellowAuto_004702d4(uint8_t* arg0) __asm__("_ZN9NetAppLib9JoinFesta24JoinFestaSelectWordTableC1Ev");
extern "C" uint8_t* YellowAuto_004702d4(uint8_t* arg0) {
*(uint32_t *)arg0 = *(uint32_t *)0x470308; *(uint32_t *)(arg0 + 4) = 0; __aeabi_memclr4((void *)(arg0 + 8), 0x50); __aeabi_memclr4((void *)(arg0 + 0x58), 0x50); return arg0;
}
#endif
