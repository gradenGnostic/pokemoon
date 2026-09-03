// Autonomous Qwen reconstruction approved by GPT-5.4 mini.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00436114
extern "C" void YellowAuto_00436114(uint8_t* arg0) __asm__("_ZN8PokeTool9PokeModel9CanDeleteEv");
extern "C" void YellowAuto_00436114(uint8_t* arg0) {
(*(void (**)(void))(*(int *)arg0 + 0xc))();
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043577C
extern "C" uint32_t YellowAuto_0043577c(uint8_t* arg0, int32_t arg1) __asm__("_ZN8PokeTool9PokeModel26IsAvailableAnimationDirectEi");
extern "C" uint32_t YellowAuto_0043577c(uint8_t* arg0, int32_t arg1) {
if (arg1 < *(int *)(arg0 + 0x12ac) && *(int *)(*(int *)(arg0 + 0x12b0) + arg1 * 4) != 0) return 1; return 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00434DB8
extern "C" uint32_t YellowAuto_00434db8(uint8_t* arg0) __asm__("_ZN8PokeTool9PokeModel18IsAvailableIdModelEv");
extern "C" uint32_t YellowAuto_00434db8(uint8_t* arg0) {
if (*(uint8_t *)(arg0 + *(int *)0x434de4) == 0 || *(int *)(arg0 + 0x1290) < 1) return 0; return 1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004353CC
int iVar1;
extern "C" uint32_t YellowAuto_004353cc(uint8_t* arg0, int32_t arg1, int32_t arg2, void* arg3) __asm__("_ZN8PokeTool9PokeModel21GetEffectNodePositionENS_10MODEL_NODEEiPN4gfl24math7Vector3E");
extern "C" uint32_t YellowAuto_004353cc(uint8_t* arg0, int32_t arg1, int32_t arg2, void* arg3) {
iVar1 = *(int *)(arg0 + arg1 * 0x20 + arg2 * 4 + 0x131c); if (iVar1 != 0) return (*(float *)arg3 = *(float *)(iVar1 + 0x54), *(float *)((char *)arg3 + 4) = *(float *)(iVar1 + 0x64), *(float *)((char *)arg3 + 8) = *(float *)(iVar1 + 0x74), 1); *(float *)arg3 = *(float *)(arg0 + 0x1b14) + *(float *)(arg0 + 0x1b20); *(float *)((char *)arg3 + 4) = *(float *)(arg0 + 0x1b18) + *(float *)(arg0 + 0x1b24); *(float *)((char *)arg3 + 8) = *(float *)(arg0 + 0x1b1c) + *(float *)(arg0 + 0x1b28); return 0;
}
#endif
