// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003752BC
extern "C" void YellowAuto_003752bc(uint8_t* arg0, uint32_t arg1) __asm__("_ZN5Field11FieldScript10SystemWork10OnCheckBitENS0_17SCR_END_CHECK_BITE");
extern "C" void YellowAuto_003752bc(uint8_t* arg0, uint32_t arg1) {
if ((arg1 & ~*(uint32_t*)(arg0 + 4)) != 0)
  *(uint32_t*)(arg0 + 4) = arg1 | *(uint32_t*)(arg0 + 4);
return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003752D0
extern "C" void YellowAuto_003752d0(uint8_t* arg0, uint32_t arg1) __asm__("_ZN5Field11FieldScript10SystemWork11OffCheckBitENS0_17SCR_END_CHECK_BITE");
extern "C" void YellowAuto_003752d0(uint8_t* arg0, uint32_t arg1) {
if ((arg1 & ~*(uint32_t*)(arg0 + 4)) == 0)
  *(uint32_t*)(arg0 + 4) = *(uint32_t*)(arg0 + 4) & ~arg1;
return;
}
#endif
