// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002D1CD8
void CommonMessageWindowManipulator_HideMessage(uint8_t *);
extern "C" void YellowAuto_002d1cd8(uint8_t* arg0) __asm__("_ZN3App4Tool23CommonMessageWindowView11HideMessageEv");
extern "C" void YellowAuto_002d1cd8(uint8_t* arg0) {
CommonMessageWindowManipulator_HideMessage(arg0 + 0x8c);
if (*(uint32_t *)(arg0 + 0xe4) != 0)
  *(uint8_t *)(*(uint32_t *)(arg0 + 0xe4) + 0x44) &= 0xfe;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002D1D04
void CommonMessageWindowManipulator_ShowMessage(uint8_t *, const void *, bool, bool);
extern "C" void YellowAuto_002d1d04(uint8_t* arg0, const void* arg1, bool arg2, bool arg3, bool arg4) __asm__("_ZN3App4Tool23CommonMessageWindowView11ShowMessageEPKN4gfl23str6StrBufEbbb");
extern "C" void YellowAuto_002d1d04(uint8_t* arg0, const void* arg1, bool arg2, bool arg3, bool arg4) {
CommonMessageWindowManipulator_ShowMessage(arg0 + 0x8c, arg1, arg2, arg3);
if (*(uint32_t *)(arg0 + 0xe4) != 0)
  *(uint8_t *)(*(uint32_t *)(arg0 + 0xe4) + 0x44) = (*(uint8_t *)(*(uint32_t *)(arg0 + 0xe4) + 0x44) & 0xfe) | arg4;
}
#endif
