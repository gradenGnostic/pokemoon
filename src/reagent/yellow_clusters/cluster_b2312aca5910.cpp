// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0047555C
int32_t GetSizeRaw(uint32_t *, uint32_t);
extern "C" int32_t YellowAuto_0047555c(uint8_t* arg0, uint32_t* arg1) __asm__("_ZNK2nn2fs6detail8FileBase10TryGetSizeEPx");
extern "C" int32_t YellowAuto_0047555c(uint8_t* arg0, uint32_t* arg1) {
uint32_t tmp[2]; uint32_t h = *(uint32_t *)arg0 & 4294967294U; int32_t r = GetSizeRaw(tmp, h); if (r < 0) { *(uint32_t *)(arg0 + 12) = 0; *(uint32_t *)(arg0 + 16) = 0; } else { *(uint32_t *)(arg0 + 12) = tmp[0]; *(uint32_t *)(arg0 + 16) = tmp[1]; arg1[0] = tmp[0]; arg1[1] = tmp[1]; } return r;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0016B8F0
int32_t GetSizeRaw(uint32_t *, uint32_t);
extern int32_t ERR_SETPOS;
extern "C" int32_t YellowAuto_0016b8f0(uint8_t* arg0, int32_t arg1, uint32_t arg2, uint32_t arg3) __asm__("_ZN2nn2fs6detail8FileBase14TrySetPositionEx");
extern "C" int32_t YellowAuto_0016b8f0(uint8_t* arg0, int32_t arg1, uint32_t arg2, uint32_t arg3) {
if ((int32_t)arg3 < 0) return ERR_SETPOS; uint32_t clo = *(uint32_t *)(arg0 + 12); uint32_t chi = *(uint32_t *)(arg0 + 16); if (arg3 > chi || (arg3 == chi && arg2 >= clo)) { uint32_t tmp[2]; uint32_t h = *(uint32_t *)arg0 & 4294967294U; int32_t r = GetSizeRaw(tmp, h); if (r < 0) { *(uint32_t *)(arg0 + 12) = 0; *(uint32_t *)(arg0 + 16) = 0; return r; } *(uint32_t *)(arg0 + 12) = tmp[0]; *(uint32_t *)(arg0 + 16) = tmp[1]; clo = tmp[0]; chi = tmp[1]; if (arg3 > chi || (arg3 == chi && arg2 > clo)) return ERR_SETPOS; } *(uint32_t *)(arg0 + 4) = arg2; *(uint32_t *)(arg0 + 8) = arg3; return 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0016BA20
int32_t GetSizeRaw(uint32_t *, uint32_t);
int32_t SetPosRaw(uint8_t *, int32_t, uint32_t, uint32_t);
extern int32_t ERR_SEEK;
extern "C" int32_t YellowAuto_0016ba20(uint8_t* arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3, int32_t arg4) __asm__("_ZN2nn2fs6detail8FileBase7TrySeekExNS0_12PositionBaseE");
extern "C" int32_t YellowAuto_0016ba20(uint8_t* arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3, int32_t arg4) {
if (arg4 == 0) return SetPosRaw(arg0, (int32_t)arg1, arg2, arg3); if (arg4 == 1) { uint32_t clo = *(uint32_t *)(arg0 + 4); uint32_t chi = *(uint32_t *)(arg0 + 8); uint32_t nlo = arg2 + clo; uint32_t nhi = arg3 + chi + (nlo < arg2 ? 1U : 0U); return SetPosRaw(arg0, (int32_t)arg1, nlo, nhi); } if (arg4 == 2) { uint32_t tmp[2]; uint32_t h = *(uint32_t *)arg0 & 4294967294U; int32_t r = GetSizeRaw(tmp, h); if (r < 0) { *(uint32_t *)(arg0 + 12) = 0; *(uint32_t *)(arg0 + 16) = 0; return r; } *(uint32_t *)(arg0 + 12) = tmp[0]; *(uint32_t *)(arg0 + 16) = tmp[1]; uint32_t nlo = arg2 + tmp[0]; uint32_t nhi = arg3 + tmp[1] + (nlo < arg2 ? 1U : 0U); return SetPosRaw(arg0, (int32_t)arg1, nlo, nhi); } return ERR_SEEK;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0016B998
int32_t FUN_00168fa4(uint32_t*, uint32_t, uint32_t, uint32_t, void*, uint32_t);
extern "C" int32_t YellowAuto_0016b998(uint8_t* arg0, uint32_t* arg1, void* arg2, uint32_t arg3) __asm__("_ZN2nn2fs6detail8FileBase7TryReadEPiPvj");
extern "C" int32_t YellowAuto_0016b998(uint8_t* arg0, uint32_t* arg1, void* arg2, uint32_t arg3) {
uint32_t total = (uint32_t)0;
if (arg3 == (uint32_t)0) {
*arg1 = total;
return (int32_t)0;
}
while (true) {
uint32_t chunk;
uint32_t h = *(uint32_t*)arg0 & (uint32_t)0xFFFFFFFE;
uint32_t lo = *(uint32_t*)(arg0 + 4);
uint32_t hi = *(uint32_t*)(arg0 + 8);
int32_t r = FUN_00168fa4(&chunk, h, lo, hi, arg2, arg3);
if (r < (int32_t)0) return r;
total += chunk;
uint32_t nlo = lo + chunk;
uint32_t carry = (nlo < lo) ? (uint32_t)1 : (uint32_t)0;
*(uint32_t*)(arg0 + 4) = nlo;
*(uint32_t*)(arg0 + 8) = hi + carry + (uint32_t)((int32_t)chunk >> 31);
if (chunk == arg3) break;
if (chunk == (uint32_t)0) break;
arg2 = (void*)((uint8_t*)arg2 + chunk);
arg3 = arg3 - chunk;
}
*arg1 = total;
return (int32_t)0;
}
#endif
