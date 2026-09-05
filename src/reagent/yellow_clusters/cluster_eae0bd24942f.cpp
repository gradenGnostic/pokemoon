// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00459944
uint8_t* FUN_0034fec0(uint8_t*);
extern "C" void YellowAuto_00459944(uint8_t* arg0, void* arg1) __asm__("_ZN9NetAppLib2UI16NetAppMenuCursorC1EPNS_6System19ApplicationWorkBaseE");
extern "C" void YellowAuto_00459944(uint8_t* arg0, void* arg1) {
*(uint32_t *)arg0 = *(uint32_t *)0x0045997c; *(uint32_t *)(arg0 + 4) = (uint32_t)arg1; *(uint32_t *)(arg0 + 8) = 0; FUN_0034fec0(arg0 + 12); *(uint32_t *)(arg0 + 16) = 0; *(uint32_t *)(arg0 + 20) = 0; *(uint32_t *)(arg0 + 24) = 0; *(uint32_t *)(arg0 + 28) = 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00459980
uint8_t* FUN_0034fec0(uint8_t*);
void FUN_004597b4(...);
extern "C" uint8_t* YellowAuto_00459980(uint8_t* arg0, void* arg1, void* arg2, int32_t arg3, uint32_t arg4, uint32_t arg5) __asm__("_ZN9NetAppLib2UI16NetAppMenuCursorC1EPNS_6System19ApplicationWorkBaseEPN3app4util7G2DUtilEijj");
extern "C" uint8_t* YellowAuto_00459980(uint8_t* arg0, void* arg1, void* arg2, int32_t arg3, uint32_t arg4, uint32_t arg5) {
*(uint32_t *)arg0 = *(uint32_t *)0x004599f4; *(uint32_t *)(arg0 + 4) = (uint32_t)arg1; *(uint32_t *)(arg0 + 8) = 0; FUN_0034fec0(arg0 + 12); *(uint32_t *)(arg0 + 16) = 0; *(uint32_t *)(arg0 + 20) = 0; *(uint32_t *)(arg0 + 24) = 0; *(uint32_t *)(arg0 + 28) = 0; FUN_004597b4(arg0, *(uint32_t *)(arg0 + 4), arg2, arg3, arg4, arg5); return arg0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00459894
void FUN_002e9c08(...);
extern "C" void YellowAuto_00459894(uint8_t* arg0, uint8_t arg1) __asm__("_ZN9NetAppLib2UI16NetAppMenuCursor4DrawEN4gfl23gfx12CtrDisplayNoE");
extern "C" void YellowAuto_00459894(uint8_t* arg0, uint8_t arg1) {
FUN_002e9c08((void *)(*(uint32_t *)(arg0 + 8)), *(uint32_t *)(*(uint32_t *)(arg0 + 4) + 0x2c), arg1, 1, 0x80, 0);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004598C8
void FUN_004597b4(...);
extern "C" void YellowAuto_004598c8(uint8_t* arg0, void* arg1, uint32_t arg2, int32_t arg3, int32_t arg4) __asm__("_ZN9NetAppLib2UI16NetAppMenuCursor6CreateEPN3app4util7G2DUtilEjji");
extern "C" void YellowAuto_004598c8(uint8_t* arg0, void* arg1, uint32_t arg2, int32_t arg3, int32_t arg4) {
FUN_004597b4(arg0, *(uint32_t *)(arg0 + 4), arg1, arg4, arg2, arg3);
}
#endif
