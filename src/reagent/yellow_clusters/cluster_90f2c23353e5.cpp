// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0046FC14
uint8_t* GetPersonalData(uint8_t*, uint8_t*);
bool IsEnablePacketBattleInvite(uint8_t*);
bool IsEnablePacketTradeInvite(uint8_t*);
extern "C" uint8_t* YellowAuto_0046fc14(uint8_t* arg0, bool arg1) __asm__("_ZN9NetAppLib9JoinFesta24JoinFestaPacketEventList8PopEventEb");
extern "C" uint8_t* YellowAuto_0046fc14(uint8_t* arg0, bool arg1) {
uint32_t sz = *(uint32_t*)(arg0 + 0x18);
if (sz == 0) return nullptr;
uint8_t* head = *(uint8_t**)(arg0 + 8);
uint8_t* cur = *(uint8_t**)(head + 4);
if (cur == head) return nullptr;
while (true) {
uint8_t* info = cur + 8;
uint8_t* mgr = *(uint8_t**)(arg0 + 4);
uint8_t* personal = GetPersonalData(mgr, cur + 0x10);
bool valid = false;
if (personal != nullptr) {
uint8_t a = *(personal + 9);
uint8_t b = *(info + 4);
if (a == b) {
if (b == 0x10) {
if (IsEnablePacketBattleInvite(personal) && *(uint32_t*)(personal + 0x220) == *(uint32_t*)(info + 0)) valid = true;
} else if (b == 0x17) {
if (IsEnablePacketTradeInvite(personal) && *(uint32_t*)(personal + 0x208) == *(uint32_t*)(info + 0)) valid = true;
}
}
}
uint8_t* nxt = cur;
if (arg1) {
uint8_t* h2 = *(uint8_t**)(arg0 + 8);
nxt = h2;
if (cur != h2) {
uint8_t* nn = *(uint8_t**)(cur + 4);
uint8_t* pp = *(uint8_t**)(cur + 0);
*(uint8_t**)(pp + 4) = nn;
*(uint8_t**)(nn + 0) = pp;
*(cur + 0x20) = (uint8_t)0;
*(uint32_t*)(cur + 0) = (uint32_t)0;
*(uint32_t*)(cur + 4) = (uint32_t)0;
*(uint32_t*)(arg0 + 0x18) = *(uint32_t*)(arg0 + 0x18) - (uint32_t)1;
nxt = nn;
}
}
if (valid) return info;
cur = nxt;
if (cur == *(uint8_t**)(arg0 + 8)) break;
}
return nullptr;
}
#endif
