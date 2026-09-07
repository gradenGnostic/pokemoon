// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002F9D70
float helper_002d3eb0(uint8_t*, uint32_t);
int32_t helper_002f9dc0(uint8_t*, float);
void helper_002d4024(uint8_t*);
void helper_002fa204(uint8_t*);
extern "C" void YellowAuto_002f9d70(uint8_t* arg0, uint32_t arg1) __asm__("_ZN3app4tool19ModelViewerSequence10UpdateFuncEv");
extern "C" void YellowAuto_002f9d70(uint8_t* arg0, uint32_t arg1) {
if (*(int32_t*)(arg0 + 0x24) == 2) {
float prog = helper_002d3eb0(arg0 + 0x50, arg1);
if (helper_002f9dc0(arg0, prog) == 0) {
*(int32_t*)(arg0 + 0x24) = 1;
}
helper_002d4024(arg0 + 0x50);
helper_002fa204(arg0);
}
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002FA4A4
extern "C" bool YellowAuto_002fa4a4(uint8_t* arg0) __asm__("_ZN3app4tool19ModelViewerSequence7EndFuncEv");
extern "C" bool YellowAuto_002fa4a4(uint8_t* arg0) {
*(int32_t*)(arg0 + 0x20) = 0;
return true;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002FA4B4
extern "C" bool YellowAuto_002fa4b4(uint8_t* arg0) __asm__("_ZN3app4tool19ModelViewerSequence8InitFuncEv");
extern "C" bool YellowAuto_002fa4b4(uint8_t* arg0) {
int32_t cur = *(int32_t*)(arg0 + 0x20);
if (cur != 0) {
return true;
}
*(float*)(arg0 + 0xF0) = 0.0f;
*(float*)(arg0 + 0xF4) = 0.0f;
*(float*)(arg0 + 0xF8) = 0.0f;
*(float*)(arg0 + 0xE0) = 0.5235988f;
*(float*)(arg0 + 0xE4) = 0.0f;
*(float*)(arg0 + 0xE8) = 0.0f;
*(float*)(arg0 + 0xEC) = 0.0f;
*(int32_t*)(arg0 + 0x20) = cur + 1;
return false;
}
#endif
