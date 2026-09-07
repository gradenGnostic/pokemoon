// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00339B40
void func_00341CD4(void*);
extern "C" void YellowAuto_00339b40(uint32_t* arg0, uint32_t* arg1, uint32_t* arg2, uint32_t* arg3, const uint8_t* arg4, void* arg5, uint32_t arg6) __asm__("_ZN4gfl22fs10CtrHioUtil8ReadFileEPPvPjS4_PKcPNS_4heap11CtrHeapBaseEj");
extern "C" void YellowAuto_00339b40(uint32_t* arg0, uint32_t* arg1, uint32_t* arg2, uint32_t* arg3, const uint8_t* arg4, void* arg5, uint32_t arg6) {
*arg1 = 0U; if (arg3 != (uint32_t*)0) *arg3 = 0U; if (arg2 != (uint32_t*)0) *arg2 = 0U; func_00341CD4((void*)arg0); arg0[1] |= 0x1000U;
}
#endif
