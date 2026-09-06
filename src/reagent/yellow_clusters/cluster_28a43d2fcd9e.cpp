// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0030CF48
extern "C" void YellowAuto_0030cf48(uint8_t* arg0, uint32_t arg1, void* arg2, bool arg3, uint32_t arg4, uint8_t arg5) __asm__("_ZN3app4util23AppUtilFileControlStateC1EjPN4gfl24heap11CtrHeapBaseEbjNS2_2fs10ToolDefine11ArcLangType3TagE");
extern "C" void YellowAuto_0030cf48(uint8_t* arg0, uint32_t arg1, void* arg2, bool arg3, uint32_t arg4, uint8_t arg5) {
*(uint32_t *)(arg0 + 0) = 0x0030cfa0u; *(uint32_t *)(arg0 + 8) = 0xffffffffu; *(uint32_t *)(arg0 + 0x10) = 0u; arg0[0x1a] = 0u; arg0[0x1d] = 0u; arg0[0x1c] = 0u; arg0[0x1e] = 0u; arg0[0x1f] = 0u; *(uint32_t *)(arg0 + 4) = arg1; arg0[0x1b] = 0u; *(void **)(arg0 + 0xc) = arg2; arg0[0x19] = (uint8_t)arg3; *(uint32_t *)(arg0 + 0x14) = arg4; arg0[0x18] = arg5;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0030CFA4
extern "C" void YellowAuto_0030cfa4(uint8_t* arg0, uint32_t arg1, uint32_t arg2, void* arg3, bool arg4, uint32_t arg5, uint8_t arg6) __asm__("_ZN3app4util23AppUtilFileControlStateC1EjjPN4gfl24heap11CtrHeapBaseEbjNS2_2fs10ToolDefine11ArcLangType3TagE");
extern "C" void YellowAuto_0030cfa4(uint8_t* arg0, uint32_t arg1, uint32_t arg2, void* arg3, bool arg4, uint32_t arg5, uint8_t arg6) {
*(uint32_t *)(arg0 + 0) = 0x0030cffcu; *(uint32_t *)(arg0 + 0x10) = 0u; arg0[0x1b] = 1u; arg0[0x1d] = 0u; arg0[0x1c] = 0u; arg0[0x1e] = 0u; arg0[0x1f] = 0u; *(uint32_t *)(arg0 + 4) = arg1; arg0[0x1a] = 1u; *(uint32_t *)(arg0 + 8) = arg2; *(void **)(arg0 + 0xc) = arg3; arg0[0x19] = (uint8_t)arg4; *(uint32_t *)(arg0 + 0x14) = arg5; arg0[0x18] = arg6;
}
#endif
