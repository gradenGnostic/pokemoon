// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003D0114
void Evolve(void*, uint16_t, uint32_t);
void IncRecord(uint32_t);
uint16_t GetMonsNo(void*);
bool Check(void*, uint16_t, uint32_t);
uint32_t Sub(void*, uint16_t, uint32_t);
void* FUN_003188f4(void*, void*);
void UpdatePokeAtPokeGet(void*, void*, uint32_t, void*);
void FUN_00445d8c(void*, void*, uint32_t, uint32_t, uint32_t, uint32_t, void*);
uint32_t CallVirtual(void*, uint32_t);
extern "C" uint32_t YellowAuto_003d0114(uint8_t* arg0, void* arg1) __asm__("_ZN6NetApp9Evolution9APP_PARAM8DoEvolveEPN4gfl24heap11CtrHeapBaseE");
extern "C" uint32_t YellowAuto_003d0114(uint8_t* arg0, void* arg1) {
void* _t = (void*)(*(uint32_t*)(arg0 + 4));
uint16_t _e = *(uint16_t*)(arg0 + 8);
uint32_t _r = *(uint32_t*)(arg0 + 12);
Evolve(_t, _e, _r);
IncRecord(9);
IncRecord(117);
uint16_t _c = GetMonsNo(_t);
uint32_t _q = *(uint32_t*)0x003D0230;
if ((uint32_t)_c != _q) return (uint32_t)_c;
void* _it = (void*)(*(uint32_t*)(arg0 + 20));
if (!Check(_it, 4, 1)) return 0;
void* _pa = (void*)(*(uint32_t*)(arg0 + 16));
uint32_t _mc = (uint32_t)*(uint8_t*)((uint8_t*)_pa + 24);
uint32_t _va = 6 - _mc;
uint32_t _rv = *(uint32_t*)(arg0 + 24);
if (_rv >= _va) return _va;
void* _nk = FUN_003188f4(arg1, _t);
UpdatePokeAtPokeGet(arg1, _nk, 4, (void*)0);
uint32_t _rt = 0;
FUN_00445d8c(arg1, _nk, 1, 2, 0, 0, (void*)&_rt);
IncRecord(6);
IncRecord(113);
uint32_t _sb = Sub(_it, 4, 1);
if (_nk == (void*)0) return _sb;
return CallVirtual(_nk, 8);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003D0234
int32_t FUN_0031cfc8(void*, uint32_t*, uint16_t*, uint16_t*);
int32_t LearnNewWazaOnCurrentLevel(void*, int32_t*, uint16_t*, uint16_t*);
extern "C" uint32_t YellowAuto_003d0234(uint8_t* arg0) __asm__("_ZN6NetApp9Evolution9APP_PARAM8NextWazaEv");
extern "C" uint32_t YellowAuto_003d0234(uint8_t* arg0) {
*(uint16_t*)(arg0 + 40) = 0;
*(uint16_t*)(arg0 + 32) = 0;
void* _tt = (void*)(*(uint32_t*)(arg0 + 4));
int32_t _cc;
_lblA: _cc = FUN_0031cfc8(_tt, (uint32_t*)(arg0 + 28), (uint16_t*)(arg0 + 40), (uint16_t*)(arg0 + 48));
if (_cc == 2) goto _lblA;
if (_cc == 0) return 1;
if (_cc == 1) return 2;
_lblB: _cc = LearnNewWazaOnCurrentLevel(_tt, (int32_t*)(arg0 + 44), (uint16_t*)(arg0 + 40), (uint16_t*)(arg0 + 48));
if (_cc == 2) goto _lblB;
if (_cc == 0) return 1;
if (_cc == 1) return 2;
return 0;
}
#endif
