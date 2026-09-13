// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003CFF50
uint16_t FUN_00277be0(const uint8_t*, uint32_t, uint32_t);
void SetStr(uint8_t*, const uint16_t*);
uint32_t DAT_003d00dc;
extern "C" void YellowAuto_003cff50(uint32_t arg0, uint32_t arg1, uint8_t* arg2, bool arg3) __asm__("_ZN6NetApp4Util14ConvertUtility8U64ToStrEyPN4gfl23str6StrBufEb");
extern "C" void YellowAuto_003cff50(uint32_t arg0, uint32_t arg1, uint8_t* arg2, bool arg3) {
uint32_t pair[2];
uint16_t tmp[16];
uint16_t out[32];
uint32_t lo;
uint32_t hi;
uint32_t acc;
uint16_t chk;
uint32_t v;
uint32_t c;
int32_t idx;
uint32_t i;
uint32_t j;
uint32_t k;
pair[0] = arg0;
pair[1] = arg1;
chk = FUN_00277be0((const uint8_t*)pair, 8u, DAT_003d00dc);
lo = arg0;
hi = arg1;
acc = 0u;
for (i = 0u; i < 16u; ++i) tmp[i] = 0u;
idx = 15;
while (1) {
v = lo & 31u;
c = v < 10u ? v + 48u : v + 55u;
if (c == 48u) c = 87u;
else if (c == 79u) c = 90u;
else if (c == 49u) c = 88u;
else if (c == 73u) c = 89u;
tmp[idx] = (uint16_t)c;
lo = (hi << 27) | (lo >> 5);
hi = hi >> 5;
if (idx == 4) {
acc = ((uint32_t)chk >> 28) | (acc << 4);
lo = lo | ((uint32_t)chk << 4);
hi = hi | acc;
idx = 3;
continue;
}
if (idx == 0) break;
idx = idx - 1;
}
if (arg3) {
j = 0u;
k = 0u;
for (i = 0u; i < 16u; ++i) {
if (k != 0u && (k & 3u) == 0u) { out[j] = 45u; j = j + 1u; }
out[j] = tmp[i]; j = j + 1u; k = k + 1u;
}
out[j] = 0u;
} else {
for (i = 0u; i < 16u; ++i) out[i] = tmp[i];
out[16] = 0u;
}
SetStr(arg2, out);
return;
}
#endif
