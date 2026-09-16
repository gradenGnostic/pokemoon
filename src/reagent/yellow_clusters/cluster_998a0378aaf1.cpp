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

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00382C28
void GFLassert(uint32_t, uint32_t, uint32_t, uint32_t);
extern "C" void YellowAuto_00382c28(uint8_t* arg0, int32_t arg1) __asm__("_ZN5Field11FieldScript19ScriptEffectManager8SetScaleEif");
extern "C" void YellowAuto_00382c28(uint8_t* arg0, int32_t arg1) {
int32_t c = *(int32_t*)(arg0 + 0x34); int32_t i = 0; uint8_t* e = (uint8_t*)0; uint8_t* o = (uint8_t*)0; uint8_t* vt = (uint8_t*)0; void (*fn)(uint8_t*) = (void(*)(uint8_t*))0; loop: if (i >= c) goto fail; e = arg0 + i * 12; if (*(int32_t*)(e + 4) != arg1) goto next; o = *(uint8_t**)(e + 12); if (o == (uint8_t*)0) goto next; vt = *(uint8_t**)o; fn = *(void(**)(uint8_t*))(vt + 0x2C); fn(o); return; next: i = i + 1; goto loop; fail: GFLassert(0, 0, 0, 0); return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003822EC
void* sub_0010F454(void*, uint32_t);
void* GetHeapByHeapId(uint32_t);
void* sub_0010F45C(void*, uint32_t, void*, uint32_t);
void* sub_0010F464(void*, uint32_t, void*, uint32_t);
void* sub_0010F46C(void*, uint32_t, void*, uint32_t, uint32_t);
void sub_0010F474(void*, void*, uint32_t, uint32_t);
extern "C" void YellowAuto_003822ec(uint8_t* arg0, int32_t arg1, const void* arg2, uint32_t arg3, uint32_t arg4) __asm__("_ZN5Field11FieldScript19ScriptEffectManager13SetTrainerEyeEiRKN4gfl24math22ExtendedVectorTemplateINS3_33SpecializedExtendedVectorTemplateIN2nn4math4VEC2EEEEEfj");
extern "C" void YellowAuto_003822ec(uint8_t* arg0, int32_t arg1, const void* arg2, uint32_t arg3, uint32_t arg4) {
if (*(int32_t*)(arg0 + 0x34) >= 4) return; uint8_t* e; void* m; void* n; void* d; void* r; void* h; void* o; uint32_t z[3]; uint32_t v[2]; e = arg0 + *(int32_t*)(arg0 + 0x34) * 12; *(int32_t*)(e + 4) = arg1; m = *(void**)(arg0 + 0x38); n = *(void**)((uint8_t*)m + 0x2C); d = *(void**)((uint8_t*)n + 0xD8); r = sub_0010F454(d, 18); if (r != (void*)0) goto create; if (*(int32_t*)(arg0 + 0x5C) >= 8) goto create; h = GetHeapByHeapId(11); sub_0010F45C(d, 18, h, 1); sub_0010F464(d, 18, h, 1); *(int32_t*)(arg0 + *(int32_t*)(arg0 + 0x5C) * 4 + 0x3C) = 18; *(int32_t*)(arg0 + 0x5C) = *(int32_t*)(arg0 + 0x5C) + 1; create: z[0] = 0; z[1] = 0; z[2] = 0; o = sub_0010F46C(d, 18, (void*)z, 1, 4); *(void**)(e + 12) = o; if (o != (void*)0) goto success; *(int32_t*)(e + 4) = -1; return; success: v[0] = *(const uint32_t*)((const uint8_t*)arg2); v[1] = *(const uint32_t*)((const uint8_t*)arg2 + 4); sub_0010F474(o, (void*)v, arg4, arg3); *(int32_t*)(arg0 + 0x34) = *(int32_t*)(arg0 + 0x34) + 1; return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0038289C
int32_t TranslateId(uint8_t*, int32_t);
void* sub_0010F454(void*, uint32_t);
void* GetHeapByHeapId(uint32_t);
void* sub_0010F45C(void*, uint32_t, void*, uint32_t);
void* sub_0010F464(void*, uint32_t, void*, uint32_t);
void* sub_0010F46C(void*, uint32_t, void*, uint32_t, uint32_t);
extern "C" void YellowAuto_0038289c(uint8_t* arg0, int32_t arg1, int32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, bool arg6) __asm__("_ZN5Field11FieldScript19ScriptEffectManager6SetPosEiifffb");
extern "C" void YellowAuto_0038289c(uint8_t* arg0, int32_t arg1, int32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, bool arg6) {
if (*(int32_t*)(arg0 + 0x34) >= 4) return; uint8_t* e0; uint8_t* e1; uint8_t* e2; int32_t t1; int32_t t2; void* m; void* n; void* d; void* r; void* h; void* o; uint32_t f[3]; e0 = arg0 + *(int32_t*)(arg0 + 0x34) * 12; *(int32_t*)(e0 + 4) = -1; *(void**)(e0 + 12) = (void*)0; *(uint8_t*)(e0 + 8) = (uint8_t)1; e1 = arg0 + *(int32_t*)(arg0 + 0x34) * 12; *(int32_t*)(e1 + 4) = arg1; t1 = TranslateId(arg0, arg2); m = *(void**)(arg0 + 0x38); n = *(void**)((uint8_t*)m + 0x2C); d = *(void**)((uint8_t*)n + 0xD8); r = sub_0010F454(d, (uint32_t)t1); if (r != (void*)0) goto second; if (*(int32_t*)(arg0 + 0x5C) >= 8) goto second; h = GetHeapByHeapId(11); sub_0010F45C(d, (uint32_t)t1, h, 1); sub_0010F464(d, (uint32_t)t1, h, 1); *(int32_t*)(arg0 + *(int32_t*)(arg0 + 0x5C) * 4 + 0x3C) = t1; *(int32_t*)(arg0 + 0x5C) = *(int32_t*)(arg0 + 0x5C) + 1; second: t2 = TranslateId(arg0, arg2); f[0] = arg3; f[1] = arg4; f[2] = arg5; o = sub_0010F46C(d, (uint32_t)t2, (void*)f, (uint32_t)arg6, 4); e2 = arg0 + *(int32_t*)(arg0 + 0x34) * 12; *(void**)(e2 + 12) = o; if (o != (void*)0) goto success; *(int32_t*)(e2 + 4) = -1; return; success: if (arg2 != 4) goto inc; *(uint8_t*)(e2 + 8) = (uint8_t)0; inc: *(int32_t*)(arg0 + 0x34) = *(int32_t*)(arg0 + 0x34) + 1; return;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00382118
extern "C" uint32_t YellowAuto_00382118(uint8_t* arg0, int32_t arg1) __asm__("_ZN5Field11FieldScript19ScriptEffectManager11TranslateIdEi");
extern "C" uint32_t YellowAuto_00382118(uint8_t* arg0, int32_t arg1) {
(void)arg0;
if (arg1 == 0) return 5;
if (arg1 == 1) return 21;
if (arg1 == 2) return 40;
if (arg1 == 3) return 41;
if (arg1 == 4) return 50;
if (arg1 == 5) return 2;
if (arg1 == 6) return 2;
if (arg1 == 7) return 4;
if (arg1 == 8) return 59;
if (arg1 == 9) return 60;
if (arg1 == 10) return 61;
if (arg1 == 11) return 62;
if (arg1 == 12) return 64;
if (arg1 == 13) return 65;
if (arg1 == 14) return 67;
if (arg1 == 15) return 68;
if (arg1 == 16) return 69;
if (arg1 == 17) return 70;
if (arg1 == 18) return 71;
if (arg1 == 19) return 75;
if (arg1 == 20) return 76;
if (arg1 == 21) return 77;
if (arg1 == 22) return 78;
if (arg1 == 23) return 79;
if (arg1 == 24) return 80;
if (arg1 == 25) return 81;
if (arg1 == 26) return 82;
if (arg1 == 27) return 83;
if (arg1 == 28) return 84;
if (arg1 == 100) return 2;
if (arg1 == 101) return 3;
if (arg1 == 102) return 4;
if (arg1 == 103) return 2;
if (arg1 == 104) return 72;
if (arg1 == 105) return 73;
if (arg1 == 106) return 74;
return *(const uint32_t*)0x3822E8;
}
#endif
