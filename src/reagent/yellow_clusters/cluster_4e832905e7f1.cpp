// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002F5CAC
void sub_002e961c(void*, bool, int32_t);
extern "C" void YellowAuto_002f5cac(uint8_t* arg0, bool arg1) __asm__("_ZN3app4tool17ScrollPaneManager20SetVisibleMenuCursorEb");
extern "C" void YellowAuto_002f5cac(uint8_t* arg0, bool arg1) {
if (!arg1)
  sub_002e961c(*(void **)(arg0 + 0xc4), 0, 3);
else
  *(uint8_t *)(arg0 + 0x131) = 1;
return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002F5088
void sub_002e6b00(void*, bool);
void sub_002e961c(void*, bool, int32_t);
extern "C" void YellowAuto_002f5088(uint8_t* arg0, bool arg1) __asm__("_ZN3app4tool17ScrollPaneManager15SetInputEnabledEb");
extern "C" void YellowAuto_002f5088(uint8_t* arg0, bool arg1) {
sub_002e6b00(arg0, arg1);
if (*(void **)(arg0 + 0xc4) != 0)
  sub_002e961c(*(void **)(arg0 + 0xc4), arg1, 3);
return;
}
#endif
