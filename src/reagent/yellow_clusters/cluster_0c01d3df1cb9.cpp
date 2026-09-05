// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002E82DC
void* FUN_002e8654(void*);
extern "C" void YellowAuto_002e82dc(void* arg0) __asm__("_ZN3app4sort10StringWazaC1Ev");
extern "C" void YellowAuto_002e82dc(void* arg0) {
*(uint32_t *)FUN_002e8654(arg0) = *(const uint32_t *)0x002E82F0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002E829C
void FUN_002e84e0(void*, void*, uint32_t, uint32_t, uint32_t);
extern "C" void YellowAuto_002e829c(void* arg0, void* arg1) __asm__("_ZN3app4sort10StringWaza4LoadEPN4gfl24heap11CtrHeapBaseE");
extern "C" void YellowAuto_002e829c(void* arg0, void* arg1) {
FUN_002e84e0(arg0, arg1, 7, 3, 11);
}
#endif
