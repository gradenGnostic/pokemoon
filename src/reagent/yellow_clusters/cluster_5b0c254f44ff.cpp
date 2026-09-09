// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00162254
uint8_t* FUN_00336d90(uint8_t* arg0, void* arg1);
extern uint32_t DAT_001622ac;
uint8_t* FUN_0057e384(uint8_t* arg0);
uint8_t* FUN_002c7780(uint8_t* arg0);
uint8_t* FUN_001632d8(uint8_t* arg0);
void FUN_0057e218(uint8_t* arg0, uint32_t arg1, void* arg2);
extern void* DAT_001622b0;
void FUN_00276dd8(void* arg0);
extern "C" uint8_t* YellowAuto_00162254(uint8_t* arg0, void* arg1) __asm__("_ZN26FullPowerEffectRenderPath1C1EPN4gfl23gfx12IGLAllocatorE");
extern "C" uint8_t* YellowAuto_00162254(uint8_t* arg0, void* arg1) {
uint8_t* base = FUN_00336d90(arg0, arg1);
*(uint32_t*)base = DAT_001622ac;
uint8_t* tmp0 = FUN_0057e384(base + 56);
uint8_t* tmp1 = FUN_002c7780(tmp0 + 44);
uint8_t* tmp2 = FUN_001632d8(tmp1 + 156);
*(void**)(tmp2 - 8) = arg1;
FUN_0057e218(tmp2 - 200, 2U, arg1);
*(uint32_t*)(tmp2 - 4) = 0U;
FUN_00276dd8(DAT_001622b0);
return tmp2 - 256;
}
#endif
