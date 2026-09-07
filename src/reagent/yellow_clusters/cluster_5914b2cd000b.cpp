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

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00320830
void FUN_00107590(void*);
extern "C" void YellowAuto_00320830(uint8_t* arg0) __asm__("_ZN4gfl212devicecamera12DeviceCamera5StartEv");
extern "C" void YellowAuto_00320830(uint8_t* arg0) {
FUN_00107590(reinterpret_cast<void*>(*reinterpret_cast<uint32_t*>(arg0 + 0x14) + 0x40));
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003200E8
uint32_t FUN_00493f28(void*);
extern "C" uint32_t YellowAuto_003200e8(uint8_t* arg0, uint32_t arg1, uint32_t* arg2) __asm__("_ZN4gfl212devicecamera12DeviceCamera11GetYUVImageENS0_10CameraTypeEPj");
extern "C" uint32_t YellowAuto_003200e8(uint8_t* arg0, uint32_t arg1, uint32_t* arg2) {
uint32_t idx = 0; if (arg1 == 1 || arg1 == 2 || arg1 == 3) idx = 1; else if (arg1 == 4) idx = 2; else if (arg1 == 5 || arg1 == 6 || arg1 == 7) idx = 3; if (idx == 1) { uint32_t r = FUN_00493f28(arg0 + 0x18); if (arg2 == nullptr) return r; *arg2 = *reinterpret_cast<uint32_t*>(arg0 + 0x38); return r; } if (idx != 2) return 0; uint32_t r = FUN_00493f28(arg0 + 0x3C); if (arg2 == nullptr) return r; *arg2 = *reinterpret_cast<uint32_t*>(arg0 + 0x5C); return r;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003208C4
void FUN_00322bd4(void*);
void FUN_00322318(void*);
void FUN_00321e04(void*);
void FUN_00320cd8(void*);
extern "C" void YellowAuto_003208c4(uint8_t* arg0) __asm__("_ZN4gfl212devicecamera12DeviceCamera7CleanupEv");
extern "C" void YellowAuto_003208c4(uint8_t* arg0) {
if (*reinterpret_cast<uint32_t*>(arg0 + 0x60) != 0) { FUN_00322bd4(reinterpret_cast<void*>(*reinterpret_cast<uint32_t*>(arg0 + 0x60))); if (*reinterpret_cast<uint32_t*>(arg0 + 0x60) != 0) { uint32_t o = *reinterpret_cast<uint32_t*>(arg0 + 0x60); uint32_t vt = *reinterpret_cast<uint32_t*>(o); uint32_t fn = *reinterpret_cast<uint32_t*>(vt + 4); reinterpret_cast<void(*)(uint32_t)>(fn)(o); *reinterpret_cast<uint32_t*>(arg0 + 0x60) = 0; } FUN_00322318(arg0 + 0x64); FUN_00322318(arg0 + 0x84); } if (*reinterpret_cast<uint32_t*>(arg0 + 0x14) != 0) { FUN_00321e04(reinterpret_cast<void*>(*reinterpret_cast<uint32_t*>(arg0 + 0x14))); if (*reinterpret_cast<uint32_t*>(arg0 + 0x14) != 0) { uint32_t o = *reinterpret_cast<uint32_t*>(arg0 + 0x14); uint32_t vt = *reinterpret_cast<uint32_t*>(o); uint32_t fn = *reinterpret_cast<uint32_t*>(vt + 4); reinterpret_cast<void(*)(uint32_t)>(fn)(o); *reinterpret_cast<uint32_t*>(arg0 + 0x14) = 0; } FUN_00320cd8(arg0 + 0x18); FUN_00320cd8(arg0 + 0x3C); } *reinterpret_cast<uint32_t*>(arg0 + 0xA4) = 0;
}
#endif
