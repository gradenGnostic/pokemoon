// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00430E58
int16_t GetMonsNo(void*);
void ChangeFormNo(void*, uint32_t);
void FUN_00319fbc(void*, uint32_t);
void FUN_0031d350(void*, uint32_t);
extern "C" void YellowAuto_00430e58(void* arg0, uint32_t arg1) __asm__("_ZN8PokeTool4form12SetHuupaFormEPN3pml8pokepara12PokemonParamEh");
extern "C" void YellowAuto_00430e58(void* arg0, uint32_t arg1) {
if (GetMonsNo(arg0) != 0x2d0) return;
if (arg1 >= 2) goto zero_form;
ChangeFormNo(arg0, arg1);
if (arg1 != 0) goto form_three;
FUN_00319fbc(arg0, 0);
FUN_0031d350(arg0, 0);
return;
form_three:
FUN_0031d350(arg0, 3);
return;
zero_form:
ChangeFormNo(arg0, 0);
FUN_00319fbc(arg0, 0);
FUN_0031d350(arg0, 0);
return;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00431088
int16_t GetMonsNo(const uint8_t* arg0);
uint8_t GetFormNo(const uint8_t* arg0);
void ChangeFormNo(uint8_t* arg0, int32_t arg1);
void FUN_00319fbc(uint8_t* arg0, int32_t arg1);
void FUN_0031d350(uint8_t* arg0, int32_t arg1);
extern "C" uint32_t YellowAuto_00431088(uint8_t* arg0) __asm__("_ZN8PokeTool4form16UpdateFormForBoxEPN3pml8pokepara9CoreParamE");
extern "C" uint32_t YellowAuto_00431088(uint8_t* arg0) {
int16_t m = GetMonsNo(arg0);
if (m == 492) {
if (GetFormNo(arg0) == 0) return 0;
ChangeFormNo(arg0, 0);
return 1;
}
if (m == 676) {
if (GetFormNo(arg0) == 0) return 0;
ChangeFormNo(arg0, 0);
FUN_00319fbc(arg0, 0);
FUN_0031d350(arg0, 0);
return 1;
}
if (m != 720) return 0;
if (GetFormNo(arg0) == 0) return 0;
if (GetMonsNo(arg0) != 720) return 1;
ChangeFormNo(arg0, 0);
FUN_00319fbc(arg0, 0);
FUN_0031d350(arg0, 0);
return 1;
}
#endif
