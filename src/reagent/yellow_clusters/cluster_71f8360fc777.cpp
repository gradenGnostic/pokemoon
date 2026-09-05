// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00343370
void* operator_new__(uint32_t, void*);
extern "C" uint8_t* YellowAuto_00343370(uint8_t* arg0, void* arg1, uint32_t arg2) __asm__("_ZN4gfl22qr12QREncodeDataC1EPNS_4heap11CtrHeapBaseEj");
extern "C" uint8_t* YellowAuto_00343370(uint8_t* arg0, void* arg1, uint32_t arg2) {
*(uint32_t *)(arg0 + 8) = 0; *(uint32_t *)arg0 = 0x003433bc; *(uint32_t *)(arg0 + 12) = 0; *(uint32_t *)(arg0 + 4) = (uint32_t)arg1; *(uint32_t *)(arg0 + 16) = 0; *(uint32_t *)(arg0 + 20) = 2; *(uint32_t *)(arg0 + 24) = 16; *(uint32_t *)(arg0 + 8) = (uint32_t)operator_new__(arg2, arg1); *(uint32_t *)(arg0 + 12) = arg2; return arg0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00343400
void operator_delete__(void*);
extern "C" uint8_t* YellowAuto_00343400(uint8_t* arg0) __asm__("_ZN4gfl22qr12QREncodeDataD1Ev");
extern "C" uint8_t* YellowAuto_00343400(uint8_t* arg0) {
*(uint32_t *)arg0 = 0x00343438; if (*(uint32_t *)(arg0 + 8) != 0) operator_delete__((void *)*(uint32_t *)(arg0 + 8)); *(uint32_t *)(arg0 + 8) = 0; *(uint32_t *)(arg0 + 12) = 0; *(uint32_t *)(arg0 + 16) = 0; return arg0;
}
#endif
