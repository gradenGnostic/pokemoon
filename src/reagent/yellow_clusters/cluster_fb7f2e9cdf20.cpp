// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0022E7A4
extern "C" void YellowAuto_0022e7a4(uint8_t* arg0, const uint8_t* arg1) __asm__("_ZN2nn3nex32_DDL_GlobalTradeStationRecordKeyaSERKS1_");
extern "C" void YellowAuto_0022e7a4(uint8_t* arg0, const uint8_t* arg1) {
arg0[4] = arg1[4]; *(uint32_t*)(arg0 + 8) = *(const uint32_t*)(arg1 + 8); *(uint32_t*)(arg0 + 12) = *(const uint32_t*)(arg1 + 12); *(uint32_t*)(arg0 + 16) = *(const uint32_t*)(arg1 + 16); *(uint32_t*)(arg0 + 20) = *(const uint32_t*)(arg1 + 20);
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0022E600
uint32_t MsgWrite(uint8_t *, const uint8_t *, uint32_t);
bool MsgSeek(uint8_t *, uint32_t);
extern "C" uint32_t YellowAuto_0022e600(uint8_t* arg0, const uint8_t* arg1) __asm__("_ZN2nn3nex32_DDL_GlobalTradeStationRecordKey3AddEPNS0_7MessageERKS1_");
extern "C" uint32_t YellowAuto_0022e600(uint8_t* arg0, const uint8_t* arg1) {
int8_t mode = *reinterpret_cast<int8_t*>(arg0 + 0x3B);
uint32_t saved = 0;
uint32_t ret = 0;
if (mode == 0) {
uint8_t zero = 0;
uint8_t val = *(arg1 + 4);
const uint8_t* p = &val;
if (val != 0) p = &zero;
MsgWrite(arg0, p, 1);
saved = *reinterpret_cast<uint32_t*>(*reinterpret_cast<uint8_t**>(arg0 + 8) + 0x10);
uint32_t placeholder = 0;
MsgWrite(arg0, reinterpret_cast<const uint8_t*>(&placeholder), 4);
}
MsgWrite(arg0, arg1 + 8, 8);
ret = MsgWrite(arg0, arg1 + 0x10, 8);
if (mode == 0) {
uint32_t cur = *reinterpret_cast<uint32_t*>(*reinterpret_cast<uint8_t**>(arg0 + 8) + 0x10);
MsgSeek(arg0, saved);
uint32_t len = (cur - saved) - 4;
MsgWrite(arg0, reinterpret_cast<const uint8_t*>(&len), 4);
ret = MsgSeek(arg0, cur);
}
return ret;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0022E6D8
void HelperExtract8(uint8_t *, uint8_t *);
void HelperExtract32(uint8_t *, uint32_t *);
void HelperExtract64(uint8_t *, uint8_t *);
extern "C" void YellowAuto_0022e6d8(uint8_t* arg0, uint8_t* arg1) __asm__("_ZN2nn3nex32_DDL_GlobalTradeStationRecordKey7ExtractEPNS0_7MessageEPS1_");
extern "C" void YellowAuto_0022e6d8(uint8_t* arg0, uint8_t* arg1) {
*(arg1 + 4) = 0;
int8_t mode = *reinterpret_cast<int8_t*>(arg0 + 0x3B);
uint32_t len = 0;
if (mode == 0) {
HelperExtract8(arg0, arg1 + 4);
if (*(arg0 + 4) != 0) return;
HelperExtract32(arg0, &len);
if (*(arg0 + 4) != 0) return;
}
if (*(arg0 + 4) != 0) return;
uint32_t old = *reinterpret_cast<uint32_t*>(arg0 + 0x0C);
HelperExtract64(arg0, arg1 + 8);
if (*(arg0 + 4) != 0) return;
HelperExtract64(arg0, arg1 + 0x10);
if (*(arg0 + 4) != 0) return;
if (mode != 0) return;
uint32_t expected = len + old;
uint32_t cur = *reinterpret_cast<uint32_t*>(arg0 + 0x0C);
uint32_t total = *reinterpret_cast<uint32_t*>(*reinterpret_cast<uint8_t**>(arg0 + 8) + 0x10);
if ((expected < cur) || (total < expected)) {
*(arg0 + 4) = 1;
} else {
*reinterpret_cast<uint32_t*>(arg0 + 0x0C) = expected;
}
return;
}
#endif
