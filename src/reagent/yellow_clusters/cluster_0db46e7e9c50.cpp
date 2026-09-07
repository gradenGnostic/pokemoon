// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00396ECC
void* func_003577a8();
void* func_001048b4();
extern "C" void YellowAuto_00396ecc(uint8_t* arg0, void* arg1) __asm__("_ZN5Field7Encount11EncountWork20LoadEncountEffectDllEPN4gfl24heap11CtrHeapBaseE");
extern "C" void YellowAuto_00396ecc(uint8_t* arg0, void* arg1) {
(void)arg0; (void)arg1; func_003577a8(); func_001048b4();
}
#endif
