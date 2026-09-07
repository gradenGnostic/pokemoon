// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004734B8
extern "C" void YellowAuto_004734b8(uint8_t* arg0, uint8_t* arg1) __asm__("_ZN9NetAppLib9JoinFesta28JoinFestaPersonalDataManager22SetScriptTalkFriendKeyEPNS0_21JoinFestaPersonalDataE");
extern "C" void YellowAuto_004734b8(uint8_t* arg0, uint8_t* arg1) {
*(uint8_t**)(arg0 + 0x2A8) = arg1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004730C4
bool IsSameFriendKey(const uint8_t*, const uint8_t*);
extern "C" void* YellowAuto_004730c4(uint8_t* arg0, const uint8_t* arg1) __asm__("_ZN9NetAppLib9JoinFesta28JoinFestaPersonalDataManager20GetFieldPersonalDataERK18nnfriendsFriendKey");
extern "C" void* YellowAuto_004730c4(uint8_t* arg0, const uint8_t* arg1) {
uint32_t lst = *(uint32_t*)(arg0 + 0x294);
uint32_t cur = *(uint32_t*)(lst + 4);
while (cur != lst) {
uint8_t* pers = *(uint8_t**)(cur + 8);
if (IsSameFriendKey(pers, arg1)) return (void*)pers;
cur = *(uint32_t*)(cur + 4);
}
return (void*)0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00472550
void* func_004724b4(uint8_t*, uint8_t, const uint8_t*);
bool IsSameFriendKey(const uint8_t*, const uint8_t*);
extern "C" void* YellowAuto_00472550(uint8_t* arg0, const uint8_t* arg1) __asm__("_ZN9NetAppLib9JoinFesta28JoinFestaPersonalDataManager15GetPersonalDataERK18nnfriendsFriendKey");
extern "C" void* YellowAuto_00472550(uint8_t* arg0, const uint8_t* arg1) {
for (uint32_t i = 0; i < 2; ++i) {
void* p = func_004724b4(arg0, (uint8_t)(i & 0xFF), arg1);
if (p != (void*)0) return p;
}
uint8_t* mine = arg0 + 8;
if (IsSameFriendKey(mine, arg1)) return (void*)mine;
return (void*)0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00472CCC
void* func_004724b4(uint8_t*, uint8_t, const uint8_t*);
bool IsSameFriendKey(const uint8_t*, const uint8_t*);
extern "C" void YellowAuto_00472ccc(uint8_t* arg0, const uint8_t* arg1, uint32_t arg2) __asm__("_ZN9NetAppLib9JoinFesta28JoinFestaPersonalDataManager18SetInviteFriendKeyERK18nnfriendsFriendKeyj");
extern "C" void YellowAuto_00472ccc(uint8_t* arg0, const uint8_t* arg1, uint32_t arg2) {
*(uint32_t*)(arg0 + 0x280) = *(const uint32_t*)(arg1 + 0);
*(uint32_t*)(arg0 + 0x284) = *(const uint32_t*)(arg1 + 4);
*(uint32_t*)(arg0 + 0x288) = *(const uint32_t*)(arg1 + 8);
*(uint32_t*)(arg0 + 0x28C) = *(const uint32_t*)(arg1 + 12);
*(uint32_t*)(arg0 + 0x290) = arg2;
for (uint32_t i = 0; i < 2; ++i) {
void* p = func_004724b4(arg0, (uint8_t)(i & 0xFF), (const uint8_t*)(arg0 + 0x280));
if (p != (void*)0) { *(uint8_t*)((uint8_t*)p + 0x23A) = (uint8_t)1; return; }
}
uint8_t* mine = arg0 + 8;
if (IsSameFriendKey(mine, (const uint8_t*)(arg0 + 0x280))) { *(uint8_t*)(mine + 0x23A) = (uint8_t)1; }
}
#endif
