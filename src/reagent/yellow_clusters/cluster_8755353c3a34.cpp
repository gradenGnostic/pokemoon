// Autonomous Qwen reconstruction approved by GPT-5.4 mini.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0035A5B0
extern uint32_t DAT_0035a5f8;
extern "C" void* YellowAuto_0035a5b0(void* arg0) __asm__("_ZN4gfl24pawn8PawnBaseC1Ev");
extern "C" void* YellowAuto_0035a5b0(void* arg0) {
*(uint32_t*)arg0 = DAT_0035a5f8; *(uint32_t*)((char*)arg0 + 0x7c) = 0; *(uint32_t*)((char*)arg0 + 0x80) = 0; *(uint32_t*)((char*)arg0 + 0x84) = 0; *(uint32_t*)((char*)arg0 + 4) = 0; (*(void (**)(void*, void*, int, int))(DAT_0035a5f8 + 0x14))(arg0, (char*)arg0 + 4, 0, 0x78); *(uint16_t*)((char*)arg0 + 0x8a) = 0; *(uint16_t*)((char*)arg0 + 0x88) = 0; return arg0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0035A208
int32_t *local_10;
int32_t local_c;
extern int32_t FUN_0051a80c(void*, const uint8_t*, int32_t**);
extern void amx_GetAddr(void*, int32_t*, int32_t*);
extern "C" int32_t YellowAuto_0035a208(void* arg0, const uint8_t* arg1) __asm__("_ZN4gfl24pawn8PawnBase25GetGlobalParameterPointerEPKc");
extern "C" int32_t YellowAuto_0035a208(void* arg0, const uint8_t* arg1) {
if (FUN_0051a80c((void*)((char*)arg0 + 4), (const uint8_t*)arg1, &local_10) == 0) amx_GetAddr((void*)((char*)arg0 + 4), local_10, &local_c); else local_c = 0; return local_c;
}
#endif
