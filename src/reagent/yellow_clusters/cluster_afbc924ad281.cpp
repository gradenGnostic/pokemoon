// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003991C8
extern "C" uint32_t YellowAuto_003991c8(uint8_t* arg0, int32_t arg1) __asm__("_ZN5Field7Encount7PokeSet27IsPokemonSearchEncountAvoidEj");
extern "C" uint32_t YellowAuto_003991c8(uint8_t* arg0, int32_t arg1) {
uint32_t u = *(uint32_t*)(arg0 + 0x20C);
if ((u & 8U) != 0U) return 0;
uint32_t f = *(uint32_t*)(arg0 + 0x210);
uint32_t lv = (uint32_t)*(arg0 + 0x1FB);
if (((f & 256U) != 0U) && ((int32_t)(arg1 + 5) <= (int32_t)lv)) return 1;
if (((u & 2U) != 0U) || ((u & 4U) == 0U)) return 0;
if ((int32_t)arg1 < (int32_t)lv) return 1;
return 0;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00398D44
uint16_t sub_4935ac(const uint8_t*);
uint16_t sub_492dc0(const uint8_t*);
uint8_t sub_491c3c(const uint8_t*);
uint8_t sub_491008(const uint8_t*);
uint8_t sub_49206c(const uint8_t*);
void sub_398278(uint8_t*, uint32_t*, int8_t, void*, const uint8_t*);
uint8_t sub_31b6e4(const uint8_t*);
extern "C" void YellowAuto_00398d44(uint8_t* arg0, const uint8_t* arg1, void* arg2) __asm__("_ZN5Field7Encount7PokeSet24CheckEffectApplyIntruderERKN3pml8pokepara12PokemonParamEPN4gfl24math10SFMTRandomE");
extern "C" void YellowAuto_00398d44(uint8_t* arg0, const uint8_t* arg1, void* arg2) {
*(uint32_t*)(arg0 + 536) = 0; *(uint16_t*)(arg0 + 508) = sub_4935ac(arg1); *(uint16_t*)(arg0 + 510) = sub_492dc0(arg1); *(uint8_t*)(arg0 + 513) = sub_491c3c(arg1); *(uint8_t*)(arg0 + 512) = sub_491008(arg1); *(uint8_t*)(arg0 + 514) = sub_49206c(arg1); sub_398278(arg0, (uint32_t*)(arg0 + 532), *(int8_t*)(arg0 + 1264), arg2, (const uint8_t*)(arg0 + 508)); if (((*(uint32_t*)(arg0 + 536) & 256) != 0) || ((*(uint32_t*)(arg0 + 532) & 4) != 0)) *(uint8_t*)(arg0 + 515) = sub_31b6e4(arg1);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00399664
void sub_4b4ac8(uint8_t*);
void sub_397c4c(uint8_t*);
void __aeabi_memclr4(void*, uint32_t);
extern "C" void YellowAuto_00399664(uint8_t* arg0) __asm__("_ZN5Field7Encount7PokeSet5ClearEv");
extern "C" void YellowAuto_00399664(uint8_t* arg0) {
for (int32_t i = 0; i < 6; i++) { uint8_t* p = arg0 + i * 44; *(uint16_t*)(p + 0) = 0; *(uint16_t*)(p + 2) = 0; *(p + 4) = 1; *(p + 5) = 0; *(p + 6) = 0; *(p + 7) = 0; *(p + 16) = 0; *(p + 17) = 0; *(uint16_t*)(p + 18) = 65535; sub_4b4ac8(p + 8); for (int32_t j = 0; j < 6; j++) { *(uint16_t*)(p + 20 + j * 2) = 65535; *(p + 32 + j) = 0; } *(p + 38) = 0; *(p + 39) = 0; *(p + 40) = 0; *(p + 41) = 0; *(p + 42) = 0; *(p + 43) = 0; } for (int32_t i = 0; i < 4; i++) { uint8_t* q = arg0 + 264 + i * 52; *(uint32_t*)q = 0; *(q + 4) = 0; sub_397c4c(q + 6); } *(uint32_t*)(arg0 + 500) = 0; *(uint32_t*)(arg0 + 504) = 0; *(uint32_t*)(arg0 + 508) = 0; *(uint32_t*)(arg0 + 512) = 0; __aeabi_memclr4((void*)(arg0 + 540), 716); *(arg0 + 1256) = 0; *(uint32_t*)(arg0 + 476) = 0; *(uint32_t*)(arg0 + 472) = 1; *(uint32_t*)(arg0 + 480) = 0; *(uint32_t*)(arg0 + 484) = 0; *(uint32_t*)(arg0 + 488) = 65535; *(arg0 + 492) = 0; *(arg0 + 493) = 0; *(arg0 + 496) = 0; *(arg0 + 497) = 62; *(arg0 + 498) = 0; *(uint32_t*)(arg0 + 516) = 0; *(arg0 + 520) = 0; *(uint32_t*)(arg0 + 524) = 0; *(uint32_t*)(arg0 + 528) = 0; *(uint32_t*)(arg0 + 532) = 0; *(uint32_t*)(arg0 + 536) = 0; *(uint32_t*)(arg0 + 1260) = 0; *(arg0 + 1264) = 0;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00398C90
void FUN_00397c4c(uint8_t*);
void __aeabi_memcpy(uint8_t*, const uint8_t*, uint32_t);
extern "C" uint32_t YellowAuto_00398c90(uint8_t* arg0, uint16_t arg1, uint8_t arg2, uint32_t arg3, uint8_t arg4) __asm__("_ZN5Field7Encount7PokeSet23SetEncountDataFromParamE6MonsNohj14BattleEffectId");
extern "C" uint32_t YellowAuto_00398c90(uint8_t* arg0, uint16_t arg1, uint8_t arg2, uint32_t arg3, uint8_t arg4) {
uint8_t buf[44];
FUN_00397c4c(buf);
*(uint16_t*)buf = arg1;
buf[4] = (uint8_t)arg3;
buf[5] = arg2;
arg0[0x1F1] = arg4;
*(uint32_t*)(arg0 + 0x1DC) = 1;
*(uint32_t*)(arg0 + 0x1E0) = 1;
*(uint32_t*)(arg0 + 0x1D8) = 1;
__aeabi_memcpy(arg0, buf, 44);
uint32_t f1 = *(uint32_t*)(arg0 + 0x20C);
uint32_t lvl = (uint8_t)arg3;
uint32_t lim = arg0[0x1FB];
if ((f1 & 8) != 0) return 1;
uint32_t f2 = *(uint32_t*)(arg0 + 0x210);
if ((f2 & 256) != 0 && lvl + 5 <= lim) return 0;
if ((f1 & 2) == 0 && (f1 & 4) != 0 && lvl < lim) return 0;
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

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003980F8
uint32_t CheckEventFlag(const uint8_t*, uint32_t);
bool CanUseMushiyoke(const uint8_t*);
uint32_t Check(const uint8_t*, uint32_t, uint32_t);
uint32_t FUN_00493dc0(const uint8_t*, uint32_t);
void GetMemberPointer(const uint8_t*, uint32_t);
extern "C" void YellowAuto_003980f8(uint8_t* arg0, const uint8_t* arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, bool arg5) __asm__("_ZN5Field7Encount7PokeSet10InitializeEPN7GameSys11GameManagerENS0_7Encount4TypeEjNS_7weather11WeatherKindEb");
extern "C" void YellowAuto_003980f8(uint8_t* arg0, const uint8_t* arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, bool arg5) {
uint32_t v5i = *(uint32_t*)(arg1 + 0x24);
const uint8_t* v5 = (const uint8_t*)v5i;
uint32_t v54i = *(uint32_t*)(v5 + 4);
const uint8_t* v54 = (const uint8_t*)v54i;
*(uint32_t*)(arg0 + 0x1E8) = arg3;
*(uint8_t*)(arg0 + 0x1EC) = (uint8_t)arg2;
*(uint32_t*)(arg0 + 0x204) = *(uint32_t*)(v54 + 0xEA8);
*(uint8_t*)(arg0 + 0x208) = (uint8_t)*(uint32_t*)(v54 + 0x37C4);
uint32_t f = *(uint32_t*)(arg0 + 0x20C);
if (*(uint8_t*)(arg0 + 0x1EC) == 1) f |= 8u;
f = (f & 0xFFFFFFFDu) | ((uint32_t)arg5 << 1);
*(uint32_t*)(arg0 + 0x20C) = f;
const uint8_t* ew = (const uint8_t*)(v54 + 0x1590);
uint32_t ev = CheckEventFlag(ew, *(uint32_t*)0x00398274);
*(uint32_t*)(arg0 + 0x20C) = (*(uint32_t*)(arg0 + 0x20C) & 0xFFFFFFFEu) | ev;
bool can = CanUseMushiyoke(ew);
uint32_t g = *(uint32_t*)(arg0 + 0x20C);
if (can) g &= 0xFFFFFFFBu;
else g |= 4u;
*(uint32_t*)(arg0 + 0x20C) = g;
uint32_t chk = Check((const uint8_t*)(v54 + 8), 0x278u, 1u);
*(uint32_t*)(arg0 + 0x20C) = ((*(uint32_t*)(arg0 + 0x20C) & 0xFFFFFFEFu) | (chk << 4)) & 0xFFFFFF1Fu;
const uint8_t* party = (const uint8_t*)*(uint32_t*)(v5 + 12);
uint32_t slot = FUN_00493dc0(party, 1u);
if (slot != 6u) GetMemberPointer(party, slot);
*(uint8_t*)(arg0 + 0x4F0) = (uint8_t)arg4;
*(uint32_t*)(arg0 + 0x214) = *(uint32_t*)(arg0 + 0x20C);
}
#endif
