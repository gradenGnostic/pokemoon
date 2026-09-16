// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002EC34C
extern "C" void YellowAuto_002ec34c(uint8_t* arg0, uint32_t arg1, uint8_t arg2) __asm__("_ZN3app4tool13ButtonManager16SetNotifyTimmingEjNS1_13NotifyTimmingE");
extern "C" void YellowAuto_002ec34c(uint8_t* arg0, uint32_t arg1, uint8_t arg2) {
uint32_t i = 0;
if (*(uint32_t*)(arg0 + 0x18) == 0) return;
uint8_t* arr = (uint8_t*)(*(uint32_t*)(arg0 + 0x10));
do {
uint8_t* b = (uint8_t*)(*(uint32_t*)(arr + i * 4));
i += 1;
if (*(uint32_t*)(b + 4) == arg1) {
*(uint8_t*)(b + 0x4A) = arg2;
}
} while (i < *(uint32_t*)(arg0 + 0x18));
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002EC3C8
extern "C" void YellowAuto_002ec3c8(uint8_t* arg0, uint32_t arg1, uint32_t arg2) __asm__("_ZN3app4tool13ButtonManager17SetButtonSelectSEEjj");
extern "C" void YellowAuto_002ec3c8(uint8_t* arg0, uint32_t arg1, uint32_t arg2) {
uint32_t i = 0;
if (*(uint32_t*)(arg0 + 0x18) == 0) return;
uint8_t* arr = (uint8_t*)(*(uint32_t*)(arg0 + 0x10));
do {
uint8_t* b = (uint8_t*)(*(uint32_t*)(arr + i * 4));
i += 1;
if (*(uint32_t*)(b + 4) == arg1) {
*(uint32_t*)(b + 0x30) = arg2;
}
} while (i < *(uint32_t*)(arg0 + 0x18));
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002EC0E0
extern "C" void YellowAuto_002ec0e0(uint8_t* arg0, uint32_t arg1, uint32_t arg2, uint8_t arg3) __asm__("_ZN3app4tool13ButtonManager16SetButtonBindKeyEjjNS1_11BindKeyModeE");
extern "C" void YellowAuto_002ec0e0(uint8_t* arg0, uint32_t arg1, uint32_t arg2, uint8_t arg3) {
uint32_t i = 0;
if (*(uint32_t*)(arg0 + 0x18) == 0) return;
uint8_t* arr = (uint8_t*)(*(uint32_t*)(arg0 + 0x10));
do {
uint8_t* b = (uint8_t*)(*(uint32_t*)(arr + i * 4));
i += 1;
if (*(uint32_t*)(b + 4) == arg1) {
*(uint32_t*)(b + 0x44) = arg2;
*(uint8_t*)(b + 0x48) = arg3;
}
} while (i < *(uint32_t*)(arg0 + 0x18));
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0048D964
extern "C" bool YellowAuto_0048d964(const uint8_t* arg0, uint32_t arg1) __asm__("_ZNK3app4tool13ButtonManager14IsButtonActiveEj");
extern "C" bool YellowAuto_0048d964(const uint8_t* arg0, uint32_t arg1) {
uint32_t i = 0;
if (*(const uint32_t*)(arg0 + 0x18) == 0) return false;
const uint8_t* arr = (const uint8_t*)(*(const uint32_t*)(arg0 + 0x10));
do {
const uint8_t* b = (const uint8_t*)(*(const uint32_t*)(arr + i * 4));
if (*(const uint32_t*)(b + 4) == arg1) {
return (*(const uint8_t*)(b + 0x39) != 0);
}
i += 1;
} while (i < *(const uint32_t*)(arg0 + 0x18));
return false;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0048DA08
extern "C" bool YellowAuto_0048da08(const uint8_t* arg0, uint32_t arg1) __asm__("_ZNK3app4tool13ButtonManager19IsButtonInputEnableEj");
extern "C" bool YellowAuto_0048da08(const uint8_t* arg0, uint32_t arg1) {
uint32_t i = 0;
if (*(const uint32_t*)(arg0 + 0x18) == 0) return false;
const uint8_t* arr = (const uint8_t*)(*(const uint32_t*)(arg0 + 0x10));
do {
const uint8_t* b = (const uint8_t*)(*(const uint32_t*)(arr + i * 4));
if (*(const uint32_t*)(b + 4) == arg1) {
return (*(const uint8_t*)(b + 0x61) != 0);
}
i += 1;
} while (i < *(const uint32_t*)(arg0 + 0x18));
return false;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002EC4F4
extern "C" void YellowAuto_002ec4f4(uint8_t* arg0, uint32_t arg1) __asm__("_ZN3app4tool13ButtonManager18SetButtonInvisibleEj");
extern "C" void YellowAuto_002ec4f4(uint8_t* arg0, uint32_t arg1) {
uint32_t i = 0;
if (*(uint32_t*)(arg0 + 0x18) == 0) return;
uint8_t* arr = (uint8_t*)(*(uint32_t*)(arg0 + 0x10));
do {
uint8_t* b = (uint8_t*)(*(uint32_t*)(arr + i * 4));
if (*(uint32_t*)(b + 4) == arg1) {
uint8_t* p0 = (uint8_t*)(*(uint32_t*)(b + 0x0C));
uint8_t* p1 = (uint8_t*)(*(uint32_t*)(b + 0x10));
*(uint8_t*)(p0 + 0x44) = (uint8_t)(*(uint8_t*)(p0 + 0x44) & (uint8_t)0xFE);
*(uint8_t*)(p1 + 0x44) = (uint8_t)(*(uint8_t*)(p1 + 0x44) & (uint8_t)0xFE);
}
i += 1;
} while (i < *(uint32_t*)(arg0 + 0x18));
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002EC5A8
extern "C" void YellowAuto_002ec5a8(uint8_t* arg0, uint32_t arg1, bool arg2) __asm__("_ZN3app4tool13ButtonManager20SetButtonInputEnableEjb");
extern "C" void YellowAuto_002ec5a8(uint8_t* arg0, uint32_t arg1, bool arg2) {
uint32_t i = 0;
if (*(uint32_t*)(arg0 + 0x18) == 0) return;
uint8_t* arr = (uint8_t*)(*(uint32_t*)(arg0 + 0x10));
do {
uint8_t* b = (uint8_t*)(*(uint32_t*)(arr + i * 4));
if (*(uint32_t*)(b + 4) == arg1) {
*(uint8_t*)(b + 0x61) = arg2;
return;
}
i += 1;
} while (i < *(uint32_t*)(arg0 + 0x18));
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0048D9A8
bool Helper_0048df48(const void*);
extern "C" bool YellowAuto_0048d9a8(const uint8_t* arg0, uint32_t arg1) __asm__("_ZNK3app4tool13ButtonManager15IsButtonVisibleEj");
extern "C" bool YellowAuto_0048d9a8(const uint8_t* arg0, uint32_t arg1) {
uint32_t i = 0;
if (*(const uint32_t*)(arg0 + 0x18) == 0) return false;
const uint8_t* arr = (const uint8_t*)(*(const uint32_t*)(arg0 + 0x10));
do {
const uint8_t* b = (const uint8_t*)(*(const uint32_t*)(arr + i * 4));
if (*(const uint32_t*)(b + 4) == arg1) {
return Helper_0048df48((const void*)b);
}
i += 1;
} while (i < *(const uint32_t*)(arg0 + 0x18));
return false;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002EC554
void Helper_002ed188(uint8_t*, bool, bool);
extern "C" void YellowAuto_002ec554(uint8_t* arg0, uint32_t arg1, bool arg2) __asm__("_ZN3app4tool13ButtonManager20SetButtonActiveForceEjb");
extern "C" void YellowAuto_002ec554(uint8_t* arg0, uint32_t arg1, bool arg2) {
uint32_t i = 0;
if (*(uint32_t*)(arg0 + 0x18) == 0) return;
uint8_t* arr = (uint8_t*)(*(uint32_t*)(arg0 + 0x10));
do {
uint8_t* b = (uint8_t*)(*(uint32_t*)(arr + i * 4));
if (*(uint32_t*)(b + 4) == arg1) {
Helper_002ed188(b, true, arg2);
}
i += 1;
} while (i < *(uint32_t*)(arg0 + 0x18));
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002EC948
void Helper_002ed188(uint8_t*, bool, bool);
extern "C" void YellowAuto_002ec948(uint8_t* arg0, uint32_t arg1, bool arg2) __asm__("_ZN3app4tool13ButtonManager21SetButtonPassiveForceEjb");
extern "C" void YellowAuto_002ec948(uint8_t* arg0, uint32_t arg1, bool arg2) {
uint32_t i = 0;
if (*(uint32_t*)(arg0 + 0x18) == 0) return;
uint8_t* arr = (uint8_t*)(*(uint32_t*)(arg0 + 0x10));
do {
uint8_t* b = (uint8_t*)(*(uint32_t*)(arr + i * 4));
if (*(uint32_t*)(b + 4) == arg1) {
Helper_002ed188(b, false, arg2);
}
i += 1;
} while (i < *(uint32_t*)(arg0 + 0x18));
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002EC084
void Helper_002ed188(uint8_t*, bool, bool);
extern "C" void YellowAuto_002ec084(uint8_t* arg0, uint32_t arg1, bool arg2) __asm__("_ZN3app4tool13ButtonManager15SetButtonActiveEjb");
extern "C" void YellowAuto_002ec084(uint8_t* arg0, uint32_t arg1, bool arg2) {
uint32_t i = 0;
if (*(uint32_t*)(arg0 + 0x18) == 0) return;
uint8_t* arr = (uint8_t*)(*(uint32_t*)(arg0 + 0x10));
do {
uint8_t* b = (uint8_t*)(*(uint32_t*)(arr + i * 4));
if (*(uint32_t*)(b + 4) == arg1) {
if (*(uint8_t*)(b + 0x39) != (uint8_t)1) {
Helper_002ed188(b, true, arg2);
}
}
i += 1;
} while (i < *(uint32_t*)(arg0 + 0x18));
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002EC13C
void Helper_002ed188(uint8_t*, bool, bool);
extern "C" void YellowAuto_002ec13c(uint8_t* arg0, uint32_t arg1, bool arg2) __asm__("_ZN3app4tool13ButtonManager16SetButtonPassiveEjb");
extern "C" void YellowAuto_002ec13c(uint8_t* arg0, uint32_t arg1, bool arg2) {
uint32_t i = 0;
if (*(uint32_t*)(arg0 + 0x18) == 0) return;
uint8_t* arr = (uint8_t*)(*(uint32_t*)(arg0 + 0x10));
do {
uint8_t* b = (uint8_t*)(*(uint32_t*)(arr + i * 4));
if (*(uint32_t*)(b + 4) == arg1) {
if (*(uint8_t*)(b + 0x39) != (uint8_t)0) {
Helper_002ed188(b, false, arg2);
}
}
i += 1;
} while (i < *(uint32_t*)(arg0 + 0x18));
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0048D7AC
uint32_t Helper_00499ba4(const void*);
bool Helper_GetHitPane(const void*, uint16_t, uint16_t, const void*);
extern "C" bool YellowAuto_0048d7ac(const uint8_t* arg0, uint32_t arg1, uint16_t arg2, uint16_t arg3) __asm__("_ZNK3app4tool13ButtonManager11IsButtonHitEjtt");
extern "C" bool YellowAuto_0048d7ac(const uint8_t* arg0, uint32_t arg1, uint16_t arg2, uint16_t arg3) {
uint32_t i = 0;
if (*(const uint32_t*)(arg0 + 0x18) == 0) return false;
const uint8_t* arr = (const uint8_t*)(*(const uint32_t*)(arg0 + 0x10));
do {
const uint8_t* b = (const uint8_t*)(*(const uint32_t*)(arr + i * 4));
if (*(const uint32_t*)(b + 4) == arg1) {
const void* lyt = (const void*)(*(const uint32_t*)(b + 8));
if (Helper_00499ba4(lyt) == 0) return false;
const void* bound = (const void*)(*(const uint32_t*)(b + 0x10));
return Helper_GetHitPane(lyt, arg2, arg3, bound);
}
i += 1;
} while (i < *(const uint32_t*)(arg0 + 0x18));
return false;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002EBF10
void GFLassert();
extern "C" void YellowAuto_002ebf10(uint8_t* arg0, const uint32_t* arg1, uint32_t arg2) __asm__("_ZN3app4tool13ButtonManager10LinkButtonEPKjj");
extern "C" void YellowAuto_002ebf10(uint8_t* arg0, const uint32_t* arg1, uint32_t arg2) {
if (arg2 == 0) return;
uint32_t i = 0;
uint32_t j = 1;
while (i < arg2) {
uint32_t wantA = arg1[i];
uint32_t wantB = arg1[j];
uint32_t n = *(uint32_t*)(arg0 + 0x18);
uint8_t* foundA = 0;
uint8_t* foundB = 0;
if (n != 0) {
uint8_t* arrBase = *(uint8_t**)(arg0 + 0x10);
for (uint32_t k = 0; k < n; ++k) {
uint8_t* b = *(uint8_t**)(arrBase + k * 4);
if (*(uint32_t*)(b + 0x4) == wantA) { foundA = b; break; }
}
}
if (n != 0) {
uint8_t* arrBase2 = *(uint8_t**)(arg0 + 0x10);
for (uint32_t k = 0; k < n; ++k) {
uint8_t* b2 = *(uint8_t**)(arrBase2 + k * 4);
if (*(uint32_t*)(b2 + 0x4) == wantB) { foundB = b2; break; }
}
}
if (foundA == 0 || foundB == 0 || foundA == foundB) { GFLassert(); return; }
j = j + 1;
if (arg2 <= j) { j = 0; }
i = i + 1;
*(uint8_t**)(foundA + 0x64) = foundB;
}
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002ECCAC
void* operator_new(uint32_t, void*);
extern "C" void YellowAuto_002eccac(uint8_t* arg0, int32_t arg1, void* arg2) __asm__("_ZN3app4tool13ButtonManager23ChangeButtonProcessModeENS1_13ButtonProcessEPN4gfl24heap11CtrHeapBaseE");
extern "C" void YellowAuto_002eccac(uint8_t* arg0, int32_t arg1, void* arg2) {
uint8_t* old = *(uint8_t**)(arg0 + 0x28);
if (old != 0) {
void* vt = *(void**)(old + 0x0);
void (*f)(uint8_t*) = *(void (**)(uint8_t*))((uint8_t*)vt + 0x4);
f(old);
*(uint8_t**)(arg0 + 0x28) = 0;
}
if (arg1 == 1) {
uint8_t* p = (uint8_t*)operator_new(12, arg2);
if (p != 0) {
*(uint8_t**)(p + 0x4) = *(uint8_t**)(arg0 + 0x10);
*(uint8_t**)(p + 0x8) = arg0 + 0x18;
}
*(uint8_t**)(arg0 + 0x28) = p;
uint32_t n = *(uint32_t*)(arg0 + 0x18);
for (uint32_t k = 0; k < n; ++k) {
uint8_t* arrBase = *(uint8_t**)(arg0 + 0x10);
uint8_t* b = *(uint8_t**)(arrBase + k * 4);
*(uint8_t*)(b + 0x4A) = 0;
}
} else {
uint8_t* q = (uint8_t*)operator_new(20, arg2);
if (q != 0) {
*(uint8_t**)(q + 0x4) = *(uint8_t**)(arg0 + 0x10);
*(uint8_t**)(q + 0x8) = arg0 + 0x18;
*(uint8_t*)(q + 0xC) = 0;
*(uint32_t*)(q + 0x10) = *(uint32_t*)(*(uint8_t**)(q + 0x8));
}
*(uint8_t**)(arg0 + 0x28) = q;
}
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0048D8EC
extern "C" uint32_t YellowAuto_0048d8ec(const uint8_t* arg0) __asm__("_ZNK3app4tool13ButtonManager14GetUpdateStateEv");
extern "C" uint32_t YellowAuto_0048d8ec(const uint8_t* arg0) {
uint8_t* o = *(uint8_t**)(arg0 + 40);
uint32_t (*f0)(uint8_t*) = *(uint32_t(**)(uint8_t*))(*(uint8_t**)o + 40);
if (f0(o) != 0) return 4;
uint32_t (*f1)(uint8_t*) = *(uint32_t(**)(uint8_t*))(*(uint8_t**)o + 32);
if (f1(o) != 0) return 3;
uint32_t (*f2)(uint8_t*) = *(uint32_t(**)(uint8_t*))(*(uint8_t**)o + 36);
if (f2(o) != 0) return 1;
uint32_t (*f3)(uint8_t*) = *(uint32_t(**)(uint8_t*))(*(uint8_t**)o + 12);
if (f3(o) != 0) return 2;
return 0;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002EC060
extern "C" void YellowAuto_002ec060(uint8_t* arg0, bool arg1) __asm__("_ZN3app4tool13ButtonManager14SetInputEnableEb");
extern "C" void YellowAuto_002ec060(uint8_t* arg0, bool arg1) {
*(arg0 + 0x25) = (uint8_t)arg1;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002EC198
uint32_t IsBindAnime(void*, uint32_t);
void BindAnime(void*, uint32_t, uint32_t);
void SetAutoAnime(void*, uint32_t, uint32_t);
void SetAnimeFrame(float, void*, uint32_t);
extern "C" void YellowAuto_002ec198(uint8_t* arg0, uint32_t arg1, bool arg2) __asm__("_ZN3app4tool13ButtonManager16SetButtonVisibleEjb");
extern "C" void YellowAuto_002ec198(uint8_t* arg0, uint32_t arg1, bool arg2) {
float vf = *(float*)0x002EC318;
uint32_t v0 = *(uint32_t*)(arg0 + 24);
if (v0 == 0) return;
uint32_t v1 = 0;
do {
void* v2 = *(void**)(*(uint32_t*)(arg0 + 16) + v1 * 4);
if (*(uint32_t*)((uint8_t*)v2 + 4) == arg1) {
if (arg2) {
void* v3 = *(void**)(arg0 + 40);
void* v4 = *(void**)v3;
((void(*)(void*, uint32_t))*(uint32_t*)((uint8_t*)v4 + 56))(v3, arg1);
uint32_t v5 = 0;
if (*(uint32_t*)(arg0 + 24) != 0) {
do {
void* v6 = *(void**)(*(uint32_t*)(arg0 + 16) + v5 * 4);
if (*(uint32_t*)((uint8_t*)v6 + 4) == arg1) {
uint32_t v7 = *(uint32_t*)((uint8_t*)v6 + 28);
if (*(uint32_t*)((uint8_t*)v6 + 20) != v7) {
if (IsBindAnime(*(void**)((uint8_t*)v6 + 8), v7) == 0) BindAnime(*(void**)((uint8_t*)v6 + 8), v7, 1);
SetAutoAnime(*(void**)((uint8_t*)v6 + 8), v7, 0);
SetAnimeFrame(vf, *(void**)((uint8_t*)v6 + 8), v7);
}
uint32_t v8 = *(uint32_t*)((uint8_t*)v6 + 36);
if (*(uint32_t*)((uint8_t*)v6 + 20) != v8) {
if (IsBindAnime(*(void**)((uint8_t*)v6 + 8), v8) == 0) BindAnime(*(void**)((uint8_t*)v6 + 8), v8, 1);
SetAutoAnime(*(void**)((uint8_t*)v6 + 8), v8, 0);
SetAnimeFrame(vf, *(void**)((uint8_t*)v6 + 8), v8);
}
}
v5 = v5 + 1;
} while (v5 < *(uint32_t*)(arg0 + 24));
}
}
void* v9 = *(void**)((uint8_t*)v2 + 12);
void* v10 = *(void**)((uint8_t*)v2 + 16);
*(uint8_t*)((uint8_t*)v9 + 68) = (uint8_t)((uint8_t)(*(uint8_t*)((uint8_t*)v9 + 68) & 254) | 1);
*(uint8_t*)((uint8_t*)v10 + 68) = (uint8_t)((uint8_t)(*(uint8_t*)((uint8_t*)v10 + 68) & 254) | 1);
}
v1 = v1 + 1;
} while (v1 < *(uint32_t*)(arg0 + 24));
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002EDFD4
extern "C" uint32_t YellowAuto_002edfd4(uint8_t* arg0) __asm__("_ZN3app4tool13ButtonManager6UpdateEv");
extern "C" uint32_t YellowAuto_002edfd4(uint8_t* arg0) {
if (*(uint8_t*)(arg0 + 36) != 0) return 0;
uint32_t v0 = *(uint32_t*)(arg0 + 8);
uint32_t v1 = *(uint32_t*)(arg0 + 12);
uint8_t v2 = *(uint8_t*)(arg0 + 44);
if (v2 != 0) {
if (v2 == 1) v0 = 0;
else if (v2 == 2) v1 = 0;
}
void* v3 = *(void**)(arg0 + 40);
void* v4 = *(void**)v3;
((void(*)(void*, uint32_t, uint32_t, int32_t))*(uint32_t*)((uint8_t*)v4 + 8))(v3, v0, v1, (int32_t)(int8_t)*(int8_t*)(arg0 + 37));
if (*(uint32_t*)(arg0 + 4) == 0) {
*(uint32_t*)(arg0 + 12) = 0;
*(uint32_t*)(arg0 + 8) = 0;
}
void* v5 = *(void**)(arg0 + 40);
void* v6 = *(void**)v5;
if (((uint32_t(*)(void*))*(uint32_t*)((uint8_t*)v6 + 40))(v5) != 0) return 4;
void* v7 = *(void**)(arg0 + 40);
void* v8 = *(void**)v7;
if (((uint32_t(*)(void*))*(uint32_t*)((uint8_t*)v8 + 32))(v7) != 0) return 3;
void* v9 = *(void**)(arg0 + 40);
void* v10 = *(void**)v9;
if (((uint32_t(*)(void*))*(uint32_t*)((uint8_t*)v10 + 36))(v9) != 0) return 1;
void* v11 = *(void**)(arg0 + 40);
void* v12 = *(void**)v11;
if (((uint32_t(*)(void*))*(uint32_t*)((uint8_t*)v12 + 12))(v11) != 0) return 2;
return 0;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002ECDB8
void FUN_002ed188(uint8_t*, int32_t, int32_t);
float GetAnimeMaxFrame(void*, uint32_t);
void SetAutoAnime(void*, uint32_t, bool);
void SetAnimeFrame(void*, uint32_t, float);
extern "C" void YellowAuto_002ecdb8(uint8_t* arg0, int32_t arg1) __asm__("_ZN3app4tool13ButtonManager29SetButtonActiveAnimeFrameLastEj");
extern "C" void YellowAuto_002ecdb8(uint8_t* arg0, int32_t arg1) {
uint32_t n = *(uint32_t*)(arg0 + 24);
if (n != 0) {
uint8_t** list = *(uint8_t***)(arg0 + 16);
for (uint32_t i = 0; i < n; ++i) {
uint8_t* btn = list[i];
if (*(int32_t*)(btn + 4) == arg1) {
if (*(uint8_t*)(btn + 57) != (uint8_t)1) {
FUN_002ed188(btn, 1, 1);
}
uint32_t anime = *(uint32_t*)(btn + 40);
if (*(uint32_t*)(btn + 20) != anime) {
void* lyt = *(void**)(btn + 8);
float maxf = GetAnimeMaxFrame(lyt, anime);
float v = maxf - 1.0f;
if (v < 0.0f) {
v = 0.0f;
}
SetAutoAnime(lyt, anime, false);
SetAnimeFrame(lyt, anime, v);
}
}
}
}
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002ECE78
void FUN_002ed188(uint8_t*, int32_t, int32_t);
float GetAnimeMaxFrame(void*, uint32_t);
void SetAutoAnime(void*, uint32_t, bool);
void SetAnimeFrame(void*, uint32_t, float);
extern "C" void YellowAuto_002ece78(uint8_t* arg0, int32_t arg1) __asm__("_ZN3app4tool13ButtonManager30SetButtonPassiveAnimeFrameLastEj");
extern "C" void YellowAuto_002ece78(uint8_t* arg0, int32_t arg1) {
uint32_t n = *(uint32_t*)(arg0 + 24);
if (n != 0) {
uint8_t** list = *(uint8_t***)(arg0 + 16);
for (uint32_t i = 0; i < n; ++i) {
uint8_t* btn = list[i];
if (*(int32_t*)(btn + 4) == arg1) {
if (*(uint8_t*)(btn + 57) != (uint8_t)0) {
FUN_002ed188(btn, 0, 1);
}
uint32_t anime = *(uint32_t*)(btn + 44);
if (*(uint32_t*)(btn + 20) != anime) {
void* lyt = *(void**)(btn + 8);
float maxf = GetAnimeMaxFrame(lyt, anime);
float v = maxf - 1.0f;
if (v < 0.0f) {
v = 0.0f;
}
SetAutoAnime(lyt, anime, false);
SetAnimeFrame(lyt, anime, v);
}
}
}
}
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002EE220
void* GetTouchPanel(const void*, uint32_t);
void* GetButton(const void*, uint32_t);
void* FUN_004b4968(uint32_t, void*);
void ChangeButtonProcessMode(uint8_t*, uint32_t, void*);
extern "C" uint8_t* YellowAuto_002ee220(uint8_t* arg0, void* arg1, const void* arg2, uint32_t arg3, uint32_t arg4) __asm__("_ZN3app4tool13ButtonManagerC1EPN4gfl24heap11CtrHeapBaseEPKNS2_2ui13DeviceManagerEjj");
extern "C" uint8_t* YellowAuto_002ee220(uint8_t* arg0, void* arg1, const void* arg2, uint32_t arg3, uint32_t arg4) {
*(uint32_t*)(arg0 + 8) = 0;
*(uint32_t*)(arg0 + 12) = 0;
*(uint32_t*)(arg0 + 16) = 0;
*(uint32_t*)(arg0 + 24) = 0;
*(uint8_t*)(arg0 + 36) = (uint8_t)0;
*(uint8_t*)(arg0 + 37) = (uint8_t)1;
*(uint32_t*)(arg0 + 40) = 0;
*(uint8_t*)(arg0 + 44) = (uint8_t)0;
*(uint32_t*)(arg0 + 32) = arg4;
*(uint32_t*)(arg0 + 20) = arg3;
*(const void**)(arg0 + 4) = arg2;
if (arg2 != (const void*)0) {
*(void**)(arg0 + 8) = GetTouchPanel(arg2, 0);
*(void**)(arg0 + 12) = GetButton(arg2, 1);
}
void* mem = FUN_004b4968(arg3 << 2, arg1);
*(void**)(arg0 + 16) = mem;
if (arg3 != 0) {
uint32_t* arr = (uint32_t*)mem;
for (uint32_t i = 0; i < arg3; ++i) {
arr[i] = 0;
}
}
ChangeButtonProcessMode(arg0, 0, arg1);
return arg0;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002EE0D0
void* operator_new(uint32_t, void*);
void GFLassert();
extern "C" void YellowAuto_002ee0d0(uint8_t* arg0, void* arg1, uint32_t arg2, void* arg3, void* arg4, void* arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, void* arg12) __asm__("_ZN3app4tool13ButtonManager9AddButtonEPN4gfl24heap11CtrHeapBaseEjPNS2_3lyt5LytWkEPN2nw3lyt4PaneESC_jjjjjjPNS1_15IButtonCallbackE");
extern "C" void YellowAuto_002ee0d0(uint8_t* arg0, void* arg1, uint32_t arg2, void* arg3, void* arg4, void* arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, void* arg12) {
if (*(uint32_t*)(arg0 + 0x18) < *(uint32_t*)(arg0 + 0x14)) { void* np = operator_new(0x6c, arg1); if (np == (void*)0) { GFLassert(); return; } uint32_t w = *(uint32_t*)0x002EE218; *(void**)np = *(void**)0x002EE21C; *(uint32_t*)((uint8_t*)np + 0x04) = arg2; *(void**)((uint8_t*)np + 0x08) = arg3; *(void**)((uint8_t*)np + 0x0C) = arg4; *(void**)((uint8_t*)np + 0x10) = arg5; *(uint32_t*)((uint8_t*)np + 0x14) = *(uint32_t*)(arg0 + 0x20); *(uint32_t*)((uint8_t*)np + 0x18) = arg6; *(uint32_t*)((uint8_t*)np + 0x1C) = arg7; *(uint32_t*)((uint8_t*)np + 0x20) = arg8; *(uint32_t*)((uint8_t*)np + 0x24) = arg9; *(uint32_t*)((uint8_t*)np + 0x28) = arg10; *(uint32_t*)((uint8_t*)np + 0x2C) = arg11; *(uint32_t*)((uint8_t*)np + 0x30) = *(uint32_t*)(w + 4); *(void**)((uint8_t*)np + 0x34) = arg12; *(uint8_t*)((uint8_t*)np + 0x38) = 1; *(uint8_t*)((uint8_t*)np + 0x39) = 1; *(uint32_t*)((uint8_t*)np + 0x3C) = 0; *(uint32_t*)((uint8_t*)np + 0x40) = *(uint32_t*)(w + 8); *(uint32_t*)((uint8_t*)np + 0x44) = 0x20000; *(uint8_t*)((uint8_t*)np + 0x48) = 0; *(uint8_t*)((uint8_t*)np + 0x49) = 1; *(uint8_t*)((uint8_t*)np + 0x4A) = 1; *(uint8_t*)((uint8_t*)np + 0x4B) = 0; *(uint8_t*)((uint8_t*)np + 0x4C) = 0; *(uint8_t*)((uint8_t*)np + 0x4D) = 0; *(uint8_t*)((uint8_t*)np + 0x4E) = 0; *(uint8_t*)((uint8_t*)np + 0x4F) = 0; *(uint16_t*)((uint8_t*)np + 0x50) = 0; *(uint16_t*)((uint8_t*)np + 0x52) = 0; *(uint8_t*)((uint8_t*)np + 0x60) = 0; *(uint8_t*)((uint8_t*)np + 0x61) = 1; *(uint8_t*)((uint8_t*)np + 0x62) = 0; *(uint8_t*)((uint8_t*)np + 0x63) = 0; *(uint32_t*)((uint8_t*)np + 0x64) = 0; *(uint8_t*)((uint8_t*)np + 0x68) = 0; if (*(void**)(*(uint32_t*)(arg0 + 0x10) + (*(uint32_t*)(arg0 + 0x18) << 2)) != (void*)0) { ((void(**)(void*))*(void**)np)[1](np); return; } *(void**)(*(uint32_t*)(arg0 + 0x10) + (*(uint32_t*)(arg0 + 0x18) << 2)) = np; *(uint32_t*)(arg0 + 0x18) = *(uint32_t*)(arg0 + 0x18) + 1; } return;
}
#endif
