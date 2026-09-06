// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003E4540
extern const uint32_t *DAT_003e455c;
void FUN_00583728(uint32_t, int32_t, uint32_t, uint32_t, uint32_t);
extern "C" void YellowAuto_003e4540(uint32_t arg0, int32_t arg1, uint32_t arg2, uint32_t arg3) __asm__("_ZN6System11EnvAccessor12SetStepFrameEfjNS0_12AnimationBitE");
extern "C" void YellowAuto_003e4540(uint32_t arg0, int32_t arg1, uint32_t arg2, uint32_t arg3) {
FUN_00583728(arg0, arg1, DAT_003e455c[0], DAT_003e455c[1], arg2);
}
#endif
