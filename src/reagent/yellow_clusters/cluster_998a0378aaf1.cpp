// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0038253C
extern "C" bool YellowAuto_0038253c(uint8_t* arg0, uint32_t arg1) __asm__("_ZN5Field11FieldScript19ScriptEffectManager22ResourceReleaseRequestEj");
extern "C" bool YellowAuto_0038253c(uint8_t* arg0, uint32_t arg1) {
uint32_t v0 = *reinterpret_cast<uint32_t*>(arg0 + 0x70);
if (v0 >= 4) return false;
*reinterpret_cast<uint32_t*>(arg0 + 0x60 + v0 * 4) = arg1;
*reinterpret_cast<uint32_t*>(arg0 + 0x70) = v0 + 1;
return true;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00382598
extern "C" bool YellowAuto_00382598(uint8_t* arg0, int32_t arg1) __asm__("_ZN5Field11FieldScript19ScriptEffectManager5IsEndEi");
extern "C" bool YellowAuto_00382598(uint8_t* arg0, int32_t arg1) {
int32_t v0 = *reinterpret_cast<int32_t*>(arg0 + 0x34);
for (int32_t v1 = 0; v1 < v0; v1 = v1 + 1)
if (*reinterpret_cast<int32_t*>(arg0 + v1 * 12 + 4) == arg1) return reinterpret_cast<bool(*)(uint8_t*)>(*reinterpret_cast<uint32_t*>(*reinterpret_cast<uint32_t*>(*reinterpret_cast<uint32_t*>(arg0 + v1 * 12 + 12)) + 0x1C))(reinterpret_cast<uint8_t*>(*reinterpret_cast<uint32_t*>(arg0 + v1 * 12 + 12)));
return true;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00382C9C
extern "C" void* YellowAuto_00382c9c(uint8_t* arg0, int32_t arg1) __asm__("_ZN5Field11FieldScript19ScriptEffectManager9GetEffectEi");
extern "C" void* YellowAuto_00382c9c(uint8_t* arg0, int32_t arg1) {
int32_t v0 = *reinterpret_cast<int32_t*>(arg0 + 0x34);
for (int32_t v1 = 0; v1 < v0; v1 = v1 + 1)
if (*reinterpret_cast<int32_t*>(arg0 + v1 * 12 + 4) == arg1) return reinterpret_cast<void*>(*reinterpret_cast<uint32_t*>(arg0 + v1 * 12 + 12));
return nullptr;
}
#endif
