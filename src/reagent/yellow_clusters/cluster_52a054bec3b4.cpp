// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0030C2FC
extern "C" void YellowAuto_0030c2fc(uint8_t* arg0, uint32_t arg1, uint32_t arg2) __asm__("_ZN3app4util19KeyRepeatController9SetMaxPosEjj");
extern "C" void YellowAuto_0030c2fc(uint8_t* arg0, uint32_t arg1, uint32_t arg2) {
*(uint32_t *)(arg0 + 0x14) = arg2; *(uint32_t *)(arg0 + 0x18) = arg1; return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0030C308
extern "C" void YellowAuto_0030c308(uint8_t* arg0, uint32_t arg1, uint32_t arg2) __asm__("_ZN3app4util19KeyRepeatControllerC1Ejj");
extern "C" void YellowAuto_0030c308(uint8_t* arg0, uint32_t arg1, uint32_t arg2) {
*(uint32_t *)(arg0 + 4) = 0; *(uint32_t *)arg0 = *(uint32_t *)0x0030c330; *(uint32_t *)(arg0 + 8) = 0; *(uint32_t *)(arg0 + 0xc) = 0; *(uint32_t *)(arg0 + 0x18) = arg1; *(uint32_t *)(arg0 + 0x14) = arg2; *(uint32_t *)(arg0 + 0x10) = 0; return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0030C190
extern "C" void YellowAuto_0030c190(uint8_t* arg0, void* arg1, uint32_t arg2, uint32_t arg3, void* arg4) __asm__("_ZN3app4util19KeyRepeatController10UpdateInfoEPN4gfl22ui12VectorDeviceEjjPNS3_6ButtonE");
extern "C" void YellowAuto_0030c190(uint8_t* arg0, void* arg1, uint32_t arg2, uint32_t arg3, void* arg4) {
*(void **)(arg0 + 4) = arg1; *(void **)(arg0 + 8) = arg4; *(uint32_t *)(arg0 + 0xc) = arg3; *(uint32_t *)(arg0 + 0x10) = arg2; return;
}
#endif
