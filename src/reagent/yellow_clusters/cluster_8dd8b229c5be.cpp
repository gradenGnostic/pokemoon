// Autonomous Qwen reconstruction approved by GPT-5.4 mini.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003C1020
void FUN_003c11f8(void* param_1, uint32_t param_2, const void* param_3, uint32_t param_4);
extern "C" void YellowAuto_003c1020(void* arg0, uint32_t arg1, const void* arg2, uint32_t arg3, uint32_t arg4) __asm__("_ZN5print7WordSet12RegisterWordEjRKN4gfl23str6StrBufENS0_7GrammerENS0_4FormE");
extern "C" void YellowAuto_003c1020(void* arg0, uint32_t arg1, const void* arg2, uint32_t arg3, uint32_t arg4) {
FUN_003c11f8(arg0, arg1, arg2, arg3 & 3 | (arg4 & 3) << 10);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003C1060
void FUN_003c11f8(void* param_1, uint32_t param_2, const void* param_3, uint32_t param_4);
extern "C" void YellowAuto_003c1060(void* arg0, uint32_t arg1, const void* arg2, uint32_t arg3, uint32_t arg4) __asm__("_ZN5print7WordSet12RegisterWordEjRKN4gfl23str6StrBufENS_20GrammaticalAttributeENS0_4FormE");
extern "C" void YellowAuto_003c1060(void* arg0, uint32_t arg1, const void* arg2, uint32_t arg3, uint32_t arg4) {
FUN_003c11f8(arg0, arg1, arg2, arg3 & 0xff | ((arg4 & 3) << 2 | 2) << 8);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003C1B68
uint16_t FUN_003c1bc0(void* param_1, const void* param_2, uint32_t param_3, uint32_t param_4);
void FUN_003c11f8(void* param_1, uint32_t param_2, const void* param_3, uint32_t param_4);
extern "C" void YellowAuto_003c1b68(void* arg0, uint32_t arg1, uint32_t arg2) __asm__("_ZN5print7WordSet20RegisterPokeTypeNameEjj");
extern "C" void YellowAuto_003c1b68(void* arg0, uint32_t arg1, uint32_t arg2) {
uint16_t uVar1 = FUN_003c1bc0(arg0, *(const void * const *)arg0, 0x6b, arg2); FUN_003c11f8(arg0, arg1, *(const void * const *)arg0, uVar1 & 0xff | 0x200);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003C15DC
uint16_t FUN_003c1bc0(void* param_1, const void* param_2, uint32_t param_3, uint32_t param_4);
void FUN_003c11f8(void* param_1, uint32_t param_2, const void* param_3, uint32_t param_4);
extern "C" void YellowAuto_003c15dc(void* arg0, uint32_t arg1, uint32_t arg2) __asm__("_ZN5print7WordSet17RegisterPlaceNameEjj");
extern "C" void YellowAuto_003c15dc(void* arg0, uint32_t arg1, uint32_t arg2) {
uint16_t uVar1 = FUN_003c1bc0(arg0, *(const void * const *)arg0, 0x43, arg2); FUN_003c11f8(arg0, arg1, *(const void * const *)arg0, uVar1 & 0xff | 0x200);
}
#endif
