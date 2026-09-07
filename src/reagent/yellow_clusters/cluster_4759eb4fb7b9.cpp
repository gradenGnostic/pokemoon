// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0042CE04
void GetDrawData(const uint8_t*, uint32_t, void*, void*, uint8_t*);
void LoadData(uint8_t*, uint32_t, uint32_t);
extern "C" void YellowAuto_0042ce04(uint8_t* arg0) __asm__("_ZN8PokeTool12PersonalSort14ReloadFullDataEv");
extern "C" void YellowAuto_0042ce04(uint8_t* arg0) {
if (*(arg0 + 0x10E9) != 1) return; uint32_t _n = ((uint32_t (*)(const uint8_t*))*(uint32_t*)(*(uint8_t**)arg0 + 0x44))(arg0); for (uint32_t _i = 0; _i < _n; ++_i) { uint32_t _m = ((uint32_t (*)(const uint8_t*, uint32_t))*(uint32_t*)(*(uint8_t**)arg0 + 0x30))(arg0, _i); *(*(uint8_t**)(arg0 + 0x10CC) + _i) = 0; if (*(arg0 + 0x10E8) == 1) { uint32_t _s = 0; uint32_t _r = 0; GetDrawData(*(const uint8_t**)(arg0 + 8), _m, (uint8_t*)&_s, (uint8_t*)&_r, *(uint8_t**)(arg0 + 0x10CC) + _i); } uint8_t* _p = (*(uint8_t***)(arg0 + 0x10C8))[_i]; if (*(uint16_t*)(_p + 4) != (uint16_t)_m || *(uint8_t*)(_p + 6) != *(*(uint8_t**)(arg0 + 0x10CC) + _i)) { LoadData(_p, _m, *(*(uint8_t**)(arg0 + 0x10CC) + _i)); } _n = ((uint32_t (*)(const uint8_t*))*(uint32_t*)(*(uint8_t**)arg0 + 0x44))(arg0); }
}
#endif
