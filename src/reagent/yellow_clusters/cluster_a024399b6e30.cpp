// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003ED8D8
extern uint8_t **DAT_003ed8e8;
extern "C" uint8_t YellowAuto_003ed8d8() __asm__("_ZN6System7GetLangEv");
extern "C" uint8_t YellowAuto_003ed8d8() {
return **DAT_003ed8e8;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003E5BE8
void FUN_0015e340(void);
void FUN_001048b4(void);
extern "C" void YellowAuto_003e5be8(void* arg0) __asm__("_ZN6System17SetupLangResourceEPN4gfl24heap11CtrHeapBaseE");
extern "C" void YellowAuto_003e5be8(void* arg0) {
FUN_0015e340();
FUN_001048b4();
}
#endif
