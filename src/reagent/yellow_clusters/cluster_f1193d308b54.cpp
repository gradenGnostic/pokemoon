// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003C1A74
uint16_t GetMonsNo(const uint8_t*);
uint16_t GetMonsName(uint8_t*, uint32_t);
void func_003c11f8(uint8_t*, uint32_t, uint8_t*, uint32_t, uint32_t);
extern "C" void YellowAuto_003c1a74(uint8_t* arg0, uint32_t arg1, const uint8_t* arg2) __asm__("_ZN5print7WordSet20RegisterPokeMonsNameEjPKN3pml8pokepara9CoreParamE");
extern "C" void YellowAuto_003c1a74(uint8_t* arg0, uint32_t arg1, const uint8_t* arg2) {
uint8_t* v0 = (uint8_t*)(*(uint32_t*)arg0);
uint32_t v1 = (uint32_t)GetMonsNo(arg2);
uint16_t v2 = GetMonsName(v0, v1);
uint32_t vlow = (uint32_t)v2 & 255u;
uint32_t vflags = vlow | (((vlow | 2u) & 255u) << 8);
func_003c11f8(arg0, arg1, v0, vflags, 0u);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003C181C
void GetParentName(const uint8_t*, uint8_t*);
uint32_t GetParentSex(const uint8_t*);
void func_003c11f8(uint8_t*, uint32_t, uint8_t*, uint32_t, uint32_t);
extern "C" void YellowAuto_003c181c(uint8_t* arg0, uint32_t arg1, const uint8_t* arg2) __asm__("_ZN5print7WordSet19RegisterPokeOyaNameEjPKN3pml8pokepara9CoreParamE");
extern "C" void YellowAuto_003c181c(uint8_t* arg0, uint32_t arg1, const uint8_t* arg2) {
uint8_t* v0 = (uint8_t*)(*(uint32_t*)arg0);
GetParentName(arg2, v0);
uint32_t v1 = GetParentSex(arg2);
uint32_t vlow = ((v1 == 1u) ? 1u : 0u) & 3u;
uint32_t vflags = vlow | ((vlow & 255u) << 8);
func_003c11f8(arg0, arg1, v0, vflags, 0u);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003C1664
void GetNameString(const uint8_t*, uint8_t*);
void func_003c11f8(uint8_t*, uint32_t, uint8_t*, uint32_t, uint32_t);
extern "C" void YellowAuto_003c1664(uint8_t* arg0, uint32_t arg1, const uint8_t* arg2) __asm__("_ZN5print7WordSet18RegisterPlayerNameEjPKN8Savedata8MyStatusE");
extern "C" void YellowAuto_003c1664(uint8_t* arg0, uint32_t arg1, const uint8_t* arg2) {
uint8_t* v0 = (uint8_t*)(*(uint32_t*)arg0);
GetNameString(arg2, v0);
uint32_t vsex = (uint32_t)*(const uint8_t*)(arg2 + 13);
uint32_t vlow = vsex & 3u;
uint32_t vflags = vlow | ((vlow & 255u) << 8);
func_003c11f8(arg0, arg1, v0, vflags, 0u);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003C1F10
uint16_t GetString(const uint8_t*, uint32_t, uint8_t*);
void func_003c11f8(uint8_t*, uint32_t, uint8_t*, uint32_t, uint32_t);
extern "C" void YellowAuto_003c1f10(uint8_t* arg0, uint32_t arg1, const uint8_t* arg2, uint32_t arg3) __asm__("_ZN5print7WordSet27RegisterPokeMonsNameMsgDataEjPN4gfl23str7MsgDataEj");
extern "C" void YellowAuto_003c1f10(uint8_t* arg0, uint32_t arg1, const uint8_t* arg2, uint32_t arg3) {
uint8_t* v0 = (uint8_t*)(*(uint32_t*)arg0);
uint16_t v1 = GetString(arg2, arg3, v0);
uint32_t vlow = (uint32_t)v1 & 255u;
uint32_t vflags = vlow | (((vlow | 2u) & 255u) << 8);
func_003c11f8(arg0, arg1, v0, vflags, 0u);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003C0FB8
uint16_t GetString(const uint8_t*, uint32_t, uint8_t*);
void func_003c11f8(uint8_t*, uint32_t, uint8_t*, uint32_t, uint32_t);
extern "C" void YellowAuto_003c0fb8(uint8_t* arg0, uint32_t arg1, const uint8_t* arg2, uint32_t arg3, uint32_t arg4) __asm__("_ZN5print7WordSet12RegisterWordEjPN4gfl23str7MsgDataEjNS0_4FormE");
extern "C" void YellowAuto_003c0fb8(uint8_t* arg0, uint32_t arg1, const uint8_t* arg2, uint32_t arg3, uint32_t arg4) {
uint8_t* v0 = (uint8_t*)(*(uint32_t*)arg0);
uint16_t v1 = GetString(arg2, arg3, v0);
uint32_t vlow = (uint32_t)v1 & 255u;
uint32_t vform = ((uint32_t)arg4 << 2) & 12u;
uint32_t vhigh = (vlow | 2u | vform) & 255u;
uint32_t vflags = vlow | (vhigh << 8);
func_003c11f8(arg0, arg1, v0, vflags, 0u);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003C234C
void Clear(uint8_t*);
void func_003c095c(uint8_t*, uint8_t*, int32_t, int32_t);
extern "C" void YellowAuto_003c234c(uint8_t* arg0, uint8_t* arg1, int32_t arg2) __asm__("_ZN5print7WordSet6ExpandEPN4gfl23str6StrBufEPKS3_");
extern "C" void YellowAuto_003c234c(uint8_t* arg0, uint8_t* arg1, int32_t arg2) {
*(uint32_t*)(arg0 + 24) = 0u;
*(uint16_t*)(arg0 + 28) = 0u;
*(uint32_t*)(arg0 + 32) = 0u;
*(uint32_t*)(arg0 + 36) = 0u;
Clear(arg1);
func_003c095c(arg0, arg1, arg2, 0);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003C13F0
void func_003c2470(uint8_t*, uint32_t, int32_t, int32_t, int32_t);
int32_t func_00357658();
uint32_t func_004a1bc4(int32_t, uint32_t);
void func_003c11f8(uint8_t*, uint32_t, uint8_t*, uint32_t, uint32_t);
extern "C" void YellowAuto_003c13f0(uint8_t* arg0, uint32_t arg1, uint32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5) __asm__("_ZN5print7WordSet14RegisterNumberEjijNS_14NumberDispTypeENS_14NumberCodeTypeE");
extern "C" void YellowAuto_003c13f0(uint8_t* arg0, uint32_t arg1, uint32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5) {
uint8_t* v0 = (uint8_t*)(*(uint32_t*)arg0);
func_003c2470(v0, arg2, arg3, arg4, arg5);
int32_t v1 = func_00357658();
uint32_t v2 = func_004a1bc4(v1, arg2);
uint32_t vhigh = (((v2 & 63u) << 2) | 2u) & 255u;
uint32_t vflags = vhigh << 8;
func_003c11f8(arg0, arg1, v0, vflags, 0u);
}
#endif
