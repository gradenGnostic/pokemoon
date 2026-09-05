// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0015C5D8
void* GetInstance();
void RegistSystemEventListener(void* arg0, void* arg1);
void* operator_new__(uint32_t arg0, void* arg1);
extern "C" uint8_t* YellowAuto_0015c5d8(uint8_t* arg0, void* arg1) __asm__("_ZN11ExtSavedata21RegulationExtSaveDataC1EPN4gfl24heap11CtrHeapBaseE");
extern "C" uint8_t* YellowAuto_0015c5d8(uint8_t* arg0, void* arg1) {
*(uint32_t *)(arg0 + 4) = 0;
*(uint32_t *)arg0 = 0x0015c634;
*(void **)(arg0 + 0x10) = arg1;
*(uint32_t *)(arg0 + 8) = 0;
*(uint8_t *)(arg0 + 0xc) = 0;
*(uint8_t *)(arg0 + 0x14) = 0;
*(uint32_t *)(arg0 + 0x18) = 0;
*(uint32_t *)(arg0 + 0x1c) = 0;
*(uint8_t *)(arg0 + 0x20) = 0;
RegistSystemEventListener(GetInstance(), arg0);
*(uint32_t *)(arg0 + 0x1c) = (uint32_t)operator_new__(0x10000, arg1);
return arg0;
}
#endif
