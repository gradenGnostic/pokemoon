// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00455C4C
void* sub_461030(void*, void*);
void* sub_354664(void*, uint32_t, void*);
void sub_2e7314(void*, void*);
extern "C" void* YellowAuto_00455c4c(uint8_t* arg0, void* arg1, void* arg2) __asm__("_ZN9NetAppLib11JoinFestaUI39JoinFestaPlayerListMessageMenuLowerViewC1EPNS_6System19ApplicationWorkBaseERNS_2UI17NetAppMessageMenuE");
extern "C" void* YellowAuto_00455c4c(uint8_t* arg0, void* arg1, void* arg2) {
arg0 = (uint8_t*)sub_461030(arg0, *(void**)((uint8_t*)arg1 + 8)); *(uint32_t*)arg0 = *(uint32_t*)0x00455d28; *(uint32_t*)(arg0 + 0xa0) = *(uint32_t*)0x00455d28 + 0x68; *(uint32_t*)(arg0 + 0xa4) = *(uint32_t*)0x00455d28 + 0x7c; *(void**)(arg0 + 0xa8) = arg1; *(uint32_t*)(arg0 + 0xac) = 0; *(void**)(arg0 + 0xb0) = arg2; *(uint32_t*)(arg0 + 0xb4) = 0xffffffffu; *(uint32_t*)(arg0 + 0xb8) = 0; *(uint32_t*)(arg0 + 0xbc) = 0; *(uint32_t*)(arg0 + 0xc0) = 0; *(uint32_t*)(arg0 + 0xc4) = 0; sub_354664(arg0 + 0xc8, 0x40, *(void**)(*(void**)((uint8_t*)arg1 + 8) + 8)); sub_354664(arg0 + 0xd8, 0x400, *(void**)(*(void**)((uint8_t*)arg1 + 8) + 8)); sub_354664(arg0 + 0xe8, 0x40, *(void**)(*(void**)((uint8_t*)arg1 + 8) + 8)); sub_354664(arg0 + 0xf8, 0x40, *(void**)(*(void**)((uint8_t*)arg1 + 8) + 8)); sub_354664(arg0 + 0x108, 0x40, *(void**)(*(void**)((uint8_t*)arg1 + 8) + 8)); *(void**)(*(void**)(arg0 + 0xb0) + 0x90) = arg0 + 0xa0; sub_2e7314(arg0, *(void**)(arg0 + 0xb0)); return arg0;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004558F0
void* func_00461340(void*, uint32_t, uint32_t);
void func_00354454(void*, void*);
void func_002ce0f8(void*, bool, bool);
void func_002ce1a8(void*, void*, bool, void*);
extern "C" void YellowAuto_004558f0(uint8_t* arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4) __asm__("_ZN9NetAppLib11JoinFestaUI39JoinFestaPlayerListMessageMenuLowerView25SetMessageMenuBlackFilterEjjjj");
extern "C" void YellowAuto_004558f0(uint8_t* arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4) {
*(uint32_t*)(arg0 + 196) = 3; *(uint32_t*)(arg0 + 180) = arg1; *(uint32_t*)(arg0 + 184) = arg2; *(uint32_t*)(arg0 + 188) = arg3; *(uint32_t*)(arg0 + 192) = arg4; func_00354454((void*)(arg0 + 216), func_00461340(*(void**)(*(uint8_t**)(arg0 + 168) + 48), 43, arg1)); func_00354454((void*)(arg0 + 232), func_00461340(*(void**)(*(uint8_t**)(arg0 + 168) + 48), 43, arg2)); func_00354454((void*)(arg0 + 248), func_00461340(*(void**)(*(uint8_t**)(arg0 + 168) + 48), 43, arg3)); func_00354454((void*)(arg0 + 264), func_00461340(*(void**)(*(uint8_t**)(arg0 + 168) + 48), 43, arg4)); func_002ce0f8(*(void**)(arg0 + 176), false, true); func_002ce1a8(*(void**)(arg0 + 176), (void*)(arg0 + 216), false, (void*)(arg0 + 164));
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0045582C
void func_00455568(uint8_t*, const uint16_t*, uint32_t);
void* func_00461340(void*, uint32_t, uint32_t);
void func_00354454(void*, void*);
void func_002ce0f8(void*, bool, bool);
void func_002ce1a8(void*, void*, bool, void*);
extern "C" void YellowAuto_0045582c(uint8_t* arg0, uint32_t arg1, const uint16_t* arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5) __asm__("_ZN9NetAppLib11JoinFestaUI39JoinFestaPlayerListMessageMenuLowerView25SetMessageMenuBlackFilterEjPKwjjj");
extern "C" void YellowAuto_0045582c(uint8_t* arg0, uint32_t arg1, const uint16_t* arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5) {
*(uint32_t*)(arg0 + 196) = 3; *(uint32_t*)(arg0 + 180) = arg1; *(uint32_t*)(arg0 + 184) = arg3; *(uint32_t*)(arg0 + 188) = arg4; *(uint32_t*)(arg0 + 192) = arg5; func_00455568(arg0, arg2, arg1); func_00354454((void*)(arg0 + 232), func_00461340(*(void**)(*(uint8_t**)(arg0 + 168) + 48), 43, arg3)); func_00354454((void*)(arg0 + 248), func_00461340(*(void**)(*(uint8_t**)(arg0 + 168) + 48), 43, arg4)); func_00354454((void*)(arg0 + 264), func_00461340(*(void**)(*(uint8_t**)(arg0 + 168) + 48), 43, arg5)); func_002ce0f8(*(void**)(arg0 + 176), false, true); func_002ce1a8(*(void**)(arg0 + 176), (void*)(arg0 + 216), false, (void*)(arg0 + 164));
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004559BC
void func_00455568(uint8_t*, const uint16_t*, uint32_t);
void* func_00461340(void*, uint32_t, uint32_t);
void func_00354454(void*, void*);
void func_002ce0f8(void*, bool, bool);
void func_00459b1c(void*, void*, bool, void*, void*, uint32_t, uint32_t, uint32_t, uint32_t);
extern "C" void YellowAuto_004559bc(uint8_t* arg0, uint32_t arg1, const uint16_t* arg2) __asm__("_ZN9NetAppLib11JoinFestaUI39JoinFestaPlayerListMessageMenuLowerView26SetMessageYesNoBlackFilterEjPKw");
extern "C" void YellowAuto_004559bc(uint8_t* arg0, uint32_t arg1, const uint16_t* arg2) {
func_00455568(arg0, arg2, arg1); func_00354454((void*)(arg0 + 232), func_00461340(*(void**)(*(uint8_t**)(arg0 + 168) + 48), 43, 138)); func_00354454((void*)(arg0 + 248), func_00461340(*(void**)(*(uint8_t**)(arg0 + 168) + 48), 43, 139)); func_002ce0f8(*(void**)(arg0 + 176), true, true); func_00459b1c(*(void**)(arg0 + 176), (void*)(arg0 + 216), true, (void*)(arg0 + 232), (void*)(arg0 + 248), 0, 0, 0, 0); *(uint32_t*)(arg0 + 180) = arg1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00455B9C
void func_00455568(uint8_t*, const uint16_t*, uint32_t);
void* func_00461340(void*, uint32_t, uint32_t);
void func_00354454(void*, void*);
void func_002ce0f8(void*, bool, bool);
void func_00459b1c(void*, void*, bool, void*, void*, uint32_t, uint32_t, uint32_t, uint32_t);
extern "C" void YellowAuto_00455b9c(uint8_t* arg0, uint32_t arg1, const uint16_t* arg2) __asm__("_ZN9NetAppLib11JoinFestaUI39JoinFestaPlayerListMessageMenuLowerView32SetStreamMessageYesNoBlackFilterEjPKw");
extern "C" void YellowAuto_00455b9c(uint8_t* arg0, uint32_t arg1, const uint16_t* arg2) {
func_00455568(arg0, arg2, arg1); func_00354454((void*)(arg0 + 232), func_00461340(*(void**)(*(uint8_t**)(arg0 + 168) + 48), 43, 138)); func_00354454((void*)(arg0 + 248), func_00461340(*(void**)(*(uint8_t**)(arg0 + 168) + 48), 43, 139)); func_002ce0f8(*(void**)(arg0 + 176), true, true); func_00459b1c(*(void**)(arg0 + 176), (void*)(arg0 + 216), false, (void*)(arg0 + 232), (void*)(arg0 + 248), 0, 0, 0, 0); *(uint32_t*)(arg0 + 180) = arg1;
}
#endif
