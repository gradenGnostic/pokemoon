// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002D1FA4
extern uint32_t DAT_002d2024;
uint8_t* UIView(uint8_t*, uint32_t, uint32_t, uint32_t);
uint8_t* CommonMessageWindowManipulator(uint8_t*);
uint8_t* StrBuf(uint8_t*, uint32_t, void*);
uint8_t* WordSet(uint8_t*, void*);
extern "C" uint8_t* YellowAuto_002d1fa4(uint8_t* arg0, const uint32_t* arg1, void* arg2) __asm__("_ZN3App4Tool23CommonMessageWindowViewC1ERKNS1_5PARAMEPNS1_13IEventHandlerE");
extern "C" uint8_t* YellowAuto_002d1fa4(uint8_t* arg0, const uint32_t* arg1, void* arg2) {
arg0 = UIView(arg0, arg1[0], 0, 0);
*(uint32_t*)arg0 = DAT_002d2024;
*(uint32_t*)((uint8_t*)arg0 + 0x80) = DAT_002d2024 + 0x64;
*(uint32_t*)((uint8_t*)arg0 + 0x84) = arg1[0];
*(uint32_t*)((uint8_t*)arg0 + 0x88) = arg1[1];
CommonMessageWindowManipulator((uint8_t*)arg0 + 0x8c);
*(uint32_t*)((uint8_t*)arg0 + 0xe4) = 0;
*(void**)((uint8_t*)arg0 + 0xe0) = arg2;
StrBuf((uint8_t*)arg0 + 0xe8, 0x200, *(void**)((uint8_t*)(*(uint32_t*)((uint8_t*)arg0 + 0x84)) + 8));
WordSet((uint8_t*)arg0 + 0xf8, *(void**)((uint8_t*)(*(uint32_t*)((uint8_t*)arg0 + 0x84)) + 8));
return arg0;
}
#endif
