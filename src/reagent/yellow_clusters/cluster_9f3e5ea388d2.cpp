// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003A9828
void* fun_3ad9d8(void);
void fun_1076a8(void*);
void fun_107730(void*);
bool fun_49fc2c(void*);
extern "C" bool YellowAuto_003a9828() __asm__("_ZN5Sound11HaveCommandEv");
extern "C" bool YellowAuto_003a9828() {
void* _l = fun_3ad9d8();
fun_1076a8(_l);
uint32_t _g = *(const uint32_t*)0x3A9858u;
void* _m = (void*)(*(const uint32_t*)_g);
bool _r = fun_49fc2c(_m);
fun_107730(_l);
return _r;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003AA76C
void* fun_3ad9d8(void);
void fun_1076a8(void*);
void fun_107730(void*);
bool fun_49fd20(void*);
extern "C" bool YellowAuto_003aa76c() __asm__("_ZN5Sound12IsBGMPlayingEv");
extern "C" bool YellowAuto_003aa76c() {
void* _l = fun_3ad9d8();
fun_1076a8(_l);
uint32_t _g = *(const uint32_t*)0x3AA79Cu;
void* _m = (void*)(*(const uint32_t*)_g);
bool _r = fun_49fd20(_m);
fun_107730(_l);
return _r;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003AA730
void* fun_3ad9d8(void);
void fun_1076a8(void*);
void fun_107730(void*);
bool fun_49fce0(void*, uint32_t);
extern "C" bool YellowAuto_003aa730(uint32_t arg0) __asm__("_ZN5Sound12IsBGMPlayingEj");
extern "C" bool YellowAuto_003aa730(uint32_t arg0) {
void* _l = fun_3ad9d8();
fun_1076a8(_l);
uint32_t _g = *(const uint32_t*)0x3AA768u;
void* _m = (void*)(*(const uint32_t*)_g);
bool _r = fun_49fce0(_m, arg0);
fun_107730(_l);
return _r;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003A98D8
void* fun_3ad9d8(void);
void fun_1076a8(void*);
void fun_107730(void*);
bool fun_35c018(void*, uint8_t, uint32_t, const uint8_t*);
extern "C" bool YellowAuto_003a98d8(uint8_t arg0, uint32_t arg1, const uint8_t* arg2) __asm__("_ZN5Sound11Play3DActorEhjPKN2nw3snd14SoundStartable9StartInfoE");
extern "C" bool YellowAuto_003a98d8(uint8_t arg0, uint32_t arg1, const uint8_t* arg2) {
void* _l = fun_3ad9d8();
fun_1076a8(_l);
uint32_t _g = *(const uint32_t*)0x3A9920u;
void* _m = (void*)(*(const uint32_t*)_g);
bool _r = fun_35c018(_m, arg0, arg1, arg2);
fun_107730(_l);
return _r;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003ACD74
void* fun_3ad9d8(void);
void fun_1076a8(void*);
void fun_107730(void*);
int32_t fun_49fc3c(void*);
extern "C" bool YellowAuto_003acd74(uint8_t arg0) __asm__("_ZN5Sound15IsVoiceFinishedEh");
extern "C" bool YellowAuto_003acd74(uint8_t arg0) {
void* _l = fun_3ad9d8();
fun_1076a8(_l);
uint32_t _b = *(const uint32_t*)0x3ACDE4u;
uint32_t _n = *(const uint32_t*)(_b + 4u);
if (arg0 < _n) {
uint32_t _a = *(const uint32_t*)0x3ACDE8u;
void* _e = (void*)(*(const uint32_t*)(_a + (arg0 * 4u)));
int32_t _v = fun_49fc3c(_e);
fun_107730(_l);
return _v == 0;
}
fun_107730(_l);
return true;
}
#endif
