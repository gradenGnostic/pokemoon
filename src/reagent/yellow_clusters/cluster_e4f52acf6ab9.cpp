// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003073A8
uint32_t GetType1(const uint8_t*);
uint32_t GetType2(const uint8_t*);
void GFLassert();
extern "C" void YellowAuto_003073a8(uint8_t* arg0, uint8_t* arg1, const uint8_t* arg2) __asm__("_ZN3app4util17OutputPokemonTypeEPhS1_PKN3pml8pokepara12PokemonParamE");
extern "C" void YellowAuto_003073a8(uint8_t* arg0, uint8_t* arg1, const uint8_t* arg2) {
if (arg0 == 0 || arg1 == 0 || arg2 == 0) { GFLassert(); return; } uint32_t t1 = GetType1(arg2); *arg0 = (uint8_t)t1; uint32_t t2 = GetType2(arg2); if (t2 == 18 || t1 == t2) { t2 = 18; } *arg1 = (uint8_t)t2;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0030E3C4
extern "C" void YellowAuto_0030e3c4(uint32_t arg0, uint8_t* arg1, uint8_t* arg2) __asm__("_ZN3app4util30OutputSpecialPointPokemSeikakuEN3pml8pokepara7SeikakuEPNS2_7PowerIDES5_");
extern "C" void YellowAuto_0030e3c4(uint32_t arg0, uint8_t* arg1, uint8_t* arg2) {
if (arg1 != 0) { *arg1 = 6; } if (arg2 != 0) { *arg2 = 6; } const uint8_t* t = *(const uint8_t* const*)0x30E430; for (uint32_t i = 0; i < 25; ++i) { uint32_t o = i * 3; if (t[o] == arg0) { if (arg1 != 0) { *arg1 = t[o + 1]; } if (arg2 != 0) { *arg2 = t[o + 2]; } } }
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0030732C
extern "C" void YellowAuto_0030732c(uint8_t* arg0, int32_t arg1, uint32_t arg2, const uint32_t* arg3) __asm__("_ZN3app4util16GetWazaTextColorEjjN2nw2ut6Color8E");
extern "C" void YellowAuto_0030732c(uint8_t* arg0, int32_t arg1, uint32_t arg2, const uint32_t* arg3) {
uint32_t v = (uint32_t)arg1 << 8; uint32_t c = arg2 << 8; if (v > (c >> 1)) { *(uint32_t*)arg0 = *arg3; return; } if (v < (c >> 2)) { if (v == 0) { arg0[0] = 255; arg0[1] = 0; arg0[2] = 0; arg0[3] = 255; } else { arg0[0] = 255; arg0[1] = 183; arg0[2] = 76; arg0[3] = 255; } return; } arg0[0] = 255; arg0[1] = 255; arg0[2] = 0; arg0[3] = 255;
}
#endif
