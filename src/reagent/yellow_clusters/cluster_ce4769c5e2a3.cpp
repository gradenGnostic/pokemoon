// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00326894
void YellowAuto_0032689c(uint8_t*, const uint8_t*, uint8_t);
extern "C" void YellowAuto_00326894(uint8_t* arg0, const uint8_t* arg1) __asm__("_ZN4gfl215renderingengine10scenegraph8instance12DrawableNode20SetBillboardRotationERKNS_4math8Matrix34E");
extern "C" void YellowAuto_00326894(uint8_t* arg0, const uint8_t* arg1) {
YellowAuto_0032689c(arg0, arg1, (uint8_t)(*(uint32_t*)(arg0 + 184) & 255));
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0032689C
void FUN_0049b6dc(uint8_t*, const uint8_t*);
float sqrtf(float);
extern "C" void YellowAuto_0032689c(uint8_t* arg0, const uint8_t* arg1, uint8_t arg2) __asm__("_ZN4gfl215renderingengine10scenegraph8instance12DrawableNode20SetBillboardRotationERKNS_4math8Matrix34ENS0_13BillboardTypeE");
extern "C" void YellowAuto_0032689c(uint8_t* arg0, const uint8_t* arg1, uint8_t arg2) {
if ((arg2 & 255u) == 0) return; const float* s = (const float*)arg1; float a[16]; a[0] = s[0]; a[1] = s[1]; a[2] = s[2]; a[3] = s[3]; a[4] = s[4]; a[5] = s[5]; a[6] = s[6]; a[7] = s[7]; a[8] = s[8]; a[9] = s[9]; a[10] = s[10]; a[11] = s[11]; a[12] = 0.0f; a[13] = 0.0f; a[14] = 0.0f; a[15] = 1.0f; float t0 = *(float*)(arg0 + 32); float t1 = *(float*)(arg0 + 36); float t2 = *(float*)(arg0 + 40); float m[16]; for (int i = 0; i < 16; ++i) m[i] = 0.0f; unsigned int bt = arg2 & 255u; if (bt == 1u) { float fx = a[8]; float fz = a[10]; float rx = fz; float ry = 0.0f; float rz = -fx; float l0 = sqrtf(rx * rx + ry * ry + rz * rz); float i0 = 1.0f / l0; rx *= i0; ry *= i0; rz *= i0; float ux = -rz; float uy = 0.0f; float uz = rx; float l1 = sqrtf(ux * ux + uy * uy + uz * uz); float i1 = 1.0f / l1; ux *= i1; uy *= i1; uz *= i1; float b[16]; for (int i = 0; i < 16; ++i) b[i] = 0.0f; b[0] = rx; b[1] = ry; b[2] = rz; b[3] = 0.0f; b[4] = ux; b[5] = uy; b[6] = uz; b[7] = 0.0f; b[8] = fx; b[9] = a[9]; b[10] = fz; b[11] = 0.0f; b[15] = 1.0f; float c[16]; for (int i = 0; i < 16; ++i) c[i] = b[i]; FUN_0049b6dc((uint8_t*)m, (const uint8_t*)c); } else if (bt == 2u) { for (int i = 0; i < 16; ++i) m[i] = a[i]; m[3] = 0.0f; m[7] = 0.0f; m[11] = 0.0f; m[15] = 1.0f; } m[12] = t0; m[13] = t1; m[14] = t2; m[15] = 1.0f; float f[16]; for (int i = 0; i < 16; ++i) f[i] = m[i]; FUN_0049b6dc((uint8_t*)f, (const uint8_t*)m); float trace = f[0] + f[5] + f[10]; float qx = 0.0f; float qy = 0.0f; float qz = 0.0f; float qw = 1.0f; if (trace >= 0.0f) { float st = sqrtf(trace + 1.0f); qw = st * 0.5f; float inv = 0.5f / st; qx = (f[6] - f[9]) * inv; qy = (f[8] - f[2]) * inv; qz = (f[1] - f[4]) * inv; } else if (f[0] >= f[5] && f[0] >= f[10]) { float st = sqrtf(((f[0] - f[5]) - f[10]) + 1.0f); qx = st * 0.5f; float inv = 0.5f / st; qy = (f[1] + f[4]) * inv; qz = (f[2] + f[8]) * inv; qw = (f[6] - f[9]) * inv; } else if (f[5] >= f[10]) { float st = sqrtf(((f[5] - f[10]) - f[0]) + 1.0f); qy = st * 0.5f; float inv = 0.5f / st; qx = (f[1] + f[4]) * inv; qz = (f[6] + f[9]) * inv; qw = (f[8] - f[2]) * inv; } else { float st = sqrtf(((f[10] - f[0]) - f[5]) + 1.0f); qz = st * 0.5f; float inv = 0.5f / st; qx = (f[2] + f[8]) * inv; qy = (f[6] + f[9]) * inv; qw = (f[1] - f[4]) * inv; } *(float*)(arg0 + 56) = qx; *(float*)(arg0 + 60) = qy; *(float*)(arg0 + 64) = qz; *(float*)(arg0 + 68) = qw; *(uint32_t*)(arg0 + 120) = *(uint32_t*)(arg0 + 120) | 1u;
}
#endif
