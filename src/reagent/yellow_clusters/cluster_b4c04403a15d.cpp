// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0039CDFC
extern "C" void YellowAuto_0039cdfc(uint8_t* arg0) __asm__("_ZN5Field9MoveModel14FieldMoveModel15ReSetParentNodeEv");
extern "C" void YellowAuto_0039cdfc(uint8_t* arg0) {
uint32_t v0 = *(uint32_t*)(arg0 + 0xF4); if (v0 != 0) { uint32_t vt = *(uint32_t*)v0; uint32_t fn = *(uint32_t*)(vt + 0x10); ((void (*)(void*, uint32_t))fn)((void*)v0, *(uint32_t*)(*(uint32_t*)(arg0 + 0xF8) + 4)); *(uint32_t*)(arg0 + 0xF4) = 0; }
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003A60FC
extern "C" void YellowAuto_003a60fc(uint8_t* arg0, int32_t arg1) __asm__("_ZN5Field9MoveModel14FieldMoveModel18ClearActionCommandEi");
extern "C" void YellowAuto_003a60fc(uint8_t* arg0, int32_t arg1) {
if (arg1 != 0) { uint32_t vt = *(uint32_t*)arg0; uint32_t fn = *(uint32_t*)(vt + 0x7C); ((void (*)(void*))fn)((void*)arg0); } uint8_t* w = arg0 + 0x1E8; *(w + 0x4) = 0; *(uint32_t*)(w + 0x8) = 0; uint32_t p = *(uint32_t*)w; *(uint32_t*)(p + 0xE0) = 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003A5FD8
extern "C" void YellowAuto_003a5fd8(uint8_t* arg0, int32_t arg1) __asm__("_ZN5Field9MoveModel14FieldMoveModel16SetActionCommandENS0_20FieldActionCommandIdE");
extern "C" void YellowAuto_003a5fd8(uint8_t* arg0, int32_t arg1) {
uint32_t vt = *(uint32_t*)arg0; uint32_t fn = *(uint32_t*)(vt + 0x7C); ((void (*)(void*))fn)((void*)arg0); uint8_t* w = arg0 + 0x1E8; *(w + 0x4) = arg1; *(uint32_t*)(w + 0x8) = 0; uint32_t p = *(uint32_t*)w; *(uint32_t*)(p + 0xE0) = 1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003A63D8
extern "C" void YellowAuto_003a63d8(uint8_t* arg0, int32_t arg1, uint32_t arg2, int32_t arg3) __asm__("_ZN5Field9MoveModel14FieldMoveModel39SetActionCommandStepMoveWithoutStartEndENS0_20FieldActionCommandIdEji");
extern "C" void YellowAuto_003a63d8(uint8_t* arg0, int32_t arg1, uint32_t arg2, int32_t arg3) {
uint32_t vt = *(uint32_t*)arg0; uint32_t fn = *(uint32_t*)(vt + 0x7C); ((void (*)(void*))fn)((void*)arg0); uint8_t* w = arg0 + 0x1E8; *(w + 0x4) = arg1; *(uint32_t*)(w + 0x8) = 0; *(uint32_t*)(w + 0x14) = arg2; *(uint32_t*)(w + 0x18) = arg3; uint32_t p = *(uint32_t*)w; *(uint32_t*)(p + 0xE0) = 1;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0039DD30
void FUN_003a6314(uint8_t*, uint8_t, uint32_t*, uint16_t*, uint16_t*, uint16_t*);
extern "C" void YellowAuto_0039dd30(uint8_t* arg0, uint8_t arg1, uint32_t* arg2, uint16_t* arg3, uint16_t* arg4, uint16_t* arg5) __asm__("_ZN5Field9MoveModel14FieldMoveModel34SetActionCommandContinuousPlayBackENS0_20FieldActionCommandIdEPjPsS4_S4_");
extern "C" void YellowAuto_0039dd30(uint8_t* arg0, uint8_t arg1, uint32_t* arg2, uint16_t* arg3, uint16_t* arg4, uint16_t* arg5) {
((void(*)(uint8_t*))(*(uint32_t*)(*(uint32_t*)arg0 + 0x7C)))(arg0); FUN_003a6314(arg0 + 0x1E8, arg1, arg2, arg3, arg4, arg5);
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0039DD9C
void FUN_003a6468(uint8_t*, uint32_t, uint32_t, uint32_t*, uint32_t*);
extern "C" void YellowAuto_0039dd9c(uint8_t* arg0, uint32_t arg1, uint32_t arg2, const uint32_t* arg3, const uint32_t* arg4) __asm__("_ZN5Field9MoveModel14FieldMoveModel44SetActionCommandTargetMoveWithOptionalMotionENS0_20FieldActionCommandIdEjN4gfl24math7Vector3ENS4_10QuaternionE");
extern "C" void YellowAuto_0039dd9c(uint8_t* arg0, uint32_t arg1, uint32_t arg2, const uint32_t* arg3, const uint32_t* arg4) {
void** vtbl = *reinterpret_cast<void***>(arg0);
reinterpret_cast<void(*)(uint8_t*)>(vtbl[31])(arg0);
uint32_t vbuf[3];
uint32_t qbuf[4];
vbuf[0] = reinterpret_cast<const uint32_t*>(arg3)[0];
vbuf[1] = reinterpret_cast<const uint32_t*>(arg3)[1];
vbuf[2] = reinterpret_cast<const uint32_t*>(arg3)[2];
qbuf[0] = reinterpret_cast<const uint32_t*>(arg4)[0];
qbuf[1] = reinterpret_cast<const uint32_t*>(arg4)[1];
qbuf[2] = reinterpret_cast<const uint32_t*>(arg4)[2];
qbuf[3] = reinterpret_cast<const uint32_t*>(arg4)[3];
FUN_003a6468(arg0 + 488, arg1, arg2, vbuf, qbuf);
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0039B678
void func_00324b28(uint8_t* arg0, uint32_t arg1);
void func_0039e64c(uint8_t* arg0);
uint32_t func_004a5504(const uint8_t* arg0, const uint8_t* arg1);
uint8_t* func_0032a43c(uint32_t arg0, uint32_t arg1);
void func_0032a820(uint8_t* arg0);
extern "C" void YellowAuto_0039b678(uint8_t* arg0, uint32_t arg1, uint8_t* arg2, const uint8_t* arg3) __asm__("_ZN5Field9MoveModel14FieldMoveModel12SetSubobjectEjPNS0_14FieldSubobjectEPc");
extern "C" void YellowAuto_0039b678(uint8_t* arg0, uint32_t arg1, uint8_t* arg2, const uint8_t* arg3) {
uint8_t* old = *(uint8_t**)(arg0 + arg1 * 4 + 0x464);
if (old != (uint8_t*)0) {
uint8_t* tmp1 = *(uint8_t**)(old + 0xA0);
uint8_t* tmp2 = *(uint8_t**)(tmp1 + 0x4);
func_00324b28(tmp2, arg1);
func_0039e64c(old);
*(uint8_t**)(arg0 + arg1 * 4 + 0x464) = (uint8_t*)0;
*(uint32_t*)(arg0 + arg1 * 4 + 0x46C) = 0;
*(uint32_t*)(arg0 + arg1 * 4 + 0x47C) = 0;
*(uint32_t*)(arg0 + arg1 * 4 + 0x474) = 0;
}
if (arg2 != (uint8_t*)0) {
const uint8_t* base = *(const uint8_t**)(arg0 + 0xF8);
uint32_t j = func_004a5504(base, arg3);
if (j != 0xFFFFFFFF) {
*(uint8_t**)(arg0 + arg1 * 4 + 0x464) = arg2;
uint32_t j2 = func_004a5504(base, arg3);
*(uint32_t*)(arg0 + arg1 * 4 + 0x46C) = j2;
*(uint32_t*)(arg0 + arg1 * 4 + 0x47C) = 1;
*(uint32_t*)(arg0 + arg1 * 4 + 0x474) = *(uint32_t*)(arg2 + 0x84);
uint8_t* b2 = *(uint8_t**)(arg0 + 0xF8);
uint8_t* t = *(uint8_t**)(b2 + 0x4);
uint32_t v = *(uint32_t*)(t + 0x13C);
uint8_t* pi = (uint8_t*)0;
if (v == 0) {
uint8_t* arr = *(uint8_t**)(t + 0x100);
pi = arr + j2 * 0x10C;
} else {
pi = func_0032a43c(v, j2);
}
uint8_t* q = *(uint8_t**)(arg2 + 0xA0);
uint8_t* tgt = *(uint8_t**)(q + 0x4);
((void(*)(uint8_t*, uint8_t*))(*(uint32_t*)(*(uint32_t*)pi + 0x10)))(pi, tgt);
uint8_t* inst = *(uint8_t**)(q + 0x4);
if (inst != (uint8_t*)0) {
func_0032a820(inst);
uint32_t k = 0;
if (*(uint32_t*)(inst + 0xC0) != 0) {
do {
uint8_t* e8 = *(uint8_t**)(inst + 0xE8);
uint8_t* e = *(uint8_t**)(e8 + k * 0x2B0 + 0x28);
uint8_t* m = *(uint8_t**)(e + 0x2D8);
uint32_t add = *(uint32_t*)(arg0 + 0xC4);
uint32_t nv = (uint32_t)*(uint8_t*)(m + 0x20) + add;
if (nv >= 0xFF) {
nv = 0xFF;
} else {
if (nv > 0x96) {
nv = 0x96;
}
}
*(uint8_t*)(m + 0x20) = (uint8_t)nv;
((void(*)(uint8_t*))(*(uint32_t*)(*(uint32_t*)m + 0x34)))(m);
k = k + 1;
} while (k < *(uint32_t*)(inst + 0xC0));
}
}
}
}
}
#endif
