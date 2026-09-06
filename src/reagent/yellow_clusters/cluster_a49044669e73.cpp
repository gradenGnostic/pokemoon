// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003234C0
extern int32_t *DAT_0032350c;
void FUN_00323364(int32_t);
void FUN_00324d00(int32_t, int32_t);
extern "C" void YellowAuto_003234c0(uint8_t* arg0, int32_t arg1) __asm__("_ZN4gfl215renderingengine10scenegraph8instance12DrawableNode10SetVisibleEi");
extern "C" void YellowAuto_003234c0(uint8_t* arg0, int32_t arg1) {
*(int32_t *)(arg0 + 0xb4) = arg1;
if (arg1 != 0)
  *(uint32_t *)(arg0 + 0xa8) |= 1U;
if (arg1 != 0)
  FUN_00323364((int32_t)arg0);
if (arg1 != 0)
  return;
*(uint32_t *)(arg0 + 0xa8) &= 0xfffffffeU;
if (*DAT_0032350c == 0)
  return;
if (*(int32_t *)(arg0 + 0xac) == 0)
  return;
FUN_00324d00(*(int32_t *)(arg0 + 0xac), (int32_t)arg0);
}
#endif
