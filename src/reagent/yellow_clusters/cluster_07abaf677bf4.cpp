// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0044344C
void* __aeabi_memcpy4(void*, const void*, uint32_t);
extern "C" void* YellowAuto_0044344c(uint8_t* arg0, const uint8_t* arg1) __asm__("_ZN8Savedata7GtsData12SetUploadKeyERKN6NetApp3GTS21GtsSerializeRecordKeyE");
extern "C" void* YellowAuto_0044344c(uint8_t* arg0, const uint8_t* arg1) {
return __aeabi_memcpy4(arg0 + 0x140, arg1, 0x44);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004434A4
extern "C" void YellowAuto_004434a4(uint8_t* arg0, uint8_t* arg1) __asm__("_ZN8Savedata7GtsData25GetBackupPokemonCoreParamEPN3pml8pokepara9CoreParamE");
extern "C" void YellowAuto_004434a4(uint8_t* arg0, uint8_t* arg1) {
((void (*)(void *, const uint8_t *))(*(void ***)arg1)[0])(arg1, arg0 + 8);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004434BC
void Serialize_Core(const uint8_t*, uint32_t*, uint8_t, uint8_t);
extern "C" void YellowAuto_004434bc(uint8_t* arg0, const uint8_t* arg1, uint8_t arg2, uint8_t arg3, uint16_t arg4, int32_t arg5, int32_t arg6) __asm__("_ZN8Savedata7GtsData25SetBackupPokemonCoreParamEPKN3pml8pokepara9CoreParamEhh6MonsNoii");
extern "C" void YellowAuto_004434bc(uint8_t* arg0, const uint8_t* arg1, uint8_t arg2, uint8_t arg3, uint16_t arg4, int32_t arg5, int32_t arg6) {
Serialize_Core(arg1, (uint32_t *)(arg0 + 8), arg2, arg3); arg0[0x12d] = arg2; arg0[0x12e] = arg3; *(uint16_t *)(arg0 + 0x130) = arg4; arg0[0x132] = (uint8_t)arg5; arg0[0x133] = (uint8_t)arg6;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003543EC
uint16_t FUN_00356704(const uint16_t*, uint16_t*, uint32_t);
extern "C" void YellowAuto_003543ec(uint8_t* arg0, uint8_t* arg1) __asm__("_ZN8Savedata7GtsData15GetWantPokeNameEPN4gfl23str6StrBufE");
extern "C" void YellowAuto_003543ec(uint8_t* arg0, uint8_t* arg1) {
if (*(uint8_t *)(arg1 + 0xc) != 0) *(int16_t *)(arg1 + 10) = (int16_t)FUN_00356704(*(const uint16_t **)(arg1 + 4), (uint16_t *)(arg0 + 0x112), (uint32_t)*(uint16_t *)(arg1 + 8));
}
#endif
