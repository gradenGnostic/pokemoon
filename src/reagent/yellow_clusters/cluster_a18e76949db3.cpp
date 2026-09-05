// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0045C058
uint8_t* EffectUtil(uint8_t*);
uint8_t* __aeabi_vec_ctor_nocookie_nodtor(uint8_t*, const void*, uint32_t, uint32_t);
extern "C" void YellowAuto_0045c058(uint8_t* arg0) __asm__("_ZN9NetAppLib4Util14NetAppEffectBGC1Ev");
extern "C" void YellowAuto_0045c058(uint8_t* arg0) {
*(uint32_t *)arg0 = 0x0045c0c0; *(uint32_t *)(arg0 + 4) = 0; EffectUtil(arg0 + 8); *(uint32_t *)(arg0 + 0x30) = 0; *(uint32_t *)(arg0 + 0x34) = 0; *(uint8_t *)(arg0 + 0x38) = 0; *(uint32_t *)(arg0 + 0x3c) = 0; *(uint32_t *)(arg0 + 0x40) = 0; *(uint32_t *)(arg0 + 0x44) = 0; *(uint8_t *)(arg0 + 0x48) = 1; *(uint32_t *)(arg0 + 0x4c) = 0; *(uint32_t *)(arg0 + 0x50) = 0; __aeabi_vec_ctor_nocookie_nodtor(arg0 + 0x54, (const void *)0x0045c0c4, 0x18u, 6u); *(uint32_t *)(arg0 + 0xe4) = 0; *(uint32_t *)(arg0 + 0x34) = (uint32_t)arg0; *(uint32_t *)(arg0 + 0x44) = (uint32_t)arg0;
}
#endif
