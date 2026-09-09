// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0049F05C
bool CheckEventFlag(const uint8_t* arg0, uint16_t arg1);
extern "C" bool YellowAuto_0049f05c(const uint8_t* arg0, uint16_t arg1) __asm__("_ZNK5Field9EventWork14CheckEventFlagEt");
extern "C" bool YellowAuto_0049f05c(const uint8_t* arg0, uint16_t arg1) {
const uint8_t* arg0_;
if (arg1 == 0) return false;
if (arg1 < 0x3000) goto LAB_low;
if ((uint16_t)(arg1 - 0x3000) >= 0x40) return false;
arg0_ = *(const uint8_t**)(0x0049f0f0 + (((int32_t)((uint16_t)(arg1 - 0x3000)) + ((uint32_t)((int32_t)(uint16_t)(arg1 - 0x3000) >> 31) >> 29)) >> 3));
return arg0_ != 0 && ((*arg0_ & (uint8_t)(1u << (arg1 & 7))) != 0);
LAB_low:
if (arg1 >= 0x0f80) return false;
arg0_ = arg0 + 0x7d4 + (arg1 >> 3);
return arg0_ != 0 && ((*arg0_ & (uint8_t)(1u << (arg1 & 7))) != 0);
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0039A410
extern "C" bool YellowAuto_0039a410(uint8_t* arg0) __asm__("_ZN5Field9EventWork17DecMushiyokeCountEv");
extern "C" bool YellowAuto_0039a410(uint8_t* arg0) {
if (*(uint16_t*)(arg0 + 0x9E0) == 0) return false; *(uint16_t*)(arg0 + 0x9E0) = (uint16_t)(*(uint16_t*)(arg0 + 0x9E0) - 1); return *(uint16_t*)(arg0 + 0x9E0) == 0;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00399FD8
void GFLassert();
extern uint8_t* sec_base;
extern "C" void YellowAuto_00399fd8(uint8_t* arg0, uint16_t arg1) __asm__("_ZN5Field9EventWork12SetEventFlagEt");
extern "C" void YellowAuto_00399fd8(uint8_t* arg0, uint16_t arg1) {
if (arg1 == 0) return; if (arg1 < 0x3000) { if (arg1 >= 0xF80) { GFLassert(); return; } uint8_t* p = arg0 + (arg1 >> 3) + 0x7D4; if (p != (uint8_t*)0) { *p = (uint8_t)(*p | (uint8_t)(1u << (arg1 & 7))); } } else { if ((uint16_t)(arg1 - 0x3000) >= 0x40) { GFLassert(); return; } uint8_t* p = sec_base + ((arg1 - 0x3000) >> 3); if (p != (uint8_t*)0) { *p = (uint8_t)(*p | (uint8_t)(1u << (arg1 & 7))); } }
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0039A0BC
void GFLassert();
extern uint8_t* sec_base;
extern "C" void YellowAuto_0039a0bc(uint8_t* arg0, uint16_t arg1) __asm__("_ZN5Field9EventWork14ResetEventFlagEt");
extern "C" void YellowAuto_0039a0bc(uint8_t* arg0, uint16_t arg1) {
if (arg1 == 0) return; if (arg1 < 0x3000) { if (arg1 >= 0xF80) { GFLassert(); return; } uint8_t* p = arg0 + (arg1 >> 3) + 0x7D4; if (p != (uint8_t*)0) { *p = (uint8_t)(*p & (uint8_t)~(1u << (arg1 & 7))); } } else { if ((uint16_t)(arg1 - 0x3000) >= 0x40) { GFLassert(); return; } uint8_t* p = sec_base + ((arg1 - 0x3000) >> 3); if (p != (uint8_t*)0) { *p = (uint8_t)(*p & (uint8_t)~(1u << (arg1 & 7))); } }
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0039A1B8
extern uint8_t* sec_base;
extern "C" void YellowAuto_0039a1b8(uint8_t* arg0, uint16_t arg1, uint16_t arg2) __asm__("_ZN5Field9EventWork15ClearEventFlagsEtt");
extern "C" void YellowAuto_0039a1b8(uint8_t* arg0, uint16_t arg1, uint16_t arg2) {
uint32_t cur = arg1; uint32_t last = arg2; if (cur > last) return; while (1) { uint16_t id = (uint16_t)cur; if (id != 0) { if (id < 0x3000) { if (id < 0xF80) { uint8_t* p = arg0 + (id >> 3) + 0x7D4; if (p != (uint8_t*)0) { *p = (uint8_t)(*p & (uint8_t)~(1u << (id & 7))); } } } else { if ((uint16_t)(id - 0x3000) < 0x40) { uint8_t* p = sec_base + ((id - 0x3000) >> 3); if (p != (uint8_t*)0) { *p = (uint8_t)(*p & (uint8_t)~(1u << (id & 7))); } } } } if (cur >= last) break; cur = cur + 1; }
}
#endif
