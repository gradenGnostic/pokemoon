// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002D230C
void f_003be8b8(uint8_t*, bool);
extern "C" void YellowAuto_002d230c(uint8_t* arg0, bool arg1) __asm__("_ZN3App4Tool30CommonMessageWindowManipulator13SetSuspendKeyEb");
extern "C" void YellowAuto_002d230c(uint8_t* arg0, bool arg1) {
uint8_t* v0 = *(uint8_t**)(arg0 + 8);
uint8_t* v1 = *(uint8_t**)(v0 + 96);
uint8_t* v2 = *(uint8_t**)(v1 + 52);
if (v2 != (uint8_t*)0) {
 f_003be8b8(v2, arg1);
}
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002D2344
void f_003be9c4(uint8_t*, int32_t, int32_t);
extern "C" void YellowAuto_002d2344(uint8_t* arg0, int32_t arg1) __asm__("_ZN3App4Tool30CommonMessageWindowManipulator15SetMessageSpeedEN8Savedata10ConfigSave9MSG_SPEEDE");
extern "C" void YellowAuto_002d2344(uint8_t* arg0, int32_t arg1) {
uint8_t* v0 = *(uint8_t**)(arg0 + 8);
if (v0 == (uint8_t*)0) return;
uint8_t* v1 = *(uint8_t**)(v0 + 96);
if (v1 == (uint8_t*)0) return;
uint8_t* v2 = *(uint8_t**)(v1 + 52);
if (v2 == (uint8_t*)0) return;
f_003be9c4(v2, arg1, 0);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002D23A8
void f_00354ed4(uint8_t*, int32_t, int32_t);
extern "C" void YellowAuto_002d23a8(uint8_t* arg0) __asm__("_ZN3App4Tool30CommonMessageWindowManipulator23SetFinishMode_UserInputEv");
extern "C" void YellowAuto_002d23a8(uint8_t* arg0) {
uint8_t* v0 = *(uint8_t**)(arg0 + 8);
uint8_t* v1 = *(uint8_t**)(v0 + 96);
uint8_t* v2 = *(uint8_t**)(v1 + 52);
f_00354ed4(v2, 1, 0);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002D2288
int32_t f_0030f7f4(uint8_t*);
extern "C" void YellowAuto_002d2288(uint8_t* arg0) __asm__("_ZN3App4Tool30CommonMessageWindowManipulator12UpdateWindowEv");
extern "C" void YellowAuto_002d2288(uint8_t* arg0) {
uint8_t* v0 = *(uint8_t**)(arg0 + 8);
uint8_t* v1 = *(uint8_t**)(v0 + 96);
int32_t r = f_0030f7f4(v1);
if (*(arg0 + 80) == (uint8_t)0 && r == 0) {
 *(arg0 + 80) = (uint8_t)1;
 uint8_t* h = *(uint8_t**)(arg0 + 16);
 if (h != (uint8_t*)0) {
  uint32_t vt = *(uint32_t*)h;
  uint32_t fn = *(uint32_t*)(vt + 8);
  ((void (*)(uint8_t*, int32_t))fn)(h, 0);
 }
} else if (*(arg0 + 81) == (uint8_t)0 && r == 4) {
 *(arg0 + 81) = (uint8_t)1;
 uint8_t* h2 = *(uint8_t**)(arg0 + 16);
 if (h2 != (uint8_t*)0) {
  uint32_t vt2 = *(uint32_t*)h2;
  uint32_t fn2 = *(uint32_t*)(vt2 + 8);
  ((void (*)(uint8_t*, int32_t))fn2)(h2, 1);
 }
}
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002D26EC
extern "C" void YellowAuto_002d26ec(uint8_t* arg0) __asm__("_ZN3App4Tool30CommonMessageWindowManipulatorC1Ev");
extern "C" void YellowAuto_002d26ec(uint8_t* arg0) {
*(uint32_t*)(arg0 + 4) = 0u;
*(uint32_t*)(arg0 + 8) = 0u;
*(uint32_t*)(arg0 + 12) = 4294967295u;
*(uint32_t*)(arg0 + 16) = 0u;
*(uint32_t*)(arg0 + 20) = 4294967295u;
*(uint32_t*)(arg0 + 24) = 4294967295u;
*(uint32_t*)(arg0 + 28) = 4294967295u;
*(uint32_t*)(arg0 + 32) = 4294967295u;
*(uint32_t*)(arg0 + 36) = 65535u;
*(uint32_t*)(arg0 + 40) = 65535u;
*(uint32_t*)(arg0 + 44) = 65535u;
*(uint32_t*)(arg0 + 48) = 65535u;
*(uint32_t*)(arg0 + 52) = 65535u;
*(uint32_t*)(arg0 + 56) = 65535u;
*(uint32_t*)(arg0 + 60) = 65535u;
*(uint32_t*)(arg0 + 64) = 0u;
*(uint32_t*)(arg0 + 68) = 0u;
*(uint32_t*)(arg0 + 72) = 0u;
*(uint32_t*)(arg0 + 76) = 0u;
*(arg0 + 80) = (uint8_t)0;
*(arg0 + 81) = (uint8_t)0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00311708
void f_0030f62c(uint8_t*, int32_t, uint32_t, int32_t, int32_t);
void f_003118e0(uint8_t*, int32_t, uint32_t, int32_t);
void f_0031179c(uint8_t*);
extern "C" void YellowAuto_00311708(uint8_t* arg0) __asm__("_ZN3App4Tool30CommonMessageWindowManipulator11HideMessageEv");
extern "C" void YellowAuto_00311708(uint8_t* arg0) {
uint8_t* v0 = *(uint8_t**)(arg0 + 8);
uint8_t* v1 = *(uint8_t**)(v0 + 96);
uint8_t* v2 = *(uint8_t**)(arg0 + 64);
if (v2 != (uint8_t*)0) {
 *(v2 + 68) = (uint8_t)(*(v2 + 68) & 254u);
}
uint8_t* v3 = *(uint8_t**)(arg0 + 76);
if (v3 != (uint8_t*)0) {
 uint32_t v4 = *(uint32_t*)(arg0 + 28);
 if (v4 != 4294967295u) {
  f_0030f62c(v1, *(int32_t*)(arg0 + 12), v4, 1, 1);
  uint32_t v5 = *(uint32_t*)(arg0 + 24);
  if (v5 != 4294967295u) {
   f_003118e0(v1, *(int32_t*)(arg0 + 12), v5, 0);
  }
 }
 *(v3 + 68) = (uint8_t)(*(v3 + 68) & 254u);
}
f_0031179c(v1);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002D2128
void f_0030f5a4(uint8_t*, const uint8_t*);
void f_002e78c4(uint8_t*, uint8_t*, const uint8_t*);
void f_0030f62c(uint8_t*, int32_t, uint32_t, int32_t, int32_t);
void f_003118e0(uint8_t*, int32_t, uint32_t, int32_t);
uint8_t* f_0048ee3c(uint8_t*, int32_t);
void f_002d3d44(uint8_t*, uint32_t, int32_t);
void f_0031179c(uint8_t*);
extern "C" void YellowAuto_002d2128(uint8_t* arg0, const uint8_t* arg1, bool arg2, bool arg3) __asm__("_ZN3App4Tool30CommonMessageWindowManipulator11ShowMessageEPKN4gfl23str6StrBufEbb");
extern "C" void YellowAuto_002d2128(uint8_t* arg0, const uint8_t* arg1, bool arg2, bool arg3) {
uint8_t* v0 = *(uint8_t**)(arg0 + 8);
uint8_t* v1 = *(uint8_t**)(v0 + 96);
uint8_t* v2 = *(uint8_t**)(arg0 + 68);
*(v2 + 68) = (uint8_t)((*(v2 + 68) & 254u) | (uint8_t)arg2);
uint8_t* v3 = *(uint8_t**)(arg0 + 72);
*(v3 + 68) = (uint8_t)((*(v3 + 68) & 254u) | ((uint8_t)arg2 ^ (uint8_t)1));
if (arg1 != (const uint8_t*)0) {
 if (arg2 == (bool)0) {
  f_0030f5a4(v1, arg1);
 } else {
  f_002e78c4(v0, v2, arg1);
 }
}
uint8_t* v4 = *(uint8_t**)(arg0 + 64);
if (v4 != (uint8_t*)0) {
 *(v4 + 68) = (uint8_t)((*(v4 + 68) & 254u) | 1u);
}
uint8_t* v5 = *(uint8_t**)(arg0 + 76);
if (v5 != (uint8_t*)0) {
 *(v5 + 68) = (uint8_t)((*(v5 + 68) & 254u) | (uint8_t)arg3);
 if (arg3 != (bool)0) {
  uint32_t v6 = *(uint32_t*)(arg0 + 24);
  if (v6 != 4294967295u) {
   f_0030f62c(v1, *(int32_t*)(arg0 + 12), v6, 1, 1);
   uint32_t v7 = *(uint32_t*)(arg0 + 28);
   if (v7 != 4294967295u) {
    f_003118e0(v1, *(int32_t*)(arg0 + 12), v7, 0);
   }
  }
  uint32_t v8 = *(uint32_t*)(arg0 + 20);
  if (v8 != 4294967295u) {
   f_003118e0(v1, *(int32_t*)(arg0 + 12), v8, 0);
   uint8_t* v9 = f_0048ee3c(v1, *(int32_t*)(arg0 + 12));
   f_002d3d44(v9, v8, 1);
  }
 }
}
*(arg0 + 80) = (uint8_t)0;
*(arg0 + 81) = (uint8_t)0;
f_0031179c(v1);
}
#endif
