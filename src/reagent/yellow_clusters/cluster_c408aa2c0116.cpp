// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00474CEC
extern "C" uint8_t YellowAuto_00474cec(const uint8_t* arg0, uint8_t arg1) __asm__("_ZNK10Regulation22GetParamMustPokeFormOREh");
extern "C" uint8_t YellowAuto_00474cec(const uint8_t* arg0, uint8_t arg1) {
if (arg1 >= 6) return 0; return *(*(const uint8_t* const*)(arg0 + 0x10) + arg1 + 0x2E);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00474D74
extern "C" uint8_t YellowAuto_00474d74(const uint8_t* arg0, uint8_t arg1) __asm__("_ZNK10Regulation23GetParamMustPokeFormANDEh");
extern "C" uint8_t YellowAuto_00474d74(const uint8_t* arg0, uint8_t arg1) {
if (arg1 >= 6) return 0; return *(*(const uint8_t* const*)(arg0 + 0x10) + arg1 + 0x1C);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00474C40
extern "C" uint16_t YellowAuto_00474c40(const uint8_t* arg0, uint8_t arg1) __asm__("_ZNK10Regulation18GetParamMustPokeOREh");
extern "C" uint16_t YellowAuto_00474c40(const uint8_t* arg0, uint8_t arg1) {
if (arg1 >= 6) return 0; return *(const uint16_t*)(*(const uint8_t* const*)(arg0 + 0x10) + arg1 * 2 + 0x22);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00474C9C
extern "C" uint16_t YellowAuto_00474c9c(const uint8_t* arg0, uint8_t arg1) __asm__("_ZNK10Regulation19GetParamMustPokeANDEh");
extern "C" uint16_t YellowAuto_00474c9c(const uint8_t* arg0, uint8_t arg1) {
if (arg1 >= 6) return 0; return *(const uint16_t*)(*(const uint8_t* const*)(arg0 + 0x10) + arg1 * 2 + 0x10);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00474F10
void __aeabi_memcpy(void*, const void*, uint32_t);
extern "C" void YellowAuto_00474f10(const uint8_t* arg0, void* arg1) __asm__("_ZNK10Regulation9SerializeEPv");
extern "C" void YellowAuto_00474f10(const uint8_t* arg0, void* arg1) {
__aeabi_memcpy(arg1, *(const void* const*)(arg0 + 0x8), *(const uint32_t*)(arg0 + 0xC));
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0015A8D4
void GflHeapFreeMemoryBlock(void*);
extern "C" void YellowAuto_0015a8d4(uint8_t* arg0) __asm__("_ZN10Regulation10DeleteDataEv");
extern "C" void YellowAuto_0015a8d4(uint8_t* arg0) {
if (*(uint32_t*)(arg0 + 8) != 0) GflHeapFreeMemoryBlock(*(void**)(arg0 + 8)); *(uint32_t*)(arg0 + 8) = 0; *(uint32_t*)(arg0 + 12) = 0; *(uint32_t*)(arg0 + 16) = 0;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0015AF60
extern "C" void YellowAuto_0015af60(uint8_t* arg0, void* arg1) __asm__("_ZN10RegulationC1EPN4gfl24heap11CtrHeapBaseE");
extern "C" void YellowAuto_0015af60(uint8_t* arg0, void* arg1) {
*(void**)(arg0 + 4) = arg1; *(uint32_t*)(arg0 + 8) = 0; *(uint32_t*)(arg0 + 12) = 0; *(uint32_t*)(arg0 + 16) = 0;
}
#endif
