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

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0047320C
uint32_t IsSameFriendKey(const uint8_t*, const uint8_t*);
uint8_t* Func004724b4(uint8_t*, uint32_t, const uint8_t*);
void Func0043b5ec(const uint8_t*);
void Func0044090c(const uint8_t*);
void Func0043b56c(const uint8_t*);
void Func0043a6fc(const uint8_t*);
void GetJoinFestaFriendKey(uint8_t*, const uint8_t*);
void Func00473b10(uint8_t*, uint32_t, const uint8_t*);
void Func00473858(uint8_t*, uint32_t, uint8_t*);
extern "C" uint32_t YellowAuto_0047320c(uint8_t* arg0, uint32_t arg1, const uint8_t* arg2) __asm__("_ZN9NetAppLib9JoinFesta28JoinFestaPersonalDataManager22ChangePersonalRelationENS0_15JoinFestaDefine21E_JOIN_FESTA_RELATIONERK18nnfriendsFriendKey");
extern "C" uint32_t YellowAuto_0047320c(uint8_t* arg0, uint32_t arg1, const uint8_t* arg2) {
uint8_t* entry = 0;
uint32_t oldRel = 0;
uint32_t i = 0;
uint8_t keyCopy[16];
if (arg1 >= 2) {
return 0;
}
if (IsSameFriendKey(arg0 + 8, arg2) != 0) {
return 0;
}
for (i = 0; i < 2; i++) {
entry = Func004724b4(arg0, i & 255u, arg2);
if (entry != 0) {
break;
}
}
if (entry == 0) {
if (IsSameFriendKey(arg0 + 8, arg2) == 0) {
return 0;
}
entry = arg0 + 8;
}
oldRel = (uint32_t)*(entry + 0x239);
if (oldRel == arg1) {
return 0;
}
if (oldRel == 1) {
if (*(arg0 + 0x278) == 0) {
Func0043b5ec(arg2);
}
} else {
if (oldRel == 0) {
if (*(arg0 + 0x278) == 0) {
Func0044090c(arg2);
}
}
}
*(entry + 0x239) = (uint8_t)arg1;
if (arg1 == 1) {
if (*(arg0 + 0x278) == 0) {
Func0043b56c(arg2);
}
} else {
if (arg1 == 0) {
if (*(arg0 + 0x278) == 0) {
Func0043a6fc(arg2);
}
}
}
GetJoinFestaFriendKey(keyCopy, entry);
Func00473b10(arg0, oldRel, keyCopy);
Func00473858(arg0, arg1, entry);
return 1;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00472F30
bool IsAttractionDummyData(const uint8_t*);
bool IsPresetNpcData(const uint8_t*);
void GetJoinFestaFriendKey(void*, const uint8_t*);
bool IsValidFriendKey(const void*);
void* GetHeapByHeapId(uint32_t);
void* OperatorNew(uint32_t, void*);
void* JoinFestaPersonalDataCtor(void*);
void Copy(uint8_t*, const uint8_t*);
extern "C" void* YellowAuto_00472f30(uint8_t* arg0, const uint8_t* arg1) __asm__("_ZN9NetAppLib9JoinFesta28JoinFestaPersonalDataManager20AddFieldPersonalListERKNS0_21JoinFestaPersonalDataE");
extern "C" void* YellowAuto_00472f30(uint8_t* arg0, const uint8_t* arg1) {
uint32_t fk0 = 0u;
uint32_t fk1 = 0u;
uint32_t fk2 = 0u;
uint32_t fk3 = 0u;
void* heap = (void*)0;
void* mem = (void*)0;
uint8_t* obj = (uint8_t*)0;
uint32_t cap = 0u;
uint32_t idx = 0u;
uint8_t* head = (uint8_t*)0;
uint8_t* base = (uint8_t*)0;
uint8_t* slot = (uint8_t*)0;
uint32_t n = 0u;
uint32_t nxt = 0u;
if (*(uint32_t*)(arg0 + 0x2A4) == *(uint32_t*)(arg0 + 0x29C))
return (void*)0;
if (IsAttractionDummyData(arg1))
goto do_alloc;
if (IsPresetNpcData(arg1))
goto do_alloc;
GetJoinFestaFriendKey(&fk0, arg1);
if (!IsValidFriendKey(&fk0))
return (void*)0;
do_alloc:
heap = GetHeapByHeapId(0x2Au);
mem = OperatorNew(0x248u, heap);
obj = (uint8_t*)mem;
if (mem != (void*)0)
obj = (uint8_t*)JoinFestaPersonalDataCtor(mem);
if (obj == (uint8_t*)0)
return (void*)0;
Copy(obj, arg1);
cap = *(uint32_t*)(arg0 + 0x29C);
idx = *(uint32_t*)(arg0 + 0x2A0);
head = *(uint8_t**)(arg0 + 0x294);
if (cap != 0u)
base = *(uint8_t**)(arg0 + 0x298);
n = 0u;
slot = (uint8_t*)0;
loop_start:
if (n >= cap)
goto do_insert;
if (*(uint8_t*)(base + idx * 16u + 12u) == 0u)
goto found_slot;
idx = idx + 1u;
if (cap <= idx)
idx = 0u;
n = n + 1u;
goto loop_start;
found_slot:
nxt = idx + 1u;
if (cap <= nxt)
nxt = 0u;
*(uint32_t*)(arg0 + 0x2A0) = nxt;
slot = base + idx * 16u;
*(uint32_t*)(arg0 + 0x2A0) = nxt;
goto do_insert;
do_insert:
*(uint8_t*)(slot + 12u) = (uint8_t)1u;
*(uint8_t**)(slot + 4u) = head;
*(uint8_t**)(slot + 8u) = obj;
*(uint32_t*)(slot + 0u) = *(uint32_t*)head;
*(uint8_t**)(*(uint8_t**)(head + 0u) + 4u) = slot;
*(uint8_t**)(head + 0u) = slot;
*(uint32_t*)(arg0 + 0x2A4) = *(uint32_t*)(arg0 + 0x2A4) + 1u;
return (void*)obj;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0047296C
uint8_t* FUN_004724b4(uint8_t*, uint32_t, const void*);
int32_t FUN_004aaa60(const uint8_t*, const void*);
int32_t FUN_004ab434(const uint8_t*);
void FUN_0044090c(const void*);
void FUN_0043b5ec(const void*);
void FUN_004aaedc(void*, uint8_t*);
void* FUN_00473b10(uint8_t*, uint32_t, const void*);
extern "C" void YellowAuto_0047296c(uint8_t* arg0, const void* arg1) __asm__("_ZN9NetAppLib9JoinFesta28JoinFestaPersonalDataManager17RemoveListAndSaveERK18nnfriendsFriendKey");
extern "C" void YellowAuto_0047296c(uint8_t* arg0, const void* arg1) {
uint8_t* _f = FUN_004724b4(arg0, 0, arg1);
if (_f == 0) _f = FUN_004724b4(arg0, 1, arg1);
if (_f == 0) if (FUN_004aaa60((const uint8_t*)(arg0 + 8), arg1) == 0) return;
if (_f == 0) _f = arg0 + 8;
uint8_t* _cont = *(uint8_t**)(arg0 + 0x294);
uint8_t* _node = *(uint8_t**)(_cont + 4);
uint8_t* _m = 0;
uint8_t* _d = 0;
_Loop: if (_node == _cont) goto _Done;
_d = *(uint8_t**)(_node + 8);
if (FUN_004aaa60(_d, arg1) != 0) _m = _d;
if (_m != 0) goto _Done;
_node = *(uint8_t**)(_node + 4);
goto _Loop;
_Done: if (_m != 0) if (*(_m + 0x239) == 0) *(_m + 0x239) = 1;
const uint8_t* _a = (const uint8_t*)(arg0 + 0x4F8);
if (FUN_004ab434(_a) != 0) if (FUN_004aaa60(_a, arg1) != 0) if (*(arg0 + 0x731) == 0) *(arg0 + 0x731) = 1;
const uint8_t* _b = (const uint8_t*)(arg0 + 0x740);
if (FUN_004ab434(_b) != 0) if (FUN_004aaa60(_b, arg1) != 0) if (*(arg0 + 0x979) == 0) *(arg0 + 0x979) = 1;
if (*(arg0 + 0x278) == 0) if (*(_f + 0x239) == 0) FUN_0044090c(arg1);
if (*(arg0 + 0x278) == 0) if (*(_f + 0x239) != 0) FUN_0043b5ec(arg1);
uint8_t _out[16];
FUN_004aaedc(_out, _f);
uint8_t _key[16];
*(uint32_t*)(_key + 0) = *(uint32_t*)(_out + 0);
*(uint32_t*)(_key + 4) = *(uint32_t*)(_out + 4);
*(uint32_t*)(_key + 8) = *(uint32_t*)(_out + 8);
*(uint32_t*)(_key + 12) = *(uint32_t*)(_out + 12);
uint32_t _flg = *(_f + 0x239);
void* _obj = FUN_00473b10(arg0, _flg, _key);
if (_obj == 0) return;
uint32_t _vtbl = *(uint32_t*)_obj;
uint32_t _tgt = *(uint32_t*)(_vtbl + 4);
((void (*)(void*))_tgt)(_obj);
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00468F48
extern "C" void YellowAuto_00468f48(uint8_t* arg0) __asm__("_ZN9NetAppLib9JoinFesta28JoinFestaPersonalDataManager25ResetScriptSelectPersonalEv");
extern "C" void YellowAuto_00468f48(uint8_t* arg0) {
for (uint32_t i = 0; i < 128; ++i) ((uint32_t*)(arg0 + 0x2B8))[i] = 0;
for (uint32_t i = 0; i < 16; ++i) ((uint32_t*)(arg0 + 0x4B8))[i] = 0;
*(uint32_t*)(arg0 + 0x2B8) = 7;
*(uint32_t*)(arg0 + 0x2BC) = 0;
for (uint32_t i = 0; i < 26; ++i) ((uint32_t*)(arg0 + 0x2C0))[i] = 0;
*(uint32_t*)(arg0 + 0x4A8) = 0x880;
*(arg0 + 0x4B0) = 0;
*(arg0 + 0x4B1) = 0;
*(arg0 + 0x4E9) = 1;
*(arg0 + 0x4EA) = 0;
*(arg0 + 0x4EB) = 0;
*(arg0 + 0x4EC) = 0;
*(arg0 + 0x4ED) = 0;
*(arg0 + 0x4EE) = 0;
*(arg0 + 0x4EF) = 0;
*(arg0 + 0x4F0) = 0x12;
*(arg0 + 0x4F1) = 0x12;
*(uint16_t*)(arg0 + 0x4F2) = 0;
}
#endif
