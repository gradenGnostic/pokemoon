// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003EBEE4
extern "C" void YellowAuto_003ebee4(uint8_t* arg0, uint32_t arg1, uint32_t arg2) __asm__("_ZN6System6Skybox6Skybox16ChangeSkyRequestENS1_7SkyTypeEj");
extern "C" void YellowAuto_003ebee4(uint8_t* arg0, uint32_t arg1, uint32_t arg2) {
uint32_t uVar1 = 0;
if (arg0[0x28] != 0)
  uVar1 = (uint32_t)arg0[0x38];
if ((arg0[0x28] != 0 && uVar1 != arg1) && (arg0[0x39] == 2))
  *(uint32_t *)(arg0 + 0x3c) = arg2, arg0[0x3a] = 1, arg0[0x38] = (uint8_t)arg1, arg0[0x39] = (uint8_t)arg1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003EBF1C
int32_t FUN_003eae54(void*);
extern "C" uint32_t YellowAuto_003ebf1c(uint8_t* arg0) __asm__("_ZN6System6Skybox6Skybox20UpdateCreateResourceEv");
extern "C" uint32_t YellowAuto_003ebf1c(uint8_t* arg0) {
if (arg0[0x20] == 0)
  if (FUN_003eae54(*(void **)(arg0 + 0xc)) != 0)
    arg0[0x20] = 1;
return arg0[0x20] != 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003EC178
void FUN_003ed270(void*, uint32_t);
void FUN_003ec9c0(void*, uint32_t);
extern "C" void YellowAuto_003ec178(uint8_t* arg0, uint32_t arg1) __asm__("_ZN6System6Skybox6Skybox9ChangeSkyENS1_7SkyTypeE");
extern "C" void YellowAuto_003ec178(uint8_t* arg0, uint32_t arg1) {
if (arg0[0x28] == 0)
  return;
if (arg1 == 0)
  FUN_003ed270(*(void **)(arg0 + 0x10), 1), FUN_003ec9c0(*(void **)(arg0 + 0x18), 0);
else if (arg1 == 1)
  FUN_003ed270(*(void **)(arg0 + 0x10), 0), FUN_003ec9c0(*(void **)(arg0 + 0x18), 1);
arg0[0x38] = (uint8_t)arg1;
arg0[0x39] = 2;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003EC1F8
void FUN_003ed270(void*, uint32_t);
void GFLassert();
extern "C" void YellowAuto_003ec1f8(uint8_t* arg0, bool arg1) __asm__("_ZN6System6Skybox6Skybox9SetEnableEb");
extern "C" void YellowAuto_003ec1f8(uint8_t* arg0, bool arg1) {
if (arg0[0x28] == (uint8_t)arg1)
  return;
arg0[0x28] = (uint8_t)arg1;
FUN_003ed270(*(void **)(arg0 + 0x14), (uint32_t)arg1);
FUN_003ed270(*(void **)(arg0 + 0x1c), (uint32_t)arg1);
if (arg0[0x38] != 0)
  if (arg0[0x38] != 1)
    GFLassert();
  else
    FUN_003ed270(*(void **)(arg0 + 0x18), (uint32_t)arg1);
else
  FUN_003ed270(*(void **)(arg0 + 0x10), (uint32_t)arg1);
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003EB778
void* sub_00107374(uint32_t, uint32_t);
void* sub_00358174(void*, int32_t, void*, void*, void*, void*);
extern "C" void YellowAuto_003eb778(uint8_t* arg0, void* arg1) __asm__("_ZN6System6Skybox6Skybox10CreateHeapEPN4gfl24heap11CtrHeapBaseE");
extern "C" void YellowAuto_003eb778(uint8_t* arg0, void* arg1) {
if (arg1 == (void*)0) arg1 = sub_00107374(47u, 0u);
if (*(void**)(arg0 + 8) == (void*)0) *(void**)(arg0 + 8) = sub_00358174(arg1, -2, (void*)0, (void*)0, (void*)0, (void*)0);
return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003EBDE0
void* sub_004a3118(void*, uint32_t);
extern "C" void* YellowAuto_003ebde0(uint8_t* arg0, uint32_t arg1) __asm__("_ZN6System6Skybox6Skybox13GetPartsModelENS1_9PartsTypeE");
extern "C" void* YellowAuto_003ebde0(uint8_t* arg0, uint32_t arg1) {
if (arg1 == 0u) return sub_004a3118(*(void**)(arg0 + 16), 0u);
if (arg1 == 1u) return sub_004a3118(*(void**)(arg0 + 20), 1u);
if (arg1 == 2u) return sub_004a3118(*(void**)(arg0 + 20), 0u);
if (arg1 == 3u) return sub_004a3118(*(void**)(arg0 + 24), 0u);
if (arg1 == 4u) return sub_004a3118(*(void**)(arg0 + 28), 0u);
return (void*)0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003EBE70
void sub_003ed270(void*, bool);
void sub_0035be88();
extern "C" void YellowAuto_003ebe70(uint8_t* arg0, uint32_t arg1, bool arg2) __asm__("_ZN6System6Skybox6Skybox14SetEnablePartsENS1_9PartsTypeEb");
extern "C" void YellowAuto_003ebe70(uint8_t* arg0, uint32_t arg1, bool arg2) {
if (*(arg0 + 40) == 0) return;
if (arg1 == 0u) sub_003ed270(*(void**)(arg0 + 16), arg2);
if (arg1 == 0u) return;
if (arg1 == 1u || arg1 == 2u) sub_003ed270(*(void**)(arg0 + 20), arg2);
if (arg1 == 1u || arg1 == 2u) return;
if (arg1 == 3u) sub_003ed270(*(void**)(arg0 + 24), arg2);
if (arg1 == 3u) return;
if (arg1 == 4u) sub_003ed270(*(void**)(arg0 + 28), arg2);
if (arg1 == 4u) return;
sub_0035be88();
return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003EBD58
extern "C" void YellowAuto_003ebd58(uint8_t* arg0) __asm__("_ZN6System6Skybox6Skybox12DestroyPartsEv");
extern "C" void YellowAuto_003ebd58(uint8_t* arg0) {
if (*(void**)(arg0 + 28) != (void*)0) ((void (*)(void*))*((void**)(*(void**)(arg0 + 28)) + 1))(*(void**)(arg0 + 28));
if (*(void**)(arg0 + 28) != (void*)0) *(void**)(arg0 + 28) = (void*)0;
if (*(void**)(arg0 + 24) != (void*)0) ((void (*)(void*))*((void**)(*(void**)(arg0 + 24)) + 1))(*(void**)(arg0 + 24));
if (*(void**)(arg0 + 24) != (void*)0) *(void**)(arg0 + 24) = (void*)0;
if (*(void**)(arg0 + 20) != (void*)0) ((void (*)(void*))*((void**)(*(void**)(arg0 + 20)) + 1))(*(void**)(arg0 + 20));
if (*(void**)(arg0 + 20) != (void*)0) *(void**)(arg0 + 20) = (void*)0;
if (*(void**)(arg0 + 16) != (void*)0) ((void (*)(void*))*((void**)(*(void**)(arg0 + 16)) + 1))(*(void**)(arg0 + 16));
if (*(void**)(arg0 + 16) != (void*)0) *(void**)(arg0 + 16) = (void*)0;
*(arg0 + 32) = 1;
return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A3080
int8_t sub_003ed1e8(void*);
extern "C" int8_t YellowAuto_004a3080(const uint8_t* arg0, uint32_t arg1) __asm__("_ZNK6System6Skybox6Skybox13IsEnablePartsENS1_9PartsTypeE");
extern "C" int8_t YellowAuto_004a3080(const uint8_t* arg0, uint32_t arg1) {
if (arg1 == 0u) return sub_003ed1e8(*(void**)(arg0 + 16));
if (arg1 == 1u || arg1 == 2u) return sub_003ed1e8(*(void**)(arg0 + 20));
if (arg1 == 3u) return sub_003ed1e8(*(void**)(arg0 + 24));
if (arg1 == 4u) return sub_003ed1e8(*(void**)(arg0 + 28));
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

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003EB7FC
void sub_003eb134(void*);
extern const uint32_t DAT_003eb900;
extern "C" void YellowAuto_003eb7fc(uint8_t* arg0) __asm__("_ZN6System6Skybox6Skybox10DestroyAllEv");
extern "C" void YellowAuto_003eb7fc(uint8_t* arg0) {
*(arg0+0x28)=0; *(uint32_t*)(arg0+0x2c)=4294967295U; *(uint32_t*)(arg0+0x30)=4294967295U; *(uint32_t*)(arg0+0x34)=4294967295U; *(arg0+0x38)=2; *(arg0+0x39)=2; *(uint32_t*)(arg0+0x3c)=0U; *(arg0+0x20)=2; if(*(uint32_t*)(arg0+0x1c)!=0U){((void(*)(void*))(*(uint32_t*)(*(uint32_t*)(*(uint32_t*)(arg0+0x1c))+4U)))((void*)(*(uint32_t*)(arg0+0x1c))); *(uint32_t*)(arg0+0x1c)=0U;} if(*(uint32_t*)(arg0+0x18)!=0U){((void(*)(void*))(*(uint32_t*)(*(uint32_t*)(*(uint32_t*)(arg0+0x18))+4U)))((void*)(*(uint32_t*)(arg0+0x18))); *(uint32_t*)(arg0+0x18)=0U;} if(*(uint32_t*)(arg0+0x14)!=0U){((void(*)(void*))(*(uint32_t*)(*(uint32_t*)(*(uint32_t*)(arg0+0x14))+4U)))((void*)(*(uint32_t*)(arg0+0x14))); *(uint32_t*)(arg0+0x14)=0U;} if(*(uint32_t*)(arg0+0x10)!=0U){((void(*)(void*))(*(uint32_t*)(*(uint32_t*)(*(uint32_t*)(arg0+0x10))+4U)))((void*)(*(uint32_t*)(arg0+0x10))); *(uint32_t*)(arg0+0x10)=0U;} *(arg0+0x20)=1; if(*(uint32_t*)(arg0+0x0c)!=0U){sub_003eb134((void*)(*(uint32_t*)(arg0+0x0c))); if(*(uint32_t*)(arg0+0x0c)!=0U){((void(*)(void*))(*(uint32_t*)(*(uint32_t*)(*(uint32_t*)(arg0+0x0c))+4U)))((void*)(*(uint32_t*)(arg0+0x0c)));} *(uint32_t*)(arg0+0x0c)=0U;} if(*(uint32_t*)(arg0+0x04)!=0U){((void(*)(void*))(*(uint32_t*)(*(uint32_t*)(*(uint32_t*)(arg0+0x04))+4U)))((void*)(*(uint32_t*)(arg0+0x04))); *(uint32_t*)(arg0+0x04)=0U;} *(uint32_t*)(arg0+0x24)=DAT_003eb900; *(arg0+0x20)=0;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003EB904
void FUN_0035eb28(void*);
void FUN_0035e910(void*);
void FUN_003ed270(uint32_t, uint32_t);
void FUN_003ec9c0(uint32_t, uint32_t);
uint32_t FUN_0039a3c8(uint32_t);
uint32_t FUN_0049f05c(void*, uint32_t);
uint32_t FUN_00399f9c(void*, uint32_t);
void FUN_003ec58c(uint32_t, uint32_t);
int32_t FUN_00478a78(void*);
void FUN_003ec63c(uint32_t, uint32_t);
extern "C" uint8_t* YellowAuto_003eb904(uint8_t* arg0, int32_t arg1) __asm__("_ZN6System6Skybox6Skybox10InitializeENS1_7SkyTypeE");
extern "C" uint8_t* YellowAuto_003eb904(uint8_t* arg0, int32_t arg1) {
uint8_t buf[12];
FUN_0035eb28((void*)buf);
FUN_0035e910((void*)buf);
*(uint8_t*)(arg0 + 0x38) = (uint8_t)2;
*(uint8_t*)(arg0 + 0x39) = (uint8_t)2;
*(uint8_t*)(arg0 + 0x3A) = (uint8_t)0;
*(uint32_t*)(arg0 + 0x3C) = (uint32_t)0;
*(uint8_t*)(arg0 + 0x28) = (uint8_t)1;
if (arg1 == 0) {
FUN_003ed270(*(uint32_t*)(arg0 + 0x10), (uint32_t)1);
FUN_003ec9c0(*(uint32_t*)(arg0 + 0x18), (uint32_t)0);
} else {
if (arg1 == 1) {
FUN_003ed270(*(uint32_t*)(arg0 + 0x10), (uint32_t)0);
FUN_003ec9c0(*(uint32_t*)(arg0 + 0x18), (uint32_t)1);
}
}
*(uint8_t*)(arg0 + 0x38) = (uint8_t)arg1;
*(uint8_t*)(arg0 + 0x39) = (uint8_t)2;
bool needDay = true;
uint32_t other = *(uint32_t*)0x003EBA94;
if ((*(uint32_t*)(arg0 + 0x40) != (uint32_t)0) && (FUN_0039a3c8((uint32_t)0xDA0) != (uint32_t)0) && (FUN_0049f05c((void*)(*(uint32_t*)(arg0 + 0x40)), (uint32_t)0xDA0) != (uint32_t)0) && (FUN_0039a3c8(other) == (uint32_t)0)) {
needDay = false;
uint32_t w = FUN_00399f9c((void*)(*(uint32_t*)(arg0 + 0x40)), other);
FUN_003ec58c(*(uint32_t*)(arg0 + 0x14), (uint32_t)(w & (uint32_t)0xFF));
}
if (needDay) {
int32_t d = FUN_00478a78((void*)buf);
FUN_003ec63c(*(uint32_t*)(arg0 + 0x14), (uint32_t)d);
}
*(uint32_t*)(arg0 + 0x2C) = (uint32_t)0xFFFFFFFF;
*(uint32_t*)(arg0 + 0x30) = (uint32_t)0xFFFFFFFF;
*(uint32_t*)(arg0 + 0x34) = (uint32_t)0xFFFFFFFF;
*(uint8_t*)(arg0 + 0x20) = (uint8_t)3;
return (uint8_t*)buf;
}
#endif
