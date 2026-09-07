// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A5608
extern "C" uint32_t YellowAuto_004a5608(const uint8_t* arg0, int32_t arg1, uint32_t arg2) __asm__("_ZNK7poke_3d5model9BaseModel14GetAnimationIdEjNS1_12AnimationBitE");
extern "C" uint32_t YellowAuto_004a5608(const uint8_t* arg0, int32_t arg1, uint32_t arg2) {
if ((arg2 & 1U) != 0U) return *reinterpret_cast<const uint32_t*>(arg0 + arg1 * 20 + 44);
if ((arg2 & 2U) != 0U) return *reinterpret_cast<const uint32_t*>(arg0 + arg1 * 20 + 48);
if ((arg2 & 4U) != 0U) return *reinterpret_cast<const uint32_t*>(arg0 + arg1 * 20 + 52);
if ((arg2 & 8U) != 0U) return *reinterpret_cast<const uint32_t*>(arg0 + arg1 * 20 + 56);
if ((arg2 & 16U) != 0U) return *reinterpret_cast<const uint32_t*>(arg0 + arg1 * 20 + 60);
return 4294967295U;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A5800
void FUN_00412af0(uint8_t*, const uint8_t*, uint32_t, uint8_t);
uint32_t FUN_004a49a8(const uint8_t*);
extern "C" uint32_t YellowAuto_004a5800(const uint8_t* arg0, uint32_t arg1, uint8_t arg2) __asm__("_ZNK7poke_3d5model9BaseModel17IsAnimationInterpEjNS1_12AnimationBitE");
extern "C" uint32_t YellowAuto_004a5800(const uint8_t* arg0, uint32_t arg1, uint8_t arg2) {
uint8_t tmp[16];
FUN_00412af0(tmp, *reinterpret_cast<const uint8_t* const*>(arg0 + 32), arg1, arg2);
return FUN_004a49a8(tmp);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A5680
void FUN_00412af0(uint8_t*, const uint8_t*, uint32_t, uint8_t);
uint32_t FUN_004a4a44(const uint8_t*);
extern "C" uint32_t YellowAuto_004a5680(const uint8_t* arg0, uint32_t arg1, uint8_t arg2) __asm__("_ZNK7poke_3d5model9BaseModel15IsAnimationLoopEjNS1_12AnimationBitE");
extern "C" uint32_t YellowAuto_004a5680(const uint8_t* arg0, uint32_t arg1, uint8_t arg2) {
uint8_t tmp[16];
FUN_00412af0(tmp, *reinterpret_cast<const uint8_t* const*>(arg0 + 32), arg1, arg2);
return FUN_004a4a44(tmp);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A58B8
void FUN_00412af0(uint8_t*, const uint8_t*, uint32_t, uint8_t);
uint32_t FUN_004a47b0(const uint8_t*);
extern "C" uint32_t YellowAuto_004a58b8(const uint8_t* arg0, uint32_t arg1, uint8_t arg2) __asm__("_ZNK7poke_3d5model9BaseModel20IsAnimationLastFrameEjNS1_12AnimationBitE");
extern "C" uint32_t YellowAuto_004a58b8(const uint8_t* arg0, uint32_t arg1, uint8_t arg2) {
uint8_t tmp[16];
FUN_00412af0(tmp, *reinterpret_cast<const uint8_t* const*>(arg0 + 32), arg1, arg2);
return FUN_004a47b0(tmp);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A59B0
void FUN_00412af0(uint8_t*, const uint8_t*, uint32_t, uint8_t);
void* FUN_004a48b8(const uint8_t*);
extern "C" void* YellowAuto_004a59b0(const uint8_t* arg0, uint32_t arg1, uint8_t arg2) __asm__("_ZNK7poke_3d5model9BaseModel24GetAnimationResourceNodeEjNS1_12AnimationBitE");
extern "C" void* YellowAuto_004a59b0(const uint8_t* arg0, uint32_t arg1, uint8_t arg2) {
uint8_t tmp[16];
FUN_00412af0(tmp, *reinterpret_cast<const uint8_t* const*>(arg0 + 32), arg1, arg2);
return FUN_004a48b8(tmp);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A5504
uint32_t FUN_00494090(const uint8_t*);
const uint8_t* FUN_0032a43c(const uint8_t*, uint32_t);
int32_t strcmp(const uint8_t*, const uint8_t*);
extern "C" uint32_t YellowAuto_004a5504(const uint8_t* arg0, const uint8_t* arg1) __asm__("_ZNK7poke_3d5model9BaseModel13GetJointIndexEPKc");
extern "C" uint32_t YellowAuto_004a5504(const uint8_t* arg0, const uint8_t* arg1) {
const uint8_t* b = *reinterpret_cast<const uint8_t* const*>(arg0 + 4);
uint32_t n;
if (*reinterpret_cast<const uint32_t*>(b + 316) == 0U) n = *reinterpret_cast<const uint32_t*>(b + 208);
else n = FUN_00494090(*reinterpret_cast<const uint8_t* const*>(b + 316));
for (uint32_t i = 0U; i < n; i++) {
const uint8_t* j;
if (*reinterpret_cast<const uint32_t*>(b + 316) == 0U) j = *reinterpret_cast<const uint8_t* const*>(b + 256) + i * 268;
else j = FUN_0032a43c(*reinterpret_cast<const uint8_t* const*>(b + 316), i);
if (strcmp(arg1, *reinterpret_cast<const uint8_t* const*>(j + 264)) == 0) return i;
}
return 4294967295U;
}
#endif
