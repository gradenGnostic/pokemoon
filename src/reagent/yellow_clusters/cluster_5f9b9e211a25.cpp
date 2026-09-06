// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00459624
extern "C" void YellowAuto_00459624(uint8_t* arg0, int32_t arg1) __asm__("_ZN9NetAppLib2UI16NetAppCursorView4DrawEN4gfl23gfx12CtrDisplayNoE");
extern "C" void YellowAuto_00459624(uint8_t* arg0, int32_t arg1) {
if (*(uint8_t *)(arg0 + 0x120) != 0)
  (*(void (**)(void))(*(uint32_t *)(*(uint32_t *)(arg0 + 0x10c)) + 0x14))();
return;
}
#endif
