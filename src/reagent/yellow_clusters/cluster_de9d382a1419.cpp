// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00358160
void FUN_00108898(void*, int32_t, int32_t, int32_t);
extern "C" void YellowAuto_00358160(void* arg0, int32_t arg1, int32_t arg2) __asm__("_ZN4gfl24heap28GflHeapAllocMemoryBlockAlignEPNS0_11CtrHeapBaseEii");
extern "C" void YellowAuto_00358160(void* arg0, int32_t arg1, int32_t arg2) {
FUN_00108898(arg0, arg1, arg2, 1);
}
#endif
