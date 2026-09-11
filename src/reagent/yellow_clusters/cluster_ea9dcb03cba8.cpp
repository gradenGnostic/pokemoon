// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002F23F4
void SetRotation(uint8_t*, const uint32_t*, uint32_t);
extern "C" void YellowAuto_002f23f4(uint8_t* arg0, const uint32_t* arg1) __asm__("_ZN3app4tool16CharaSimpleModel6SetRotERKN4gfl24math7Vector3E");
extern "C" void YellowAuto_002f23f4(uint8_t* arg0, const uint32_t* arg1) {
if (*(arg0 + 4) == 2)
SetRotation(arg0 + 116, arg1, 5);
*(uint32_t*)(arg0 + 52) = arg1[0];
*(uint32_t*)(arg0 + 56) = arg1[1];
*(uint32_t*)(arg0 + 60) = arg1[2];
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002F2B10
void Update(uint8_t*);
extern "C" bool YellowAuto_002f2b10(uint8_t* arg0) __asm__("_ZN3app4tool16CharaSimpleModel7IsReadyEv");
extern "C" bool YellowAuto_002f2b10(uint8_t* arg0) {
if (*(arg0 + 4) != 2)
Update(arg0);
if (*(arg0 + 39) == 1)
return false;
return *(arg0 + 4) == 2;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002F1EF8
void SetVisibleInner(uint8_t*, bool);
extern "C" void YellowAuto_002f1ef8(uint8_t* arg0, bool arg1) __asm__("_ZN3app4tool16CharaSimpleModel10SetVisibleEb");
extern "C" void YellowAuto_002f1ef8(uint8_t* arg0, bool arg1) {
if (*(arg0 + 4) == 2)
SetVisibleInner(arg0 + 116, arg1);
*(arg0 + 30) = (uint8_t)arg1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002F210C
void Update(uint8_t*);
void SetMotionAnimeFrame(uint8_t*, int32_t, uint32_t, bool);
extern "C" void YellowAuto_002f210c(uint8_t* arg0, int32_t arg1, uint32_t arg2, bool arg3) __asm__("_ZN3app4tool16CharaSimpleModel14SetMotionAnimeEijb");
extern "C" void YellowAuto_002f210c(uint8_t* arg0, int32_t arg1, uint32_t arg2, bool arg3) {
if (*(arg0 + 4) != 2)
Update(arg0);
if (*(arg0 + 39) != 1 && *(arg0 + 4) == 2)
SetMotionAnimeFrame(arg0, arg1, arg2, arg3);
*(int32_t*)(arg0 + 12) = arg1;
*(uint32_t*)(arg0 + 16) = arg2;
*(arg0 + 31) = (uint8_t)arg3;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002F21E0
bool DressUpCoreCheckCombination(void*, const uint16_t*);
extern "C" bool YellowAuto_002f21e0(uint8_t* arg0, const uint16_t* arg1) __asm__("_ZN3app4tool16CharaSimpleModel23CheckDressUpCombinationERKN7poke_3d5model12DressUpParamE");
extern "C" bool YellowAuto_002f21e0(uint8_t* arg0, const uint16_t* arg1) {
if (*(void**)(arg0 + 3496) == 0)
return true;
if ((uint8_t*)*(void**)(arg0 + 3496) + ((uint32_t)(arg1[0] & 255) << 6) == 0)
return true;
return DressUpCoreCheckCombination((uint8_t*)*(void**)(arg0 + 3496) + ((uint32_t)(arg1[0] & 255) << 6), arg1);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002F2BD8
void GFLassert();
void MemCpy(uint8_t*, const uint8_t*, uint32_t);
extern "C" void YellowAuto_002f2bd8(uint8_t* arg0, int32_t arg1, const uint8_t* arg2) __asm__("_ZN3app4tool16CharaSimpleModel9StartLoadEiRKN7poke_3d5model12DressUpParamE");
extern "C" void YellowAuto_002f2bd8(uint8_t* arg0, int32_t arg1, const uint8_t* arg2) {
if (*(arg0 + 29) == 1)
GFLassert();
if (*(arg0 + 29) == 1)
return;
*(int32_t*)(arg0 + 64) = arg1;
MemCpy(arg0 + 68, arg2, 40);
*(arg0 + 39) = 1;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002F2224
uint32_t FUN_002f1f1c(uint8_t*, void*);
void* FUN_00105500(uint32_t, void*);
void* FUN_004120e4(void*);
void* FUN_00358174(void*, int32_t, uint32_t, uint32_t, uint32_t, uint32_t);
void FUN_00411270(void*, void*, void*, uint32_t);
void* FUN_00414b54(void*);
void FUN_004142c0(void*, void*, void*, void*);
extern "C" void YellowAuto_002f2224(uint8_t* arg0, void* arg1, void* arg2, uint32_t arg3, void* arg4) __asm__("_ZN3app4tool16CharaSimpleModel5SetupERNS1_11SETUP_PARAMEPN4gfl22fs16AsyncFileManagerEjPi");
extern "C" void YellowAuto_002f2224(uint8_t* arg0, void* arg1, void* arg2, uint32_t arg3, void* arg4) {
if (FUN_002f1f1c(arg0, arg1) == 0) return;
*(uint32_t*)(arg0 + 0) = arg3;
void* a0 = *(void**)(arg0 + 108);
void* a1 = FUN_00105500(28, a0);
if (a1 != (void*)0) a1 = FUN_004120e4(a1);
*(void**)(arg0 + 3492) = a1;
void* b0 = *(void**)(arg0 + 3468);
void* b1 = FUN_00358174(b0, -2, 196608, 0, 0, 0);
*(void**)(arg0 + 3500) = b1;
FUN_00411270(*(void**)(arg0 + 3492), arg2, b1, arg3);
void* c0 = *(void**)(arg0 + 108);
void* c1 = FUN_00105500(132, c0);
if (c1 != (void*)0) c1 = FUN_00414b54(c1);
*(void**)(arg0 + 3496) = c1;
void* d0 = *(void**)(arg0 + 3468);
void* d1 = FUN_00358174(d0, -2, 1769472, 0, 0, 0);
*(void**)(arg0 + 3504) = d1;
FUN_004142c0(*(void**)(arg0 + 3496), arg2, d1, arg4);
*(arg0 + 32) = (uint8_t)1;
}
#endif
