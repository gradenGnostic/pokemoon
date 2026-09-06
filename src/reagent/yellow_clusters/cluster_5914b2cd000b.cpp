// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0032083C
int32_t FUN_00107650(void* arg0);
void ClearSignal(void* arg0);
void FUN_0032221c(void* arg0);
void* FUN_00320b70(void* arg0);
void FUN_0032274c(void* arg0, void* arg1, void* arg2);
extern "C" uint8_t YellowAuto_0032083c(uint8_t* arg0) __asm__("_ZN4gfl212devicecamera12DeviceCamera6UpdateEv");
extern "C" uint8_t YellowAuto_0032083c(uint8_t* arg0) {
if (*(uint32_t *)(arg0 + 0x14) != 0 && *(uint32_t *)(arg0 + 0x60) != 0 && FUN_00107650((void *)(*(uint32_t *)(arg0 + 0x14) + 0x70)) != 0 && *(uint8_t *)(*(uint32_t *)(arg0 + 0x60) + 0x68) == 2) ClearSignal((void *)(*(uint32_t *)(arg0 + 0x14) + 0x70)), FUN_0032221c(arg0 + 0x64), FUN_0032221c(arg0 + 0x84), FUN_0032274c(*(void **)(arg0 + 0x60), FUN_00320b70(arg0 + 0x18), FUN_00320b70(arg0 + 0x3c)); return *(uint8_t *)(arg0 + 0x10);
}
#endif
