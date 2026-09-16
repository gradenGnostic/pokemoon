// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A6F8C
extern "C" uint8_t* YellowAuto_004a6f8c(uint8_t* arg0, uint32_t arg1) __asm__("_ZNK8Savedata15MysteryGiftSave15GetItemGiftDataEj");
extern "C" uint8_t* YellowAuto_004a6f8c(uint8_t* arg0, uint32_t arg1) {
if (arg1 >= 0x30U) return 0; if (arg0 + arg1 * 0x108 == (uint8_t *)0xfffffefc) return 0; if ((arg0 + arg1 * 0x108)[0x155] != 1) return 0; return arg0 + arg1 * 0x108 + 0x16c;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A6FCC
extern "C" uint8_t* YellowAuto_004a6fcc(uint8_t* arg0, uint32_t arg1) __asm__("_ZNK8Savedata15MysteryGiftSave15GetPokeGiftDataEj");
extern "C" uint8_t* YellowAuto_004a6fcc(uint8_t* arg0, uint32_t arg1) {
if (arg1 >= 0x30U) return 0; if (arg0 + arg1 * 0x108 == (uint8_t *)0xfffffefc) return 0; if ((arg0 + arg1 * 0x108)[0x155] != 0) return 0; return arg0 + arg1 * 0x108 + 0x16c;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043BC84
extern "C" int32_t YellowAuto_0043bc84(uint8_t* arg0) __asm__("_ZN8Savedata15MysteryGiftSave12GetBPGiftNumEv");
extern "C" int32_t YellowAuto_0043bc84(uint8_t* arg0) {
uint32_t occ = (uint32_t)0;
for (uint32_t i = (uint32_t)0; i < (uint32_t)0x30; ++i) {
if (*(uint16_t*)(arg0 + i * 0x108 + 0x106) != (uint16_t)0) {
occ += (uint32_t)1;
}
}
int32_t cnt = (int32_t)0;
for (uint32_t i = (uint32_t)0; i < occ; ++i) {
uint8_t t = (uint8_t)0;
if (i < (uint32_t)0x30) {
t = *(arg0 + i * 0x108 + 0x155);
}
if (t != (uint8_t)3) {
continue;
}
if (i >= (uint32_t)0x30) {
continue;
}
uint8_t f = *(arg0 + i * 0x108 + 0x156);
if ((uint8_t)(f & (uint8_t)2) == (uint8_t)0) {
cnt += (int32_t)1;
}
}
return cnt;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043C0D4
extern "C" int32_t YellowAuto_0043c0d4(uint8_t* arg0) __asm__("_ZN8Savedata15MysteryGiftSave14GetItemGiftNumEv");
extern "C" int32_t YellowAuto_0043c0d4(uint8_t* arg0) {
uint32_t occ = (uint32_t)0;
for (uint32_t i = (uint32_t)0; i < (uint32_t)0x30; ++i) {
if (*(uint16_t*)(arg0 + i * 0x108 + 0x106) != (uint16_t)0) {
occ += (uint32_t)1;
}
}
int32_t cnt = (int32_t)0;
for (uint32_t i = (uint32_t)0; i < occ; ++i) {
uint8_t t = (uint8_t)0;
if (i < (uint32_t)0x30) {
t = *(arg0 + i * 0x108 + 0x155);
}
if (t != (uint8_t)1) {
continue;
}
if (i >= (uint32_t)0x30) {
continue;
}
uint8_t f = *(arg0 + i * 0x108 + 0x156);
if ((uint8_t)(f & (uint8_t)2) == (uint8_t)0) {
cnt += (int32_t)1;
}
}
return cnt;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043C184
extern "C" int32_t YellowAuto_0043c184(uint8_t* arg0) __asm__("_ZN8Savedata15MysteryGiftSave14GetMameGiftNumEv");
extern "C" int32_t YellowAuto_0043c184(uint8_t* arg0) {
uint32_t occ = (uint32_t)0;
for (uint32_t i = (uint32_t)0; i < (uint32_t)0x30; ++i) {
if (*(uint16_t*)(arg0 + i * 0x108 + 0x106) != (uint16_t)0) {
occ += (uint32_t)1;
}
}
int32_t cnt = (int32_t)0;
for (uint32_t i = (uint32_t)0; i < occ; ++i) {
uint8_t t = (uint8_t)0;
if (i < (uint32_t)0x30) {
t = *(arg0 + i * 0x108 + 0x155);
}
if (t != (uint8_t)2) {
continue;
}
if (i >= (uint32_t)0x30) {
continue;
}
uint8_t f = *(arg0 + i * 0x108 + 0x156);
if ((uint8_t)(f & (uint8_t)2) == (uint8_t)0) {
cnt += (int32_t)1;
}
}
return cnt;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043C234
extern "C" int32_t YellowAuto_0043c234(uint8_t* arg0) __asm__("_ZN8Savedata15MysteryGiftSave14GetPokeGiftNumEv");
extern "C" int32_t YellowAuto_0043c234(uint8_t* arg0) {
uint32_t occ = (uint32_t)0;
for (uint32_t i = (uint32_t)0; i < (uint32_t)0x30; ++i) {
if (*(uint16_t*)(arg0 + i * 0x108 + 0x106) != (uint16_t)0) {
occ += (uint32_t)1;
}
}
int32_t cnt = (int32_t)0;
for (uint32_t i = (uint32_t)0; i < occ; ++i) {
uint8_t t = (uint8_t)0;
if (i < (uint32_t)0x30) {
t = *(arg0 + i * 0x108 + 0x155);
}
if (t != (uint8_t)0) {
continue;
}
if (i >= (uint32_t)0x30) {
continue;
}
uint8_t f = *(arg0 + i * 0x108 + 0x156);
if ((uint8_t)(f & (uint8_t)2) == (uint8_t)0) {
cnt += (int32_t)1;
}
}
return cnt;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043BF00
extern "C" void YellowAuto_0043bf00(uint8_t* arg0, uint32_t arg1, uint32_t arg2) __asm__("_ZN8Savedata15MysteryGiftSave12SwapGiftDataEjj");
extern "C" void YellowAuto_0043bf00(uint8_t* arg0, uint32_t arg1, uint32_t arg2) {
uint32_t c1 = 0;
for (uint32_t i = 0; i < 48; ++i) {
uint16_t v = *reinterpret_cast<uint16_t*>(arg0 + 0x104 + i * 0x108 + 2);
if (v != 0) { c1 = c1 + 1; }
}
if (!(arg1 < c1)) { return; }
uint32_t c2 = 0;
for (uint32_t i = 0; i < 48; ++i) {
uint16_t v = *reinterpret_cast<uint16_t*>(arg0 + 0x104 + i * 0x108 + 2);
if (v != 0) { c2 = c2 + 1; }
}
if (!(arg2 < c2)) { return; }
if (!(arg1 < 48)) { return; }
uint8_t tmp[264];
for (uint32_t k = 0; k < 0x108; ++k) { tmp[k] = *(arg0 + 0x104 + arg1 * 0x108 + k); }
for (uint32_t k = 0; k < 0x108; ++k) { *(arg0 + 0x104 + arg1 * 0x108 + k) = *(arg0 + 0x104 + arg2 * 0x108 + k); }
for (uint32_t k = 0; k < 0x108; ++k) { *(arg0 + 0x104 + arg2 * 0x108 + k) = tmp[k]; }
return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043BFF0
extern "C" uint32_t YellowAuto_0043bff0(uint8_t* arg0, uint32_t arg1, bool arg2) __asm__("_ZN8Savedata15MysteryGiftSave14DeleteGiftDataEjb");
extern "C" uint32_t YellowAuto_0043bff0(uint8_t* arg0, uint32_t arg1, bool arg2) {
uint32_t count = 0;
for (uint32_t i = 0; i < 48; ++i) {
uint16_t v = *reinterpret_cast<uint16_t*>(arg0 + 0x104 + i * 0x108 + 2);
if (v != 0) { count = count + 1; }
}
if (!(arg1 < count)) { return 0; }
uint8_t b = *(arg0 + 0x104 + arg1 * 0x108 + 0x52);
uint32_t flag = (static_cast<uint32_t>(b & 2) >> 1);
if (!arg2) { return flag; }
if (flag == 0) { return 0; }
for (uint32_t j = arg1; j < count; ++j) {
if ((j + 1 < 48) && (j < 48)) {
for (uint32_t k = 0; k < 0x108; ++k) { *(arg0 + 0x104 + j * 0x108 + k) = *(arg0 + 0x104 + (j + 1) * 0x108 + k); }
}
}
for (uint32_t k = 0; k < 0x108; ++k) { *(arg0 + 0x317C + k) = 0; }
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

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043C444
void __aeabi_memcpy4(uint8_t*, const uint8_t*, uint32_t);
void FUN_00175df8(uint8_t*);
int32_t FUN_00478bd8(uint8_t*);
int32_t FUN_00478c34(uint8_t*, int32_t, int32_t, int32_t);
int32_t FUN_00478a7c(uint8_t*, int32_t);
extern "C" uint32_t YellowAuto_0043c444(uint8_t* arg0, const uint8_t* arg1) __asm__("_ZN8Savedata15MysteryGiftSave16PushBackGiftDataEPKNS0_22MYSTERY_GIFT_RECV_DATAE");
extern "C" uint32_t YellowAuto_0043c444(uint8_t* arg0, const uint8_t* arg1) {
uint8_t flags = *(arg1 + 0x25A);
uint16_t gid = *(const uint16_t*)(arg1 + 0x208);
if ((flags & 1) != 0) {
uint32_t sel = 0;
for (uint32_t i = 0; i < 64; ++i) {
if (gid < i * 32 + 32) { sel = i; break; }
}
uint32_t* p = (uint32_t*)(arg0 + 4 + sel * 4);
*p = *p | ((uint32_t)1 << (gid & 31));
} else {
for (uint32_t i = 0; i < 49; ++i) {
*(uint16_t*)(arg0 + 0x3284 + i * 4) = *(uint16_t*)(arg0 + 0x3288 + i * 4);
*(arg0 + 0x3286 + i * 4) = *(arg0 + 0x328A + i * 4);
}
*(uint16_t*)(arg0 + 0x3348) = gid;
*(arg0 + 0x334A) = *(arg1 + 0x201);
uint32_t cnt = 0;
for (uint32_t i = 0; i < 50; ++i) {
if (*(uint16_t*)(arg0 + 0x3284 + i * 4) == gid && *(arg0 + 0x3286 + i * 4) != 0) { cnt = cnt + 1; }
}
uint8_t lim = *(arg1 + 0x204);
if (lim <= cnt) {
for (uint32_t i = 0; i < 50; ++i) {
if (*(uint16_t*)(arg0 + 0x3284 + i * 4) == gid) {
*(uint16_t*)(arg0 + 0x3284 + i * 4) = 0;
*(arg0 + 0x3286 + i * 4) = 0;
}
}
}
}
if ((flags & 4) != 0) {
uint32_t v = *(const uint32_t*)(arg1 + 0x254);
uint32_t y = v / 10000;
uint32_t md = v - y * 10000;
uint32_t mo = md / 100;
uint32_t d = md - mo * 100;
uint16_t packed = (uint16_t)(((d << 11) | ((mo & 15) << 7)) | (y & 127));
uint32_t hit = 0;
for (uint32_t i = 0; i < 10; ++i) {
if (*(uint16_t*)(arg0 + 0x3354 + i * 4) == gid) {
*(uint16_t*)(arg0 + 0x3356 + i * 4) = packed;
hit = 1;
break;
}
}
if (hit == 0) {
for (uint32_t i = 0; i < 10; ++i) {
uint16_t cur = *(uint16_t*)(arg0 + 0x3356 + i * 4);
uint32_t cv = (uint32_t)(cur & 127) * 10000 + (uint32_t)((cur >> 7) & 15) * 100 + (uint32_t)(cur >> 11);
if (v <= cv) {
*(uint16_t*)(arg0 + 0x3354 + i * 4) = gid;
*(uint16_t*)(arg0 + 0x3356 + i * 4) = packed;
break;
}
}
}
}
uint32_t nStamp = 0;
for (uint32_t i = 0; i < 48; ++i) {
if (*(uint16_t*)(arg0 + 0x106 + i * 0x108) != 0) { nStamp = nStamp + 1; }
}
uint32_t nStore = 0;
for (uint32_t i = 0; i < 48; ++i) {
if (*(uint16_t*)(arg0 + 0x106 + i * 0x108) != 0) { nStore = nStore + 1; }
}
if (nStore < 48) {
__aeabi_memcpy4(arg0 + nStore * 0x108 + 0x104, arg1 + 0x208, 264);
uint8_t tmp[8];
FUN_00175df8(tmp);
int32_t a = FUN_00478bd8(tmp);
int32_t b = a / 100;
int32_t c = FUN_00478c34(tmp, b * -25, 10000, -25);
int32_t e = FUN_00478a7c(tmp, c * 9);
*(int32_t*)(arg0 + nStamp * 0x108 + 0x150) = e + (a - b * 100) * 10000 + c * 100;
return 1;
}
return 0;
}
#endif
