// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00311DE4
uint8_t* __aeabi_vec_ctor_nocookie_nodtor(uint8_t* arg0, const void* arg1, uint32_t arg2, uint32_t arg3);
extern "C" uint8_t* YellowAuto_00311de4(uint8_t* arg0) __asm__("_ZN3app4util9AppCameraC1Ev");
extern "C" uint8_t* YellowAuto_00311de4(uint8_t* arg0) {
*(uint32_t *)arg0 = *(uint32_t *)0x00311eb4; uint32_t arg1 = *(uint32_t *)0x00311eb8; uint32_t arg2 = *(uint32_t *)0x00311ebc; uint8_t *arg3 = __aeabi_vec_ctor_nocookie_nodtor(arg0 + 4, (const void *)0x00311ec0, 0x10, 3); ((uint32_t *)arg3)[0] = arg1; ((uint32_t *)arg3)[1] = arg2; ((uint32_t *)arg3)[2] = arg2; ((uint32_t *)arg3)[3] = arg2; ((uint32_t *)arg3)[4] = arg2; ((uint32_t *)arg3)[5] = arg1; ((uint32_t *)arg3)[6] = arg2; ((uint32_t *)arg3)[7] = arg2; ((uint32_t *)arg3)[8] = arg2; ((uint32_t *)arg3)[9] = arg2; ((uint32_t *)arg3)[10] = arg1; ((uint32_t *)arg3)[11] = arg2; uint8_t *arg4 = __aeabi_vec_ctor_nocookie_nodtor(arg0 + 0x34, (const void *)0x00311ec0, 0x10, 4); ((uint32_t *)arg4)[0] = arg1; ((uint32_t *)arg4)[1] = arg2; ((uint32_t *)arg4)[2] = arg2; ((uint32_t *)arg4)[3] = arg2; ((uint32_t *)arg4)[4] = arg2; ((uint32_t *)arg4)[5] = arg1; ((uint32_t *)arg4)[6] = arg2; ((uint32_t *)arg4)[7] = arg2; ((uint32_t *)arg4)[8] = arg2; ((uint32_t *)arg4)[9] = arg2; ((uint32_t *)arg4)[10] = arg1; ((uint32_t *)arg4)[11] = arg2; ((uint32_t *)arg4)[12] = arg2; ((uint32_t *)arg4)[13] = arg2; ((uint32_t *)arg4)[14] = arg2; ((uint32_t *)arg4)[15] = arg1; *(uint8_t *)(arg0 + 0x74) = 0; return arg0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00311D10
void FUN_00359db0(uint32_t arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t *arg6, bool arg7);
extern "C" void YellowAuto_00311d10(uint32_t arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3, uint8_t* arg4, bool arg5) __asm__("_ZN3app4util9AppCamera24SetOrthoProjectionMatrixEffffb");
extern "C" void YellowAuto_00311d10(uint32_t arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3, uint8_t* arg4, bool arg5) {
uint32_t local_50[16]; float f0 = *(float *)&arg0; float f1 = *(float *)&arg1; float f2 = *(float *)&arg2; float f3 = *(float *)&arg3; FUN_00359db0(f1 * f0 * *(const float *)0x00311ddc, f1 * f0 * *(const float *)0x00311de0, f1 * *(const float *)0x00311ddc, f1 * *(const float *)0x00311de0, f2, f3, local_50, arg5); *(uint32_t *)(arg4 + 0x34) = local_50[0]; *(uint32_t *)(arg4 + 0x38) = local_50[1]; *(uint32_t *)(arg4 + 0x3c) = local_50[2]; *(uint32_t *)(arg4 + 0x40) = local_50[3]; *(uint32_t *)(arg4 + 0x44) = local_50[4]; *(uint32_t *)(arg4 + 0x48) = local_50[5]; *(uint32_t *)(arg4 + 0x4c) = local_50[6]; *(uint32_t *)(arg4 + 0x50) = local_50[7]; *(uint32_t *)(arg4 + 0x54) = local_50[8]; *(uint32_t *)(arg4 + 0x58) = local_50[9]; *(uint32_t *)(arg4 + 0x5c) = local_50[10]; *(uint32_t *)(arg4 + 0x60) = local_50[11]; *(uint32_t *)(arg4 + 0x64) = local_50[12]; *(uint32_t *)(arg4 + 0x68) = local_50[13]; *(uint32_t *)(arg4 + 0x6c) = local_50[14]; *(uint32_t *)(arg4 + 0x70) = local_50[15]; *(uint8_t *)(arg4 + 0x74) = 1;
}
#endif
