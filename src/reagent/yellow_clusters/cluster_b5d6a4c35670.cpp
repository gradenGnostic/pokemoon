// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00358898
uint32_t FUN_0035903c(void);
void FUN_0053b2a8(uint32_t *, uint32_t);
extern "C" uint32_t YellowAuto_00358898(uint8_t* arg0) __asm__("_ZN4gfl24math10SFMTRandom10InitializeEv");
extern "C" uint32_t YellowAuto_00358898(uint8_t* arg0) {
uint32_t arg1 = FUN_0035903c(); FUN_0053b2a8((uint32_t *)arg0, arg1); return arg1;
}
#endif
