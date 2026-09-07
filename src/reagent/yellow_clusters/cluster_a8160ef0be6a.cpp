// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002FCD94
extern "C" bool YellowAuto_002fcd94(uint8_t* arg0, uint32_t arg1) __asm__("_ZN3app4tool27AppToolTrainerIconRendering14IsLoadedObjectEj");
extern "C" bool YellowAuto_002fcd94(uint8_t* arg0, uint32_t arg1) {
if (*(uint8_t*)(arg0 + 216) == 1) {
return false;
}
uint32_t v0 = *(uint32_t*)(arg0 + 4);
if (v0 <= arg1) {
return false;
}
uint8_t* v1 = *(uint8_t**)arg0 + arg1 * 180;
return *(int8_t*)(v1 + 176) != 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002FCF34
extern "C" uint8_t* YellowAuto_002fcf34(uint8_t* arg0, uint32_t arg1) __asm__("_ZN3app4tool27AppToolTrainerIconRendering17GetIconObjectDataEj");
extern "C" uint8_t* YellowAuto_002fcf34(uint8_t* arg0, uint32_t arg1) {
if (*(uint8_t*)(arg0 + 216) == 1) {
return 0;
}
uint32_t v0 = *(uint32_t*)(arg0 + 4);
if (v0 <= arg1) {
return 0;
}
uint8_t* v1 = *(uint8_t**)arg0 + arg1 * 180;
return v1 + 56;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002FCF88
void GFLassert();
void FUN_002fd2b0(uint8_t*, uint32_t, const uint8_t*, bool, int32_t);
extern "C" void YellowAuto_002fcf88(uint8_t* arg0, uint32_t arg1, const uint8_t* arg2, const uint8_t* arg3, bool arg4) __asm__("_ZN3app4tool27AppToolTrainerIconRendering17SetIconObjectDataEjRKNS1_16ICON_OBJECT_DATAERKN4gfl24math7Vector3Eb");
extern "C" void YellowAuto_002fcf88(uint8_t* arg0, uint32_t arg1, const uint8_t* arg2, const uint8_t* arg3, bool arg4) {
uint32_t v0 = *(uint32_t*)(arg0 + 4);
if (v0 <= arg1) {
GFLassert();
return;
}
uint8_t* v1 = *(uint8_t**)arg0 + arg1 * 180;
*(uint32_t*)(v1 + 32) = *(const uint32_t*)arg3;
*(uint32_t*)(v1 + 36) = *(const uint32_t*)(arg3 + 4);
*(uint32_t*)(v1 + 40) = *(const uint32_t*)(arg3 + 8);
FUN_002fd2b0(arg0, arg1, arg2, arg4, 1);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002FD984
void DrawTree(uint8_t*, uint32_t);
extern "C" void YellowAuto_002fd984(uint8_t* arg0, uint32_t arg1) __asm__("_ZN3app4tool27AppToolTrainerIconRendering4DrawEN4gfl23gfx12CtrDisplayNoE");
extern "C" void YellowAuto_002fd984(uint8_t* arg0, uint32_t arg1) {
uint32_t v0 = *(uint32_t*)(arg0 + 4);
for (uint32_t v1 = 0; v1 < v0; ++v1) {
uint8_t* v2 = *(uint8_t**)arg0 + v1 * 180;
uint8_t* v3 = *(uint8_t**)(v2 + 4);
if (v3 != 0 && *(uint8_t*)(v2 + 29) == 1) {
DrawTree(v3, arg1);
}
}
}
#endif
