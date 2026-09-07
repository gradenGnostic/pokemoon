// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003969E4
void func_0035eb28(uint8_t*);
void func_0035e910(uint8_t*);
bool func_004a8334(uint8_t*);
void func_004a82f0(uint8_t*, uint8_t*);
bool func_00396378(uint8_t*, uint8_t*, int32_t*, int32_t*);
void func_00443840(uint8_t*, int32_t);
void func_003f454c(uint8_t*);
void func_003f3dec(uint8_t*);
void func_004312e8(uint8_t*, uint8_t*, int32_t);
void func_003742d4(uint8_t*);
bool func_004a81d0(uint8_t*);
void func_0043eb84(uint8_t*, int32_t);
void func_003f459c(uint8_t*);
uint32_t func_get_first();
void func_clear_first();
void func_003966ac(uint8_t*, int32_t, uint32_t, int32_t);
extern "C" void YellowAuto_003969e4(uint8_t* arg0, int32_t arg1) __asm__("_ZN5Field6EvTime6UpdateEPN7GameSys8GameDataEi");
extern "C" void YellowAuto_003969e4(uint8_t* arg0, int32_t arg1) {
uint8_t dev[8];
uint8_t now[8];
uint8_t sv[20];
uint8_t alola[8];
uint8_t mbuf[16];
int32_t diff_day = 0;
int32_t diff_minute = 0;
uint8_t* gtime = (uint8_t*)(*(uint32_t*)(arg0 + 4) + 0x38C0);
func_0035eb28(now);
func_0035e910(now);
func_0035eb28(sv);
if (!func_004a8334(gtime)) return;
func_004a82f0(gtime, sv);
if (!func_00396378(gtime, dev, &diff_day, &diff_minute)) return;
if (diff_minute == 0) {
if (diff_day != 0) return;
func_clear_first();
return;
}
func_00443840(gtime, diff_minute);
uint32_t first = func_get_first();
func_003f454c(alola);
func_003f3dec(alola);
func_004312e8((uint8_t*)(*(uint32_t*)(arg0 + 12)), mbuf, diff_minute);
if (arg1 != 0) {
func_003742d4((uint8_t*)(*(uint32_t*)(arg0 + 88)));
if (!func_004a81d0(gtime)) {
func_0043eb84((uint8_t*)(*(uint32_t*)(arg0 + 4) + 0x4EF20), diff_minute);
}
}
func_003f459c(alola);
if (diff_day == 0) {
func_clear_first();
return;
}
func_003966ac(arg0, diff_day, first, arg1);
func_clear_first();
return;
}
#endif
