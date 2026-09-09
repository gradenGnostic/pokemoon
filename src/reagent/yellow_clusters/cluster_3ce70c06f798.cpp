// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00302204
void FUN_00302900(uint32_t, void*);
extern "C" uint8_t* YellowAuto_00302204(uint8_t* arg0, void* arg1) __asm__("_ZNSt6localeC2EPN4__rw15__rw_locale_impE");
extern "C" uint8_t* YellowAuto_00302204(uint8_t* arg0, void* arg1) {
*(uint32_t*)arg0 = (uint32_t)arg1;
if (*(uint32_t*)(*(uint32_t*)0x00302224U + 16U) == 0U) FUN_00302900(0U, arg1);
*(uint32_t*)(*(uint32_t*)arg0 + 28U) = *(uint32_t*)(*(uint32_t*)arg0 + 28U) + 1U;
return arg0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00103D1C
void FUN_00302900(uint32_t, void*);
extern "C" uint8_t* YellowAuto_00103d1c(uint8_t* arg0, void* arg1) __asm__("_ZNSt6localeC2Ev");
extern "C" uint8_t* YellowAuto_00103d1c(uint8_t* arg0, void* arg1) {
if (*(uint32_t*)(*(uint32_t*)0x00103D3CU) == 0U) FUN_00302900(0U, arg1);
*(uint32_t*)arg0 = *(uint32_t*)(*(uint32_t*)0x00103D3CU);
*(uint32_t*)(*(uint32_t*)arg0 + 28U) = *(uint32_t*)(*(uint32_t*)arg0 + 28U) + 1U;
return arg0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00103CB0
uint32_t FUN_0010318e(uint32_t);
uint32_t* FUN_003022cc(void*, uint32_t);
extern "C" void YellowAuto_00103cb0(uint8_t* arg0, uint32_t arg1) __asm__("_ZNSt6locale16_C_remove_facetsEi");
extern "C" void YellowAuto_00103cb0(uint8_t* arg0, uint32_t arg1) {
if ((arg1 & 15U) != 0U) arg1 = FUN_0010318e(arg1);
uint32_t t0 = *(uint32_t*)arg0;
uint32_t t1 = *(uint32_t*)(t0 + 12U);
for (uint32_t t2 = 0U; t2 != t1; ++t2) {
uint32_t t3s = (uint32_t)FUN_003022cc((void*)(t0 + 8U), t2);
uint32_t t3 = *(uint32_t*)t3s;
if (t3 != 0U && ((*(uint32_t*)(t3 + 4U) & arg1) != 0U)) {
uint32_t t4 = *(uint32_t*)(t3 + 12U) - 1U;
*(uint32_t*)(t3 + 12U) = t4;
if (t4 == 0U) ((void(*)(uint32_t))(*(uint32_t*)(*(uint32_t*)t3 + 4U)))(t3);
uint32_t t5s = (uint32_t)FUN_003022cc((void*)(*(uint32_t*)arg0 + 8U), t2);
*(uint32_t*)t5s = 0U;
}
}
return;
}
#endif
