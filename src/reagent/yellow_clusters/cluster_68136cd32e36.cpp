// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003E39B0
extern const float DAT_003e3a20;
extern const float DAT_003e3a24;
extern const float DAT_003e3a28;
extern "C" void YellowAuto_003e39b0(uint8_t* arg0, const uint32_t* arg1) __asm__("_ZN6System10MotionBlur15SetBlendControlERKNS0_5ParamE");
extern "C" void YellowAuto_003e39b0(uint8_t* arg0, const uint32_t* arg1) {
if (*(uint8_t *)(arg0 + 0x120) != 0)
  *(uint32_t *)(arg0 + 0x120) = arg1[0];
  *(uint32_t *)(arg0 + 0x124) = arg1[1];
  *(uint32_t *)(arg0 + 0x128) = arg1[2];
  float fVar3 = *(const float *)(arg1 + 1) + DAT_003e3a20;
  float fVar4 = DAT_003e3a24;
  if (fVar3 < fVar4)
    fVar4 = fVar3;
    if (fVar3 <= DAT_003e3a28)
      fVar4 = DAT_003e3a28;
  *(uint32_t *)(arg0 + 0x134) = 0;
  *(float *)(arg0 + 0x124) = fVar4;
  *(uint32_t *)(arg0 + 0x130) = *(uint32_t *)(arg0 + 0x12c);
  if (*(uint8_t *)(arg0 + 0x120) == 0)
    *(float *)(arg0 + 0x12c) = fVar4;
return;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003E3F68
extern "C" void YellowAuto_003e3f68(uint8_t* arg0) __asm__("_ZN6System10MotionBlur9RenderOffEv");
extern "C" void YellowAuto_003e3f68(uint8_t* arg0) {
if (*(arg0 + 0xc1) == 0) return;
if (*(arg0 + 0xb4) == 0) {
uint8_t *cur = *(uint8_t **)(arg0 + 0x104);
uint32_t target = *(uint32_t *)(arg0 + 0xe8);
while (cur != 0) {
uint8_t *nxt = *(uint8_t **)(cur + 8);
uint8_t *fst = *(uint8_t **)(cur + 0);
uint32_t id = *(uint32_t *)(fst + 0);
if (id == target) {
uint8_t *head = *(uint8_t **)(arg0 + 0x104);
if (head == cur) {
uint8_t *prv = *(uint8_t **)(cur + 4);
if (prv == 0) {
*(uint8_t **)(arg0 + 0x104) = nxt;
if (nxt != 0) *(uint32_t *)(nxt + 4) = 0;
} else {
uint8_t *pr = *(uint8_t **)(cur + 4);
uint8_t *nx = *(uint8_t **)(cur + 8);
*(uint8_t **)(pr + 8) = nx;
if (nx != 0) *(uint8_t **)(nx + 4) = pr;
}
} else {
uint8_t *pr2 = *(uint8_t **)(cur + 4);
uint8_t *nx2 = *(uint8_t **)(cur + 8);
*(uint8_t **)(pr2 + 8) = nx2;
if (nx2 != 0) *(uint8_t **)(nx2 + 4) = pr2;
}
*(uint32_t *)(cur + 4) = 0;
*(uint32_t *)(cur + 8) = 0;
uint32_t idx = *(uint32_t *)(cur + 12);
uint8_t *freeHead = *(uint8_t **)(arg0 + 0x100);
if (freeHead != 0) {
*(uint8_t **)(freeHead + 4) = cur;
uint8_t *oldFree = *(uint8_t **)(arg0 + 0x100);
*(uint8_t **)(cur + 8) = oldFree;
}
*(uint8_t **)(arg0 + 0x100) = cur;
uint32_t cnt = *(uint32_t *)(arg0 + 0x108);
if (cnt - 1U > idx) {
uint8_t *arr = *(uint8_t **)(arg0 + 0xf8);
do {
uint8_t *mv = *(uint8_t **)(arr + idx * 4 + 4);
*(uint8_t **)(arr + idx * 4) = mv;
*(uint32_t *)(mv + 12) = idx;
idx = idx + 1;
cnt = *(uint32_t *)(arg0 + 0x108);
} while (cnt - 1U > idx);
}
uint32_t cnt2 = *(uint32_t *)(arg0 + 0x108);
uint8_t *arr2 = *(uint8_t **)(arg0 + 0xf8);
*(uint32_t *)(arr2 + cnt2 * 4 - 4) = 0;
*(uint32_t *)(arg0 + 0x108) = cnt2 - 1;
}
cur = nxt;
}
*(uint32_t *)(arg0 + 0xb8) = 0;
}
*(arg0 + 0xb4) = 1;
}
#endif
