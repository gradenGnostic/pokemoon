// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003060E4
void Create(uint8_t*, void*, const void*);
extern "C" uint8_t* YellowAuto_003060e4(uint8_t* arg0, void* arg1, const void* arg2) __asm__("_ZN3app4util10EffectUtilC1EPN4gfl24heap11CtrHeapBaseERKNS1_11DescriptionE");
extern "C" uint8_t* YellowAuto_003060e4(uint8_t* arg0, void* arg1, const void* arg2) {
*(uint32_t *)arg0 = 0x0030612c; *(uint32_t *)(arg0 + 0x4) = 0; *(uint32_t *)(arg0 + 0x8) = 0; *(uint8_t *)(arg0 + 0xc) = 0; *(uint32_t *)(arg0 + 0x10) = 0; *(uint32_t *)(arg0 + 0x14) = 0; *(uint32_t *)(arg0 + 0x18) = 0; *(uint32_t *)(arg0 + 0x1c) = 0; *(uint32_t *)(arg0 + 0x20) = 0; *(uint32_t *)(arg0 + 0x24) = 0; Create(arg0, arg1, arg2); return arg0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0030618C
void Destroy(uint8_t*);
extern "C" uint8_t* YellowAuto_0030618c(uint8_t* arg0) __asm__("_ZN3app4util10EffectUtilD1Ev");
extern "C" uint8_t* YellowAuto_0030618c(uint8_t* arg0) {
*(uint32_t *)arg0 = 0x003061ac; Destroy(arg0); return arg0;
}
#endif
