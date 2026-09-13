// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0035435C
uint32_t FUN_00356704(uint16_t* arg0, const uint16_t* arg1, uint32_t arg2);
extern "C" void YellowAuto_0035435c(uint8_t* arg0, const uint8_t* arg1) __asm__("_ZN4gfl23str6StrBuf6AddStrERKS1_");
extern "C" void YellowAuto_0035435c(uint8_t* arg0, const uint8_t* arg1) {
if (arg0[0xc] == 0 || arg1[0xc] == 0) return; *(uint16_t*)(arg0 + 0xa) = (uint16_t)((uint32_t)*(uint16_t*)(arg0 + 0xa) + FUN_00356704((uint16_t*)((uint8_t*)(*(uint16_t**)(arg0 + 4)) + (uint32_t)*(uint16_t*)(arg0 + 0xa) * 2U), *(const uint16_t**)(arg1 + 4), (uint32_t)*(uint16_t*)(arg0 + 0x8) - (uint32_t)*(uint16_t*)(arg0 + 0xa)));
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0049A86C
int32_t StrComp(const uint16_t* arg0, const uint16_t* arg1);
extern "C" int32_t YellowAuto_0049a86c(const uint8_t* arg0, const uint8_t* arg1) __asm__("_ZNK4gfl23str6StrBuf7CompareERKS1_");
extern "C" int32_t YellowAuto_0049a86c(const uint8_t* arg0, const uint8_t* arg1) {
if (arg0[0xc] == 0) return 0; return StrComp(*(const uint16_t**)(arg0 + 4), *(const uint16_t**)(arg1 + 4));
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00354400
uint32_t FUN_00356704(uint16_t* arg0, const uint16_t* arg1, uint32_t arg2);
extern "C" void YellowAuto_00354400(uint8_t* arg0, const uint16_t* arg1) __asm__("_ZN4gfl23str6StrBuf6SetStrEPKw");
extern "C" void YellowAuto_00354400(uint8_t* arg0, const uint16_t* arg1) {
if (arg0[0xc] == 0) return; *(uint16_t*)(arg0 + 0xa) = (uint16_t)FUN_00356704(*(uint16_t**)(arg0 + 4), arg1, (uint32_t)*(uint16_t*)(arg0 + 0x8));
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00354664
uint16_t* GflHeapAllocMemoryBlock(void* arg0, uint32_t arg1);
extern "C" void YellowAuto_00354664(uint8_t* arg0, uint32_t arg1, void* arg2) __asm__("_ZN4gfl23str6StrBufC1EjPNS_4heap11CtrHeapBaseE");
extern "C" void YellowAuto_00354664(uint8_t* arg0, uint32_t arg1, void* arg2) {
*(uint32_t*)arg0 = 0x003546d4; arg0[0xc] = 0; *(uint16_t*)(arg0 + 0xa) = 0; *(uint16_t*)(arg0 + 0x8) = (uint16_t)arg1; *(uint16_t**)(arg0 + 4) = GflHeapAllocMemoryBlock(arg2, arg1 << 1); if (*(uint16_t**)(arg0 + 4) != 0) *(*(uint16_t**)(arg0 + 4)) = 0, arg0[0xc] = 1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00354454
uint32_t FUN_00356704(uint16_t* arg0, const uint16_t* arg1, uint32_t arg2);
extern "C" void YellowAuto_00354454(uint8_t* arg0, const uint8_t* arg1) __asm__("_ZN4gfl23str6StrBuf6SetStrERKS1_");
extern "C" void YellowAuto_00354454(uint8_t* arg0, const uint8_t* arg1) {
if (arg0[0xc] == 0 || arg1[0xc] == 0) return; *(uint16_t*)(arg0 + 0xa) = (uint16_t)FUN_00356704(*(uint16_t**)(arg0 + 4), *(const uint16_t**)(arg1 + 4), (uint32_t)*(uint16_t*)(arg0 + 0x8));
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0049A7F4
uint32_t FUN_00356704(uint16_t* arg0, const uint16_t* arg1, uint32_t arg2);
extern "C" uint32_t YellowAuto_0049a7f4(const uint8_t* arg0, uint16_t* arg1, uint32_t arg2) __asm__("_ZNK4gfl23str6StrBuf6PutStrEPwj");
extern "C" uint32_t YellowAuto_0049a7f4(const uint8_t* arg0, uint16_t* arg1, uint32_t arg2) {
if (arg0[0xc] == 0 || arg2 == 0) return 0; return FUN_00356704(arg1, *(const uint16_t**)(arg0 + 4), arg2);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003544C8
extern "C" bool YellowAuto_003544c8(uint8_t* arg0, uint16_t arg1) __asm__("_ZN4gfl23str6StrBuf7AddCodeEw");
extern "C" bool YellowAuto_003544c8(uint8_t* arg0, uint16_t arg1) {
if (arg0[0xc] == 0) return false; if ((uint32_t)*(uint16_t*)(arg0 + 0xa) + 1U < *(uint16_t*)(arg0 + 0x8)) return (*(uint16_t*)(arg0 + 0xa) = (uint16_t)((uint32_t)*(uint16_t*)(arg0 + 0xa) + 1U), *(uint16_t*)((uint8_t*)(*(uint16_t**)(arg0 + 4)) + ((uint32_t)*(uint16_t*)(arg0 + 0xa) - 1U) * 2U) = arg1, *(uint16_t*)((uint8_t*)(*(uint16_t**)(arg0 + 4)) + (uint32_t)*(uint16_t*)(arg0 + 0xa) * 2U) = 0, true); if ((uint32_t)*(uint16_t*)(arg0 + 0xa) + 1U != *(uint16_t*)(arg0 + 0x8) || arg1 != 0) return false; return (*(uint16_t*)(arg0 + 0xa) = (uint16_t)((uint32_t)*(uint16_t*)(arg0 + 0xa) + 1U), *(uint16_t*)((uint8_t*)(*(uint16_t**)(arg0 + 4)) + ((uint32_t)*(uint16_t*)(arg0 + 0xa) - 1U) * 2U) = 0, true);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00354578
uint32_t FUN_0035472c(const uint16_t* arg0);
uint16_t* GflHeapAllocMemoryBlock(void* arg0, uint32_t arg1);
uint32_t FUN_00356704(uint16_t* arg0, const uint16_t* arg1, uint32_t arg2);
extern "C" void YellowAuto_00354578(uint8_t* arg0, const uint16_t* arg1, void* arg2) __asm__("_ZN4gfl23str6StrBufC1EPKwPNS_4heap11CtrHeapBaseE");
extern "C" void YellowAuto_00354578(uint8_t* arg0, const uint16_t* arg1, void* arg2) {
*(uint32_t*)arg0 = 0x003545fc; arg0[0xc] = 0; *(uint16_t*)(arg0 + 0xa) = (uint16_t)FUN_0035472c(arg1); *(uint16_t*)(arg0 + 0x8) = (uint16_t)((uint32_t)*(uint16_t*)(arg0 + 0xa) + 1U); *(uint16_t**)(arg0 + 4) = GflHeapAllocMemoryBlock(arg2, (uint32_t)*(uint16_t*)(arg0 + 0x8) << 1); if (*(uint16_t**)(arg0 + 4) != 0) FUN_00356704(*(uint16_t**)(arg0 + 4), arg1, (uint32_t)*(uint16_t*)(arg0 + 0x8)), arg0[0xc] = 1;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00354314
extern "C" void YellowAuto_00354314(uint8_t* arg0) __asm__("_ZN4gfl23str6StrBuf5ClearEv");
extern "C" void YellowAuto_00354314(uint8_t* arg0) {
if (arg0[0xC] != 0) { **reinterpret_cast<uint16_t**>(arg0 + 4) = 0; *reinterpret_cast<uint16_t*>(arg0 + 10) = 0; }
}
#endif
