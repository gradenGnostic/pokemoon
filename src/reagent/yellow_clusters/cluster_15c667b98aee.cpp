// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002D4024
void FUN_002d40a4(uint8_t*, uint32_t);
extern "C" bool YellowAuto_002d4024(uint8_t* arg0) __asm__("_ZN3App4Tool9TimeLimit6UpdateEv");
extern "C" bool YellowAuto_002d4024(uint8_t* arg0) {
uint32_t t_lo = *reinterpret_cast<uint32_t*>(arg0 + 8);
uint32_t t_hi = *reinterpret_cast<uint32_t*>(arg0 + 12);
if (t_lo == 0 && t_hi == 0) return false;
if (*(arg0 + 24) == 1) FUN_002d40a4(arg0, t_hi);
uint32_t e_lo = *reinterpret_cast<uint32_t*>(arg0 + 16);
uint32_t e_hi = *reinterpret_cast<uint32_t*>(arg0 + 20);
uint32_t r_lo;
uint32_t r_hi;
if (e_hi > t_hi || (e_hi == t_hi && e_lo >= t_lo)) { r_lo = 0; r_hi = 0; } else { uint32_t b = (t_lo < e_lo) ? 1u : 0u; r_lo = t_lo - e_lo; r_hi = t_hi - e_hi - b; }
if (r_lo == 0 && r_hi == 0) return true;
FUN_002d40a4(arg0, r_lo);
return false;
}
#endif
