// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0042CEF8
int32_t FUN_004a6a48(int32_t, uint32_t);
extern "C" void YellowAuto_0042cef8(uint8_t* arg0, uint32_t arg1) __asm__("_ZN8PokeTool12PersonalSort15GetSortedMonsNoEj");
extern "C" void YellowAuto_0042cef8(uint8_t* arg0, uint32_t arg1) {
int32_t v0 = FUN_004a6a48((int32_t)arg0, arg1);
(*(void (**)(uint8_t*, int32_t))(*(uint32_t*)arg0 + 0x30))(arg0, v0);
}
#endif
