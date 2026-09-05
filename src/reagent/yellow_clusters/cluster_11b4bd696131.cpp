// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00455224
void UIView_Update(uint8_t *arg0);
void NetAppMenuCursor_Update(uint8_t *arg0);
extern "C" void YellowAuto_00455224(uint8_t* arg0) __asm__("_ZN9NetAppLib11JoinFestaUI38JoinFestaPlayerListSelectLowerViewBase6UpdateEv");
extern "C" void YellowAuto_00455224(uint8_t* arg0) {
UIView_Update(arg0);
NetAppMenuCursor_Update(arg0 + 0xa4);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00455220
void AddDrawableLytWkForOneFrame(void *arg0, int32_t arg1, uint8_t arg2, int32_t arg3, int32_t arg4, int32_t arg5);
void NetAppMenuCursor_Draw(uint8_t *arg0, uint8_t arg1);
extern "C" void YellowAuto_00455220(uint8_t* arg0, uint32_t arg1) __asm__("_ZN9NetAppLib11JoinFestaUI38JoinFestaPlayerListSelectLowerViewBase4DrawEN4gfl23gfx12CtrDisplayNoE");
extern "C" void YellowAuto_00455220(uint8_t* arg0, uint32_t arg1) {
AddDrawableLytWkForOneFrame(*(void **)(arg0 + 0x60), *(int32_t *)(*(uint8_t **)(arg0 + 0xa0) + 0x2c), (uint8_t)arg1, 0, 0x80, 0);
NetAppMenuCursor_Draw(arg0 + 0xa4, (uint8_t)arg1);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00455124
extern "C" void YellowAuto_00455124(uint8_t* arg0) __asm__("_ZN9NetAppLib11JoinFestaUI38JoinFestaPlayerListSelectLowerViewBase23ResetPaneListCursorInfoEv");
extern "C" void YellowAuto_00455124(uint8_t* arg0) {
*(uint32_t *)(arg0 + 0xd0) = 0;
*(uint32_t *)(arg0 + 0xd4) = 0;
*(uint32_t *)(arg0 + 0xd8) = 0;
*(uint32_t *)(arg0 + 0xdc) = 0;
*(uint32_t *)(arg0 + 0xe0) = 0;
*(uint32_t *)(arg0 + 0xe4) = 0;
*(uint32_t *)(arg0 + 0xe8) = 0;
*(uint32_t *)(arg0 + 0xec) = 0;
*(uint32_t *)(arg0 + 0xf0) = 0;
*(uint8_t *)(arg0 + 0x11e) = 1;
}
#endif
