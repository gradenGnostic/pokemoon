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

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00473984
extern "C" void YellowAuto_00473984(uint8_t* arg0) __asm__("_ZN9NetAppLib9JoinFesta28JoinFestaPersonalDataManager24ReleaseFieldPersonalListEv");
extern "C" void YellowAuto_00473984(uint8_t* arg0) {
uint8_t* _base = arg0 + 660;
if (*(int32_t*)(arg0 + 676) == (int32_t)0) return;
uint8_t* _head = *(uint8_t**)_base;
uint8_t* _cur = *(uint8_t**)(_head + 4);
if (_cur == _head) return;
uint8_t* _next = (uint8_t*)0;
do {
uint8_t* _pay = *(uint8_t**)(_cur + 8);
if (_cur == _head) {
_next = *(uint8_t**)_base;
} else {
uint8_t* _prev = *(uint8_t**)_cur;
_next = *(uint8_t**)(_cur + 4);
*(uint8_t**)(_prev + 4) = _next;
*(uint8_t**)(_next + 0) = _prev;
*(_cur + 12) = (uint8_t)0;
*(uint8_t**)(_cur + 0) = (uint8_t*)0;
*(uint8_t**)(_cur + 4) = (uint8_t*)0;
*(int32_t*)(_base + 16) = *(int32_t*)(_base + 16) - (int32_t)1;
}
if (_pay != (uint8_t*)0) {
uint8_t* _vt = *(uint8_t**)_pay;
uint8_t* _fn = *(uint8_t**)(_vt + 4);
((void(*)(uint8_t*))_fn)(_pay);
}
_cur = _next;
} while (_cur != _head);
return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00473148
uint8_t* FUN_004724b4(uint8_t*, uint32_t, uint8_t*);
void UnLock(uint8_t*);
int32_t IsSameFriendKey(uint8_t*, uint8_t*);
extern "C" void YellowAuto_00473148(uint8_t* arg0) __asm__("_ZN9NetAppLib9JoinFesta28JoinFestaPersonalDataManager20ResetInviteFriendKeyEv");
extern "C" void YellowAuto_00473148(uint8_t* arg0) {
uint8_t* _key = arg0 + 640;
uint32_t _i = (uint32_t)0;
uint8_t* _f = (uint8_t*)0;
for (_i = (uint32_t)0; _i < (uint32_t)2; _i = _i + (uint32_t)1) {
_f = FUN_004724b4(arg0, _i & (uint32_t)255, _key);
if (_f != (uint8_t*)0) break;
}
if (_f == (uint8_t*)0) {
int32_t _s = IsSameFriendKey(arg0 + 8, _key);
if (_s != (int32_t)0) _f = arg0 + 8;
}
if (_f != (uint8_t*)0) UnLock(_f);
*(uint32_t*)(arg0 + 640) = (uint32_t)0;
*(uint32_t*)(arg0 + 648) = (uint32_t)0;
*(uint32_t*)(arg0 + 652) = (uint32_t)0;
*(uint32_t*)(arg0 + 656) = (uint32_t)0;
return;
}
#endif
