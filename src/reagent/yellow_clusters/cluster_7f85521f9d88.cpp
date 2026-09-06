// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0029E33C
void FUN_005230b8(const void*, void**);
extern const void* DAT_0029e384;
extern "C" void YellowAuto_0029e33c(const uint32_t* arg0) __asm__("_ZN2nw3lyt13DeleteTextureERKNS0_11TextureInfoE");
extern "C" void YellowAuto_0029e33c(const uint32_t* arg0) {
uint32_t uVar1 = *arg0;
void* local_10 = 0;
if (uVar1 != 0)
  FUN_005230b8((const void*)0, &local_10);
if (local_10 != 0)
  ((void (*)(uint32_t, const void*, uint32_t, uint32_t))local_10)((uVar1 & 3U) << 16, DAT_0029e384, 0, uVar1 & 0xfffffffcU);
}
#endif
