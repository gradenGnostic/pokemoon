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
