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

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002F2B4C
void func_002F2434(uint8_t*);
void func_00411FDC(void*);
void func_00414AAC(void*);
extern "C" bool YellowAuto_002f2b4c(uint8_t* arg0) __asm__("_ZN3app4tool16CharaSimpleModel8IsDeleteEv");
extern "C" bool YellowAuto_002f2b4c(uint8_t* arg0) {
func_002F2434(arg0);
if (*(arg0 + 0x1D) != 1) return false;
uint32_t v = *(uint32_t*)(arg0 + 0x18);
if (v == 0) {
if (*(arg0 + 0x04) == 0) *(uint32_t*)(arg0 + 0x18) = 1;
return false;
}
if (v == 1) {
if (*(arg0 + 0x20) != 1) *(uint32_t*)(arg0 + 0x18) = 2;
else {
func_00411FDC((void*)*(uint32_t*)(arg0 + 0xDA4));
func_00414AAC((void*)*(uint32_t*)(arg0 + 0xDA8));
*(uint32_t*)(arg0 + 0x18) = *(uint32_t*)(arg0 + 0x18) + 1;
}
return false;
}
if (v == 2) return true;
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

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002F2044
void Update(uint8_t *);
void SetAutoBlinkMode(uint8_t *, uint32_t);
extern const uint32_t DAT_002F2098;
extern "C" void YellowAuto_002f2044(uint8_t* arg0) __asm__("_ZN3app4tool16CharaSimpleModel12PlayEyeAnimeEv");
extern "C" void YellowAuto_002f2044(uint8_t* arg0) {
if (arg0[4] != (uint8_t)2) Update(arg0);
if (arg0[0x27] != (uint8_t)1 && arg0[4] == (uint8_t)2) {
SetAutoBlinkMode(arg0 + 0x74, (uint32_t)2);
*(uint32_t *)(arg0 + 0x184) = DAT_002F2098;
}
arg0[0x22] = (uint8_t)1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002F2178
void Update(uint8_t *);
float GetAnimationFrame(const uint8_t *, uint32_t, uint32_t);
extern "C" uint32_t YellowAuto_002f2178(uint8_t* arg0) __asm__("_ZN3app4tool16CharaSimpleModel22GetNowMotionAnimeFrameEv");
extern "C" uint32_t YellowAuto_002f2178(uint8_t* arg0) {
if (arg0[4] != (uint8_t)2) Update(arg0);
if (arg0[0x27] != (uint8_t)1 && arg0[4] == (uint8_t)2) {
float f = GetAnimationFrame(arg0 + 0x74, (uint32_t)0, (uint32_t)31);
return (uint32_t)f;
}
return (uint32_t)0;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002F2C74
void sub_0040f3d8(uint8_t* arg0);
extern "C" void YellowAuto_002f2c74(uint8_t* arg0) __asm__("_ZN3app4tool16CharaSimpleModelC1Ev");
extern "C" void YellowAuto_002f2c74(uint8_t* arg0) {
*(uint16_t*)(arg0+0x44)=65535U; *(uint16_t*)(arg0+0x46)=65535U; *(uint16_t*)(arg0+0x48)=65535U; *(uint16_t*)(arg0+0x4A)=65535U; *(uint16_t*)(arg0+0x4C)=65535U; *(uint16_t*)(arg0+0x4E)=65535U; *(uint16_t*)(arg0+0x50)=65535U; *(uint16_t*)(arg0+0x52)=65535U; *(uint16_t*)(arg0+0x54)=65535U; *(uint16_t*)(arg0+0x56)=65535U; *(uint16_t*)(arg0+0x58)=65535U; *(uint16_t*)(arg0+0x5A)=65535U; *(uint16_t*)(arg0+0x5C)=65535U; *(uint16_t*)(arg0+0x5E)=65535U; *(uint16_t*)(arg0+0x60)=65535U; *(uint16_t*)(arg0+0x62)=65535U; *(uint16_t*)(arg0+0x64)=65535U; *(uint16_t*)(arg0+0x66)=65535U; *(uint16_t*)(arg0+0x68)=65535U; *(uint8_t*)(arg0+0x6A)=0; *(uint8_t*)(arg0+0x6B)=0; sub_0040f3d8(arg0+0x74); *(uint16_t*)(arg0+0xD5C)=65535U; *(uint16_t*)(arg0+0xD5E)=65535U; *(uint16_t*)(arg0+0xD60)=65535U; *(uint16_t*)(arg0+0xD62)=65535U; *(uint16_t*)(arg0+0xD64)=65535U; *(uint16_t*)(arg0+0xD66)=65535U; *(uint16_t*)(arg0+0xD68)=65535U; *(uint16_t*)(arg0+0xD6A)=65535U; *(uint16_t*)(arg0+0xD6C)=65535U; *(uint16_t*)(arg0+0xD6E)=65535U; *(uint16_t*)(arg0+0xD70)=65535U; *(uint16_t*)(arg0+0xD72)=65535U; *(uint16_t*)(arg0+0xD74)=65535U; *(uint16_t*)(arg0+0xD76)=65535U; *(uint16_t*)(arg0+0xD78)=65535U; *(uint16_t*)(arg0+0xD7A)=65535U; *(uint16_t*)(arg0+0xD7C)=65535U; *(uint16_t*)(arg0+0xD7E)=65535U; *(uint16_t*)(arg0+0xD80)=65535U; *(uint8_t*)(arg0+0xD82)=0; *(uint8_t*)(arg0+0xD83)=0; *(uint32_t*)(arg0+0xD8C)=0; *(uint32_t*)(arg0+0xD90)=0; *(uint8_t*)(arg0+0xD94)=3; *(uint8_t*)(arg0+0xD95)=3; *(uint8_t*)(arg0+0xD96)=3; *(uint32_t*)(arg0+0xD98)=0; *(uint32_t*)(arg0+0xD9C)=0; *(uint32_t*)(arg0+0xDA0)=0; *(uint32_t*)(arg0+0xDA4)=0; *(uint32_t*)(arg0+0xDA8)=0; *(uint32_t*)(arg0+0x00)=4294967295U; *(uint8_t*)(arg0+0x04)=0; *(uint32_t*)(arg0+0x08)=4294967295U; *(uint32_t*)(arg0+0x0C)=4294967295U; *(uint32_t*)(arg0+0x10)=0; *(uint8_t*)(arg0+0x14)=0; *(uint32_t*)(arg0+0x18)=0; *(uint8_t*)(arg0+0x1C)=0; *(uint8_t*)(arg0+0x1D)=0; *(uint8_t*)(arg0+0x1E)=0; *(uint8_t*)(arg0+0x1F)=0; *(uint8_t*)(arg0+0x20)=0; *(uint8_t*)(arg0+0x21)=0; *(uint8_t*)(arg0+0x22)=0; *(uint8_t*)(arg0+0x23)=1; *(uint8_t*)(arg0+0x24)=1; *(uint8_t*)(arg0+0x25)=1; *(uint8_t*)(arg0+0x26)=1; *(uint8_t*)(arg0+0x27)=0; *(uint32_t*)(arg0+0x40)=4294967295U; *(uint32_t*)(arg0+0x6C)=0; *(uint32_t*)(arg0+0x70)=0; *(uint32_t*)(arg0+0xD84)=0; *(uint32_t*)(arg0+0xD88)=0; *(uint32_t*)(arg0+0xDAC)=0; *(uint32_t*)(arg0+0xDB0)=0;
}
#endif
