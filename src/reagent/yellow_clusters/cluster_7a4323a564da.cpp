// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0048CABC
extern "C" int32_t YellowAuto_0048cabc(const uint8_t* arg0) __asm__("_ZNK3App4Tool11SlideScroll13GetDragOffsetEv");
extern "C" int32_t YellowAuto_0048cabc(const uint8_t* arg0) {
if (*(arg0 + 5) == 0) return (int32_t)*(const uint16_t*)(arg0 + 10) - (int32_t)*(const uint16_t*)(arg0 + 6); return (int32_t)*(const uint16_t*)(arg0 + 12) - (int32_t)*(const uint16_t*)(arg0 + 8);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002CDF30
extern "C" void YellowAuto_002cdf30(uint8_t* arg0) __asm__("_ZN3App4Tool11SlideScroll14InitUpdateWorkEv");
extern "C" void YellowAuto_002cdf30(uint8_t* arg0) {
*(arg0 + 18) = 0; *(uint16_t*)(arg0 + 6) = 0; *(uint16_t*)(arg0 + 8) = 0; *(uint16_t*)(arg0 + 10) = 0; *(uint16_t*)(arg0 + 12) = 0; *(uint16_t*)(arg0 + 14) = 0; *(uint16_t*)(arg0 + 16) = 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002CDF78
extern "C" void YellowAuto_002cdf78(uint8_t* arg0, uint8_t arg1) __asm__("_ZN3App4Tool11SlideScrollC1ENS1_9SlideModeE");
extern "C" void YellowAuto_002cdf78(uint8_t* arg0, uint8_t arg1) {
*(arg0 + 5) = arg1; *(arg0 + 4) = 0; *(uint16_t*)(arg0 + 6) = 0; *(uint16_t*)(arg0 + 8) = 0; *(uint16_t*)(arg0 + 10) = 0; *(uint16_t*)(arg0 + 12) = 0; *(uint16_t*)(arg0 + 14) = 0; *(uint16_t*)(arg0 + 16) = 0; *(arg0 + 18) = 0; *(uint16_t*)(arg0 + 20) = 0; *(uint16_t*)(arg0 + 22) = 240; *(uint16_t*)(arg0 + 24) = 0; *(uint16_t*)(arg0 + 26) = 320; *(arg0 + 28) = 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002CDCC0
bool IsTouchTrigger(void*);
void GetXY(void*, uint16_t*, uint16_t*);
extern "C" uint8_t YellowAuto_002cdcc0(uint8_t* arg0, void* arg1, bool arg2) __asm__("_ZN3App4Tool11SlideScroll11UpdateSlideEPN4gfl22ui10TouchPanelEb");
extern "C" uint8_t YellowAuto_002cdcc0(uint8_t* arg0, void* arg1, bool arg2) {
*(arg0 + 4) = 0; if (arg2 != 0) { if (IsTouchTrigger(arg1)) { if (*(arg0 + 18) != 0) { *(arg0 + 18) = 0; *(uint16_t*)(arg0 + 6) = 0; *(uint16_t*)(arg0 + 8) = 0; *(uint16_t*)(arg0 + 10) = 0; *(uint16_t*)(arg0 + 12) = 0; *(uint16_t*)(arg0 + 14) = 0; *(uint16_t*)(arg0 + 16) = 0; } } } if (*(arg0 + 18) == 0) { if (arg2 != 0) { bool t = IsTouchTrigger(arg1); uint8_t e = *(arg0 + 28); if (t || e != 0) { uint16_t x; uint16_t y; GetXY(arg1, &x, &y); uint16_t lx = *(uint16_t*)(arg0 + 24); uint16_t rx = *(uint16_t*)(arg0 + 26); uint16_t uy = *(uint16_t*)(arg0 + 20); uint16_t dy = *(uint16_t*)(arg0 + 22); if (lx <= x && x <= rx && uy <= y && y <= dy) { *(uint16_t*)(arg0 + 6) = x; *(uint16_t*)(arg0 + 8) = y; *(uint16_t*)(arg0 + 10) = x; *(uint16_t*)(arg0 + 12) = y; *(uint16_t*)(arg0 + 14) = x; *(uint16_t*)(arg0 + 16) = y; *(arg0 + 18) = 1; } *(arg0 + 28) = 0; } } } else if (*(arg0 + 18) == 1) { uint16_t x; uint16_t y; GetXY(arg1, &x, &y); uint16_t lx = *(uint16_t*)(arg0 + 24); uint16_t rx = *(uint16_t*)(arg0 + 26); uint16_t uy = *(uint16_t*)(arg0 + 20); uint16_t dy = *(uint16_t*)(arg0 + 22); uint32_t inside = (uint32_t)(lx <= x && x <= rx && uy <= y && y <= dy); if ((inside & arg2) == 0) { *(arg0 + 18) = 0; } else { int32_t d; if (*(arg0 + 5) == 0) d = (int32_t)x - (int32_t)*(uint16_t*)(arg0 + 6); else d = (int32_t)y - (int32_t)*(uint16_t*)(arg0 + 8); if (d < 0) d = -d; if (d > 11) { *(arg0 + 18) = 2; *(uint16_t*)(arg0 + 10) = x; *(uint16_t*)(arg0 + 12) = y; *(uint16_t*)(arg0 + 14) = x; *(uint16_t*)(arg0 + 16) = y; *(arg0 + 4) = 1; } } } else if (*(arg0 + 18) == 2) { uint16_t x; uint16_t y; GetXY(arg1, &x, &y); if (arg2 != 0) { *(uint16_t*)(arg0 + 14) = *(uint16_t*)(arg0 + 10); *(uint16_t*)(arg0 + 16) = *(uint16_t*)(arg0 + 12); *(uint16_t*)(arg0 + 10) = x; *(uint16_t*)(arg0 + 12) = y; *(arg0 + 4) = 2; } else { *(arg0 + 18) = 0; int32_t d; if (*(arg0 + 5) == 0) d = (int32_t)*(uint16_t*)(arg0 + 14) - (int32_t)*(uint16_t*)(arg0 + 10); else d = (int32_t)*(uint16_t*)(arg0 + 16) - (int32_t)*(uint16_t*)(arg0 + 12); uint32_t u = (uint32_t)(d + 11); if (u < 23) *(arg0 + 4) = 3; else if (d < 0) *(arg0 + 4) = 5; else *(arg0 + 4) = 4; } } return *(arg0 + 4);
}
#endif
