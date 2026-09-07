// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00434E4C
void FUN_00433f00(uint8_t* p0, int32_t p1, int32_t p2, int32_t p3);
extern "C" void YellowAuto_00434e4c(uint8_t* arg0, int32_t arg1, int32_t arg2) __asm__("_ZN8PokeTool9PokeModel18SetFaceAnime_MouthEii");
extern "C" void YellowAuto_00434e4c(uint8_t* arg0, int32_t arg1, int32_t arg2) {
for (int32_t i = 0; i < 3; ++i) { if (arg2 == -1 || arg2 == i) { FUN_00433f00(arg0, arg1, i + 3, 0); } }
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00434EE0
void FUN_00433f00(uint8_t* p0, int32_t p1, int32_t p2, int32_t p3);
extern "C" void YellowAuto_00434ee0(uint8_t* arg0, int32_t arg1) __asm__("_ZN8PokeTool9PokeModel20ResetFaceAnime_MouthEi");
extern "C" void YellowAuto_00434ee0(uint8_t* arg0, int32_t arg1) {
for (int32_t i = 0; i < 3; ++i) { if (arg1 == -1 || arg1 == i) { FUN_00433f00(arg0, -1, i + 3, 0); } }
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00434BC8
void FUN_00433f00(uint8_t* p0, int32_t p1, int32_t p2, int32_t p3);
extern "C" void YellowAuto_00434bc8(uint8_t* arg0, int32_t arg1, int32_t arg2, bool arg3) __asm__("_ZN8PokeTool9PokeModel16SetFaceAnime_EyeEiib");
extern "C" void YellowAuto_00434bc8(uint8_t* arg0, int32_t arg1, int32_t arg2, bool arg3) {
for (int32_t i = 0; i < 3; ++i) { if (arg2 == -1 || arg2 == i) { FUN_00433f00(arg0, arg1, i, arg3); } }
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00434DE8
void FUN_00433f00(uint8_t* p0, int32_t p1, int32_t p2, int32_t p3);
extern "C" void YellowAuto_00434de8(uint8_t* arg0, int32_t arg1) __asm__("_ZN8PokeTool9PokeModel18ResetFaceAnime_EyeEi");
extern "C" void YellowAuto_00434de8(uint8_t* arg0, int32_t arg1) {
for (int32_t i = 0; i < 3; ++i) { if (arg1 == -1 || arg1 == i) { FUN_00433f00(arg0, -1, i, 0); } }
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00433E40
bool IsArcFileLoadDataFinished(uint8_t* p0, uint32_t p1);
extern "C" bool YellowAuto_00433e40(uint8_t* arg0) __asm__("_ZN8PokeTool9PokeModel12IsFinishLoadEv");
extern "C" bool YellowAuto_00433e40(uint8_t* arg0) {
for (int32_t i = 0; i < 6; ++i) { uint32_t v = *reinterpret_cast<uint32_t*>(arg0 + 0x1270 + i * 4); if (v != 0u) { uint8_t** pp = *reinterpret_cast<uint8_t***>(arg0 + 0x1218); uint8_t* mgr = *pp; bool ok = IsArcFileLoadDataFinished(mgr, v); if (!ok) { return false; } *reinterpret_cast<uint32_t*>(arg0 + 0x1270 + i * 4) = 0u; } } return true;
}
#endif
