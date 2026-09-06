// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0030DB74
extern "C" void* YellowAuto_0030db74(uint8_t* arg0) __asm__("_ZN3app4util25AppQRTextureCreateUtilityD1Ev");
extern "C" void* YellowAuto_0030db74(uint8_t* arg0) {
*(uint32_t *)arg0 = *(uint32_t *)0x0030DBB4; if (*(void **)(arg0 + 0x20) != 0) ((void (*)(void *))(*(uint32_t *)(*(uint8_t **)(arg0 + 0x20)) + 4))(*(void **)(arg0 + 0x20)), *(void **)(arg0 + 0x20) = 0; ((void (*)(uint8_t *))0x00343400)(arg0 + 4); return arg0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0030D968
extern "C" void YellowAuto_0030d968(uint8_t* arg0, const uint8_t* arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4) __asm__("_ZN3app4util25AppQRTextureCreateUtility11CreateStartEPKhjjj");
extern "C" void YellowAuto_0030d968(uint8_t* arg0, const uint8_t* arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4) {
if (*(uint8_t *)(arg0 + 0x38) == 0) ((void (*)(uint8_t *, const uint8_t *, uint32_t, uint8_t))0x0034333C)(arg0 + 4, arg1, arg2, (uint8_t)arg3), *(uint32_t *)(arg0 + 0x1c) = arg3, *(uint32_t *)(arg0 + 0x18) = arg4, ((void (*)(void *, void *, void *))(*(uint32_t *)(*(uint8_t **)(arg0 + 0x20)) + 8))(*(void **)(arg0 + 0x20), arg0, arg0 + 4), *(uint8_t *)(arg0 + 0x38) = 1, *(uint8_t *)(arg0 + 0x39) = 0;
}
#endif
