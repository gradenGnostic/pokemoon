// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0035DDE0
void GFLassertStop();
extern "C" void YellowAuto_0035dde0(uint8_t* arg0, const uint32_t* arg1) __asm__("_ZN4gfl26Effect16EffectRenderPath9SetConfigERKNS1_6ConfigE");
extern "C" void YellowAuto_0035dde0(uint8_t* arg0, const uint32_t* arg1) {
*(uint32_t *)(arg0 + 4) = arg1[0];
*(uint32_t *)(arg0 + 8) = arg1[1];
if (arg1[0] == 0)
  GFLassertStop();
if (arg1[1] == 0)
  GFLassertStop();
}
#endif
