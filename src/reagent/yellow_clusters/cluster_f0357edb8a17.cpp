// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003C4394
void ReqInit(void *);
void SyncArcFileClose(void *, void *);
extern "C" void YellowAuto_003c4394(uint8_t* arg0) __asm__("_ZN6AppLib4Tool15PokeCapAccesser19ClosePokemonCaptureEv");
extern "C" void YellowAuto_003c4394(uint8_t* arg0) {
uint8_t b[136];
ReqInit(b);
*(uint32_t*)(b + 108) = 0xf0;
*(uint8_t*)(b + 112) = 0x10;
uint32_t a = *(uint32_t*)(arg0 + 4);
uint32_t o = *(uint32_t*)(a + 12);
uint32_t vt = *(uint32_t*)o;
uint32_t fn = *(uint32_t*)(vt + 52);
*(uint32_t*)(b + 116) = ((uint32_t (*)(uint32_t))fn)(o);
void* m = (void*)(*(uint32_t*)(arg0 + 8));
SyncArcFileClose(m, (void*)(b + 104));
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003C42A0
void ReqInit(void *);
void SyncArcFileOpen(void *, void *);
extern "C" void YellowAuto_003c42a0(uint8_t* arg0) __asm__("_ZN6AppLib4Tool15PokeCapAccesser18OpenPokemonCaptureEv");
extern "C" void YellowAuto_003c42a0(uint8_t* arg0) {
uint8_t b[136];
ReqInit(b);
*(uint32_t*)(b + 4) = 0xf0;
*(uint8_t*)(b + 8) = 0x10;
uint32_t a = *(uint32_t*)(arg0 + 4);
uint32_t o = *(uint32_t*)(a + 12);
uint32_t vt = *(uint32_t*)o;
uint32_t fn = *(uint32_t*)(vt + 52);
*(uint32_t*)(b + 12) = ((uint32_t (*)(uint32_t))fn)(o);
*(uint32_t*)(b + 20) = ((uint32_t (*)(uint32_t))fn)(o);
void* m = (void*)(*(uint32_t*)(arg0 + 8));
SyncArcFileOpen(m, (void*)b);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003C4308
void ReqInit(void *);
void SyncArcFileLoadData(void *, void *);
extern "C" void YellowAuto_003c4308(uint8_t* arg0, uint32_t arg1, uint32_t arg2) __asm__("_ZN6AppLib4Tool15PokeCapAccesser18PokemonCaptureReadEiPPv");
extern "C" void YellowAuto_003c4308(uint8_t* arg0, uint32_t arg1, uint32_t arg2) {
uint8_t b[136];
ReqInit(b);
*(uint32_t*)(b + 48) = 0xf0;
*(uint32_t*)(b + 52) = arg1;
*(uint8_t*)(b + 57) = 0x10;
*(uint32_t*)(b + 60) = arg2;
*(uint32_t*)(b + 72) = *(uint32_t*)(*(uint32_t*)(arg0 + 4) + 8);
*(uint32_t*)(b + 76) = 0x80;
uint32_t a = *(uint32_t*)(arg0 + 4);
uint32_t o = *(uint32_t*)(a + 12);
uint32_t vt = *(uint32_t*)o;
uint32_t fn = *(uint32_t*)(vt + 52);
*(uint32_t*)(b + 80) = ((uint32_t (*)(uint32_t))fn)(o);
*(uint32_t*)(b + 84) = ((uint32_t (*)(uint32_t))fn)(o);
void* m = (void*)(*(uint32_t*)(arg0 + 8));
SyncArcFileLoadData(m, (void*)(b + 44));
}
#endif
