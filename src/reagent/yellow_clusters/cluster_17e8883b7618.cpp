// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003874F8
void SetEventFlag(uint8_t*, uint32_t);
extern "C" void YellowAuto_003874f8(uint8_t* arg0, uint8_t* arg1, uint32_t arg2) __asm__("_ZN5Field13WarpDataTools12UpdateArriveEPN7GameSys8GameDataEi");
extern "C" void YellowAuto_003874f8(uint8_t* arg0, uint8_t* arg1, uint32_t arg2) {
int32_t c0 = *reinterpret_cast<int32_t*>(arg0 + 8);
uint32_t p0 = *reinterpret_cast<uint32_t*>(arg0);
uint32_t s0 = *reinterpret_cast<uint32_t*>(arg1 + 4);
uint8_t* ebase = reinterpret_cast<uint8_t*>(s0 + 0x1590U);
for (int32_t i = 0; i < c0; ++i) {
uint8_t* e = reinterpret_cast<uint8_t*>(p0) + static_cast<uint32_t>(i) * 28U;
if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(e + 6)) == arg2 && ((*reinterpret_cast<uint32_t*>(e + 8) & 2U) != 0U)) {
uint32_t f = *reinterpret_cast<uint32_t*>(e);
SetEventFlag(ebase, f & 0xFFFFU);
break;
}
}
int32_t c1 = *reinterpret_cast<int32_t*>(arg0 + 12);
uint32_t p1 = *reinterpret_cast<uint32_t*>(arg0 + 4);
for (int32_t j = 0; j < c1; ++j) {
uint8_t* e = reinterpret_cast<uint8_t*>(p1) + static_cast<uint32_t>(j) * 8U;
if (static_cast<uint32_t>(*reinterpret_cast<uint16_t*>(e)) == arg2) {
uint32_t f = *reinterpret_cast<uint32_t*>(e + 4);
SetEventFlag(ebase, f & 0xFFFFU);
return;
}
}
return;
}
#endif
