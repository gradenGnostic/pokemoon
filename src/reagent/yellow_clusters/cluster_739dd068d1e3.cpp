// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A2EA0
bool FUN_0049c1e0(const uint8_t* arg0);
bool FUN_0049c1a0(const uint8_t* arg0);
bool FUN_0049c1c0(const uint8_t* arg0);
extern "C" bool YellowAuto_004a2ea0(const uint8_t* arg0, uint32_t arg1) __asm__("_ZNK6System11EnvAccessor17IsAnimationSmoothENS0_12AnimationBitE");
extern "C" bool YellowAuto_004a2ea0(const uint8_t* arg0, uint32_t arg1) {
if ((arg1 & 1U) != 0U)
  return FUN_0049c1e0(arg0 + 8);
if ((arg1 & 2U) != 0U)
  return FUN_0049c1a0(arg0 + 8);
if ((arg1 & 4U) != 0U)
  return FUN_0049c1c0(arg0 + 8);
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

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003E47C0
bool FUN_0049c1e0(uint8_t*);
bool FUN_0049c1a0(uint8_t*);
bool FUN_0049c1c0(uint8_t*);
void* GetLightSlot(uint8_t*, uint32_t, uint32_t);
void* GetFogSlot(uint8_t*, uint32_t, uint32_t);
void* FUN_0036a990(uint8_t*, uint32_t, uint32_t);
void SetAnimationResource(void*, void*);
void FUN_0036ab50(uint8_t*, int32_t);
void FUN_0036ab28(uint8_t*, int32_t);
void FUN_0036ab3c(uint8_t*, int32_t);
void ChangeAnimation(uint8_t*, void*, uint32_t, uint32_t);
extern "C" void YellowAuto_003e47c0(uint8_t* arg0, void* arg1, uint32_t arg2, uint32_t arg3, int32_t arg4) __asm__("_ZN6System11EnvAccessor21ChangeAnimationSmoothEPN4gfl215renderingengine10scenegraph8resource12ResourceNodeEjNS0_12AnimationBitEj");
extern "C" void YellowAuto_003e47c0(uint8_t* arg0, void* arg1, uint32_t arg2, uint32_t arg3, int32_t arg4) {
bool _b = false;
if ((arg3 & 1U) != 0U) { _b = FUN_0049c1e0(arg0 + 8); if (_b) { ChangeAnimation(arg0, arg1, arg2, arg3); return; } } else if ((arg3 & 2U) != 0U) { _b = FUN_0049c1a0(arg0 + 8); if (_b) { ChangeAnimation(arg0, arg1, arg2, arg3); return; } } else if ((arg3 & 4U) != 0U) { _b = FUN_0049c1c0(arg0 + 8); if (_b) { ChangeAnimation(arg0, arg1, arg2, arg3); return; } }
if (arg4 == 0 || arg1 == (void*)0) { ChangeAnimation(arg0, arg1, arg2, arg3); return; }
void* _s = (void*)0;
if ((arg3 & 1U) != 0U) { _s = GetLightSlot(arg0 + 8, arg2, 1U); } else if ((arg3 & 2U) != 0U) { _s = GetFogSlot(arg0 + 8, arg2, 1U); } else if ((arg3 & 4U) != 0U) { _s = FUN_0036a990(arg0 + 8, arg2, 1U); }
SetAnimationResource(_s, arg1);
if ((arg3 & 1U) != 0U) { FUN_0036ab50(arg0 + 8, arg4); }
if ((arg3 & 2U) != 0U) { FUN_0036ab28(arg0 + 8, arg4); }
if ((arg3 & 4U) != 0U) { FUN_0036ab3c(arg0 + 8, arg4); }
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0036A850
extern "C" void YellowAuto_0036a850(uint8_t* arg0, void* arg1, void* arg2) __asm__("_ZN6System11EnvAccessor10InitializeEPN4gfl24heap11CtrHeapBaseEPNS1_15renderingengine10scenegraph8instance11DrawEnvNodeE");
extern "C" void YellowAuto_0036a850(uint8_t* arg0, void* arg1, void* arg2) {
((void**)arg0)[1] = arg2; ((void**)arg0)[2] = arg1; ((void**)arg0)[3] = arg2; for (uint32_t j = 0; j < 12; ++j) ((uint32_t*)(arg0 + 0x10))[j] = 0; ((uint32_t*)(arg0 + 0x40))[0] = 0; for (uint32_t j = 0; j < 12; ++j) ((uint32_t*)(arg0 + 0x44))[j] = 0; ((uint32_t*)(arg0 + 0x74))[0] = 0; for (uint32_t j = 0; j < 12; ++j) ((uint32_t*)(arg0 + 0x88))[j] = 0; ((uint32_t*)(arg0 + 0xB8))[0] = 0; for (uint32_t j = 0; j < 12; ++j) ((uint32_t*)(arg0 + 0xBC))[j] = 0; ((uint32_t*)(arg0 + 0xEC))[0] = 0; for (uint32_t j = 0; j < 12; ++j) ((uint32_t*)(arg0 + 0x100))[j] = 0; ((uint32_t*)(arg0 + 0x130))[0] = 0; for (uint32_t j = 0; j < 12; ++j) ((uint32_t*)(arg0 + 0x134))[j] = 0; ((uint32_t*)(arg0 + 0x164))[0] = 0; for (uint32_t j = 0; j < 12; ++j) ((uint32_t*)(arg0 + 0x178))[j] = 0; ((uint32_t*)(arg0 + 0x1A8))[0] = 0; for (uint32_t j = 0; j < 12; ++j) ((uint32_t*)(arg0 + 0x1AC))[j] = 0; ((uint32_t*)(arg0 + 0x1DC))[0] = 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003E4B80
uint8_t* func_0036BDD4(uint8_t*);
extern "C" uint8_t* YellowAuto_003e4b80(uint8_t* arg0) __asm__("_ZN6System11EnvAccessorC1Ev");
extern "C" uint8_t* YellowAuto_003e4b80(uint8_t* arg0) {
*(uint32_t*)arg0 = *(uint32_t*)0x3E4B9Cu; ((uint32_t*)arg0)[1] = 0; func_0036BDD4(arg0 + 8); return arg0;
}
#endif
