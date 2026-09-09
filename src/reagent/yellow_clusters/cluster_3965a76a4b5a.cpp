// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0044B178
uint8_t* func_00357788();
uint8_t* func_00472ED0(uint8_t*, int32_t);
int32_t func_0044BEEC(uint8_t*, const uint8_t*, uint8_t*);
extern "C" bool YellowAuto_0044b178(uint8_t* arg0, const uint8_t* arg1) __asm__("_ZN9NetAppLib11JoinFestaUI26JoinFestaPlayerListManager8IsOnlineEPNS0_19JoinFestaPlayerDataE");
extern "C" bool YellowAuto_0044b178(uint8_t* arg0, const uint8_t* arg1) {
if (arg1 == (const uint8_t*)0) return false; uint8_t* v0 = func_00357788(); uint8_t* v1 = func_00472ED0(v0, 0); uint8_t* v2 = func_00472ED0(v0, 1); bool v3 = false; if (v1 != (uint8_t*)0) if (func_0044BEEC(arg0, arg1, v1) != 0) v3 = true; if (v2 != (uint8_t*)0) if (func_0044BEEC(arg0, arg1, v2) != 0) v3 = true; return v3;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0044AB40
void func_0044DC9C(uint8_t*, const uint8_t*);
uint8_t* func_00357788();
uint8_t* func_00472ED0(uint8_t*, int32_t);
void func_0044B1F8(uint8_t*, uint8_t*, uint8_t*, bool);
extern "C" void YellowAuto_0044ab40(uint8_t* arg0, bool arg1) __asm__("_ZN9NetAppLib11JoinFestaUI26JoinFestaPlayerListManager10UpdateListEb");
extern "C" void YellowAuto_0044ab40(uint8_t* arg0, bool arg1) {
if (arg1 != false) if (*(arg0 + 0x6668) != (uint8_t)0) return; func_0044DC9C(arg0 + 0x58, (const uint8_t*)0); uint8_t* v0 = func_00357788(); uint8_t* v1 = func_00472ED0(v0, 0); uint8_t* v2 = func_00472ED0(v0, 1); if (v1 != (uint8_t*)0) func_0044B1F8(arg0, arg0 + 0x4, v1, true); if (v2 != (uint8_t*)0) func_0044B1F8(arg0, arg0 + 0x18, v2, false); *(arg0 + 0x6668) = (uint8_t)1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0044B0B4
void func_0044DC9C(uint8_t*, const uint8_t*);
uint8_t* func_00357788();
uint8_t* func_00472ED0(uint8_t*, int32_t);
void func_0057F964(uint8_t*);
void func_0044B6F4(uint8_t*, uint8_t*, uint8_t*, bool, uint32_t);
extern "C" void YellowAuto_0044b0b4(uint8_t* arg0, bool arg1, uint32_t arg2) __asm__("_ZN9NetAppLib11JoinFestaUI26JoinFestaPlayerListManager19UpdateListMode4And5Ebj");
extern "C" void YellowAuto_0044b0b4(uint8_t* arg0, bool arg1, uint32_t arg2) {
if (arg1 != false) if (*(arg0 + 0x6668) != (uint8_t)0) return; func_0044DC9C(arg0 + 0x58, (const uint8_t*)0); uint8_t* v0 = func_00357788(); uint8_t* v1 = func_00472ED0(v0, 0); uint8_t* v2 = func_00472ED0(v0, 1); if (v1 != (uint8_t*)0) func_0057F964(arg0 + 0x4); if (v1 != (uint8_t*)0) func_0044B6F4(arg0, arg0 + 0x4, v1, true, arg2); if (v2 != (uint8_t*)0) func_0057F964(arg0 + 0x18); if (v2 != (uint8_t*)0) func_0044B6F4(arg0, arg0 + 0x18, v2, false, arg2); *(arg0 + 0x6668) = (uint8_t)1;
}
#endif
