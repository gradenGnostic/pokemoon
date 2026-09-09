// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003ED8EC
void FUN_003bfbec(uint8_t);
void SetupLangResource(void*);
extern "C" void YellowAuto_003ed8ec(uint8_t arg0, void* arg1, bool arg2) __asm__("_ZN6System7SetLangEhPN4gfl24heap11CtrHeapBaseEb");
extern "C" void YellowAuto_003ed8ec(uint8_t arg0, void* arg1, bool arg2) {
**(uint8_t**)0x003ED998 = arg0;
FUN_003bfbec(arg0 == 1 ? (uint8_t)(arg2 != 0) : arg0 == 3 ? (uint8_t)3 : arg0 == 4 ? (uint8_t)4 : arg0 == 5 ? (uint8_t)5 : arg0 == 7 ? (uint8_t)6 : arg0 == 8 ? (uint8_t)7 : arg0 == 9 ? (uint8_t)8 : arg0 == 10 ? (uint8_t)9 : (uint8_t)2);
SetupLangResource(arg1);
}
#endif
