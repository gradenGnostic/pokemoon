// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0041E38C
void f_00306a2c(uint32_t, void*, uint32_t, uint32_t);
uint32_t f_00306858(uint32_t);
void f_00306bbc(uint32_t, uint32_t, void*, uint32_t, void*, uint32_t, uint32_t, uint32_t);
void f_00306b74(uint32_t);
extern "C" void YellowAuto_0041e38c(void* arg0, uint32_t arg1, void* arg2) __asm__("_ZN7trainer15LoadTrainerDataEPN4gfl24heap11CtrHeapBaseENS_9TrainerIDEPNS_12TRAINER_DATAE");
extern "C" void YellowAuto_0041e38c(void* arg0, uint32_t arg1, void* arg2) {
f_00306a2c(105, ((void* (*)(void*))(*(uint32_t*)(*(uint32_t*)arg0 + 52)))(arg0), 1, 255); if (f_00306858(105) == 0) return; f_00306bbc(105, ((uint32_t)arg1 == 0 || (uint32_t)arg1 > 484 ? 1 : (uint32_t)arg1), arg2, 20, ((void* (*)(void*))(*(uint32_t*)(*(uint32_t*)arg0 + 52)))(arg0), 0, 4, 255); f_00306b74(105); return;
}
#endif
