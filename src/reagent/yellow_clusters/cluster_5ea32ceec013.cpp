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
