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
