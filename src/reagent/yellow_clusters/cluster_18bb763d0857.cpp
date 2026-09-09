// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004415D8
extern "C" void YellowAuto_004415d8(uint8_t* arg0, uint32_t arg1) __asm__("_ZN8Savedata4Misc18SetEventFirstCheckEj");
extern "C" void YellowAuto_004415d8(uint8_t* arg0, uint32_t arg1) {
arg0[arg1 + 16] = 1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A7C54
extern "C" bool YellowAuto_004a7c54(const uint8_t* arg0, uint32_t arg1) __asm__("_ZNK8Savedata4Misc18IsTrainerPassStampENS_18TrainerPassStampIDE");
extern "C" bool YellowAuto_004a7c54(const uint8_t* arg0, uint32_t arg1) {
return (((( *(const uint32_t *)(arg0 + 12) >> 4) & 32767U) & (1U << arg1)) != 0);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00441740
extern "C" void YellowAuto_00441740(uint8_t* arg0, uint32_t arg1) __asm__("_ZN8Savedata4Misc19SetTrainerPassStampENS_18TrainerPassStampIDE");
extern "C" void YellowAuto_00441740(uint8_t* arg0, uint32_t arg1) {
*(uint32_t *)(arg0 + 12) |= (((1U << arg1) & 32767U) << 4);
}
#endif
