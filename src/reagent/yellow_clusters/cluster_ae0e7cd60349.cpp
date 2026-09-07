// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003D6E74
void FUN_002fe954(void *arg0, uint32_t arg1);
void *FUN_002fec20(void *arg0, const void *arg1, uint32_t arg2);
void FUN_0035be88(uint32_t arg0, uint32_t arg1, uint32_t arg2);
extern "C" void YellowAuto_003d6e74(uint8_t* arg0, const void* arg1, uint32_t arg2) __asm__("_ZN6NetLib3P2P20P2pConnectionManager23SetLocalP2PMasterBeaconEPKvj");
extern "C" void YellowAuto_003d6e74(uint8_t* arg0, const void* arg1, uint32_t arg2) {
if (arg2 > 200) { FUN_0035be88(0, 0, 0); return; } FUN_002fe954((void *)(arg0 + 192), 200); FUN_002fec20((void *)(arg0 + 192), arg1, arg2); *(uint32_t *)(arg0 + 392) = arg2; return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003D6250
bool FUN_00406fb4(void *arg0, int32_t arg1);
void FUN_003d2b38(void *arg0);
extern "C" bool YellowAuto_003d6250(uint8_t* arg0, int32_t arg1) __asm__("_ZN6NetLib3P2P20P2pConnectionManager11IsTimingEndEi");
extern "C" bool YellowAuto_003d6250(uint8_t* arg0, int32_t arg1) {
if (*(void **)(arg0 + 32) == (void *)0) { return false; } if (FUN_00406fb4(*(void **)(arg0 + 32), arg1) == false) { return false; } FUN_003d2b38((void *)(arg0 + 96)); return true;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003D6280
void FUN_00407000(void *arg0, int32_t arg1);
void FUN_003d2b44(void *arg0, uint32_t arg1);
extern "C" void YellowAuto_003d6280(uint8_t* arg0, int32_t arg1, bool arg2) __asm__("_ZN6NetLib3P2P20P2pConnectionManager11TimingStartEib");
extern "C" void YellowAuto_003d6280(uint8_t* arg0, int32_t arg1, bool arg2) {
if (*(void **)(arg0 + 32) != (void *)0) { FUN_00407000(*(void **)(arg0 + 32), arg1); } if (arg2 != false) { FUN_003d2b44((void *)(arg0 + 96), 30); } return;
}
#endif
