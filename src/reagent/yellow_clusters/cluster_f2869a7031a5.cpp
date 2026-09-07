// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0038614C
uint32_t SetReserveScript(void*, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
uint32_t GFLassert();
extern "C" uint32_t YellowAuto_0038614c(uint8_t* arg0, void* arg1) __asm__("_ZN5Field13PokemonSearch12DataAccessor19ReserveSearchBattleEPNS_11FieldScript17FieldScriptSystemE");
extern "C" uint32_t YellowAuto_0038614c(uint8_t* arg0, void* arg1) {
uint8_t* c = (uint8_t*)(*(uint32_t*)(arg0 + 8));
if (c == (uint8_t*)0) return GFLassert();
uint8_t t = *(c + 16);
uint32_t s;
if (t == 0) s = *(uint32_t*)0x003861C4;
else if (t == 1) s = *(uint32_t*)0x003861C8;
else return GFLassert();
return SetReserveScript(arg1, s, *(uint32_t*)(c + 12), *(uint32_t*)(c + 8), 0, 0);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00385FAC
void CallScript(void*, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
void GFLassert();
extern "C" void YellowAuto_00385fac(uint8_t* arg0, void* arg1) __asm__("_ZN5Field13PokemonSearch12DataAccessor16CallSearchBattleEPN7GameSys11GameManagerE");
extern "C" void YellowAuto_00385fac(uint8_t* arg0, void* arg1) {
uint8_t* c = (uint8_t*)(*(uint32_t*)(arg0 + 8));
if (c == (uint8_t*)0) GFLassert();
if (c == (uint8_t*)0) return;
uint8_t t = *(c + 16);
uint32_t s = 0;
if (t == 0) s = *(uint32_t*)0x00386034;
if (t == 1) s = *(uint32_t*)0x00386038;
if (t != 0) if (t != 1) GFLassert();
if (t != 0) if (t != 1) return;
CallScript(arg1, s, 0, 0, *(uint32_t*)(c + 12), *(uint32_t*)(c + 8), 0, 0);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0038603C
uint32_t CheckIDFlagRenge(uint32_t);
uint32_t CheckEventFlag(const uint8_t*, uint32_t);
uint32_t GetPublicRand(uint32_t);
extern "C" bool YellowAuto_0038603c(uint8_t* arg0, uint16_t arg1, uint32_t arg2, const uint8_t* arg3) __asm__("_ZN5Field13PokemonSearch12DataAccessor18IsSearchBattleCallEtjPKNS_9EventWorkE");
extern "C" bool YellowAuto_0038603c(uint8_t* arg0, uint16_t arg1, uint32_t arg2, const uint8_t* arg3) {
uint8_t* b = (uint8_t*)(*(uint32_t*)(arg0 + 4));
uint8_t* f = (uint8_t*)0;
uint32_t n = b == (uint8_t*)0 ? 0 : *(uint32_t*)b;
uint32_t i = 0;
for (; i < n; i = i + 1)
if (*(uint16_t*)(b + 4 + i * 20 + 2) == arg1)
if (*(uint32_t*)(b + 4 + i * 20 + 4) == arg2)
if (CheckIDFlagRenge(*(uint32_t*)(b + 12 + i * 20) & 65535) != 0)
if (CheckEventFlag(arg3, *(uint32_t*)(b + 12 + i * 20) & 65535) != 0)
if (f == (uint8_t*)0)
f = b + 4 + i * 20;
*(uint32_t*)(arg0 + 8) = (uint32_t)f;
if (f == (uint8_t*)0) return false;
uint8_t p = *(f + 17);
uint32_t r = GetPublicRand(100);
return r < p;
}
#endif
