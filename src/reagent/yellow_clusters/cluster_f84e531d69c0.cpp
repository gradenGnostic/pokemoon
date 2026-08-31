// Autonomous Qwen reconstruction approved by GPT-5.4 mini.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00150C44
extern uint8_t *DAT_00150c5c;
extern "C" void YellowAuto_00150c44(int32_t arg0, uint32_t* arg1) __asm__("_Z22BATTLE_EFFECT_GetParam14BattleEffectIdP17BSP_BATTLE_EFFECT");
extern "C" void YellowAuto_00150c44(int32_t arg0, uint32_t* arg1) {
const uint32_t *base = (const uint32_t *)(DAT_00150c5c + arg0 * 0x14);
*arg1 = base[0];
arg1[1] = base[1];
arg1[2] = base[2];
arg1[3] = base[3];
arg1[4] = base[4];
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x005205B4
extern uint32_t *DAT_005205c8;
extern "C" void YellowAuto_005205b4() __asm__("mwmofastaudioDecoderFinalize");
extern "C" void YellowAuto_005205b4() {
DAT_005205c8[0] = 0;
DAT_005205c8[1] = 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00521298
extern uint32_t *DAT_005212ac;
extern "C" void YellowAuto_00521298() __asm__("mwmomoflexDemuxerFinalize");
extern "C" void YellowAuto_00521298() {
DAT_005212ac[0] = 0;
DAT_005212ac[1] = 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x005205EC
extern uint32_t *DAT_00520614;
extern "C" void YellowAuto_005205ec(uint32_t arg0, uint32_t arg1) __asm__("mwmofastaudioDecoderInitialize");
extern "C" void YellowAuto_005205ec(uint32_t arg0, uint32_t arg1) {
DAT_00520614[0] = arg0;
DAT_00520614[1] = arg1;
}
#endif
