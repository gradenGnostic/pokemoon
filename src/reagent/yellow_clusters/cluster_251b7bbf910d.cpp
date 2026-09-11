// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002C8C3C
bool IsFileLoad(void*);
void EffectSystemEntryResource(void*, void*, uint32_t, void*);
void FUN_002c86ac(uint8_t*, uint32_t);
extern "C" bool YellowAuto_002c8c3c(uint8_t* arg0, uint32_t arg1) __asm__("_ZN3App4Tool10ItemEffect8IsCreateEj");
extern "C" bool YellowAuto_002c8c3c(uint8_t* arg0, uint32_t arg1) {
if (arg1 >= 2U) return true; if ((*(uint16_t*)(arg0 + arg1 * 0x18 + 0x18) & 0x7FFFU) == 0U && !IsFileLoad((void*)(arg0 + arg1 * 0x18 + 0x14))) return false; if ((*(uint16_t*)(arg0 + arg1 * 0x18 + 0x18) & 0x7FFFU) == 0U) *(uint16_t*)(arg0 + arg1 * 0x18 + 0x18) = (uint16_t)((*(uint16_t*)(arg0 + arg1 * 0x18 + 0x18) & 0x8000U) | (((*(uint16_t*)(arg0 + arg1 * 0x18 + 0x18) & 0x7FFFU) + 1U) & 0x7FFFU)); if ((*(uint16_t*)(arg0 + arg1 * 0x18 + 0x18) & 0x7FFFU) != 1U) return true; EffectSystemEntryResource((void*)(*(uint32_t*)(arg0 + 0xC)), (void*)(*(uint32_t*)(arg0 + arg1 * 0x18 + 0x14)), arg1, (void*)0); FUN_002c86ac(arg0, arg1); *(uint16_t*)(arg0 + arg1 * 0x18 + 0x18) = (uint16_t)((*(uint16_t*)(arg0 + arg1 * 0x18 + 0x18) & 0x8000U) | (((*(uint16_t*)(arg0 + arg1 * 0x18 + 0x18) & 0x7FFFU) + 1U) & 0x7FFFU)); return true;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00309DB8
void KillAllEmitterSetForMode1Res1EmitterSet1Group(void*);
void Func_0030E4D8(void*);
void GFLassert(void);
extern "C" void YellowAuto_00309db8(uint8_t* arg0) __asm__("_ZN3App4Tool10ItemEffect3EndEv");
extern "C" void YellowAuto_00309db8(uint8_t* arg0) {
if (*(uint32_t*)(arg0 + 0x14) != (uint32_t)0) {
*(uint16_t*)(arg0 + 0x1A) = (uint16_t)0;
*(uint16_t*)(arg0 + 0x18) = (uint16_t)(*(uint16_t*)(arg0 + 0x18) & (uint16_t)0x7FFF);
}
if (*(uint32_t*)(arg0 + 0x2C) != (uint32_t)0) {
*(uint16_t*)(arg0 + 0x32) = (uint16_t)0;
*(uint16_t*)(arg0 + 0x30) = (uint16_t)(*(uint16_t*)(arg0 + 0x30) & (uint16_t)0x7FFF);
}
KillAllEmitterSetForMode1Res1EmitterSet1Group(*(void**)(arg0 + 0x0C));
if ((uint32_t)*(uint8_t*)(arg0 + 0x08) < (uint32_t)3) {
if (*(uint32_t*)(*(uint32_t*)(arg0 + 0x04) + (uint32_t)*(uint8_t*)(arg0 + 0x08) * (uint32_t)4 + (uint32_t)0x10C) != (uint32_t)0) {
Func_0030E4D8(*(void**)(*(uint32_t*)(arg0 + 0x04) + (uint32_t)*(uint8_t*)(arg0 + 0x08) * (uint32_t)8 + (uint32_t)0x118));
if ((uint32_t)*(uint8_t*)(arg0 + 0x08) == (uint32_t)0) {
if (*(uint32_t*)(*(uint32_t*)(arg0 + 0x04) + (uint32_t)0x130) != (uint32_t)0) {
Func_0030E4D8(*(void**)(*(uint32_t*)(arg0 + 0x04) + (uint32_t)0x130));
return;
}
return;
}
return;
}
}
GFLassert();
return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002C8B08
void GFLassert(void);
void Func_002C859C(uint8_t*, uint32_t);
void EffectSystemClearResource(void*, uint32_t);
void GflHeapFreeMemoryBlock(void*);
extern uint32_t Const_002C8C38;
extern "C" void YellowAuto_002c8b08(uint8_t* arg0, uint32_t arg1) __asm__("_ZN3App4Tool10ItemEffect6DeleteEj");
extern "C" void YellowAuto_002c8b08(uint8_t* arg0, uint32_t arg1) {
if (arg1 > (uint32_t)1) {
GFLassert();
return;
}
if (*(uint32_t*)(arg0 + arg1 * (uint32_t)0x18 + (uint32_t)0x14) == (uint32_t)0) {
return;
}
Func_002C859C(arg0, arg1);
EffectSystemClearResource(*(void**)(arg0 + 0x0C), arg1);
GflHeapFreeMemoryBlock(*(void**)(arg0 + arg1 * (uint32_t)0x18 + (uint32_t)0x14));
*(uint8_t*)(arg0 + arg1 * (uint32_t)0x18 + (uint32_t)0x10) = (uint8_t)0x0F;
*(uint32_t*)(arg0 + arg1 * (uint32_t)0x18 + (uint32_t)0x14) = (uint32_t)0;
*(uint16_t*)(arg0 + arg1 * (uint32_t)0x18 + (uint32_t)0x1A) = (uint16_t)0;
*(uint32_t*)(arg0 + arg1 * (uint32_t)0x18 + (uint32_t)0x1C) = Const_002C8C38;
*(uint32_t*)(arg0 + arg1 * (uint32_t)0x18 + (uint32_t)0x20) = Const_002C8C38;
*(uint16_t*)(arg0 + arg1 * (uint32_t)0x18 + (uint32_t)0x18) = (uint16_t)0;
*(uint32_t*)(arg0 + arg1 * (uint32_t)0x18 + (uint32_t)0x24) = Const_002C8C38;
return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002C8DCC
void* __aeabi_vec_ctor_nocookie_nodtor(void*, void*, uint32_t, uint32_t);
extern void* Const_002C8E54;
extern uint32_t Const_002C8E58;
extern "C" void YellowAuto_002c8dcc(uint8_t* arg0, void* arg1, void* arg2, uint8_t arg3) __asm__("_ZN3App4Tool10ItemEffectC1EPN3app4util4HeapEPNS3_19AppRenderingManagerENS6_15RenderPlaceType3TagE");
extern "C" void YellowAuto_002c8dcc(uint8_t* arg0, void* arg1, void* arg2, uint8_t arg3) {
*(void**)(arg0 + 0x00) = arg1;
*(void**)(arg0 + 0x04) = arg2;
*(uint8_t*)(arg0 + 0x08) = arg3;
*(void**)(arg0 + 0x0C) = (void*)0;
__aeabi_vec_ctor_nocookie_nodtor((void*)(arg0 + 0x10), Const_002C8E54, (uint32_t)0x18, (uint32_t)2);
*(uint8_t*)(arg0 + 0x42) = (uint8_t)0;
*(uint8_t*)(arg0 + 0x43) = (uint8_t)0;
*(uint8_t*)(arg0 + 0x10) = (uint8_t)0x0F;
*(uint32_t*)(arg0 + 0x14) = (uint32_t)0;
*(uint16_t*)(arg0 + 0x1A) = (uint16_t)0;
*(uint32_t*)(arg0 + 0x1C) = Const_002C8E58;
*(uint32_t*)(arg0 + 0x20) = Const_002C8E58;
*(uint16_t*)(arg0 + 0x18) = (uint16_t)0;
*(uint32_t*)(arg0 + 0x24) = Const_002C8E58;
*(uint8_t*)(arg0 + 0x28) = (uint8_t)0x0F;
*(uint32_t*)(arg0 + 0x2C) = (uint32_t)0;
*(uint16_t*)(arg0 + 0x32) = (uint16_t)0;
*(uint32_t*)(arg0 + 0x34) = Const_002C8E58;
*(uint32_t*)(arg0 + 0x38) = Const_002C8E58;
*(uint16_t*)(arg0 + 0x30) = (uint16_t)0;
*(uint32_t*)(arg0 + 0x3C) = Const_002C8E58;
*(uint8_t*)(arg0 + 0x40) = (uint8_t)0xFF;
*(uint8_t*)(arg0 + 0x41) = (uint8_t)0xFF;
return;
}
#endif
