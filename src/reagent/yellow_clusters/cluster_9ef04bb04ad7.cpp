// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002FF788
bool FUN_002e9334(void* arg0, uint32_t arg1);
extern "C" bool YellowAuto_002ff788(uint8_t* arg0, uint32_t arg1) __asm__("_ZN3app4tool8ItemIcon14IsLoadFinishedEj");
extern "C" bool YellowAuto_002ff788(uint8_t* arg0, uint32_t arg1) {
return FUN_002e9334(*(void**)(arg0 + 4), arg1);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002FF790
void FUN_002e9124(void* arg0, uint32_t arg1);
extern "C" void YellowAuto_002ff790(uint8_t* arg0, uint32_t arg1) __asm__("_ZN3app4tool8ItemIcon18AllocTextureBufferEj");
extern "C" void YellowAuto_002ff790(uint8_t* arg0, uint32_t arg1) {
FUN_002e9124(*(void**)(arg0 + 4), arg1);
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002FF798
void GetInstance();
extern "C" void YellowAuto_002ff798(uint8_t* arg0, uint32_t arg1, uint32_t arg2, void* arg3, uint32_t arg4, uint32_t arg5) __asm__("_ZN3app4tool8ItemIcon18ReplacePaneTextureEjjPN2nw3lyt7PictureEjj");
extern "C" void YellowAuto_002ff798(uint8_t* arg0, uint32_t arg1, uint32_t arg2, void* arg3, uint32_t arg4, uint32_t arg5) {
(void)arg0;
(void)arg1;
(void)arg2;
(void)arg3;
(void)arg4;
(void)arg5;
GetInstance();
}
#endif
