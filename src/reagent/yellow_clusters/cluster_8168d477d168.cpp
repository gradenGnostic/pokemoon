// Autonomous Qwen reconstruction approved by GPT-5.4 mini.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0030F8FC
extern "C" uint32_t YellowAuto_0030f8fc(void* arg0, uint32_t arg1) __asm__("_ZN3app4util7G2DUtil13GetTempStrBufEj");
extern "C" uint32_t YellowAuto_0030f8fc(void* arg0, uint32_t arg1) {
return *(uint32_t*)((uint8_t*)arg0 + 0x2c + arg1 * 4);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0048EE3C
extern "C" uint32_t YellowAuto_0048ee3c(void* arg0, uint32_t arg1) __asm__("_ZNK3app4util7G2DUtil13GetLayoutWorkEj");
extern "C" uint32_t YellowAuto_0048ee3c(void* arg0, uint32_t arg1) {
return *(uint32_t*)((uint8_t*)*(void**)((uint8_t*)arg0 + 0x14) + arg1 * 8);
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00311070
void SetStringForLytTextBox(uint8_t*, uint8_t*, int32_t);
extern "C" void YellowAuto_00311070(uint8_t* arg0, uint8_t* arg1, uint8_t* arg2) __asm__("_ZN3app4util7G2DUtil20SetTextBoxPaneStringEPN2nw3lyt7TextBoxEPN4gfl23str6StrBufE");
extern "C" void YellowAuto_00311070(uint8_t* arg0, uint8_t* arg1, uint8_t* arg2) {
(void)arg0; SetStringForLytTextBox(arg1, arg2, 10);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00311828
uint16_t MsgData_GetString(uint8_t*, uint32_t, uint8_t*);
extern "C" uint16_t YellowAuto_00311828(uint8_t* arg0, uint8_t* arg1, uint32_t arg2) __asm__("_ZN3app4util7G2DUtil9GetStringEPN4gfl23str6StrBufEj");
extern "C" uint16_t YellowAuto_00311828(uint8_t* arg0, uint8_t* arg1, uint32_t arg2) {
return MsgData_GetString(*(uint8_t**)(arg0 + 32), arg2, arg1);
}
#endif
