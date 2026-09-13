// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00328A98
void FUN_003234e8(uint8_t *);
void FUN_00323364(uint8_t *);
void FUN_00325098(uint8_t *, uint32_t);
extern const float DAT_00328CA8;
extern const float DAT_00328CAC;
extern const float DAT_00328CB0;
extern "C" void YellowAuto_00328a98(uint8_t* arg0, uint32_t arg1) __asm__("_ZN4gfl215renderingengine10scenegraph8instance17CullingObjectNode8SetMovedEi");
extern "C" void YellowAuto_00328a98(uint8_t* arg0, uint32_t arg1) {
uint32_t f = *(uint32_t*)(arg0 + 168); uint32_t cur = (f & 2u) >> 1u; uint32_t d = (arg1 == cur) ? 0u : 2u; f ^= d; *(uint32_t*)(arg0 + 168) = f; if ((f & 2u) == 0u) return; uint8_t* p = *(uint8_t**)(arg0 + 172); if (p == 0) return; float tx = *(float*)(arg0 + 84); float ty = *(float*)(arg0 + 100); float tz = *(float*)(arg0 + 116); float ox = *(float*)(arg0 + 156); float oy = *(float*)(arg0 + 160); float oz = *(float*)(arg0 + 164); if (ox == tx && oy == ty && oz == tz) return; float lx0 = *(float*)(arg0 + 124); float ly0 = *(float*)(arg0 + 128); float lz0 = *(float*)(arg0 + 132); float lw0 = *(float*)(arg0 + 136); float lx1 = *(float*)(arg0 + 140); float ly1 = *(float*)(arg0 + 144); float lz1 = *(float*)(arg0 + 148); float lw1 = *(float*)(arg0 + 152); float cx = (lx0 + tx + lx1 + tx) * DAT_00328CAC; float cy = (ly0 + ty + ly1 + ty) * DAT_00328CAC; float cz = (lz0 + tz + lz1 + tz) * DAT_00328CAC; float cw = (lw0 + DAT_00328CA8 + lw1 + DAT_00328CA8) * DAT_00328CAC; float d0 = cx - *(float*)(p + 8); float d1 = cy - *(float*)(p + 12); float d2 = cz - *(float*)(p + 16); float d3 = cw - *(float*)(p + 20); float e0 = *(float*)(p + 24) - cx; float e1 = *(float*)(p + 28) - cy; float e2 = *(float*)(p + 32) - cz; float e3 = *(float*)(p + 36) - cw; float m0 = (d0 < e0) ? d0 : e0; float m1 = (d1 < e1) ? d1 : e1; float m2 = d2; if (e2 <= d2) m2 = e2; if (m0 < DAT_00328CB0 || m1 < DAT_00328CB0 || m2 < DAT_00328CB0) { FUN_003234e8(arg0); FUN_00323364(arg0); } else { FUN_00325098(p, 1u); } *(uint32_t*)(arg0 + 156) = *(uint32_t*)(arg0 + 84); *(uint32_t*)(arg0 + 160) = *(uint32_t*)(arg0 + 100); *(uint32_t*)(arg0 + 164) = *(uint32_t*)(arg0 + 116);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00328A70
void FUN_00328A98(uint8_t *, uint32_t);
extern "C" void YellowAuto_00328a70(uint8_t* arg0, uint32_t arg1) __asm__("_ZN4gfl215renderingengine10scenegraph8instance17CullingObjectNode22SetWorldTransformDirtyEi");
extern "C" void YellowAuto_00328a70(uint8_t* arg0, uint32_t arg1) {
uint32_t w = *(uint32_t*)(arg0 + 120); if ((w & 16u) == 0u && (w & 32u) == 0u && arg1 == 0u) w &= ~2u; else w |= 2u; *(uint32_t*)(arg0 + 120) = w; FUN_00328A98(arg0, arg1);
}
#endif
