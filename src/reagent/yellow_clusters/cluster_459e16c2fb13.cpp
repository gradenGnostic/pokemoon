// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003022A8
uint8_t* FUN_003028E4(uint8_t*);
void operator delete(void*);
extern "C" uint8_t* YellowAuto_003022a8(uint8_t* arg0) __asm__("_ZNSt6localeD2Ev");
extern "C" uint8_t* YellowAuto_003022a8(uint8_t* arg0) {
if (*(uint32_t *)arg0 != 0 && --*(uint32_t *)(*(uint32_t *)arg0 + 0x1c) == 0 && *(uint32_t *)arg0 != 0) operator delete((void *)FUN_003028E4((uint8_t *)*(uint32_t *)arg0)); return arg0;
}
#endif
