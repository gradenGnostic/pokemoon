// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002CE0F8
extern "C" void YellowAuto_002ce0f8(uint8_t* arg0, uint8_t arg1, uint32_t arg2) __asm__("_ZN3App4Tool15MessageMenuView13SetYNListModeEbj");
extern "C" void YellowAuto_002ce0f8(uint8_t* arg0, uint8_t arg1, uint32_t arg2) {
arg0[0xa4] = arg1; *(uint32_t *)(arg0 + 0xa0) = arg2 & 1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002CED50
void MenuWindow_AddItem(uint8_t*, const uint8_t*, bool, bool, uint32_t);
extern "C" void YellowAuto_002ced50(uint8_t* arg0, const uint8_t* arg1, bool arg2, bool arg3, uint32_t arg4) __asm__("_ZN3App4Tool15MessageMenuView7AddItemERKN4gfl23str6StrBufEbbj");
extern "C" void YellowAuto_002ced50(uint8_t* arg0, const uint8_t* arg1, bool arg2, bool arg3, uint32_t arg4) {
MenuWindow_AddItem(*(uint8_t **)(arg0 + 0x98), arg1, arg2, arg3, arg4);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002CED68
void MenuWindow_AddItem(uint8_t*, uint8_t*, bool, bool, uint32_t);
extern "C" void YellowAuto_002ced68(uint8_t* arg0, uint8_t* arg1, bool arg2, bool arg3, uint32_t arg4) __asm__("_ZN3App4Tool15MessageMenuView7AddItemERN4gfl23str6StrBufEbbj");
extern "C" void YellowAuto_002ced68(uint8_t* arg0, uint8_t* arg1, bool arg2, bool arg3, uint32_t arg4) {
MenuWindow_AddItem(*(uint8_t **)(arg0 + 0x98), arg1, arg2, arg3, arg4);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002CED80
extern uint32_t DAT_002cede4;
uint8_t* UIView(uint8_t*, uint32_t, uint32_t, uint32_t);
extern "C" void YellowAuto_002ced80(uint8_t* arg0, const uint8_t* arg1, uint8_t* arg2) __asm__("_ZN3App4Tool15MessageMenuViewC1ERKNS1_5PARAMEPNS1_13IEventHandlerE");
extern "C" void YellowAuto_002ced80(uint8_t* arg0, const uint8_t* arg1, uint8_t* arg2) {
UIView(arg0, *(uint32_t *)arg1, 0, 0); *(uint32_t *)(arg0 + 0x0) = DAT_002cede4; *(uint32_t *)(arg0 + 0x80) = DAT_002cede4 + 0x68; *(uint32_t *)(arg0 + 0x84) = DAT_002cede4 + 0x74; *(uint32_t *)(arg0 + 0x94) = 0; *(uint32_t *)(arg0 + 0x98) = 0; *(uint32_t *)(arg0 + 0x9c) = 0; *(uint32_t *)(arg0 + 0xa0) = 0; *(uint32_t *)(arg0 + 0x88) = *(uint32_t *)arg1; *(uint32_t *)(arg0 + 0x8c) = *(uint32_t *)(arg1 + 4); *(uint32_t *)(arg0 + 0x90) = (uint32_t)arg2; arg0[0xa4] = 0; arg0[0xa5] = 0; arg0[0xa6] = 0;
}
#endif
