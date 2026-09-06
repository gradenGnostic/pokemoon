// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002E82B8
void FUN_002e8630(void*, void*, void*, int32_t, int32_t, int32_t);
extern "C" void YellowAuto_002e82b8(void* arg0, void* arg1, void* arg2) __asm__("_ZN3app4sort10StringWaza9LoadSetupEPN4gfl24heap11CtrHeapBaseES5_");
extern "C" void YellowAuto_002e82b8(void* arg0, void* arg1, void* arg2) {
FUN_002e8630(arg0, arg1, arg2, 7, 3, 11);
return;
}
#endif
