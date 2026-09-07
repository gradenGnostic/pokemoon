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
