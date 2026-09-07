// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002EA928
extern "C" bool YellowAuto_002ea928(uint8_t* arg0) __asm__("_ZN3App4Tool15MessageMenuView7IsSetupEv");
extern "C" bool YellowAuto_002ea928(uint8_t* arg0) {
return *(bool *)(*(uint32_t *)(arg0 + 152) + 192);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002CED08
void func_002ea6c0(void*, void*, uint32_t, bool, bool, uint32_t);
void func_0035be88();
extern "C" void YellowAuto_002ced08(uint8_t* arg0, void* arg1, uint32_t arg2, bool arg3, bool arg4, uint32_t arg5) __asm__("_ZN3App4Tool15MessageMenuView7AddItemEPN4gfl23str7MsgDataEjbbj");
extern "C" void YellowAuto_002ced08(uint8_t* arg0, void* arg1, uint32_t arg2, bool arg3, bool arg4, uint32_t arg5) {
if (arg1 == (void *)0) { func_0035be88(); return; } func_002ea6c0((void *)(*(uint32_t *)(arg0 + 152)), arg1, arg2, arg3, arg4, arg5);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003BEC88
extern "C" void YellowAuto_003bec88(uint8_t* arg0, bool arg1) __asm__("_ZN3App4Tool15MessageMenuView17SetMessageAutoFlgEb");
extern "C" void YellowAuto_003bec88(uint8_t* arg0, bool arg1) {
*(bool *)(*(uint32_t *)(*(uint32_t *)(*(uint32_t *)(arg0 + 148) + 96) + 52) + 217) = arg1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002CDFD4
void func_002d1cd8(void*);
void func_002ea2c8(void*, bool);
void func_002ea7d4(void*, bool);
void func_002e6b00(void*, bool);
extern "C" void YellowAuto_002cdfd4(uint8_t* arg0, uint32_t arg1) __asm__("_ZN3App4Tool15MessageMenuView10SelectMenuEj");
extern "C" void YellowAuto_002cdfd4(uint8_t* arg0, uint32_t arg1) {
func_002d1cd8((void *)(*(uint32_t *)(arg0 + 148))); if ((void *)(*(uint32_t *)(arg0 + 152)) != (void *)0 && *(uint8_t *)((*(uint32_t *)(arg0 + 152)) + 344) != (uint8_t)0) { func_002ea2c8((void *)(*(uint32_t *)(arg0 + 152)), false); func_002ea7d4((void *)(*(uint32_t *)(arg0 + 152)), true); } *(uint8_t *)(arg0 + 165) = (uint8_t)0; *(uint8_t *)(arg0 + 109) = (uint8_t)0; *(uint8_t *)((*(uint32_t *)(arg0 + 152)) + 109) = (uint8_t)0; func_002e6b00((void *)(*(uint32_t *)(arg0 + 152)), false); *(uint32_t *)(arg0 + 156) = arg1; if ((void *)(*(uint32_t *)(arg0 + 144)) == (void *)0) { return; } if (*(uint8_t *)(arg0 + 164) == (uint8_t)0) { (*(void (**)(void *, uint32_t))(*(uint32_t *)(*(uint32_t *)(arg0 + 144)) + 8))((void *)(*(uint32_t *)(arg0 + 144)), 2); return; } if (arg1 == 0) { (*(void (**)(void *, uint32_t))(*(uint32_t *)(*(uint32_t *)(arg0 + 144)) + 8))((void *)(*(uint32_t *)(arg0 + 144)), 3); return; } (*(void (**)(void *, uint32_t))(*(uint32_t *)(*(uint32_t *)(arg0 + 144)) + 8))((void *)(*(uint32_t *)(arg0 + 144)), 4);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002CE994
void* func_00105500(uint32_t, void*);
void func_002d1fa4(void*, const void*, void*);
extern "C" void* YellowAuto_002ce994(uint8_t* arg0, const void* arg1, void* arg2) __asm__("_ZN3App4Tool15MessageMenuView29CreateCommonMessageWindowViewERKNS0_23CommonMessageWindowView5PARAMEPNS2_13IEventHandlerE");
extern "C" void* YellowAuto_002ce994(uint8_t* arg0, const void* arg1, void* arg2) {
arg0 = (uint8_t *)func_00105500(288, (void *)(*(uint32_t *)((*(uint32_t *)arg1) + 8))); if (arg0 == (uint8_t *)0) { return (void *)0; } func_002d1fa4((void *)arg0, arg1, arg2); return (void *)arg0;
}
#endif
