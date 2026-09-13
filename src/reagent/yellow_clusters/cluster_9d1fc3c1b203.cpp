// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0030C95C
extern "C" void YellowAuto_0030c95c(uint8_t* arg0, void* arg1) __asm__("_ZN3app4util20AppDemoUtilityHelper5BeginEPN4gfl24heap11CtrHeapBaseE");
extern "C" void YellowAuto_0030c95c(uint8_t* arg0, void* arg1) {
*(uint32_t *)(arg0 + 4) = (uint32_t)arg1; ((void * (*)())0x003577A8)(); ((void * (*)())0x001048B4)();
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0030C900
extern "C" void YellowAuto_0030c900(uint8_t* arg0) __asm__("_ZN3app4util20AppDemoUtilityHelper3EndEv");
extern "C" void YellowAuto_0030c900(uint8_t* arg0) {
((void (*)(void *, uint32_t))0x0034497C)(((void * (*)())0x003577A8)(), *(uint32_t *)*(void **)(arg0 + 8)); if (*(void **)(arg0 + 8) != 0) ((void (*)(void *))0x00357CD8)(*(void **)(arg0 + 8)); *(void **)(arg0 + 8) = 0; *(uint32_t *)(arg0 + 4) = 0;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0030CA14
extern "C" void YellowAuto_0030ca14(uint8_t* arg0) __asm__("_ZN3app4util20AppDemoUtilityHelperC1Ev");
extern "C" void YellowAuto_0030ca14(uint8_t* arg0) {
*(uint32_t*)arg0 = *(uint32_t*)0x0030CA2C; *(uint32_t*)(arg0 + 4) = 0u; *(uint32_t*)(arg0 + 8) = 0u;
}
#endif
