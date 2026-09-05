// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0029A044
extern "C" void YellowAuto_0029a044(uint8_t* arg0) __asm__("_ZN4gfl26Effect6System10BeginFrameEv");
extern "C" void YellowAuto_0029a044(uint8_t* arg0) {
int32_t arg1 = *(int32_t *)(arg0 + 4); *(uint32_t *)(arg1 + 0x460) = 0; *(uint32_t *)(arg1 + 0x470) = 0; *(uint32_t *)(arg1 + 0x478) = 0; *(uint32_t *)(arg1 + 0x4d8) = 0; *(uint32_t *)(arg1 + 0x464) = 0; *(uint32_t *)(arg1 + 0x468) = 0; *(uint32_t *)(arg1 + 0x46c) = 0; *(uint32_t *)(arg1 + 0x47c) = 0; *(uint32_t *)(arg1 + 0x480) = 0; *(uint32_t *)(arg1 + 0x488) = 0; *(uint32_t *)(arg1 + 0x48c) = 0; return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0035E088
void FUN_0029b788(int32_t, void*, const uint32_t*, int32_t, int32_t, int16_t, uint32_t);
extern "C" void YellowAuto_0035e088(uint8_t* arg0, void* arg1, const uint32_t* arg2, int32_t arg3, int32_t arg4, int16_t arg5, uint32_t arg6) __asm__("_ZN4gfl26Effect6System18CreateEmitterSetIDEPNS0_6HandleERKNS_4math8Matrix34Eiihj");
extern "C" void YellowAuto_0035e088(uint8_t* arg0, void* arg1, const uint32_t* arg2, int32_t arg3, int32_t arg4, int16_t arg5, uint32_t arg6) {
uint32_t arg7[12]; arg7[0] = arg2[0]; arg7[1] = arg2[1]; arg7[2] = arg2[2]; arg7[3] = arg2[3]; arg7[4] = arg2[4]; arg7[5] = arg2[5]; arg7[6] = arg2[6]; arg7[7] = arg2[7]; arg7[8] = arg2[8]; arg7[9] = arg2[9]; arg7[10] = arg2[10]; arg7[11] = arg2[11]; FUN_0029b788(*(int32_t *)(arg0 + 4), arg1, arg7, arg3, arg4, arg5, arg6); return;
}
#endif
