// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0028837C
float sqrtf(float);
extern "C" void YellowAuto_0028837c(uint8_t* arg0, const void* arg1) __asm__("_ZN2nw3eft10EmitterSet6SetMtxERKN2nn4math5MTX34E");
extern "C" void YellowAuto_0028837c(uint8_t* arg0, const void* arg1) {
const float *m = (const float *)arg1;
*(float *)(arg0 + 0x1a0) = m[0];
*(float *)(arg0 + 0x1a4) = m[1];
*(float *)(arg0 + 0x1a8) = m[2];
*(float *)(arg0 + 0x1ac) = m[3];
*(float *)(arg0 + 0x1b0) = m[4];
*(float *)(arg0 + 0x1b4) = m[5];
*(float *)(arg0 + 0x1b8) = m[6];
*(float *)(arg0 + 0x1bc) = m[7];
*(float *)(arg0 + 0x1c0) = m[8];
*(float *)(arg0 + 0x1c4) = m[9];
*(float *)(arg0 + 0x1c8) = m[10];
*(float *)(arg0 + 0x1cc) = m[11];
float l0 = sqrtf(m[0] * m[0] + m[4] * m[4] + m[8] * m[8]);
float l1 = sqrtf(m[1] * m[1] + m[5] * m[5] + m[9] * m[9]);
float l2 = sqrtf(m[2] * m[2] + m[6] * m[6] + m[10] * m[10]);
*(float *)(arg0 + 0x200) = l0;
*(float *)(arg0 + 0x204) = l1;
*(float *)(arg0 + 0x208) = l2;
float eps = *(const float *)0x00288500;
float one = *(const float *)0x00288504;
if (l0 <= eps) { *(float *)(arg0 + 0x1d0) = eps; *(float *)(arg0 + 0x1e0) = eps; *(float *)(arg0 + 0x1f0) = eps; } else { float s = one / l0; *(float *)(arg0 + 0x1d0) = m[0] * s; *(float *)(arg0 + 0x1e0) = m[4] * s; *(float *)(arg0 + 0x1f0) = m[8] * s; }
if (l1 <= eps) { *(float *)(arg0 + 0x1d4) = eps; *(float *)(arg0 + 0x1e4) = eps; *(float *)(arg0 + 0x1f4) = eps; } else { float s = one / l1; *(float *)(arg0 + 0x1d4) = m[1] * s; *(float *)(arg0 + 0x1e4) = m[5] * s; *(float *)(arg0 + 0x1f4) = m[9] * s; }
if (l2 <= eps) { *(float *)(arg0 + 0x1d8) = eps; *(float *)(arg0 + 0x1e8) = eps; *(float *)(arg0 + 0x1f8) = eps; } else { float s = one / l2; *(float *)(arg0 + 0x1d8) = m[2] * s; *(float *)(arg0 + 0x1e8) = m[6] * s; *(float *)(arg0 + 0x1f8) = m[10] * s; }
*(float *)(arg0 + 0x1dc) = m[3];
*(float *)(arg0 + 0x1ec) = m[7];
*(float *)(arg0 + 0x1fc) = m[11];
*(float *)(arg0 + 0x21c) = *(float *)(arg0 + 0x20c) * l0;
*(float *)(arg0 + 0x220) = *(float *)(arg0 + 0x210) * l1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00288508
void FUN_0029becc(uint32_t, uint8_t *);
extern "C" void YellowAuto_00288508(uint8_t* arg0, int32_t arg1) __asm__("_ZN2nw3eft10EmitterSet9ForceCalcEi");
extern "C" void YellowAuto_00288508(uint8_t* arg0, int32_t arg1) {
if (*(int32_t *)(arg0 + 0x4) <= 0) return;
if (arg1 <= 0) return;
float fv = *(const float *)0x0028860c;
for (int32_t o = 0; o < arg1; o++) {
for (int32_t i = 0; i < *(int32_t *)(arg0 + 0x8); i++) {
uint8_t *e = *(uint8_t **)(arg0 + 0x10 + i * 4);
if (*(int32_t *)(e + 0x24) != *(int32_t *)(arg0 + 0xc)) continue;
uint8_t *f = *(uint8_t **)(e + 0xd8);
if (f == (uint8_t *)0) continue;
((void (*)(float, uint8_t *, uint8_t *))(*(uint32_t *)(*(uint32_t *)f + 0x8)))(fv, f, e);
f = *(uint8_t **)(e + 0xd8);
if (f == (uint8_t *)0) continue;
((void (*)(uint8_t *, uint8_t *))(*(uint32_t *)(*(uint32_t *)f + 0x18)))(f, e);
uint8_t *g = *(uint8_t **)(e + 0xdc);
if (*(int32_t *)g != 1) continue;
if ((*(uint32_t *)(g + 0x548) & 1u) == 0) continue;
uint8_t *f2 = *(uint8_t **)(e + 0xd8);
((void (*)(uint8_t *, uint8_t *))(*(uint32_t *)(*(uint32_t *)f2 + 0x1c)))(f2, e);
}
if (*(int32_t *)(arg0 + 0x4) <= 0) { FUN_0029becc(*(uint32_t *)arg0, arg0); return; }
}
}
#endif
