// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00364B94
extern "C" void YellowAuto_00364b94(uint8_t* arg0, void* arg1, void* arg2) __asm__("_ZN4gfl29animation19AnimationController10InitializeEPNS_4heap11CtrHeapBaseEPNS_15renderingengine10scenegraph8instance17ModelInstanceNodeE");
extern "C" void YellowAuto_00364b94(uint8_t* arg0, void* arg1, void* arg2) {
*(void**)arg0 = arg1;
*(void**)(arg0 + 4) = arg2;
for (int32_t i = 0; i < 12; i++) *(uint8_t**)(arg0 + 8 + i * 4) = 0;
*(uint32_t*)(arg0 + 0x38) = 0;
for (int32_t i = 0; i < 12; i++) *(uint8_t**)(arg0 + 0x3C + i * 4) = 0;
*(uint32_t*)(arg0 + 0x6C) = 0;
*(uint32_t*)(arg0 + 0x74) = 0xBF800000;
for (int32_t i = 0; i < 12; i++) *(uint8_t**)(arg0 + 0x84 + i * 4) = 0;
*(uint32_t*)(arg0 + 0xB4) = 0;
for (int32_t i = 0; i < 12; i++) *(uint8_t**)(arg0 + 0xB8 + i * 4) = 0;
*(uint32_t*)(arg0 + 0xE8) = 0;
for (int32_t i = 0; i < 12; i++) *(uint8_t**)(arg0 + 0xEC + i * 4) = 0;
*(uint32_t*)(arg0 + 0x11C) = 0;
for (int32_t i = 0; i < 12; i++) *(uint8_t**)(arg0 + 0x120 + i * 4) = 0;
*(uint32_t*)(arg0 + 0x150) = 0;
return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00364CB4
void* FUN_00105500(uint32_t, void*);
uint8_t* FUN_003641A8(uint8_t*);
void FUN_00361920(void*, void*, void*);
extern "C" uint8_t* YellowAuto_00364cb4(uint8_t* arg0, uint32_t arg1) __asm__("_ZN4gfl29animation19AnimationController12GetJointSlotEj");
extern "C" uint8_t* YellowAuto_00364cb4(uint8_t* arg0, uint32_t arg1) {
void* v0 = *(void**)arg0;
void* v1 = *(void**)(arg0 + 4);
uint32_t v2 = *(uint32_t*)(arg0 + 0x70);
uint8_t* v3 = arg0 + v2 * 0x34 + 8;
if (*(uint32_t*)(v3 + 0x30) <= arg1 && !v0) return 0;
if (*(uint32_t*)(v3 + 0x30) <= arg1) *(uint32_t*)(v3 + 0x30) = arg1 + 1;
uint8_t* v4 = *(uint8_t**)(v3 + arg1 * 4);
if (v4) return v4;
if (!v0) return 0;
void* v5 = FUN_00105500(0xF8, v0);
uint8_t* v6 = 0;
if (v5) v6 = FUN_003641A8((uint8_t*)v5);
FUN_00361920(v6, v0, v1);
*(uint8_t**)(v3 + arg1 * 4) = v6;
return v6;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00364ED0
void* FUN_00105500(uint32_t, void*);
uint8_t* FUN_0036A2CC(uint8_t*);
void FUN_00361920(void*, void*, void*);
extern "C" uint8_t* YellowAuto_00364ed0(uint8_t* arg0, uint32_t arg1) __asm__("_ZN4gfl29animation19AnimationController15GetMaterialSlotEj");
extern "C" uint8_t* YellowAuto_00364ed0(uint8_t* arg0, uint32_t arg1) {
void* v0 = *(void**)arg0;
void* v1 = *(void**)(arg0 + 4);
if (*(uint32_t*)(arg0 + 0xB4) <= arg1 && !v0) return 0;
if (*(uint32_t*)(arg0 + 0xB4) <= arg1) *(uint32_t*)(arg0 + 0xB4) = arg1 + 1;
uint8_t* v2 = *(uint8_t**)(arg0 + arg1 * 4 + 0x84);
if (v2) return v2;
if (!v0) return 0;
void* v3 = FUN_00105500(0x40, v0);
uint8_t* v4 = 0;
if (v3) v4 = FUN_0036A2CC((uint8_t*)v3);
FUN_00361920(v4, v0, v1);
*(uint8_t**)(arg0 + arg1 * 4 + 0x84) = v4;
return v4;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00365040
void* FUN_00105500(uint32_t, void*);
uint8_t* FUN_0036A750(uint8_t*);
void FUN_00361920(void*, void*, void*);
extern "C" uint8_t* YellowAuto_00365040(uint8_t* arg0, uint32_t arg1) __asm__("_ZN4gfl29animation19AnimationController17GetVisibilitySlotEj");
extern "C" uint8_t* YellowAuto_00365040(uint8_t* arg0, uint32_t arg1) {
void* v0 = *(void**)arg0;
void* v1 = *(void**)(arg0 + 4);
if (*(uint32_t*)(arg0 + 0xE8) <= arg1 && !v0) return 0;
if (*(uint32_t*)(arg0 + 0xE8) <= arg1) *(uint32_t*)(arg0 + 0xE8) = arg1 + 1;
uint8_t* v2 = *(uint8_t**)(arg0 + arg1 * 4 + 0xB8);
if (v2) return v2;
if (!v0) return 0;
void* v3 = FUN_00105500(0x38, v0);
uint8_t* v4 = 0;
if (v3) v4 = FUN_0036A750((uint8_t*)v3);
FUN_00361920(v4, v0, v1);
*(uint8_t**)(arg0 + arg1 * 4 + 0xB8) = v4;
return v4;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00366730
void FUN_00361c58(void*);
extern "C" void YellowAuto_00366730(uint8_t* arg0) __asm__("_ZN4gfl29animation19AnimationController8FinalizeEv");
extern "C" void YellowAuto_00366730(uint8_t* arg0) {
uint32_t n0 = *reinterpret_cast<uint32_t*>(arg0 + 0x38);
uint32_t i0 = 0;
while (i0 < n0) {
uint8_t* e0 = *reinterpret_cast<uint8_t**>(arg0 + 0x08 + i0 * 4);
if (e0 != nullptr) {
FUN_00361c58(e0);
e0 = *reinterpret_cast<uint8_t**>(arg0 + 0x08 + i0 * 4);
if (e0 != nullptr) {
uint32_t* vt0 = *reinterpret_cast<uint32_t**>(e0);
reinterpret_cast<void(*)(void*)>(vt0[1])(e0);
*reinterpret_cast<uint8_t**>(arg0 + 0x08 + i0 * 4) = nullptr;
}
}
n0 = *reinterpret_cast<uint32_t*>(arg0 + 0x38);
i0 = i0 + 1;
}
*reinterpret_cast<uint32_t*>(arg0 + 0x38) = 0;
uint32_t n1 = *reinterpret_cast<uint32_t*>(arg0 + 0x6C);
uint32_t i1 = 0;
while (i1 < n1) {
uint8_t* e1 = *reinterpret_cast<uint8_t**>(arg0 + 0x3C + i1 * 4);
if (e1 != nullptr) {
FUN_00361c58(e1);
e1 = *reinterpret_cast<uint8_t**>(arg0 + 0x3C + i1 * 4);
if (e1 != nullptr) {
uint32_t* vt1 = *reinterpret_cast<uint32_t**>(e1);
reinterpret_cast<void(*)(void*)>(vt1[1])(e1);
*reinterpret_cast<uint8_t**>(arg0 + 0x3C + i1 * 4) = nullptr;
}
}
n1 = *reinterpret_cast<uint32_t*>(arg0 + 0x6C);
i1 = i1 + 1;
}
*reinterpret_cast<uint32_t*>(arg0 + 0x6C) = 0;
uint32_t n2 = *reinterpret_cast<uint32_t*>(arg0 + 0xB4);
uint32_t i2 = 0;
while (i2 < n2) {
uint8_t* e2 = *reinterpret_cast<uint8_t**>(arg0 + 0x84 + i2 * 4);
if (e2 != nullptr) {
FUN_00361c58(e2);
e2 = *reinterpret_cast<uint8_t**>(arg0 + 0x84 + i2 * 4);
if (e2 != nullptr) {
uint32_t* vt2 = *reinterpret_cast<uint32_t**>(e2);
reinterpret_cast<void(*)(void*)>(vt2[1])(e2);
*reinterpret_cast<uint8_t**>(arg0 + 0x84 + i2 * 4) = nullptr;
}
}
n2 = *reinterpret_cast<uint32_t*>(arg0 + 0xB4);
i2 = i2 + 1;
}
*reinterpret_cast<uint32_t*>(arg0 + 0xB4) = 0;
uint32_t n3 = *reinterpret_cast<uint32_t*>(arg0 + 0xE8);
uint32_t i3 = 0;
while (i3 < n3) {
uint8_t* e3 = *reinterpret_cast<uint8_t**>(arg0 + 0xB8 + i3 * 4);
if (e3 != nullptr) {
FUN_00361c58(e3);
e3 = *reinterpret_cast<uint8_t**>(arg0 + 0xB8 + i3 * 4);
if (e3 != nullptr) {
uint32_t* vt3 = *reinterpret_cast<uint32_t**>(e3);
reinterpret_cast<void(*)(void*)>(vt3[1])(e3);
*reinterpret_cast<uint8_t**>(arg0 + 0xB8 + i3 * 4) = nullptr;
}
}
n3 = *reinterpret_cast<uint32_t*>(arg0 + 0xE8);
i3 = i3 + 1;
}
*reinterpret_cast<uint32_t*>(arg0 + 0xE8) = 0;
uint32_t n4 = *reinterpret_cast<uint32_t*>(arg0 + 0x11C);
uint32_t i4 = 0;
while (i4 < n4) {
uint8_t* e4 = *reinterpret_cast<uint8_t**>(arg0 + 0xEC + i4 * 4);
if (e4 != nullptr) {
FUN_00361c58(e4);
e4 = *reinterpret_cast<uint8_t**>(arg0 + 0xEC + i4 * 4);
if (e4 != nullptr) {
uint32_t* vt4 = *reinterpret_cast<uint32_t**>(e4);
reinterpret_cast<void(*)(void*)>(vt4[1])(e4);
*reinterpret_cast<uint8_t**>(arg0 + 0xEC + i4 * 4) = nullptr;
}
}
n4 = *reinterpret_cast<uint32_t*>(arg0 + 0x11C);
i4 = i4 + 1;
}
*reinterpret_cast<uint32_t*>(arg0 + 0x11C) = 0;
uint32_t n5 = *reinterpret_cast<uint32_t*>(arg0 + 0x150);
uint32_t i5 = 0;
while (i5 < n5) {
uint8_t* e5 = *reinterpret_cast<uint8_t**>(arg0 + 0x120 + i5 * 4);
if (e5 != nullptr) {
FUN_00361c58(e5);
e5 = *reinterpret_cast<uint8_t**>(arg0 + 0x120 + i5 * 4);
if (e5 != nullptr) {
uint32_t* vt5 = *reinterpret_cast<uint32_t**>(e5);
reinterpret_cast<void(*)(void*)>(vt5[1])(e5);
*reinterpret_cast<uint8_t**>(arg0 + 0x120 + i5 * 4) = nullptr;
}
}
n5 = *reinterpret_cast<uint32_t*>(arg0 + 0x150);
i5 = i5 + 1;
}
*reinterpret_cast<uint32_t*>(arg0 + 0x150) = 0;
}
#endif
