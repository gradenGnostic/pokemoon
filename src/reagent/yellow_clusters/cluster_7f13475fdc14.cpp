// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00109174
extern "C" void YellowAuto_00109174(void* arg0, const void* arg1, const void* arg2) __asm__("_ZN2nn4math5ARMv616VEC3TransformAsmEPNS0_4VEC3EPKNS0_5MTX34EPKS2_");
extern "C" void YellowAuto_00109174(void* arg0, const void* arg1, const void* arg2) {
float *out = (float *)arg0; const float *m = (const float *)arg1; const float *v = (const float *)arg2; out[0] = m[0] * v[0] + m[1] * v[1] + m[2] * v[2] + m[3]; out[1] = m[4] * v[0] + m[5] * v[1] + m[6] * v[2] + m[7]; out[2] = m[8] * v[0] + m[9] * v[1] + m[10] * v[2] + m[11]; return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00108F54
extern "C" void YellowAuto_00108f54(void* arg0, const void* arg1, const void* arg2) __asm__("_ZN2nn4math5ARMv612MTX34MultAsmEPNS0_5MTX34EPKS2_S5_");
extern "C" void YellowAuto_00108f54(void* arg0, const void* arg1, const void* arg2) {
float *out = (float *)arg0; const float *a = (const float *)arg1; const float *b = (const float *)arg2; out[0] = a[0] * b[0] + a[1] * b[4] + a[2] * b[8]; out[1] = a[0] * b[1] + a[1] * b[5] + a[2] * b[9]; out[2] = a[0] * b[2] + a[1] * b[6] + a[2] * b[10]; out[3] = a[0] * b[3] + a[1] * b[7] + a[2] * b[11] + a[3]; out[4] = a[4] * b[0] + a[5] * b[4] + a[6] * b[8]; out[5] = a[4] * b[1] + a[5] * b[5] + a[6] * b[9]; out[6] = a[4] * b[2] + a[5] * b[6] + a[6] * b[10]; out[7] = a[4] * b[3] + a[5] * b[7] + a[6] * b[11] + a[7]; out[8] = a[8] * b[0] + a[9] * b[4] + a[10] * b[8]; out[9] = a[8] * b[1] + a[9] * b[5] + a[10] * b[9]; out[10] = a[8] * b[2] + a[9] * b[6] + a[10] * b[10]; out[11] = a[8] * b[3] + a[9] * b[7] + a[10] * b[11] + a[11]; return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x001091CC
extern "C" void YellowAuto_001091cc(void* arg0, const void* arg1, const void* arg2) __asm__("_ZN2nn4math5ARMv612MTX44MultAsmEPNS0_5MTX44EPKS2_S5_");
extern "C" void YellowAuto_001091cc(void* arg0, const void* arg1, const void* arg2) {
float *out = (float *)arg0; const float *a = (const float *)arg1; const float *b = (const float *)arg2; out[0] = a[0] * b[0] + a[1] * b[4] + a[2] * b[8] + a[3] * b[12]; out[1] = a[0] * b[1] + a[1] * b[5] + a[2] * b[9] + a[3] * b[13]; out[2] = a[0] * b[2] + a[1] * b[6] + a[2] * b[10] + a[3] * b[14]; out[3] = a[0] * b[3] + a[1] * b[7] + a[2] * b[11] + a[3] * b[15]; out[4] = a[4] * b[0] + a[5] * b[4] + a[6] * b[8] + a[7] * b[12]; out[5] = a[4] * b[1] + a[5] * b[5] + a[6] * b[9] + a[7] * b[13]; out[6] = a[4] * b[2] + a[5] * b[6] + a[6] * b[10] + a[7] * b[14]; out[7] = a[4] * b[3] + a[5] * b[7] + a[6] * b[11] + a[7] * b[15]; out[8] = a[8] * b[0] + a[9] * b[4] + a[10] * b[8] + a[11] * b[12]; out[9] = a[8] * b[1] + a[9] * b[5] + a[10] * b[9] + a[11] * b[13]; out[10] = a[8] * b[2] + a[9] * b[6] + a[10] * b[10] + a[11] * b[14]; out[11] = a[8] * b[3] + a[9] * b[7] + a[10] * b[11] + a[11] * b[15]; out[12] = a[12] * b[0] + a[13] * b[4] + a[14] * b[8] + a[15] * b[12]; out[13] = a[12] * b[1] + a[13] * b[5] + a[14] * b[9] + a[15] * b[13]; out[14] = a[12] * b[2] + a[13] * b[6] + a[14] * b[10] + a[15] * b[14]; out[15] = a[12] * b[3] + a[13] * b[7] + a[14] * b[11] + a[15] * b[15]; return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00109038
extern "C" void YellowAuto_00109038(void* arg0, const void* arg1) __asm__("_ZN2nn4math5ARMv612MTX34CopyAsmEPNS0_5MTX34EPKS2_");
extern "C" void YellowAuto_00109038(void* arg0, const void* arg1) {
if (arg0 == arg1) return; float *out = (float *)arg0; const float *in = (const float *)arg1; out[0] = in[0]; out[1] = in[1]; out[2] = in[2]; out[3] = in[3]; out[4] = in[4]; out[5] = in[5]; out[6] = in[6]; out[7] = in[7]; out[8] = in[8]; out[9] = in[9]; out[10] = in[10]; out[11] = in[11]; return;
}
#endif
