// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004455E0
extern "C" uint32_t YellowAuto_004455e0(const uint8_t* arg0, uint32_t arg1) __asm__("_ZN8Savedata9FieldMenu18GetRideShortcutKeyENS0_6RideIDE");
extern "C" uint32_t YellowAuto_004455e0(const uint8_t* arg0, uint32_t arg1) {
if (((const uint8_t*)arg0)[0x16] == arg1) return 0;
if (((const uint8_t*)arg0)[0x17] == arg1) return 1;
if (((const uint8_t*)arg0)[0x18] == arg1) return 2;
if (((const uint8_t*)arg0)[0x19] == arg1) return 3;
return 4;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004454A4
void GFLassert();
extern "C" void YellowAuto_004454a4(uint8_t* arg0, uint32_t arg1, uint32_t arg2) __asm__("_ZN8Savedata9FieldMenu16ChangeMenuIconIDENS0_6IconIDES1_");
extern "C" void YellowAuto_004454a4(uint8_t* arg0, uint32_t arg1, uint32_t arg2) {
uint32_t pos1_y = 0;
uint32_t pos1_x = 0;
uint32_t pos2_y = 0;
uint32_t pos2_x = 0;
for (uint32_t y = 0; y < 2U; ++y) {
  uint32_t x = 0U;
  for (uint32_t k = 0U; k < 3U; ++k) {
    uint32_t v0 = (uint32_t)arg0[y * 6U + 8U + x];
    if (v0 == arg1) { pos1_y = y & 255U; pos1_x = x & 255U; }
    else if (v0 == arg2) { pos2_y = y & 255U; pos2_x = x & 255U; }
    uint32_t v1 = (uint32_t)arg0[y * 6U + 9U + x];
    if (v1 == arg1) { pos1_y = y & 255U; pos1_x = (x + 1U) & 255U; }
    else if (v1 == arg2) { pos2_y = y & 255U; pos2_x = (x + 1U) & 255U; }
    x += 2U;
  }
}
if (pos1_y < 2U && pos1_x < 6U && pos2_y < 2U && pos2_x < 6U) {
  if (pos1_y != pos2_y || pos1_x != pos2_x) {
    uint32_t i0 = pos1_x + pos1_y * 6U + 8U;
    uint32_t i1 = pos2_x + pos2_y * 6U + 8U;
    uint8_t tmp = arg0[i0];
    arg0[i0] = arg0[i1];
    arg0[i1] = tmp;
  }
  return;
}
GFLassert();
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004455A8
extern "C" bool YellowAuto_004455a8(const uint8_t* arg0, uint32_t arg1) __asm__("_ZN8Savedata9FieldMenu16IsMenuIconEnableENS0_6IconIDE");
extern "C" bool YellowAuto_004455a8(const uint8_t* arg0, uint32_t arg1) {
uint32_t v = *(const uint32_t*)(arg0 + 4);
uint32_t mask = (v & 0x0FFFFFFFU) >> 16U;
uint32_t bit = 1U << (arg1 & 255U);
return (bit & mask) != 0U;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A8B5C
extern "C" bool YellowAuto_004a8b5c(const uint8_t* arg0, uint32_t arg1) __asm__("_ZNK8Savedata9FieldMenu9IsIconNewENS0_6IconIDE");
extern "C" bool YellowAuto_004a8b5c(const uint8_t* arg0, uint32_t arg1) {
return (((*(const uint32_t*)(arg0 + 4) & 65535u) >> 4 & (1u << (arg1 & 255u))) != 0);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004455C4
extern "C" void YellowAuto_004455c4(uint8_t* arg0, uint32_t arg1) __asm__("_ZN8Savedata9FieldMenu16ResetRideNewFlagENS0_6RideIDE");
extern "C" void YellowAuto_004455c4(uint8_t* arg0, uint32_t arg1) {
*(arg0 + 26) = (uint8_t)(((1u << (arg1 & 255u)) ^ 255u) & *(arg0 + 26));
}
#endif
