// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003BF3B4
uint8_t* FUN_00355a44(uint8_t*, const void*, uint8_t, int32_t, const void*, uint32_t, uint32_t);
uint8_t* FUN_003be50c(uint8_t*);
extern const void* DAT_003bf470;
extern const uint32_t DAT_003bf474;
extern "C" uint8_t* YellowAuto_003bf3b4(uint8_t* arg0, const void* arg1, const void* arg2, uint16_t arg3, int32_t arg4, const void* arg5, uint32_t arg6) __asm__("_ZN5print13MessageWindowC1EPKN4gfl22ui13DeviceManagerEPNS1_3lyt5LytWkEtiPNS1_4heap11CtrHeapBaseEj");
extern "C" uint8_t* YellowAuto_003bf3b4(uint8_t* arg0, const void* arg1, const void* arg2, uint16_t arg3, int32_t arg4, const void* arg5, uint32_t arg6) {
uint8_t* base = FUN_00355a44(arg0, arg2, (uint8_t)arg3, arg4, arg5, 0, arg6);
*(const void**)base = DAT_003bf470;
*(const void**)(base + 0x98) = arg1;
uint8_t* tag = FUN_003be50c(base + 0x9c);
*(uint8_t*)(tag + 0x28) = 0;
*(uint32_t*)(tag + 0x2c) = 0;
*(uint32_t*)(tag + 0x30) = DAT_003bf474;
*(uint32_t*)(tag + 0x38) = 0;
*(uint8_t*)(tag + 0x3c) = 0;
*(uint8_t*)(tag + 0x3d) = 0;
*(uint8_t*)(tag + 0x3e) = 0;
*(uint8_t*)(tag + 0x3f) = 1;
*(uint8_t*)(tag + 0x40) = 1;
*(uint8_t*)(tag + 0x41) = 1;
*(uint32_t*)(tag + 0x48) = 0;
*(uint32_t*)(tag + 0x4c) = 0;
*(uint8_t*)(tag + 0x50) = 0;
*(uint32_t*)(tag - 0x90) = (uint32_t)tag;
*(uint16_t*)(tag - 0x82) = 0;
*(uint16_t*)(tag - 0x80) = 1;
*(uint32_t*)(tag + 0x20) = (uint32_t)(tag - 0x9c);
*(uint32_t*)(tag + 0x44) = 0;
return tag - 0x9c;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003BE9C4
uint8_t Func_003ED8D8();
void Func_00354F58(uint8_t *, int8_t, int8_t);
extern const int32_t Dat_003BEABC[];
extern const int32_t Dat_003BEAC0[];
extern const int32_t Dat_003BEAC4[];
extern const int32_t Dat_003BEAC8[];
extern "C" void YellowAuto_003be9c4(uint8_t* arg0, int32_t arg1, bool arg2) __asm__("_ZN5print13MessageWindow15SetMessageSpeedEN8Savedata10ConfigSave9MSG_SPEEDEb");
extern "C" void YellowAuto_003be9c4(uint8_t* arg0, int32_t arg1, bool arg2) {
*(int16_t *)(arg0 + 240) = (int16_t)arg2;
uint8_t lang = Func_003ED8D8();
bool alt = lang == 2 || lang == 3 || lang == 4 || lang == 5 || lang == 7;
if (arg2 != 0) {
if (alt) {
Func_00354F58(arg0, (int8_t)(*(Dat_003BEABC - 12 + arg1)), (int8_t)(*(Dat_003BEABC + arg1)));
} else {
Func_00354F58(arg0, (int8_t)(*(Dat_003BEAC0 - 4 + arg1)), (int8_t)(*(Dat_003BEAC0 + arg1)));
}
} else {
if (alt) {
Func_00354F58(arg0, (int8_t)(*(Dat_003BEAC4 - 16 + arg1)), (int8_t)(*(Dat_003BEAC4 + arg1)));
} else {
Func_00354F58(arg0, (int8_t)(*(Dat_003BEAC8 - 4 + arg1)), (int8_t)(*(Dat_003BEAC8 + arg1)));
}
}
}
#endif
