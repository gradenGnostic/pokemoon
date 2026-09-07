// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003D8FD0
void helper_003d9998(uint8_t*, uint8_t*);
void helper_003d99dc(uint8_t*);
void helper_00358090(uint8_t*);
extern "C" void YellowAuto_003d8fd0(uint8_t* arg0) __asm__("_ZN6NetLib3Pgl12PGLConnector8FinalizeEv");
extern "C" void YellowAuto_003d8fd0(uint8_t* arg0) {
if (arg0[0xB50] == 0) return;
if (*(uint32_t*)(arg0 + 0xB5C) != 0) {
helper_003d9998(*(uint8_t**)(arg0 + 0xB5C), arg0);
helper_003d99dc(*(uint8_t**)(arg0 + 0xB5C));
if (*(uint32_t*)(arg0 + 0xB5C) != 0) {
helper_00358090(*(uint8_t**)(arg0 + 0xB5C));
*(uint32_t*)(arg0 + 0xB5C) = 0;
}
}
arg0[0xB50] = 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003D881C
void helper_003d9028(uint8_t*, uint32_t);
void helper_003d87a8(uint8_t*, const uint8_t*, uint32_t);
bool helper_003d9a38(uint8_t*, uint8_t*, uint32_t);
extern "C" bool YellowAuto_003d881c(uint8_t* arg0, uint32_t arg1) __asm__("_ZN6NetLib3Pgl12PGLConnector20GetWorldBattleStatusEj");
extern "C" bool YellowAuto_003d881c(uint8_t* arg0, uint32_t arg1) {
if (arg0[0xB50] == 0) return false;
if (*(int8_t*)(*(uint32_t*)(arg0 + 0xB5C) + 5) != 0) return false;
helper_003d9028(arg0, 7);
helper_003d87a8(arg0, (const uint8_t*)"battletype", arg1);
return helper_003d9a38(*(uint8_t**)(arg0 + 0xB5C), arg0 + 0xB60, 0x4000);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003D8C84
void helper_003d9028(uint8_t*, uint32_t);
void helper_003d87a8(uint8_t*, const uint8_t*, uint32_t);
bool helper_003d9a38(uint8_t*, uint8_t*, uint32_t);
extern "C" bool YellowAuto_003d8c84(uint8_t* arg0, uint8_t arg1, uint8_t arg2, uint32_t arg3) __asm__("_ZN6NetLib3Pgl12PGLConnector23UpdateWorldBattleStatusEhhj");
extern "C" bool YellowAuto_003d8c84(uint8_t* arg0, uint8_t arg1, uint8_t arg2, uint32_t arg3) {
if (arg0[0xB50] == 0) return false;
if (*(int8_t*)(*(uint32_t*)(arg0 + 0xB5C) + 5) != 0) return false;
helper_003d9028(arg0, 8);
helper_003d87a8(arg0, (const uint8_t*)"gpfentryflg", arg1);
helper_003d87a8(arg0, (const uint8_t*)"wifimatchupstate", arg2);
helper_003d87a8(arg0, (const uint8_t*)"battletype", arg3);
return helper_003d9a38(*(uint8_t**)(arg0 + 0xB5C), arg0 + 0xB60, 0x4000);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003D811C
void helper_003d9028(uint8_t*, uint32_t);
void helper_003d7824(uint8_t*, const uint8_t*, const uint8_t*);
void helper_003d87a8(uint8_t*, const uint8_t*, uint32_t);
bool helper_003d9a38(uint8_t*, uint8_t*, uint32_t);
extern "C" bool YellowAuto_003d811c(uint8_t* arg0, const uint8_t* arg1, uint32_t arg2, uint32_t arg3) __asm__("_ZN6NetLib3Pgl12PGLConnector15UploadBattleBoxEPKcjj");
extern "C" bool YellowAuto_003d811c(uint8_t* arg0, const uint8_t* arg1, uint32_t arg2, uint32_t arg3) {
if (arg0[0xB50] == 0) return false;
if (*(int8_t*)(*(uint32_t*)(arg0 + 0xB5C) + 5) != 0) return false;
helper_003d9028(arg0, 9);
helper_003d7824(arg0, (const uint8_t*)"battlebox", arg1);
helper_003d87a8(arg0, (const uint8_t*)"battleboxsize", arg2);
helper_003d87a8(arg0, (const uint8_t*)"battletype", arg3);
return helper_003d9a38(*(uint8_t**)(arg0 + 0xB5C), arg0 + 0xB60, 0x4000);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003D7EDC
void helper_003d9028(uint8_t*, uint32_t);
void helper_00117634(uint8_t*, const uint8_t*, uint32_t);
void helper_003d7824(uint8_t*, const uint8_t*, const uint8_t*);
void helper_003d87a8(uint8_t*, const uint8_t*, uint32_t);
bool helper_003d9a38(uint8_t*, uint8_t*, uint32_t);
extern "C" bool YellowAuto_003d7edc(uint8_t* arg0, const uint32_t* arg1, const uint8_t* arg2) __asm__("_ZN6NetLib3Pgl12PGLConnector14AuthSerialCodeERKN2nn3cfg3CTR15SimpleAddressIdEPKc");
extern "C" bool YellowAuto_003d7edc(uint8_t* arg0, const uint32_t* arg1, const uint8_t* arg2) {
if (arg0[0xB50] == 0) return false;
if (*(int8_t*)(*(uint32_t*)(arg0 + 0xB5C) + 5) != 0) return false;
helper_003d9028(arg0, 11);
helper_00117634(arg0 + *(uint32_t*)(arg0 + 0x248) * 32 + 0x108, arg2, 31);
helper_003d7824(arg0, (const uint8_t*)"serialcode", arg0 + *(uint32_t*)(arg0 + 0x248) * 32 + 0x108);
*(uint32_t*)(arg0 + 0x248) = *(uint32_t*)(arg0 + 0x248) + 1;
helper_003d87a8(arg0, (const uint8_t*)"countrycode", (*arg1 >> 24));
helper_003d87a8(arg0, (const uint8_t*)"areacode", ((*arg1 & 0xFF0000) >> 16));
helper_003d87a8(arg0, (const uint8_t*)"region", arg0[0xB58]);
return helper_003d9a38(*(uint8_t**)(arg0 + 0xB5C), arg0 + 0xB60, 0x4000);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003D8254
void helper_003d9028(uint8_t*, uint32_t);
void helper_00117634(uint8_t*, const uint8_t*, uint32_t);
void helper_003d7824(uint8_t*, const uint8_t*, const uint8_t*);
void helper_003d87a8(uint8_t*, const uint8_t*, uint32_t);
bool helper_003d9a38(uint8_t*, uint8_t*, uint32_t);
extern "C" bool YellowAuto_003d8254(uint8_t* arg0, const uint32_t* arg1, const uint8_t* arg2) __asm__("_ZN6NetLib3Pgl12PGLConnector16UpdateSerialCodeERKN2nn3cfg3CTR15SimpleAddressIdEPKc");
extern "C" bool YellowAuto_003d8254(uint8_t* arg0, const uint32_t* arg1, const uint8_t* arg2) {
if (arg0[0xB50] == 0) return false;
if (*(int8_t*)(*(uint32_t*)(arg0 + 0xB5C) + 5) != 0) return false;
helper_003d9028(arg0, 12);
helper_003d87a8(arg0, (const uint8_t*)"countrycode", (*arg1 >> 24));
helper_003d87a8(arg0, (const uint8_t*)"areacode", ((*arg1 & 0xFF0000) >> 16));
helper_003d87a8(arg0, (const uint8_t*)"region", arg0[0xB58]);
helper_00117634(arg0 + *(uint32_t*)(arg0 + 0x248) * 32 + 0x108, arg2, 31);
helper_003d7824(arg0, (const uint8_t*)"serialcode", arg0 + *(uint32_t*)(arg0 + 0x248) * 32 + 0x108);
*(uint32_t*)(arg0 + 0x248) = *(uint32_t*)(arg0 + 0x248) + 1;
return helper_003d9a38(*(uint8_t**)(arg0 + 0xB5C), arg0 + 0xB60, 0x4000);
}
#endif
