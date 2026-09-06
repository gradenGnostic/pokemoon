// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003F49B8
void Finalize(uint8_t* arg0, void* arg1, uint32_t arg2);
extern "C" void YellowAuto_003f49b8(uint8_t* arg0, void* arg1, uint32_t arg2) __asm__("_ZN7gflnet212ServerClient26ServerClientRequestManager10InitializeEPN4gfl24heap11CtrHeapBaseE");
extern "C" void YellowAuto_003f49b8(uint8_t* arg0, void* arg1, uint32_t arg2) {
Finalize(arg0, arg1, arg2); *(void**)(arg0 + 16) = arg1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003F49D0
void* FUN_003f4d74(void*, uint32_t, uint32_t, uint32_t);
extern "C" void YellowAuto_003f49d0(uint8_t* arg0, uint32_t arg1) __asm__("_ZN7gflnet212ServerClient26ServerClientRequestManager13CancelRequestEy");
extern "C" void YellowAuto_003f49d0(uint8_t* arg0, uint32_t arg1) {
void* result = 0; if (*(void**)0x003f4a00 != 0) result = FUN_003f4d74(*(void**)0x003f4a00, arg1, (uint32_t)arg0, arg1); if (result != 0) *(uint8_t*)((uint8_t*)result + 16) = 1;
}
#endif
