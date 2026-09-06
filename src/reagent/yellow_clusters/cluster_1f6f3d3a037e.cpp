// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0035AB10
extern "C" void* YellowAuto_0035ab10(uint8_t* arg0, void* arg1) __asm__("_ZN4gfl24proc7Manager8CallProcEPNS0_11BaseProcessE");
extern "C" void* YellowAuto_0035ab10(uint8_t* arg0, void* arg1) {
arg0[8] = 1; *(uint32_t *)(arg0 + 12) = (uint32_t)arg1; arg0[10] = 0; return arg1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0049B844
extern "C" bool YellowAuto_0049b844(const uint8_t* arg0) __asm__("_ZNK4gfl24proc7Manager25GetBaseProcessInitializedEv");
extern "C" bool YellowAuto_0049b844(const uint8_t* arg0) {
return arg0[9] == 0 && arg0[8] == 0 && *(uint32_t *)(arg0 + 16) != 0 && ((uint8_t *)(*(uint32_t *)(arg0 + 16)))[0] == 2;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0035A8EC
extern "C" void YellowAuto_0035a8ec(uint8_t* arg0, uint32_t arg1) __asm__("_ZN4gfl24proc7Manager4DrawENS_3gfx12CtrDisplayNoE");
extern "C" void YellowAuto_0035a8ec(uint8_t* arg0, uint32_t arg1) {
if (arg0[10] != 0) ((void (*)(uint32_t, uint8_t *, uint32_t))(*(uint32_t *)(*(uint32_t *)(*(uint32_t *)(*(uint32_t *)(arg0 + 16) + 12)) + 20)))(*(uint32_t *)(arg0 + 16) + 12, arg0, arg1);
}
#endif
