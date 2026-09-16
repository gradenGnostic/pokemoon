// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00305048
void FUN_002f97f4(void*);
extern "C" void YellowAuto_00305048(uint8_t* arg0) __asm__("_ZN3app4tool8PokeIcon12IsModuleFreeEv");
extern "C" void YellowAuto_00305048(uint8_t* arg0) {
FUN_002f97f4((void*)(*(uint32_t*)(arg0 + 4)));
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00305024
void FUN_00306a2c(uint32_t, void*, uint32_t, uint32_t);
extern "C" void YellowAuto_00305024(uint8_t* arg0, void* arg1) __asm__("_ZN3app4tool8PokeIcon12FileOpenSyncEPN4gfl24heap11CtrHeapBaseE");
extern "C" void YellowAuto_00305024(uint8_t* arg0, void* arg1) {
FUN_00306a2c(62, arg1, 0, 255); *(uint8_t*)(arg0 + 16) = 1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003054E8
void FUN_00306d74(uint32_t, void*, uint32_t, uint32_t);
extern "C" void YellowAuto_003054e8(uint8_t* arg0, void* arg1) __asm__("_ZN3app4tool8PokeIcon8FileOpenEPN4gfl24heap11CtrHeapBaseE");
extern "C" void YellowAuto_003054e8(uint8_t* arg0, void* arg1) {
FUN_00306d74(62, arg1, 0, 255); *(uint8_t*)(arg0 + 16) = 1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00305388
void FUN_002f983c(void*, uint32_t, void*, uint32_t, uint32_t);
extern "C" void YellowAuto_00305388(uint8_t* arg0, uint32_t arg1, void* arg2, uint32_t arg3, uint32_t arg4) __asm__("_ZN3app4tool8PokeIcon18ReplacePaneTextureEjPN2nw3lyt7PictureEjj");
extern "C" void YellowAuto_00305388(uint8_t* arg0, uint32_t arg1, void* arg2, uint32_t arg3, uint32_t arg4) {
FUN_002f983c((void*)(*(uint32_t*)(arg0 + 4)), arg1, arg2, arg3, arg4);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003054B0
bool FUN_002e9334(void*, uint32_t);
extern "C" bool YellowAuto_003054b0(uint8_t* arg0) __asm__("_ZN3app4tool8PokeIcon26IsLoadDummyTextureFinishedEv");
extern "C" bool YellowAuto_003054b0(uint8_t* arg0) {
if (*(uint32_t*)(arg0 + 20) != 0) return FUN_002e9334((void*)(*(uint32_t*)(arg0 + 4)), *(uint32_t*)(arg0 + 20)); return true;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00305050
void FUN_00306b74(uint32_t);
extern "C" void YellowAuto_00305050(uint8_t* arg0) __asm__("_ZN3app4tool8PokeIcon13FileCloseSyncEv");
extern "C" void YellowAuto_00305050(uint8_t* arg0) {
FUN_00306b74(62); *(uint8_t*)(arg0 + 16) = 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0030550C
void FUN_00306e2c(uint32_t, void*);
extern "C" void YellowAuto_0030550c(uint8_t* arg0, void* arg1) __asm__("_ZN3app4tool8PokeIcon9FileCloseEPN4gfl24heap11CtrHeapBaseE");
extern "C" void YellowAuto_0030550c(uint8_t* arg0, void* arg1) {
FUN_00306e2c(62, arg1); *(uint8_t*)(arg0 + 16) = 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003053A0
void FUN_002e8ef0(void*, uint32_t);
void FUN_002f983c(void*, uint32_t, void*, uint32_t, uint32_t);
extern "C" void YellowAuto_003053a0(uint8_t* arg0, uint32_t arg1, void* arg2, uint32_t arg3, uint32_t arg4) __asm__("_ZN3app4tool8PokeIcon18ReplaceReadTextureEjPN2nw3lyt7PictureEjj");
extern "C" void YellowAuto_003053a0(uint8_t* arg0, uint32_t arg1, void* arg2, uint32_t arg3, uint32_t arg4) {
FUN_002e8ef0((void*)(*(uint32_t*)(arg0 + 4)), arg1); FUN_002f983c((void*)(*(uint32_t*)(arg0 + 4)), arg1, arg2, arg3, arg4);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00304FB4
uint32_t FUN_00305094(uint16_t, uint8_t, uint8_t, int8_t, uint32_t);
uint32_t FUN_002f9ba0(void*, void*, uint32_t, uint32_t, uint32_t, uint32_t);
extern "C" uint32_t YellowAuto_00304fb4(uint8_t* arg0, uint32_t arg1, const uint8_t* arg2, uint32_t arg3) __asm__("_ZN3app4tool8PokeIcon11ReadRequestEjPKN8PokeTool11SimpleParamEb");
extern "C" uint32_t YellowAuto_00304fb4(uint8_t* arg0, uint32_t arg1, const uint8_t* arg2, uint32_t arg3) {
return FUN_002f9ba0((void*)(*(uint32_t*)(arg0 + 4)), (void*)(*(uint32_t*)(arg0 + 8)), arg1, 62, FUN_00305094(*(const uint16_t*)(arg2 + 0), *(arg2 + 2), *(arg2 + 3), (int8_t)(*(arg2 + 5)), arg3), 1);
}
#endif
