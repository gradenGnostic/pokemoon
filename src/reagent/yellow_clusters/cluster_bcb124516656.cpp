// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00454100
extern "C" void YellowAuto_00454100(uint8_t* arg0) __asm__("_ZN9NetAppLib11JoinFestaUI38JoinFestaPlayerListPlayerInfoUpperView30ResetCurrentJoinFestaFriendKeyEv");
extern "C" void YellowAuto_00454100(uint8_t* arg0) {
*(uint32_t *)(arg0 + 0xb8) = 0; *(uint32_t *)(arg0 + 0xc0) = 0; *(uint32_t *)(arg0 + 0xc4) = 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00453524
uint8_t* GetLayoutWork(uint8_t*, int32_t);
uint8_t* GetPicturePane(uint8_t*, const uint8_t*);
extern "C" void YellowAuto_00453524(uint8_t* arg0) __asm__("_ZN9NetAppLib11JoinFestaUI38JoinFestaPlayerListPlayerInfoUpperView16TimerIconDisableEv");
extern "C" void YellowAuto_00453524(uint8_t* arg0) {
uint8_t *pane = GetPicturePane(GetLayoutWork(*(uint8_t **)(arg0 + 0x60), 0), *(const uint8_t **)(0x00453554)); if (pane != (uint8_t *)0) *(uint8_t *)(pane + 0x44) &= 0xfe;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00454194
uint8_t* NetApplicationViewBase(uint8_t*, uint8_t*, int32_t, int32_t, int32_t, int32_t, const uint8_t*, int32_t);
uint8_t* StrBuf(uint8_t*, int32_t, uint8_t*);
extern "C" void YellowAuto_00454194(uint8_t* arg0, uint8_t* arg1, int32_t arg2, uint8_t* arg3) __asm__("_ZN9NetAppLib11JoinFestaUI38JoinFestaPlayerListPlayerInfoUpperViewC1EPNS_6System19ApplicationWorkBaseEiRNS_4Util24NetAppTrainerIconUtilityE");
extern "C" void YellowAuto_00454194(uint8_t* arg0, uint8_t* arg1, int32_t arg2, uint8_t* arg3) {
NetApplicationViewBase(arg0, arg1, arg2, 0x6f, 3, 0, *(uint8_t **)(arg1 + 0x30), 0x2b); *(uint32_t *)arg0 = 0x00454204; *(uint32_t *)(arg0 + 0xa0) = (uint32_t)arg1; StrBuf(arg0 + 0xa4, 4, *(uint8_t **)(*(uint8_t **)(arg1 + 8) + 8)); *(uint32_t *)(arg0 + 0xb4) = (uint32_t)arg3; *(uint8_t *)(arg0 + 0xc8) = 0;
}
#endif
