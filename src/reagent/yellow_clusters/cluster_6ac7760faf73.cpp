// Autonomous Qwen reconstruction approved by GPT-5.4 mini.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0030F5A4
extern "C" void YellowAuto_0030f5a4(int32_t arg0, const void* arg1) __asm__("_ZN3app4util7G2DUtil10SetMessageEPKN4gfl23str6StrBufE");
extern "C" void YellowAuto_0030f5a4(int32_t arg0, const void* arg1) {
(**(void (**)(const void*))( *(const uint8_t**)(*(const uint8_t**)(arg0 + 0x34)) + 0x18 ))(arg1);
}
#endif

// Autonomous Qwen reconstruction approved by GPT-5.4 mini.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0048EEC0
extern "C" void YellowAuto_0048eec0(uint32_t* arg0, const void* arg1, const void* arg2) __asm__("_ZNK3app4util7G2DUtil15GetPaneLocalPosEPKN2nw3lyt4PaneE");
extern "C" void YellowAuto_0048eec0(uint32_t* arg0, const void* arg1, const void* arg2) {
arg0[0] = *(const uint32_t*)((const uint8_t*)arg2 + 0x1c); arg0[1] = *(const uint32_t*)((const uint8_t*)arg2 + 0x20); arg0[2] = *(const uint32_t*)((const uint8_t*)arg2 + 0x24);
}
#endif
