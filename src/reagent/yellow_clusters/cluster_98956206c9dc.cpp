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
