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

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0042D234
uint8_t* FUN_0042ca04(uint8_t*, uint32_t, const uint8_t*, void*);
extern "C" uint8_t* YellowAuto_0042d234(uint8_t* arg0, uint32_t arg1, const uint8_t* arg2, void* arg3, uint32_t arg4, uint32_t arg5) __asm__("_ZN8PokeTool12PersonalSortC1EjPKN8Savedata9ZukanDataEPN4gfl24heap11CtrHeapBaseENS0_8LoadTypeENS0_4ModeE");
extern "C" uint8_t* YellowAuto_0042d234(uint8_t* arg0, uint32_t arg1, const uint8_t* arg2, void* arg3, uint32_t arg4, uint32_t arg5) {
arg0 = FUN_0042ca04(arg0, arg1, arg2, arg3); *(uint32_t*)arg0 = *(uint32_t*)0x42D304; *(uint32_t*)(arg0 + 0x10CC) = 0; *(uint32_t*)(arg0 + 0x10C4) = *(uint32_t*)0x42D304 + 0x50; *(uint32_t*)(arg0 + 0x10D0) = *(uint32_t*)(*(uint32_t*)0x42D300 + 0x30); *(uint32_t*)(arg0 + 0x10D4) = *(uint32_t*)(*(uint32_t*)0x42D300 + 0x34); *(uint32_t*)(arg0 + 0x10D8) = *(uint32_t*)(*(uint32_t*)0x42D300 + 0x38); *(uint32_t*)(arg0 + 0x10DC) = *(uint32_t*)(*(uint32_t*)0x42D300 + 0x3C); *(uint32_t*)(arg0 + 0x10E0) = *(uint32_t*)(*(uint32_t*)0x42D300 + 0x40); *(uint32_t*)(arg0 + 0x10E4) = *(uint32_t*)(*(uint32_t*)0x42D300 + 0x44); *(uint8_t*)(arg0 + 0x10E8) = (uint8_t)arg5; *(uint8_t*)(arg0 + 0x10E9) = (uint8_t)arg4; *(uint32_t*)(arg0 + 0x14) = (uint32_t)(arg0 + 0x10C4); if (arg4 == 1) { *(uint32_t*)(arg0 + 0x10D0) = *(uint32_t*)(*(uint32_t*)0x42D300 + 0x0); *(uint32_t*)(arg0 + 0x10D4) = *(uint32_t*)(*(uint32_t*)0x42D300 + 0x4); *(uint32_t*)(arg0 + 0x10D8) = *(uint32_t*)(*(uint32_t*)0x42D300 + 0x8); *(uint32_t*)(arg0 + 0x10DC) = *(uint32_t*)(*(uint32_t*)0x42D300 + 0xC); *(uint32_t*)(arg0 + 0x10E0) = *(uint32_t*)(*(uint32_t*)0x42D300 + 0x10); *(uint32_t*)(arg0 + 0x10E4) = *(uint32_t*)(*(uint32_t*)0x42D300 + 0x14); } else { *(uint32_t*)(arg0 + 0x10D0) = *(uint32_t*)(*(uint32_t*)0x42D300 + 0x18); *(uint32_t*)(arg0 + 0x10D4) = *(uint32_t*)(*(uint32_t*)0x42D300 + 0x1C); *(uint32_t*)(arg0 + 0x10D8) = *(uint32_t*)(*(uint32_t*)0x42D300 + 0x20); *(uint32_t*)(arg0 + 0x10DC) = *(uint32_t*)(*(uint32_t*)0x42D300 + 0x24); *(uint32_t*)(arg0 + 0x10E0) = *(uint32_t*)(*(uint32_t*)0x42D300 + 0x28); *(uint32_t*)(arg0 + 0x10E4) = *(uint32_t*)(*(uint32_t*)0x42D300 + 0x2C); } if ((*(uint32_t*)(arg0 + 0x10D4) & 1u) == 0) ((void(*)(uint8_t*, void*))*(uint32_t*)(arg0 + 0x10D0))(arg0 + ((int32_t)*(uint32_t*)(arg0 + 0x10D4) >> 1), arg3); else ((void(*)(uint8_t*, void*))*(uint32_t*)(*(uint32_t*)(arg0 + ((int32_t)*(uint32_t*)(arg0 + 0x10D4) >> 1)) + *(uint32_t*)(arg0 + 0x10D0)))(arg0 + ((int32_t)*(uint32_t*)(arg0 + 0x10D4) >> 1), arg3); return arg0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0042D364
void FUN_0042ccf4(uint8_t*);
extern "C" void YellowAuto_0042d364(uint8_t* arg0) __asm__("_ZN8PokeTool12PersonalSortD1Ev");
extern "C" void YellowAuto_0042d364(uint8_t* arg0) {
*(uint32_t*)arg0 = *(uint32_t*)0x42D3B0; *(uint32_t*)(arg0 + 0x10C4) = *(uint32_t*)0x42D3B0 + 0x50; if ((*(uint32_t*)(arg0 + 0x10DC) & 1u) == 0) ((void(*)(uint8_t*))*(uint32_t*)(arg0 + 0x10D8))(arg0 + ((int32_t)*(uint32_t*)(arg0 + 0x10DC) >> 1)); else ((void(*)(uint8_t*))*(uint32_t*)(*(uint32_t*)(arg0 + ((int32_t)*(uint32_t*)(arg0 + 0x10DC) >> 1)) + *(uint32_t*)(arg0 + 0x10D8)))(arg0 + ((int32_t)*(uint32_t*)(arg0 + 0x10DC) >> 1)); FUN_0042ccf4(arg0);
}
#endif
