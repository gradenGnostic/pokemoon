// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043B9AC
int32_t TimeToSecond(uint16_t, uint8_t, uint8_t, uint8_t, uint8_t);
int32_t TimeoutPenaltySeconds();
extern "C" bool YellowAuto_0043b9ac(uint8_t* arg0, uint16_t arg1, uint8_t arg2, uint8_t arg3, uint8_t arg4, uint8_t arg5) __asm__("_ZN8Savedata15MysteryGiftSave11SERIAL_DATA19QueryTimeoutPenaltyEthhhh");
extern "C" bool YellowAuto_0043b9ac(uint8_t* arg0, uint16_t arg1, uint8_t arg2, uint8_t arg3, uint8_t arg4, uint8_t arg5) {
int32_t arg1_sec = TimeToSecond(arg1, arg2, arg3, arg4, arg5);
uint16_t arg0_y = *(uint16_t*)arg0;
uint8_t arg0_mo = arg0[2];
uint8_t arg0_d = arg0[3];
uint8_t arg0_h = arg0[4];
uint8_t arg0_mi = arg0[5];
int32_t arg0_sec = TimeToSecond(arg0_y, arg0_mo, arg0_d, arg0_h, arg0_mi);
bool arg0_timecheck = (arg0_sec <= arg1_sec);
bool arg0_localcheck = (0 < arg0_sec);
bool arg0_easy = (0 < arg1_sec) && arg0_timecheck && arg0_localcheck;
if (arg0_easy) {
int32_t arg0_elapsed = arg1_sec - arg0_sec;
if (TimeoutPenaltySeconds() <= arg0_elapsed) {
arg0[6] = 0;
arg0[7] = 0;
}
} else if (!arg0_timecheck || !arg0_localcheck) {
arg0[6] = 0;
arg0[7] = 0;
}
return arg0[6] != 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043BB10
bool QueryTimeoutPenalty(uint8_t*, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t);
extern "C" bool YellowAuto_0043bb10(uint8_t* arg0, bool arg1, uint16_t arg2, uint8_t arg3, uint8_t arg4, uint8_t arg5, uint8_t arg6) __asm__("_ZN8Savedata15MysteryGiftSave11SERIAL_DATA22UpdateSerialAuthStatusEbthhhh");
extern "C" bool YellowAuto_0043bb10(uint8_t* arg0, bool arg1, uint16_t arg2, uint8_t arg3, uint8_t arg4, uint8_t arg5, uint8_t arg6) {
QueryTimeoutPenalty(arg0, arg2, arg3, arg4, arg5, arg6);
if (arg1 != 0) {
arg0[6] = 0;
arg0[7] = 0;
} else {
if (arg0[7] < 10) {
arg0[7] = (uint8_t)(arg0[7] + 1);
}
*(uint16_t*)arg0 = arg2;
arg0[2] = arg3;
arg0[3] = arg4;
arg0[4] = arg5;
arg0[5] = arg6;
arg0[6] = (uint8_t)((10 <= arg0[7]) ? 1 : 0);
}
return arg0[6] != 0;
}
#endif
