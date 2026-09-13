// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003F7E88
void* FUN_0017a570(uint32_t);
void* FUN_001e82f0(void*, int32_t);
void FUN_002329f4(uint8_t*, uint32_t);
extern "C" void* YellowAuto_003f7e88(int32_t arg0, uint32_t arg1) __asm__("_ZN7gflnet23nex10NexManager25CreateProtocolCallContextEbj");
extern "C" void* YellowAuto_003f7e88(int32_t arg0, uint32_t arg1) {
uint32_t v1[2]; void* v0 = FUN_0017a570(0x78u); if (v0 == 0) return 0; v0 = FUN_001e82f0(v0, 0); if (v0 != 0 && arg0 != 0) FUN_002329f4((uint8_t*)v1, arg1), *(uint32_t*)((uint8_t*)v0 + 0x58) = v1[0], *(uint32_t*)((uint8_t*)v0 + 0x5c) = v1[1]; return v0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003F7C58
void FUN_003fbf04(void*, int32_t);
extern "C" bool YellowAuto_003f7c58(uint8_t* arg0, int32_t arg1) __asm__("_ZN7gflnet23nex10NexManager21UnbindDataStoreClientEv");
extern "C" bool YellowAuto_003f7c58(uint8_t* arg0, int32_t arg1) {
if (*(void**)(arg0 + 0x1a0) == 0) return false; FUN_003fbf04(*(void**)(arg0 + 0x1a0), arg1); if (*(void**)(arg0 + 0x1a0) != 0) (*(void (**)(void))(*(uint32_t*)(*(void**)(arg0 + 0x1a0)) + 4))(); *(void**)(arg0 + 0x1a0) = 0; return true;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003F79DC
void* FUN_0017a570(uint32_t);
uint32_t FUN_003fc3fc(void*);
uint32_t FUN_003faa98(void*, uint32_t);
extern "C" uint32_t YellowAuto_003f79dc(uint8_t* arg0) __asm__("_ZN7gflnet23nex10NexManager19BindDataStoreClientEv");
extern "C" uint32_t YellowAuto_003f79dc(uint8_t* arg0) {
uint32_t v5 = *(uint32_t*)(*(uint32_t*)(arg0 + 0x138) + 0x78);
if (v5 == 0) return 0;
uint32_t v0 = *(uint32_t*)(arg0 + 0x1A0);
if (v0 == 0) {
void* v1 = FUN_0017a570(0x48);
uint32_t v2 = 0;
if (v1 != (void*)0) v2 = FUN_003fc3fc(v1);
*(uint32_t*)(arg0 + 0x1A0) = v2;
if (v2 == 0) return 0;
v0 = v2;
}
return FUN_003faa98((void*)v0, v5);
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003F84E0
void* FUN_00232050();
void FUN_00247e2c(void*, uint32_t, int32_t);
void FUN_0047b408(void*, void*);
bool FUN_00483fb0(const void*);
void* FUN_001980c0();
int32_t FUN_003f62b0(uint32_t);
void FUN_0023fd14();
extern "C" void YellowAuto_003f84e0(uint8_t* arg0, uint32_t arg1, bool arg2) __asm__("_ZN7gflnet23nex10NexManager8DispatchEjb");
extern "C" void YellowAuto_003f84e0(uint8_t* arg0, uint32_t arg1, bool arg2) {
uint32_t local_buf[3];
bool skip_init = false;
void* tmp0 = (void*)0;
void* tmp1 = (void*)0;
void* tmp2 = (void*)0;
void* tmp3 = (void*)0;
void* tmp4 = (void*)0;
uint32_t vtbl = 0;
uint32_t func = 0;
uint32_t res = 0;
int32_t chk = 0;
if (arg0[0x1B6] == 0) {
tmp0 = FUN_00232050();
if (tmp0 != (void*)0) {
tmp1 = *(void**)((uint8_t*)tmp0 + 0xC);
if (tmp1 != (void*)0) {
uint32_t use_arg = arg2 != false ? 0xFFFFFFFFu : arg1;
FUN_00247e2c(tmp1, use_arg, 0);
}
}
}
if (arg0[0x0] == 0) {
return;
}
if (arg0[0x1] != 0 && arg0[0x2] == 0) {
tmp2 = *(void**)(arg0 + 0x138);
if (tmp2 != (void*)0) {
FUN_0047b408((void*)local_buf, tmp2);
if (FUN_00483fb0((const void*)local_buf) != false) {
skip_init = true;
}
}
if (skip_init == false) {
tmp3 = *(void**)(arg0 + 0x1BC);
if (tmp3 != (void*)0) {
vtbl = *(uint32_t*)tmp3;
func = *(uint32_t*)(vtbl + 0x8);
((void(*)(void*))func)(tmp3);
}
arg0[0x2] = 1;
}
}
tmp4 = FUN_001980c0();
if (tmp4 == (void*)0) {
return;
}
vtbl = *(uint32_t*)tmp4;
func = *(uint32_t*)(vtbl + 0x14);
((void(*)(void*, void*))func)((void*)local_buf, tmp4);
res = local_buf[0];
if ((res & 0x80000000u) == 0) {
return;
}
chk = FUN_003f62b0(res);
if (chk != 0 && arg0[0x1D4] == 0) {
FUN_0023fd14();
arg0[0x1D4] = 1;
}
tmp3 = *(void**)(arg0 + 0x1BC);
if (tmp3 != (void*)0) {
vtbl = *(uint32_t*)tmp3;
func = *(uint32_t*)(vtbl + 0x4);
((void(*)(void*, void*))func)(tmp3, (void*)local_buf);
}
return;
}
#endif
