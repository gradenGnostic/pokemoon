// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002691F0
void __aeabi_memclr(void* arg0, uint32_t arg1);
uint32_t Initialize(uint8_t* arg0, void* arg1, uint32_t arg2);
extern "C" uint32_t YellowAuto_002691f0(uint8_t* arg0, void* arg1, uint32_t arg2) __asm__("_ZN2nn4jpeg3CTR13JpegMpDecoder10InitializeEPvj");
extern "C" uint32_t YellowAuto_002691f0(uint8_t* arg0, void* arg1, uint32_t arg2) {
arg0[4] = 0; *(uint32_t *)(arg0 + 8) = 0; *(uint32_t *)(arg0 + 12) = 0; if ((((uint32_t)arg1 & 3U) == 0U) && (*(uint32_t *)0x00269240 <= arg2)) return (__aeabi_memclr(arg1, *(uint32_t *)0x00269240), *(uint32_t *)(arg0 + 0) = (uint32_t)arg1, arg0[4] = 1, 1); return 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00269380
uint32_t FUN_00272e48(uint32_t arg0, void* arg1, uint32_t arg2, const uint8_t* arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, bool arg8, uint32_t arg9, uint32_t* arg10);
void FUN_0026d5e8(uint32_t arg0);
uint32_t FUN_002692c0(uint32_t arg0, uint32_t arg1, uint32_t arg2);
uint32_t StartJpegDecoder(uint8_t* arg0, void* arg1, uint32_t arg2, const uint8_t* arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, bool arg8);
extern "C" uint32_t YellowAuto_00269380(uint8_t* arg0, void* arg1, uint32_t arg2, const uint8_t* arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, bool arg8) __asm__("_ZN2nn4jpeg3CTR13JpegMpDecoder16StartJpegDecoderEPvjPKhjjjNS1_11PixelFormatEb");
extern "C" uint32_t YellowAuto_00269380(uint8_t* arg0, void* arg1, uint32_t arg2, const uint8_t* arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, bool arg8) {
if (arg0[4] == 0) return 0; if (FUN_00272e48(*(uint32_t *)(arg0 + 0), arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, 0, (uint32_t *)(arg0 + 8)) == 0) goto out; FUN_0026d5e8(*(uint32_t *)(arg0 + 0)); if (*(uint8_t *)(*(uint32_t *)(arg0 + 0) + 0x44) != 0) goto out; *(uint32_t *)(arg0 + 8) = 0; *(uint32_t *)(arg0 + 12) = 0; return FUN_002692c0(*(uint32_t *)(*(uint32_t *)(arg0 + 0) + 0x38), *(uint32_t *)(*(uint32_t *)(arg0 + 0) + 0x3c), arg7); out: *(uint32_t *)(arg0 + 8) = 0; *(uint32_t *)(arg0 + 12) = 0; return 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00269428
uint32_t FUN_00272e48(uint32_t arg0, void* arg1, uint32_t arg2, const uint8_t* arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, bool arg8, uint32_t arg9, uint32_t* arg10);
void FUN_0026d5e8(uint32_t arg0);
uint32_t FUN_002692c0(uint32_t arg0, uint32_t arg1, uint32_t arg2);
uint32_t StartJpegDecoderShrink(uint8_t* arg0, void* arg1, uint32_t arg2, const uint8_t* arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, bool arg8, uint32_t arg9);
extern "C" uint32_t YellowAuto_00269428(uint8_t* arg0, void* arg1, uint32_t arg2, const uint8_t* arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, bool arg8, uint32_t arg9) __asm__("_ZN2nn4jpeg3CTR13JpegMpDecoder22StartJpegDecoderShrinkEPvjPKhjjjNS1_11PixelFormatEbj");
extern "C" uint32_t YellowAuto_00269428(uint8_t* arg0, void* arg1, uint32_t arg2, const uint8_t* arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, bool arg8, uint32_t arg9) {
if (arg0[4] == 0) return 0; if (((arg9 - 1U) < 4U) && ((((1U << (arg9 & 0xFFU)) - 1U) & arg5) == 0U) && ((((1U << (arg9 & 0xFFU)) - 1U) & arg6) == 0U)) goto start; if (*(uint8_t *)(*(uint32_t *)(arg0 + 0) + 0x44) == 0) *(uint8_t *)(*(uint32_t *)(arg0 + 0) + 0x44) = 0xFE; goto out; start: if (FUN_00272e48(*(uint32_t *)(arg0 + 0), arg1, arg2, arg3, arg4, arg5 >> (arg9 & 0xFFU), arg6 >> (arg9 & 0xFFU), arg7, arg8, 0, (uint32_t *)(arg0 + 8)) == 0) goto out; *(uint8_t *)(*(uint32_t *)(arg0 + 0) + 0x4d) = (uint8_t)arg9; *(uint16_t *)(*(uint32_t *)(arg0 + 0) + 0x1c) = (uint16_t)arg5; *(uint16_t *)(*(uint32_t *)(arg0 + 0) + 0x1e) = (uint16_t)arg6; if ((*(uint32_t *)(*(uint32_t *)(arg0 + 0) + 0x64) & 2U) != 0U) *(uint16_t *)(*(uint32_t *)(arg0 + 0) + 0x20) = (uint16_t)arg5, *(uint16_t *)(*(uint32_t *)(arg0 + 0) + 0x22) = (uint16_t)arg6; FUN_0026d5e8(*(uint32_t *)(arg0 + 0)); if (*(uint8_t *)(*(uint32_t *)(arg0 + 0) + 0x44) != 0) goto out; *(uint32_t *)(arg0 + 8) = 0; *(uint32_t *)(arg0 + 12) = 0; return FUN_002692c0(*(uint32_t *)(*(uint32_t *)(arg0 + 0) + 0x38), *(uint32_t *)(*(uint32_t *)(arg0 + 0) + 0x3c), arg7); out: *(uint32_t *)(arg0 + 8) = 0; *(uint32_t *)(arg0 + 12) = 0; return 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0026941C
uint32_t GetWorkBufferSize(void);
extern "C" uint32_t YellowAuto_0026941c() __asm__("_ZN2nn4jpeg3CTR13JpegMpDecoder17GetWorkBufferSizeEv");
extern "C" uint32_t YellowAuto_0026941c() {
return *(uint32_t *)0x00269424;
}
#endif
