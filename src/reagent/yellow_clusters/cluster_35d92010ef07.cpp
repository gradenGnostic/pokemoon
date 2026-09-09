// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002EE738
void* memset(void*, int32_t, uint32_t);
extern "C" void YellowAuto_002ee738(uint8_t* arg0, const void* arg1, uint32_t arg2, uint8_t arg3, bool arg4) __asm__("_ZN3app4tool13CursorManagerC1EPKNS1_9MOVE_DATAEjhb");
extern "C" void YellowAuto_002ee738(uint8_t* arg0, const void* arg1, uint32_t arg2, uint8_t arg3, bool arg4) {
*(uint32_t*)(arg0 + 0) = 0;
*(uint32_t*)(arg0 + 12) = 0;
*(const void**)(arg0 + 8) = arg1;
*(uint32_t*)(arg0 + 16) = arg2;
*(uint8_t*)(arg0 + 20) = arg3;
*(uint8_t*)(arg0 + 21) = arg3;
*(uint8_t*)(arg0 + 22) = 0;
*(uint8_t*)(arg0 + 23) = 3;
memset(arg0 + 24, 255, 32);
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002EE47C
bool IsRepeat(void*, int32_t);
int32_t SubFunc(uint8_t*, int32_t);
extern "C" int32_t YellowAuto_002ee47c(uint8_t* arg0) __asm__("_ZN3app4tool13CursorManager10MainRepeatEv");
extern "C" int32_t YellowAuto_002ee47c(uint8_t* arg0) {
if (IsRepeat((void*)(*(uint32_t*)(arg0 + 4)), 4)) { if (SubFunc(arg0, 0) == 0) return -8; return -3; } if (IsRepeat((void*)(*(uint32_t*)(arg0 + 4)), 8)) { if (SubFunc(arg0, 1) == 0) return -7; return -3; } if (IsRepeat((void*)(*(uint32_t*)(arg0 + 4)), 1)) { if (SubFunc(arg0, 2) == 0) return -6; return -3; } if (IsRepeat((void*)(*(uint32_t*)(arg0 + 4)), 2)) { if (SubFunc(arg0, 3) == 0) return -5; return -3; } return -1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002EE7B0
void OperatorDelete(void*);
extern "C" uint8_t* YellowAuto_002ee7b0(uint8_t* arg0) __asm__("_ZN3app4tool13CursorManagerD1Ev");
extern "C" uint8_t* YellowAuto_002ee7b0(uint8_t* arg0) {
if (*(uint32_t*)arg0 != 0) { uint32_t v = *(uint32_t*)(arg0 + 12); if (v != 0) OperatorDelete((void*)v); } return arg0;
}
#endif
