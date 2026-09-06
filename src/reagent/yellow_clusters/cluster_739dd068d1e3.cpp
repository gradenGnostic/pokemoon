// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A2EA0
bool FUN_0049c1e0(const uint8_t* arg0);
bool FUN_0049c1a0(const uint8_t* arg0);
bool FUN_0049c1c0(const uint8_t* arg0);
extern "C" bool YellowAuto_004a2ea0(const uint8_t* arg0, uint32_t arg1) __asm__("_ZNK6System11EnvAccessor17IsAnimationSmoothENS0_12AnimationBitE");
extern "C" bool YellowAuto_004a2ea0(const uint8_t* arg0, uint32_t arg1) {
if ((arg1 & 1U) != 0U)
  return FUN_0049c1e0(arg0 + 8);
if ((arg1 & 2U) != 0U)
  return FUN_0049c1a0(arg0 + 8);
if ((arg1 & 4U) != 0U)
  return FUN_0049c1c0(arg0 + 8);
return false;
}
#endif
