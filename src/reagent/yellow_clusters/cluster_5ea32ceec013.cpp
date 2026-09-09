// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00269898
extern const uint32_t DAT_002698c4;
extern "C" uint32_t YellowAuto_00269898(uint32_t arg0) __asm__("_ZN2nn4jpeg3CTR13JpegMpEncoder17GetWorkBufferSizeEj");
extern "C" uint32_t YellowAuto_00269898(uint32_t arg0) {
return arg0 == 0 ? (uint32_t)DAT_002698c4 : (arg0 < 0x1000 ? (uint32_t)(DAT_002698c4 + arg0 * 0x31) : 0);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00269830
int32_t FUN_0026a198(uint8_t*, uint8_t*, uint32_t, const void*, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, bool, uint8_t*);
void FUN_00273cb0(uint8_t*);
extern "C" int32_t YellowAuto_00269830(uint8_t* arg0, uint8_t* arg1, uint32_t arg2, const void* arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, bool arg9) __asm__("_ZN2nn4jpeg3CTR13JpegMpEncoder16StartJpegEncoderEPhjPKvjjjNS1_13PixelSamplingENS1_11PixelFormatEb");
extern "C" int32_t YellowAuto_00269830(uint8_t* arg0, uint8_t* arg1, uint32_t arg2, const void* arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, bool arg9) {
if (arg0[4] == 0) return 0; *(uint8_t*)(*(uint32_t*)arg0 + 0x69c) = 0; int32_t v0 = FUN_0026a198((uint8_t*)*(uint32_t*)arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg0 + 8); FUN_00273cb0(arg0); return v0;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00269624
uint32_t LoadBaseSize0026972c();
void __aeabi_memclr(void*, uint32_t);
void __aeabi_memclr4(void*, uint32_t);
void FUN_00276b78(uint8_t*);
void FUN_00276c1c(uint8_t*);
void FUN_00273cf8(uint8_t*);
void FUN_00273cb0(uint8_t*);
extern "C" uint32_t YellowAuto_00269624(uint8_t* arg0, uint8_t* arg1, uint32_t arg2, uint32_t arg3) __asm__("_ZN2nn4jpeg3CTR13JpegMpEncoder10InitializeEPvjj");
extern "C" uint32_t YellowAuto_00269624(uint8_t* arg0, uint8_t* arg1, uint32_t arg2, uint32_t arg3) {
*(arg0 + 4U) = 0U;
if ((reinterpret_cast<uint32_t>(arg1) & 3U) != 0U) return 0U;
uint32_t vBase = LoadBaseSize0026972c();
uint32_t vReq = vBase + arg3 * 49U;
uint32_t vNeed = vBase;
if (arg3 != 0U) {
if (arg3 >= 4096U) return 0U;
vNeed = vReq;
if (vNeed == 0U) return 0U;
}
if (vNeed > arg2) return 0U;
*reinterpret_cast<uint32_t*>(arg0) = reinterpret_cast<uint32_t>(arg1);
*reinterpret_cast<uint32_t*>(arg1 + 2664U) = arg3;
uint32_t vStored = *reinterpret_cast<uint32_t*>(arg1 + 2664U);
uint32_t vClr = vReq;
if (vStored != 0U) {
if (vStored >= 4096U) vClr = 0U;
else vClr = vReq;
}
__aeabi_memclr(arg1, vClr);
uint8_t* vMid = arg1 + 3028U;
uint8_t* vEnd = vMid;
if (vStored != 0U) {
*reinterpret_cast<uint32_t*>(arg1 + 2656U) = reinterpret_cast<uint32_t>(vMid);
uint8_t* vNext = vMid + vStored * 16U;
*reinterpret_cast<uint32_t*>(arg1 + 2660U) = reinterpret_cast<uint32_t>(vNext);
*reinterpret_cast<uint32_t*>(arg1 + 2664U) = vStored;
vEnd = vNext + vStored * 33U;
FUN_00276b78(arg1);
FUN_00276c1c(arg1);
}
FUN_00273cf8(arg1);
__aeabi_memclr4(arg0 + 8U, 248U);
FUN_00273cb0(arg0);
if ((reinterpret_cast<uint32_t>(vEnd) - reinterpret_cast<uint32_t>(arg1)) != vNeed) return 0U;
*(arg0 + 4U) = 1U;
return 1U;
}
#endif
