// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003DE824
uint8_t FUN_003dea4c(uint8_t*, uint32_t);
extern "C" void YellowAuto_003de824(uint8_t* arg0, const uint32_t* arg1) __asm__("_ZN6NetLib5Error16NijiNetworkError18SetResultBossErrorERKN2nn6ResultE");
extern "C" void YellowAuto_003de824(uint8_t* arg0, const uint32_t* arg1) {
arg0[5] = 16; arg0[4] = FUN_003dea4c(arg0, 16); arg0[6] = 1; uint32_t v = *arg1; uint32_t m = 2; if (v == 0xE7E3FFFFU || (int32_t)v >= 0 || ((v & 0x3FC00U) == 0x4400U && (v & 0x3FFU) >= 180U && (v & 0x3FFU) < 200U)) m = 1; else if ((v & 0x3FC00U) == 0x4400U && (v & 0x3FFU) >= 200U && (v & 0x3FFU) < 220U) m = 0; *(uint32_t*)(arg0 + 8) = m; return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003DEB00
uint8_t FUN_003dea4c(uint8_t*, uint32_t);
int32_t FUN_00262d70(uint32_t*, uint8_t);
void GFLassertStop();
extern "C" void YellowAuto_003deb00(uint8_t* arg0, uint32_t arg1) __asm__("_ZN6NetLib5Error16NijiNetworkError22SetResultBossTaskErrorEj");
extern "C" void YellowAuto_003deb00(uint8_t* arg0, uint32_t arg1) {
arg0[5] = 16; arg0[4] = FUN_003dea4c(arg0, 16); uint32_t e = 0; int32_t r = 0; if (arg1 == 0) arg0[6] = 1; if (arg1 == 0) *(uint32_t*)(arg0 + 8) = 2; if (arg1 == 0) return; r = FUN_00262d70(&e, (uint8_t)arg1); if (r < 0) GFLassertStop(); arg0[6] = 0; *(uint32_t*)(arg0 + 8) = e; return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003DECC0
uint8_t FUN_003dea4c(uint8_t*, uint32_t);
void GFLassert(uint32_t, uint32_t, uint32_t, uint32_t);
extern "C" void YellowAuto_003decc0(uint8_t* arg0, uint32_t arg1) __asm__("_ZN6NetLib5Error16NijiNetworkError9SetResultENS1_15ENUM_ERROR_TYPEE");
extern "C" void YellowAuto_003decc0(uint8_t* arg0, uint32_t arg1) {
if ((uint32_t)(arg1 - 9U) < 7U) GFLassert(0, 0, 0, 0); if ((uint32_t)(arg1 - 9U) < 7U) return; arg0[5] = (uint8_t)arg1; arg0[4] = FUN_003dea4c(arg0, arg1); arg0[6] = 1; uint32_t m = 3; if (arg1 == 0) m = 0; else if (arg1 == 1) m = 6; else if (arg1 == 3) m = 7; else if (arg1 == 4) m = 4; else if (arg1 == 5) m = 5; else if (arg1 == 6) m = 8; else if (arg1 == 7) m = 9; *(uint32_t*)(arg0 + 8) = m; return;
}
#endif
