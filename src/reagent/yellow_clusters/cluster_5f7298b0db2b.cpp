// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002E877C
uint32_t *FUN_002e8654(uint32_t *arg0);
extern "C" void YellowAuto_002e877c(uint8_t* arg0) __asm__("_ZN3app4sort13StringTokuseiC1Ev");
extern "C" void YellowAuto_002e877c(uint8_t* arg0) {
uint32_t *arg1 = FUN_002e8654((uint32_t *)arg0);
*arg1 = *(const uint32_t *)0x002E8790;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002E8760
void FUN_002e84e0(int32_t arg0, void *arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4);
extern "C" void YellowAuto_002e8760(uint8_t* arg0, void* arg1) __asm__("_ZN3app4sort13StringTokusei4LoadEPN4gfl24heap11CtrHeapBaseE");
extern "C" void YellowAuto_002e8760(uint8_t* arg0, void* arg1) {
FUN_002e84e0((int32_t)arg0, arg1, 6U, 2U, 10U);
}
#endif
