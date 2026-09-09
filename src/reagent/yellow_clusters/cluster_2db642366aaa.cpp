// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0022AC40
extern "C" uint8_t* YellowAuto_0022ac40(uint8_t* arg0, const uint8_t* arg1) __asm__("_ZN2nn3nex31_DDL_GlobalTradeStationTradeKeyaSERKS1_");
extern "C" uint8_t* YellowAuto_0022ac40(uint8_t* arg0, const uint8_t* arg1) {
*(uint8_t *)(arg0 + 4) = *(const uint8_t *)(arg1 + 4);
*(uint32_t *)(arg0 + 8) = *(const uint32_t *)(arg1 + 8);
*(uint32_t *)(arg0 + 12) = *(const uint32_t *)(arg1 + 12);
*(uint32_t *)(arg0 + 16) = *(const uint32_t *)(arg1 + 16);
return arg0;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0022AA9C
bool MsgAddBytes(uint8_t*, const uint8_t*, uint32_t);
bool MsgSeek(uint8_t*, uint32_t);
extern "C" uint32_t YellowAuto_0022aa9c(uint8_t* arg0, const uint8_t* arg1) __asm__("_ZN2nn3nex31_DDL_GlobalTradeStationTradeKey3AddEPNS0_7MessageERKS1_");
extern "C" uint32_t YellowAuto_0022aa9c(uint8_t* arg0, const uint8_t* arg1) {
int8_t mode = *(int8_t*)(arg0 + 59);
uint32_t saved = 0;
bool r2 = false;
bool ret = false;
if (mode == 0) {
uint8_t f = *(uint8_t*)(arg1 + 4);
uint8_t z = 0;
uint8_t t = f;
const uint8_t* p = &t;
if (f != 0) {
p = &z;
}
MsgAddBytes(arg0, p, 1);
saved = *(uint32_t*)(*(uint32_t*)(arg0 + 8) + 16);
uint32_t zero = 0;
MsgAddBytes(arg0, (const uint8_t*)&zero, 4);
}
MsgAddBytes(arg0, (const uint8_t*)(arg1 + 8), 8);
r2 = MsgAddBytes(arg0, (const uint8_t*)(arg1 + 16), 4);
ret = r2;
if (mode == 0) {
uint32_t end = *(uint32_t*)(*(uint32_t*)(arg0 + 8) + 16);
MsgSeek(arg0, saved);
uint32_t len = (end - saved) - 4;
MsgAddBytes(arg0, (const uint8_t*)&len, 4);
ret = MsgSeek(arg0, end);
}
return (uint32_t)ret;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0022AB74
void MsgGetBool(uint8_t*, uint8_t*);
void MsgGetU32(uint8_t*, uint32_t*);
void MsgGet8(uint8_t*, uint8_t*);
extern "C" void YellowAuto_0022ab74(uint8_t* arg0, uint8_t* arg1) __asm__("_ZN2nn3nex31_DDL_GlobalTradeStationTradeKey7ExtractEPNS0_7MessageEPS1_");
extern "C" void YellowAuto_0022ab74(uint8_t* arg0, uint8_t* arg1) {
*(uint8_t*)(arg1 + 4) = 0;
int8_t mode = *(int8_t*)(arg0 + 59);
uint32_t tmp = 0;
bool ok = false;
if (mode != 0) {
ok = true;
} else {
MsgGetBool(arg0, arg1 + 4);
if (*(uint8_t*)(arg0 + 4) == 0) {
MsgGetU32(arg0, &tmp);
if (*(uint8_t*)(arg0 + 4) == 0) {
ok = true;
}
}
}
if (!ok) {
return;
}
uint32_t base = *(uint32_t*)(arg0 + 12);
if (*(uint8_t*)(arg0 + 4) != 0) {
return;
}
MsgGet8(arg0, arg1 + 8);
if (*(uint8_t*)(arg0 + 4) != 0) {
return;
}
MsgGetU32(arg0, (uint32_t*)(arg1 + 16));
if (*(uint8_t*)(arg0 + 4) != 0) {
return;
}
if (mode != 0) {
return;
}
tmp = tmp + base;
uint32_t cur = *(uint32_t*)(arg0 + 12);
uint32_t lim = *(uint32_t*)(*(uint32_t*)(arg0 + 8) + 16);
if (tmp < cur || lim < tmp) {
*(uint8_t*)(arg0 + 4) = 1;
} else {
*(uint32_t*)(arg0 + 12) = tmp;
}
return;
}
#endif
