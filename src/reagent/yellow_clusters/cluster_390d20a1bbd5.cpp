// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00459ACC
const void* MessageUtility_GetString(const void*, uint32_t, uint32_t);
void MessageMenuView_ShowMessage(uint8_t*, const void*, bool, bool, bool);
extern "C" void YellowAuto_00459acc(uint8_t* arg0, uint32_t arg1, uint32_t arg2, bool arg3, bool arg4, bool arg5) __asm__("_ZN9NetAppLib2UI17NetAppMessageMenu11ShowMessageEjjbbb");
extern "C" void YellowAuto_00459acc(uint8_t* arg0, uint32_t arg1, uint32_t arg2, bool arg3, bool arg4, bool arg5) {
if (*(const void **)(arg0 + 0xac) != 0) MessageMenuView_ShowMessage(arg0, MessageUtility_GetString(*(const void **)(arg0 + 0xac), arg1, arg2), arg3, arg4, arg5);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00459B1C
void MessageMenuView_ShowMessageWithListMenu(uint8_t*, const void*, bool, const void*, const void*, const void*, const void*, const void*, const void*);
extern "C" void YellowAuto_00459b1c(uint8_t* arg0, const void* arg1, bool arg2, const void* arg3, const void* arg4, const void* arg5, const void* arg6, const void* arg7, const void* arg8) __asm__("_ZN9NetAppLib2UI17NetAppMessageMenu23ShowMessageWithListMenuEPKN4gfl23str6StrBufEbS6_S6_S6_S6_S6_S6_");
extern "C" void YellowAuto_00459b1c(uint8_t* arg0, const void* arg1, bool arg2, const void* arg3, const void* arg4, const void* arg5, const void* arg6, const void* arg7, const void* arg8) {
if (*(const void **)(arg0 + 0xac) != 0) MessageMenuView_ShowMessageWithListMenu(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
}
#endif
