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
