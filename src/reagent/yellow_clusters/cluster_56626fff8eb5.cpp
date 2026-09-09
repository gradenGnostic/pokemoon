// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0042AD8C
void* heap_alloc(uint32_t, void*);
void* buf_init(void*, uint32_t, void*);
void* party_init(void*, void*);
extern "C" uint8_t* YellowAuto_0042ad8c(uint8_t* arg0, void* arg1) __asm__("_ZN8PokeTool11BattlePartyC1EPN4gfl24heap11CtrHeapBaseE");
extern "C" uint8_t* YellowAuto_0042ad8c(uint8_t* arg0, void* arg1) {
arg0[8] = 0;
arg0[9] = 0;
*(void**)(arg0 + 0) = heap_alloc(16, arg1);
*(void**)(arg0 + 0) = (*(void**)(arg0 + 0) == (void*)0 ? (void*)0 : buf_init(*(void**)(arg0 + 0), 11, arg1));
*(void**)(arg0 + 4) = heap_alloc(28, arg1);
*(void**)(arg0 + 4) = (*(void**)(arg0 + 4) == (void*)0 ? (void*)0 : party_init(*(void**)(arg0 + 4), arg1));
return arg0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0042AE28
void virt_invoke(void*, uint32_t);
void* party_destroy(void*);
void heap_free(void*);
extern "C" uint8_t* YellowAuto_0042ae28(uint8_t* arg0) __asm__("_ZN8PokeTool11BattlePartyD1Ev");
extern "C" uint8_t* YellowAuto_0042ae28(uint8_t* arg0) {
if (*(void**)(arg0 + 0) != (void*)0) virt_invoke(*(void**)(arg0 + 0), 4);
if (*(void**)(arg0 + 0) != (void*)0) *(void**)(arg0 + 0) = (void*)0;
if (*(void**)(arg0 + 4) != (void*)0) heap_free(party_destroy(*(void**)(arg0 + 4)));
if (*(void**)(arg0 + 4) != (void*)0) *(void**)(arg0 + 4) = (void*)0;
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

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0042AB18
bool IsTeamLock(const uint8_t* arg0, int32_t arg1);
const uint16_t* GetTeamName(const uint8_t* arg0, int32_t arg1);
void SetStr(void* arg0, const uint16_t* arg1);
uint32_t GetTeamPokePos(const uint8_t* arg0, int32_t arg1, int32_t arg2);
void* GetPokemon(uint8_t* arg0, int32_t arg1, int32_t arg2, void* arg3);
int32_t CheckPokemon(uint8_t* arg0, int32_t arg1, int32_t arg2, void* arg3, int32_t arg4);
void* OperatorNew(uint32_t arg0, void* arg1);
void* PokemonParamCtor(void* arg0, void* arg1, void* arg2);
void AddMember(void* arg0, void* arg1);
void* GetInstance();
extern "C" int32_t YellowAuto_0042ab18(uint8_t* arg0, const uint8_t* arg1, uint8_t* arg2, int32_t arg3, void* arg4) __asm__("_ZN8PokeTool11BattleParty17CreateBattlePartyEPKN8Savedata3BOXEPNS1_10BoxPokemonEiPN4gfl24heap11CtrHeapBaseE");
extern "C" int32_t YellowAuto_0042ab18(uint8_t* arg0, const uint8_t* arg1, uint8_t* arg2, int32_t arg3, void* arg4) {
if (arg3 == *(int32_t*)0x42AD88) return 0;
if (arg3 == 128) GetInstance();
if (arg3 == 255) GetInstance();
*(uint8_t*)(arg0 + 8) = (uint8_t)IsTeamLock(arg1, arg3);
SetStr(*(void**)(arg0 + 0), GetTeamName(arg1, arg3));
int32_t count = 0;
for (int32_t i = 0; i < 6; ++i) {
uint32_t pos = GetTeamPokePos(arg1, arg3, i);
if (pos == *(uint32_t*)0x42AD88) continue;
int32_t hi = (int32_t)(pos >> 8);
int32_t lo = (int32_t)(pos & 255);
void* cp = GetPokemon(arg2, hi, lo, arg4);
int32_t ok = CheckPokemon(arg2, hi, lo, cp, 0);
if (ok != 0) {
void* mem = OperatorNew(16, arg4);
void* obj = (void*)0;
if (mem != (void*)0) obj = PokemonParamCtor(mem, arg4, cp);
AddMember(*(void**)(arg0 + 4), obj);
if (obj != (void*)0) ((void (**)(void*))(*(void**)obj))[2](obj);
count += 1;
}
if (cp != (void*)0) ((void (**)(void*))(*(void**)cp))[2](cp);
}
return count;
}
#endif
