// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x001754BC
extern "C" uint32_t YellowAuto_001754bc(const uint8_t* arg0, const void* arg1) __asm__("_ZNK2nn3fnd11ExpHeapBase9GetSizeOfEPKv");
extern "C" uint32_t YellowAuto_001754bc(const uint8_t* arg0, const void* arg1) {
return *(const uint32_t *)((const uint8_t *)arg1 - 0x0c);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00478234
extern "C" bool YellowAuto_00478234(const uint8_t* arg0, const void* arg1) __asm__("_ZNK2nn3fnd11ExpHeapBase10HasAddressEPKv");
extern "C" bool YellowAuto_00478234(const uint8_t* arg0, const void* arg1) {
return (uint32_t)arg1 >= *(const uint32_t *)(arg0 + 0x30) && (uint32_t)arg1 < *(const uint32_t *)(arg0 + 0x34);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00174B58
void FUN_00174e5c(uint8_t* arg0, void* arg1);
extern "C" void YellowAuto_00174b58(uint8_t* arg0, void* arg1) __asm__("_ZN2nn3fnd11ExpHeapBase4FreeEPv");
extern "C" void YellowAuto_00174b58(uint8_t* arg0, void* arg1) {
FUN_00174e5c(arg0 + 0x18, arg1); *(uint32_t *)(arg0 + 0x54) = *(uint32_t *)(arg0 + 0x54) - 1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00174B98
void FUN_00175218(uint8_t* arg0, uint8_t arg1);
void FUN_0017549c(uint8_t* arg0, uint32_t arg1);
void FUN_001758e8(uint8_t* arg0, bool arg1);
void* FUN_00174f98(uint8_t* arg0, uint32_t arg1, int32_t arg2);
extern "C" void YellowAuto_00174b98(uint8_t* arg0, uint32_t arg1, int32_t arg2, uint8_t arg3, uint32_t arg4, bool arg5) __asm__("_ZN2nn3fnd11ExpHeapBase8AllocateEjihNS1_14AllocationModeEb");
extern "C" void YellowAuto_00174b98(uint8_t* arg0, uint32_t arg1, int32_t arg2, uint8_t arg3, uint32_t arg4, bool arg5) {
FUN_00175218(arg0 + 0x18, arg3); FUN_0017549c(arg0 + 0x18, arg4); FUN_001758e8(arg0 + 0x18, arg5); if (FUN_00174f98(arg0 + 0x18, arg1, arg2) != 0) *(uint32_t *)(arg0 + 0x54) = *(uint32_t *)(arg0 + 0x54) + 1;
}
#endif
