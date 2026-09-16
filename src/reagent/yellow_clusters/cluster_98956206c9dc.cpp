// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003DA760
uint32_t func_ready(uint8_t*);
void func_enter(void*);
void func_leave(void*);
void func_mode(uint8_t*, uint32_t);
void func_poll(uint8_t*);
void func_err_init(void*);
void func_err_set(void*, uint32_t);
void* func_err_mgr();
extern "C" uint32_t YellowAuto_003da760(uint8_t* arg0) __asm__("_ZN6NetLib4Wifi17WifiConnectRunner6UpdateEv");
extern "C" uint32_t YellowAuto_003da760(uint8_t* arg0) {
if (func_ready(arg0) == 0) return 0;
func_enter((void*)(arg0 + 0x2C));
if (arg0[0x0C] == 2) func_mode(arg0, 1);
else if (arg0[0x0C] == 3) func_mode(arg0, 0);
else func_poll(arg0);
if (arg0[0x0D] != 0) {
uint8_t buf[12];
if (*(uint32_t*)(arg0 + 0x1C) != 0x4E98 || arg0[0x28] == 0) {
func_err_init((void*)buf);
func_err_set((void*)buf, *(uint32_t*)(arg0 + 0x1C));
(void)func_err_mgr();
}
func_leave((void*)(arg0 + 0x2C));
return 3;
}
if (arg0[0x0F] == 0) { func_leave((void*)(arg0 + 0x2C)); return 0; }
if (arg0[0x0E] != 0) { func_leave((void*)(arg0 + 0x2C)); return 2; }
func_leave((void*)(arg0 + 0x2C));
return 1;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003DAB98
void FUN_0040b620(uint32_t);
void FUN_0040c174(uint32_t);
void FUN_003f76c0(uint32_t);
extern "C" void YellowAuto_003dab98(uint8_t* arg0) __asm__("_ZN6NetLib4Wifi17WifiConnectRunner8FinalizeEv");
extern "C" void YellowAuto_003dab98(uint8_t* arg0) {
if (*(uint32_t *)(arg0 + 0x44) != 0) FUN_0040b620(*(uint32_t *)(arg0 + 0x44)); if (*(uint32_t *)(arg0 + 0x38) != 0) FUN_0040c174(*(uint32_t *)(arg0 + 0x38)); if (*(int8_t *)((*(uint32_t *)(arg0 + 0x3C)) + 0x3) != 0) FUN_003f76c0(*(uint32_t *)(arg0 + 0x3C)); *(uint32_t *)((*(uint32_t *)(arg0 + 0x3C)) + 0x1B8) = 0; *(uint32_t *)(arg0 + 0x34) = 4294967295U; return;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003DABE4
uint32_t helper_00357748();
uint32_t helper_00357708();
uint32_t helper_00357738();
uint32_t helper_00357678();
void helper_00106398(void*);
extern "C" uint8_t* YellowAuto_003dabe4(uint8_t* arg0, uint8_t arg1, bool arg2) __asm__("_ZN6NetLib4Wifi17WifiConnectRunnerC1ENS1_11E_EXEC_MODEEb");
extern "C" uint8_t* YellowAuto_003dabe4(uint8_t* arg0, uint8_t arg1, bool arg2) {
*(uint32_t*)arg0 = *(uint32_t*)0x3DAC8C;
*(uint32_t*)(arg0 + 4) = *(uint32_t*)0x3DAC8C + 64;
*(uint32_t*)(arg0 + 8) = *(uint32_t*)0x3DAC8C + 112;
arg0[12] = arg1;
arg0[13] = 0;
arg0[14] = 0;
arg0[15] = 0;
arg0[16] = 0;
arg0[17] = 0;
arg0[18] = 0;
arg0[19] = 0;
arg0[20] = 0;
*(uint32_t*)(arg0 + 24) = 0;
*(uint32_t*)(arg0 + 36) = 0;
*(uint32_t*)(arg0 + 28) = 0;
*(uint32_t*)(arg0 + 32) = 0;
arg0[40] = arg2;
*(uint32_t*)(arg0 + 44) = 0;
*(uint32_t*)(arg0 + 48) = 0;
*(uint32_t*)(arg0 + 52) = 4294967295u;
arg0[72] = 0;
*(uint32_t*)(arg0 + 56) = helper_00357748();
*(uint32_t*)(arg0 + 60) = helper_00357708();
*(uint32_t*)(arg0 + 68) = helper_00357738();
*(uint32_t*)(arg0 + 64) = helper_00357678();
helper_00106398(arg0 + 44);
*(uint32_t*)(*(uint32_t*)(arg0 + 60) + 440) = (uint32_t)(arg0 + 4);
return arg0;
}
#endif
