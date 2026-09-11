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

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00382D5C
void nndbgPanic(uint32_t, uint32_t);
extern "C" void YellowAuto_00382d5c(uint8_t* arg0) __asm__("_ZN5Field11FieldScript19ScriptEffectManager9TerminateEv");
extern "C" void YellowAuto_00382d5c(uint8_t* arg0) {
int32_t count = *(int32_t*)(arg0 + 0x34);
int32_t i = 0;
while (i < count) {
uint32_t f = *(uint32_t*)(*(uint32_t*)(arg0 + 0x38) + 0x2C);
if (f != (uint32_t)0) {
uint32_t a0 = *(uint32_t*)(*(uint32_t*)(*(uint32_t*)(arg0 + 0x38) + 0x2C) + 0xD8);
uint32_t a1 = *(uint32_t*)(arg0 + i * 12 + 0xC);
nndbgPanic(a0, a1);
}
*(int32_t*)(arg0 + i * 12 + 0x4) = (int32_t)-1;
*(uint32_t*)(arg0 + i * 12 + 0xC) = (uint32_t)0;
i += (int32_t)1;
count = *(int32_t*)(arg0 + 0x34);
}
*(int32_t*)(arg0 + 0x34) = (int32_t)0;
return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003825E8
void nndbgPanic(uint32_t, uint32_t);
extern "C" void YellowAuto_003825e8(uint8_t* arg0, int32_t arg1) __asm__("_ZN5Field11FieldScript19ScriptEffectManager6DeleteEi");
extern "C" void YellowAuto_003825e8(uint8_t* arg0, int32_t arg1) {
int32_t count = *(int32_t*)(arg0 + 0x34);
if (count <= (int32_t)0) return;
int32_t idx = (int32_t)0;
while (*(int32_t*)(arg0 + idx * 12 + 0x4) != arg1) {
idx += (int32_t)1;
if (*(int32_t*)(arg0 + 0x34) <= idx) return;
}
uint32_t f = *(uint32_t*)(*(uint32_t*)(arg0 + 0x38) + 0x2C);
if (f != (uint32_t)0) {
uint32_t a0 = *(uint32_t*)(*(uint32_t*)(*(uint32_t*)(arg0 + 0x38) + 0x2C) + 0xD8);
uint32_t a1 = *(uint32_t*)(arg0 + idx * 12 + 0xC);
nndbgPanic(a0, a1);
}
*(int32_t*)(arg0 + 0x34) = *(int32_t*)(arg0 + 0x34) - (int32_t)1;
int32_t last = *(int32_t*)(arg0 + 0x34);
int32_t v0 = *(int32_t*)(arg0 + last * 12 + 0x4);
uint32_t v1 = *(uint32_t*)(arg0 + last * 12 + 0x8);
uint32_t v2 = *(uint32_t*)(arg0 + last * 12 + 0xC);
*(uint32_t*)(arg0 + idx * 12 + 0xC) = v2;
*(int32_t*)(arg0 + idx * 12 + 0x4) = v0;
*(uint32_t*)(arg0 + idx * 12 + 0x8) = v1;
int32_t c2 = *(int32_t*)(arg0 + 0x34);
*(uint32_t*)(arg0 + c2 * 12 + 0xC) = (uint32_t)0;
*(int32_t*)(arg0 + c2 * 12 + 0x4) = (int32_t)-1;
*(uint8_t*)(arg0 + c2 * 12 + 0x8) = (uint8_t)1;
return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00382484
void* GetHeapByHeapId(uint32_t, int32_t);
void nndbgPanic(uint32_t, uint32_t, void*, uint32_t);
extern "C" void YellowAuto_00382484(uint8_t* arg0, int32_t arg1) __asm__("_ZN5Field11FieldScript19ScriptEffectManager21UnloadDynamicResourceEv");
extern "C" void YellowAuto_00382484(uint8_t* arg0, int32_t arg1) {
void* heap = GetHeapByHeapId((uint32_t)11, arg1);
uint32_t def = *(uint32_t*)0x382538;
uint32_t i = (uint32_t)0;
uint32_t count = *(uint32_t*)(arg0 + 0x5C);
while (i < count) {
uint32_t f = *(uint32_t*)(*(uint32_t*)(arg0 + 0x38) + 0x2C);
if (f != (uint32_t)0) {
uint32_t a0 = *(uint32_t*)(*(uint32_t*)(*(uint32_t*)(arg0 + 0x38) + 0x2C) + 0xD8);
uint32_t a1 = *(uint32_t*)(arg0 + i * 4 + 0x3C) & (uint32_t)0xFFFF;
nndbgPanic(a0, a1, heap, (uint32_t)0);
}
*(uint32_t*)(arg0 + i * 4 + 0x3C) = def;
i += (uint32_t)1;
count = *(uint32_t*)(arg0 + 0x5C);
}
*(uint32_t*)(arg0 + 0x5C) = (uint32_t)0;
return;
}
#endif
