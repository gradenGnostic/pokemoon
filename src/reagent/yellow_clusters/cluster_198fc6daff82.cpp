// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0015A838
void F00159F38(uint8_t*);
void* F0015A51C(uint8_t*);
void F0030181C(void*);
uint32_t F003577A8();
void F0034497C(uint32_t, void*);
extern "C" void YellowAuto_0015a838(uint8_t* arg0) __asm__("_ZN10BattleInst17BattleInstManager6DeleteEv");
extern "C" void YellowAuto_0015a838(uint8_t* arg0) {
if (*(uint32_t*)arg0 != 0) {
  F00159F38(*(uint8_t**)arg0);
  if (*(uint32_t*)arg0 != 0) {
    void* t = F0015A51C(*(uint8_t**)arg0);
    F0030181C(t);
    *(uint32_t*)arg0 = 0;
  }
  uint32_t a = F003577A8();
  F0034497C(a, *(void**)(arg0 + 4));
  *(uint32_t*)(arg0 + 4) = 0;
}
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0015A780
uint32_t F003577A8();
void* F004A3220(void*);
void* F00344B3C(uint32_t, void*, const void*, void*, int32_t);
void F00344888(uint32_t, void*, int32_t);
void* F00107374(int32_t);
void* F004B4A00(uint32_t, void*, int32_t);
uint8_t* F0015A140(uint8_t*, void*, void*);
void F00159EAC(uint8_t*);
extern uint32_t D0015A834;
extern "C" void YellowAuto_0015a780(uint8_t* arg0, void* arg1) __asm__("_ZN10BattleInst17BattleInstManager6CreateEPN7GameSys11GameManagerE");
extern "C" void YellowAuto_0015a780(uint8_t* arg0, void* arg1) {
if (*(uint32_t*)arg0 == 0) {
  uint32_t a = F003577A8();
  void* b = F004A3220(arg1);
  void* c = F00344B3C(a, b, (const void*)"FieldBattleInstEvent.cro", (void*)0, 1);
  *(void**)(arg0 + 4) = c;
  F00344888(a, c, 1);
  void* d = F00107374(11);
  void* e = F004B4A00(D0015A834, d, 1);
  uint8_t* f = (uint8_t*)0;
  if (e != (void*)0) {
    f = F0015A140((uint8_t*)e, arg1, d);
  }
  *(uint8_t**)arg0 = f;
  F00159EAC(f);
}
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0015A760
extern uint32_t D0015A77C;
extern "C" uint8_t* YellowAuto_0015a760(uint8_t* arg0, int32_t arg1) __asm__("_ZN10BattleInst17BattleInstManager12GetModelDataEi");
extern "C" uint8_t* YellowAuto_0015a760(uint8_t* arg0, int32_t arg1) {
return *(uint8_t**)arg0 + D0015A77C + arg1 * (int32_t)44;
}
#endif
