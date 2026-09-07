// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00317DB8
uint8_t* func_0031de10(uint8_t* arg0, void* arg1);
uint32_t func_00491210(uint8_t* arg0);
void* func_00318aa8(void* arg0, uint32_t arg1);
void func_00319d88(void* arg0, void* arg1, void* arg2);
extern "C" uint8_t* YellowAuto_00317db8(uint8_t* arg0, void* arg1) __asm__("_ZN3pml8pokepara12PokemonParamC1EPN4gfl24heap11CtrHeapBaseE");
extern "C" uint8_t* YellowAuto_00317db8(uint8_t* arg0, void* arg1) {
uint8_t* v0 = func_0031de10(arg0, arg1);
uint32_t v1 = func_00491210(v0);
void* v2 = func_00318aa8(arg1, v1);
*(uint32_t*)(v0 + 8) = (uint32_t)v2;
void* v3 = (void*)*(uint32_t*)(v0 + 12);
void* v4 = (void*)*(uint32_t*)(v0 + 4);
func_00319d88(v3, v4, v2);
return v0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00317EA4
uint8_t* func_0031def8(uint8_t* arg0, void* arg1, const void* arg2);
uint32_t func_00491210(uint8_t* arg0);
void* func_00318aa8(void* arg0, uint32_t arg1);
void func_00319d88(void* arg0, void* arg1, void* arg2);
bool func_0049255c(uint8_t* arg0);
void func_003195a8(void* arg0);
void func_0031c764(uint8_t* arg0, uint32_t arg1);
void func_00318e38(uint8_t* arg0);
void func_004920c4(uint8_t* arg0, bool arg1);
extern "C" uint8_t* YellowAuto_00317ea4(uint8_t* arg0, void* arg1, const void* arg2) __asm__("_ZN3pml8pokepara12PokemonParamC1EPN4gfl24heap11CtrHeapBaseERKNS0_11InitialSpecE");
extern "C" uint8_t* YellowAuto_00317ea4(uint8_t* arg0, void* arg1, const void* arg2) {
uint8_t* v0 = func_0031def8(arg0, arg1, arg2);
uint32_t v1 = func_00491210(v0);
void* v2 = func_00318aa8(arg1, v1);
*(uint32_t*)(v0 + 8) = (uint32_t)v2;
func_00319d88((void*)*(uint32_t*)(v0 + 12), (void*)*(uint32_t*)(v0 + 4), v2);
bool v3 = func_0049255c(v0);
func_003195a8((void*)*(uint32_t*)(v0 + 12));
func_0031c764(v0, 1);
func_00318e38(v0);
func_004920c4(v0, v3);
return v0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00317F24
uint8_t* func_0031de10(uint8_t* arg0, void* arg1);
uint32_t func_00491210(uint8_t* arg0);
void* func_00318aa8(void* arg0, uint32_t arg1);
void func_00319d88(void* arg0, void* arg1, void* arg2);
void func_0031da7c(uint8_t* arg0, const void* arg1);
bool func_0049255c(uint8_t* arg0);
void func_003195a8(void* arg0);
void func_0031c764(uint8_t* arg0, uint32_t arg1);
void func_00318e38(uint8_t* arg0);
void func_004920c4(uint8_t* arg0, bool arg1);
extern "C" uint8_t* YellowAuto_00317f24(uint8_t* arg0, void* arg1, const void* arg2) __asm__("_ZN3pml8pokepara12PokemonParamC1EPN4gfl24heap11CtrHeapBaseERKNS0_9CoreParamE");
extern "C" uint8_t* YellowAuto_00317f24(uint8_t* arg0, void* arg1, const void* arg2) {
uint8_t* v0 = func_0031de10(arg0, arg1);
uint32_t v1 = func_00491210(v0);
void* v2 = func_00318aa8(arg1, v1);
*(uint32_t*)(v0 + 8) = (uint32_t)v2;
func_00319d88((void*)*(uint32_t*)(v0 + 12), (void*)*(uint32_t*)(v0 + 4), v2);
func_0031da7c(v0, arg2);
bool v3 = func_0049255c(v0);
func_003195a8((void*)*(uint32_t*)(v0 + 12));
func_0031c764(v0, 1);
func_00318e38(v0);
func_004920c4(v0, v3);
return v0;
}
#endif
