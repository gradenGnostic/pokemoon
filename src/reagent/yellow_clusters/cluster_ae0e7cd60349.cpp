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

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003D7420
void Func_003D4808(uint32_t, uint8_t*);
void Func_00190D74(uint32_t);
void Func_0017A54C(uint32_t);
void Func_0030181C(uint32_t);
void Func_003E6C40(uint32_t);
extern "C" void YellowAuto_003d7420(uint8_t* arg0) __asm__("_ZN6NetLib3P2P20P2pConnectionManager9TerminateEv");
extern "C" void YellowAuto_003d7420(uint8_t* arg0) {
if (arg0[0x24] != 1) return;
uint8_t m = arg0[0x26];
if (m == 0x65 || m == 0x66 || m == 0x67 || m == 0x68 || m == 0x6F) {
uint32_t c = *(uint32_t*)(arg0 + 0x28);
if (c != 0) {
Func_003D4808(c, arg0 + 4);
c = *(uint32_t*)(arg0 + 0x28);
if (c != 0) {
uint32_t vt = *(uint32_t*)c;
uint32_t fn = *(uint32_t*)(vt + 4);
((void(*)(uint32_t))fn)(c);
*(uint32_t*)(arg0 + 0x28) = 0;
}
}
uint32_t o = *(uint32_t*)(arg0 + 0x50);
if (o != 0) {
uint32_t h = *(uint32_t*)o;
Func_00190D74(h);
Func_0017A54C(o);
*(uint32_t*)(arg0 + 0x50) = 0;
}
}
uint32_t e = *(uint32_t*)(arg0 + 0x18);
if (e != 0) {
uint32_t vt2 = *(uint32_t*)e;
uint32_t fn2 = *(uint32_t*)(vt2 + 8);
((void(*)(uint32_t))fn2)(e);
*(uint32_t*)(arg0 + 0x18) = 0;
}
uint32_t f = *(uint32_t*)(arg0 + 0x1C);
if (f != 0) {
Func_0030181C(f);
*(uint32_t*)(arg0 + 0x1C) = 0;
}
*(uint32_t*)(arg0 + 0x0C) = 0;
*(uint32_t*)(arg0 + 0x10) = 0;
arg0[0x14] = 0;
arg0[0x24] = 0;
Func_003E6C40(1);
}
#endif
