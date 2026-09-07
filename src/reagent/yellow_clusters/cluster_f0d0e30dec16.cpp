// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002F100C
bool IsAnimationLoop(void* arg0, int32_t arg1, int32_t arg2);
bool IsAnimationLastFrame(void* arg0, int32_t arg1, int32_t arg2);
extern "C" bool YellowAuto_002f100c(uint8_t* arg0) __asm__("_ZN3app4tool15PokeSimpleModel10IsEndAnimeEv");
extern "C" bool YellowAuto_002f100c(uint8_t* arg0) {
if (*(arg0 + 0x30) != 2) return true; if (*(arg0 + 0x36) == 0x39) return true; if (*(arg0 + 0x37) == 1) return false; if (IsAnimationLoop((void*)(*(uint32_t*)(arg0 + 0x48)), 0, 31)) return false; return IsAnimationLastFrame((void*)(*(uint32_t*)(arg0 + 0x48)), 0, 31) == 1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002F1600
void GFLassert(uint32_t arg0, uint32_t arg1, uint32_t arg2);
extern "C" void YellowAuto_002f1600(uint8_t* arg0, const uint8_t* arg1) __asm__("_ZN3app4tool15PokeSimpleModel9StartLoadERKN8PokeTool11SimpleParamE");
extern "C" void YellowAuto_002f1600(uint8_t* arg0, const uint8_t* arg1) {
if (*(arg0 + 0x34) == 1) { GFLassert(0, 0, 0); return; } if (*(uint16_t*)(arg0 + 0x4) != *(uint16_t*)(arg1 + 0x0) || *(arg0 + 0x6) != *(arg1 + 0x2) || (int8_t)*(arg0 + 0x9) != (int8_t)*(arg1 + 0x5) || *(arg0 + 0x7) != *(arg1 + 0x3) || (int8_t)*(arg0 + 0x8) != (int8_t)*(arg1 + 0x4) || *(uint32_t*)(arg0 + 0xC) != *(uint32_t*)(arg1 + 0x8)) { *(uint16_t*)(arg0 + 0x32) = *(uint16_t*)(arg1 + 0x0); *(uint32_t*)(arg0 + 0x4) = *(uint32_t*)(arg1 + 0x0); *(uint32_t*)(arg0 + 0x8) = *(uint32_t*)(arg1 + 0x4); *(uint32_t*)(arg0 + 0xC) = *(uint32_t*)(arg1 + 0x8); }
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002F1120
void GFLassertStop(uint32_t arg0, uint32_t arg1, uint32_t arg2);
extern "C" void YellowAuto_002f1120(uint8_t* arg0, uint32_t arg1) __asm__("_ZN3app4tool15PokeSimpleModel12SetAnimeTypeEN8PokeTool15MODEL_ANIMETYPEE");
extern "C" void YellowAuto_002f1120(uint8_t* arg0, uint32_t arg1) {
if (arg1 >= 5) GFLassertStop(0, 0, 0); *(arg0 + 0x1C) = (uint8_t)arg1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002F1168
bool Sub43506c(void* arg0, uint32_t arg1);
extern "C" bool YellowAuto_002f1168(uint8_t* arg0, uint32_t arg1) __asm__("_ZN3app4tool15PokeSimpleModel21CheckCanOneshotMotionEN8PokeTool11MODEL_ANIMEE");
extern "C" bool YellowAuto_002f1168(uint8_t* arg0, uint32_t arg1) {
if (*(arg0 + 0x30) != 2) return false; return Sub43506c((void*)(*(uint32_t*)(arg0 + 0x48)), arg1);
}
#endif
