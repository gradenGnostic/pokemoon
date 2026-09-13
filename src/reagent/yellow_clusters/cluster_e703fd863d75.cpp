// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002FBB80
void FUN_002fc970(uint8_t*);
void FUN_002fb9fc(uint32_t, uint8_t*, uint32_t);
extern "C" void YellowAuto_002fbb80(uint8_t* arg0) __asm__("_ZN3app4tool25AppToolHPGaugePartsLayout6UpdateEv");
extern "C" void YellowAuto_002fbb80(uint8_t* arg0) {
FUN_002fc970(*(uint8_t**)(arg0 + 0x34));
if (*(*(uint8_t**)(arg0 + 0x34) + 0x0D) == 1) {
FUN_002fb9fc(*(uint32_t*)(*(uint8_t**)(arg0 + 0x34) + 0x00), arg0, *(uint32_t*)(*(uint8_t**)(arg0 + 0x34) + 0x08));
if (*(*(uint8_t**)(arg0 + 0x34) + 0x0C) != 0) {
*(*(uint8_t**)(arg0 + 0x34) + 0x0C) = 0;
*(*(uint8_t**)(arg0 + 0x34) + 0x0D) = 2;
}
}
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002FB8F8
float GetDottoNumF32(float, int32_t, int32_t);
void Func002FB9FC(uint8_t *, int32_t, float);
extern float DAT_002FB9F8;
extern "C" void YellowAuto_002fb8f8(uint8_t* arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) __asm__("_ZN3app4tool25AppToolHPGaugePartsLayout10StartAnimeEiiii");
extern "C" void YellowAuto_002fb8f8(uint8_t* arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) {
if (arg2 != arg1) {
uint8_t *a = *(uint8_t **)(arg0 + 52);
int32_t b = *(int32_t *)(arg0 + 48);
*(float *)(a + 0) = (float)arg2;
*(int32_t *)(a + 4) = arg1;
*(int32_t *)(a + 8) = arg3;
*(int32_t *)(a + 16) = (int32_t)(float)arg2;
float c = GetDottoNumF32((float)arg2, arg3, b);
*(float *)(a + 24) = c;
*(float *)(a + 36) = c;
*(float *)(a + 28) = (float)b;
float d = GetDottoNumF32((float)arg1, arg3, b);
*(float *)(a + 32) = d;
*(float *)(a + 20) = DAT_002FB9F8;
if (c != d) {
float e = c - d;
if (e < DAT_002FB9F8) e = -e;
float f = e / (float)arg4;
*(float *)(a + 20) = f;
if (d < c) *(float *)(a + 20) = -f;
}
Func002FB9FC(arg0, *(int32_t *)(a + 8), *(float *)(a + 0));
*(uint8_t *)(a + 12) = (uint8_t)0;
*(uint8_t *)(a + 13) = (uint8_t)1;
}
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002FBC0C
void* operator_new(uint32_t, void*);
void StartAnime(void*, int32_t, uint32_t, uint8_t, int32_t);
float GetAnimeMaxFrame(void*, int32_t, uint32_t);
extern "C" uint8_t* YellowAuto_002fbc0c(uint8_t* arg0, const uint8_t* arg1, void* arg2) __asm__("_ZN3app4tool25AppToolHPGaugePartsLayoutC1ERKNS1_10INIT_PARAMEPN4gfl24heap11CtrHeapBaseE");
extern "C" uint8_t* YellowAuto_002fbc0c(uint8_t* arg0, const uint8_t* arg1, void* arg2) {
uint32_t v;
*(uint32_t*)arg0 = v;
void* a = operator_new(40, arg2);
uint32_t c;
if (a != (void*)0) {
*(uint32_t*)a = c;
*(uint32_t*)((uint8_t*)a + 4) = 0;
*(uint32_t*)((uint8_t*)a + 8) = 0;
*(uint8_t*)((uint8_t*)a + 12) = 0;
*(uint8_t*)((uint8_t*)a + 13) = 0;
*(uint32_t*)((uint8_t*)a + 16) = 0;
*(uint32_t*)((uint8_t*)a + 20) = c;
*(uint32_t*)((uint8_t*)a + 24) = c;
*(uint32_t*)((uint8_t*)a + 28) = c;
*(uint32_t*)((uint8_t*)a + 32) = c;
*(uint32_t*)((uint8_t*)a + 36) = c;
}
*(uint32_t*)(arg0 + 52) = (uint32_t)a;
*(uint32_t*)(arg0 + 4) = *(const uint32_t*)(arg1 + 0);
*(uint32_t*)(arg0 + 8) = *(const uint32_t*)(arg1 + 4);
*(uint32_t*)(arg0 + 12) = *(const uint32_t*)(arg1 + 8);
*(uint32_t*)(arg0 + 16) = *(const uint32_t*)(arg1 + 12);
*(uint32_t*)(arg0 + 20) = *(const uint32_t*)(arg1 + 16);
*(uint32_t*)(arg0 + 24) = *(const uint32_t*)(arg1 + 20);
*(uint32_t*)(arg0 + 28) = *(const uint32_t*)(arg1 + 24);
*(uint32_t*)(arg0 + 32) = *(const uint32_t*)(arg1 + 28);
*(uint32_t*)(arg0 + 36) = *(const uint32_t*)(arg1 + 32);
*(uint32_t*)(arg0 + 40) = *(const uint32_t*)(arg1 + 36);
*(uint32_t*)(arg0 + 44) = *(const uint32_t*)(arg1 + 40);
StartAnime((void*)*(uint32_t*)(arg0 + 4), (int32_t)*(uint32_t*)(arg0 + 8), *(uint32_t*)(arg0 + 32), 0, 0);
*(int32_t*)(arg0 + 48) = (int32_t)GetAnimeMaxFrame((void*)*(uint32_t*)(arg0 + 4), (int32_t)*(uint32_t*)(arg0 + 8), *(uint32_t*)(arg0 + 32));
*(uint8_t*)((uint8_t*)a + 12) = 0;
*(uint8_t*)((uint8_t*)a + 13) = 2;
return arg0;
}
#endif
