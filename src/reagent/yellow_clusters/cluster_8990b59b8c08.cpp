// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003A9700
uint8_t* FUN_003ad9d8();
void FUN_001076a8(uint8_t*);
void FUN_00107730(uint8_t*);
uint8_t* GET_003a9738();
void FUN_003aad84(uint8_t*, uint32_t, uint32_t);
extern "C" void YellowAuto_003a9700(uint32_t arg0, uint32_t arg1) __asm__("_ZN5Sound10StopPlayerEjj");
extern "C" void YellowAuto_003a9700(uint32_t arg0, uint32_t arg1) {
uint8_t* _cs = FUN_003ad9d8();
FUN_001076a8(_cs);
uint8_t* _g = GET_003a9738();
FUN_003aad84(_g, arg0, arg1);
FUN_00107730(_cs);
return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003ADA20
uint8_t* FUN_003ad9d8();
void FUN_001076a8(uint8_t*);
void FUN_00107730(uint8_t*);
uint8_t* GET_003ada58();
void FUN_003aafd8(uint8_t*, uint8_t, const void*);
extern "C" void YellowAuto_003ada20(uint8_t arg0, const void* arg1) __asm__("_ZN5Sound18Set3DActorVelocityEhRKN4gfl24math22ExtendedVectorTemplateINS1_33SpecializedExtendedVectorTemplateIN2nn4math4VEC3EEEEE");
extern "C" void YellowAuto_003ada20(uint8_t arg0, const void* arg1) {
uint8_t* _cs = FUN_003ad9d8();
FUN_001076a8(_cs);
uint8_t* _g = GET_003ada58();
FUN_003aafd8(_g, arg0, arg1);
FUN_00107730(_cs);
return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003ABAE8
uint8_t* FUN_003ad9d8();
void FUN_001076a8(uint8_t*);
void FUN_00107730(uint8_t*);
uint8_t* GET_003abb30();
void FUN_003a8f4c(uint8_t*, uint32_t, uint32_t, uint32_t);
void FUN_003a8844(uint8_t*, uint32_t);
void FUN_003a8df4(uint8_t*);
extern "C" void YellowAuto_003abae8() __asm__("_ZN5Sound13PopBGMOnlyReqEv");
extern "C" void YellowAuto_003abae8() {
uint8_t* _cs = FUN_003ad9d8();
FUN_001076a8(_cs);
uint8_t* _g = GET_003abb30();
FUN_003a8f4c(_g, 0, 0, 1);
FUN_003a8844(_g, 0);
FUN_003a8df4(_g);
FUN_00107730(_cs);
return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003ADA60
uint8_t* FUN_003ad9d8();
void FUN_001076a8(uint8_t*);
void FUN_00107730(uint8_t*);
uint8_t* GET_003adaa8();
void FUN_003a8f4c(uint8_t*, uint32_t, uint32_t, uint32_t);
void FUN_003a8844(uint8_t*, uint32_t);
void FUN_003a8df4(uint8_t*);
extern "C" void YellowAuto_003ada60() __asm__("_ZN5Sound18StartBaseBGMFromMEEv");
extern "C" void YellowAuto_003ada60() {
uint8_t* _cs = FUN_003ad9d8();
FUN_001076a8(_cs);
uint8_t* _g = GET_003adaa8();
FUN_003a8f4c(_g, 0, 0, 1);
FUN_003a8844(_g, 10);
FUN_003a8df4(_g);
FUN_00107730(_cs);
return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003AEEBC
uint8_t* FUN_003ad9d8();
void FUN_001076a8(uint8_t*);
void FUN_00107730(uint8_t*);
uint32_t* GET_003aef20();
uint32_t* GET_003aef24();
void FUN_003aa27c(uint8_t*, int32_t);
extern "C" void YellowAuto_003aeebc(uint8_t arg0, int32_t arg1) __asm__("_ZN5Sound9StopVoiceEhi");
extern "C" void YellowAuto_003aeebc(uint8_t arg0, int32_t arg1) {
uint8_t* _cs = FUN_003ad9d8();
FUN_001076a8(_cs);
uint32_t* _cnt = GET_003aef20();
if (*(_cnt + 1) <= (uint32_t)arg0) {
FUN_00107730(_cs);
return;
}
uint32_t* _arr = GET_003aef24();
FUN_003aa27c((uint8_t*)_arr[arg0], arg1);
FUN_00107730(_cs);
return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003ACF04
uint8_t* FUN_003ad9d8();
void FUN_001076a8(uint8_t*);
void FUN_00107730(uint8_t*);
uint32_t* GET_003acf7c();
uint32_t* GET_003acf80();
bool FUN_0049fc60(uint8_t*);
void FUN_003a9ac8(uint8_t*, const void*);
extern "C" void YellowAuto_003acf04(uint8_t arg0, const void* arg1) __asm__("_ZN5Sound16ChangeVoice3DPosEhRKN4gfl24math22ExtendedVectorTemplateINS1_33SpecializedExtendedVectorTemplateIN2nn4math4VEC3EEEEE");
extern "C" void YellowAuto_003acf04(uint8_t arg0, const void* arg1) {
uint8_t* _cs = FUN_003ad9d8();
FUN_001076a8(_cs);
uint32_t* _cnt = GET_003acf7c();
if (*(_cnt + 1) <= (uint32_t)arg0) {
FUN_00107730(_cs);
return;
}
uint32_t* _arr = GET_003acf80();
uint8_t* _e = (uint8_t*)_arr[arg0];
if (FUN_0049fc60(_e) != 0) {
FUN_003a9ac8(_e, arg1);
}
FUN_00107730(_cs);
return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003A985C
uint8_t* FUN_003ad9d8();
void FUN_001076a8(uint8_t*);
void FUN_00107730(uint8_t*);
uint32_t* GET_003a98d4();
int32_t FUN_003acce8(uint32_t, uint32_t, int32_t);
extern "C" bool YellowAuto_003a985c(uint32_t arg0, int32_t arg1) __asm__("_ZN5Sound11IsSEPlayingEji");
extern "C" bool YellowAuto_003a985c(uint32_t arg0, int32_t arg1) {
uint8_t* _cs = FUN_003ad9d8();
FUN_001076a8(_cs);
uint32_t* _f = GET_003a98d4();
if (*_f == 0) {
FUN_00107730(_cs);
return false;
}
uint32_t _i = 0;
while (_i < 11) {
if (FUN_003acce8(_i, arg0, arg1) != 0) {
FUN_00107730(_cs);
return true;
}
_i = (_i + 1) & 255;
}
FUN_00107730(_cs);
return false;
}
#endif
