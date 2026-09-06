// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00302430
uint32_t GetPosPaneIndex(uint8_t*, uint32_t);
void Put(void*, void*, int32_t);
extern "C" void YellowAuto_00302430(uint8_t* arg0, uint32_t arg1, uint32_t arg2) __asm__("_ZN3app4tool8PaneList13SetCursorDataEjf");
extern "C" void YellowAuto_00302430(uint8_t* arg0, uint32_t arg1, uint32_t arg2) {
*(uint32_t*)(arg0 + 0x18) = arg1; *(uint32_t*)(arg0 + 0x1c) = arg2; *(uint32_t*)(arg0 + 0x6c) = arg2; if (*(uint32_t*)(arg0 + 0x40) != 0) Put(*(void**)(arg0 + 0x40), *(void**)(arg0 + 0x04), *(int32_t*)(*(uint8_t**)(arg0 + 0x08) + GetPosPaneIndex(arg0, arg1) * 0x20 + 0x0c));
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003043F0
void SetButtonSelectSE(void*, uint32_t, uint32_t);
extern "C" void YellowAuto_003043f0(uint8_t* arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3) __asm__("_ZN3app4tool8PaneList5SetSEEjjj");
extern "C" void YellowAuto_003043f0(uint8_t* arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3) {
*(uint32_t*)(arg0 + 0x4c) = arg1; *(uint32_t*)(arg0 + 0x50) = arg2; *(uint32_t*)(arg0 + 0x54) = arg3; for (uint32_t i = 0; i < *(uint32_t*)(arg0 + 0x0c); ++i) if (*(uint32_t*)(arg0 + 0x50) != 0xffffffffu) SetButtonSelectSE(*(void**)(arg0 + 0x78), i, *(uint32_t*)(arg0 + 0x50)), *(uint32_t*)(*(uint8_t**)(arg0 + 0x7c) + i * 4) = *(uint32_t*)(arg0 + 0x50); else *(uint32_t*)(*(uint8_t**)(arg0 + 0x7c) + i * 4) = *(uint32_t*)(arg0 + 0x50);
}
#endif
