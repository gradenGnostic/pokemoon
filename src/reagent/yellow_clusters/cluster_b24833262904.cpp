// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00455B30
void helper_002ce0f8(void*, uint32_t, uint32_t);
void helper_00459b50(void*, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
extern "C" void YellowAuto_00455b30(uint8_t* arg0, uint32_t arg1) __asm__("_ZN9NetAppLib11JoinFestaUI39JoinFestaPlayerListMessageMenuLowerView32SetStreamMessageYesNoBlackFilterEj");
extern "C" void YellowAuto_00455b30(uint8_t* arg0, uint32_t arg1) {
uint32_t tmp0 = *(uint32_t*)(arg0 + 0xB0);
helper_002ce0f8((void*)tmp0, 1U, 1U);
uint32_t tmp1 = *(uint32_t*)(arg0 + 0xB0);
helper_00459b50((void*)tmp1, 43U, arg1, 0U, 43U, 138U, 139U, 4294967295U, 4294967295U, 4294967295U, 4294967295U);
*(uint32_t*)(arg0 + 0xB4) = arg1;
return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00455A68
void helper_00354eb4(void*);
void helper_00455568(void*, const uint16_t*, uint32_t);
void helper_002e7f38(void*, const void*, uint32_t, bool, uint32_t);
extern "C" void YellowAuto_00455a68(uint8_t* arg0, uint32_t arg1, const uint16_t* arg2, bool arg3) __asm__("_ZN9NetAppLib11JoinFestaUI39JoinFestaPlayerListMessageMenuLowerView27SetStreamMessageBlackFilterEjPKwb");
extern "C" void YellowAuto_00455a68(uint8_t* arg0, uint32_t arg1, const uint16_t* arg2, bool arg3) {
uint32_t tmp0 = *(uint32_t*)(arg0 + 0xB0);
*(uint8_t*)((uint8_t*)(void*)tmp0 + 0xA6) = 0;
uint32_t tmp1 = *(uint32_t*)((uint8_t*)(void*)tmp0 + 0x94);
helper_00354eb4((void*)((uint8_t*)(void*)tmp1 + 0x8C));
helper_00455568((void*)arg0, arg2, arg1);
uint32_t tmp2 = *(uint32_t*)(arg0 + 0xB0);
helper_002e7f38((void*)tmp2, (const void*)(arg0 + 0xD8), 0U, arg3, 1U);
*(uint32_t*)(arg0 + 0xB4) = arg1;
return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00455AC8
void helper_00354eb4(void*);
void* helper_00461340(void*, uint32_t, uint32_t);
void helper_002e7f38(void*, const void*, uint32_t, bool, uint32_t);
extern "C" void YellowAuto_00455ac8(uint8_t* arg0, uint32_t arg1, bool arg2) __asm__("_ZN9NetAppLib11JoinFestaUI39JoinFestaPlayerListMessageMenuLowerView27SetStreamMessageBlackFilterEjb");
extern "C" void YellowAuto_00455ac8(uint8_t* arg0, uint32_t arg1, bool arg2) {
uint32_t tmp0 = *(uint32_t*)(arg0 + 0xB0);
*(uint8_t*)((uint8_t*)(void*)tmp0 + 0xA6) = 0;
uint32_t tmp1 = *(uint32_t*)((uint8_t*)(void*)tmp0 + 0x94);
helper_00354eb4((void*)((uint8_t*)(void*)tmp1 + 0x8C));
uint32_t tmp2 = *(uint32_t*)(arg0 + 0xA8);
uint32_t tmp3 = *(uint32_t*)((uint8_t*)(void*)tmp2 + 0x30);
void* tmp4 = helper_00461340((void*)tmp3, 43U, arg1);
uint32_t tmp5 = *(uint32_t*)(arg0 + 0xB0);
helper_002e7f38((void*)tmp5, (const void*)tmp4, 0U, arg2, 1U);
*(uint32_t*)(arg0 + 0xB4) = arg1;
return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004555F8
void helper_00354eb4(void*);
void* helper_00461340(void*, uint32_t, uint32_t);
void helper_002e7f38(void*, const void*, uint32_t, bool, uint32_t);
extern "C" void YellowAuto_004555f8(uint8_t* arg0, uint32_t arg1, bool arg2) __asm__("_ZN9NetAppLib11JoinFestaUI39JoinFestaPlayerListMessageMenuLowerView21SetMessageBlackFilterEjb");
extern "C" void YellowAuto_004555f8(uint8_t* arg0, uint32_t arg1, bool arg2) {
uint32_t tmp0 = *(uint32_t*)(arg0 + 0xB0);
*(uint8_t*)((uint8_t*)(void*)tmp0 + 0xA6) = 0;
uint32_t tmp1 = *(uint32_t*)((uint8_t*)(void*)tmp0 + 0x94);
helper_00354eb4((void*)((uint8_t*)(void*)tmp1 + 0x8C));
uint32_t tmp2 = *(uint32_t*)(arg0 + 0xA8);
uint32_t tmp3 = *(uint32_t*)((uint8_t*)(void*)tmp2 + 0x30);
void* tmp4 = helper_00461340((void*)tmp3, 43U, arg1);
uint32_t tmp5 = *(uint32_t*)(arg0 + 0xB0);
helper_002e7f38((void*)tmp5, (const void*)tmp4, 1U, arg2, 1U);
*(uint32_t*)(arg0 + 0xB4) = arg1;
return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0045551C
void helper_00354eb4(void*);
void helper_002e7f38(void*, const void*, uint32_t, bool, uint32_t);
extern "C" void YellowAuto_0045551c(uint8_t* arg0, uint32_t arg1, const void* arg2, bool arg3) __asm__("_ZN9NetAppLib11JoinFestaUI39JoinFestaPlayerListMessageMenuLowerView16SetStreamMessageEjRN4gfl23str6StrBufEb");
extern "C" void YellowAuto_0045551c(uint8_t* arg0, uint32_t arg1, const void* arg2, bool arg3) {
uint32_t tmp0 = *(uint32_t*)(arg0 + 0xB0);
*(uint8_t*)((uint8_t*)(void*)tmp0 + 0xA6) = 0;
uint32_t tmp1 = *(uint32_t*)((uint8_t*)(void*)tmp0 + 0x94);
helper_00354eb4((void*)((uint8_t*)(void*)tmp1 + 0x8C));
uint32_t tmp2 = *(uint32_t*)(arg0 + 0xB0);
helper_002e7f38((void*)tmp2, arg2, 0U, arg3, 0U);
*(uint32_t*)(arg0 + 0xB4) = arg1;
return;
}
#endif
