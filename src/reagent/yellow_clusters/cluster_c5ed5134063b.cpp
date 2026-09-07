// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0030C1A4
bool VectorDevice_IsTrigger(void*, uint32_t);
bool VectorDevice_IsRepeat(void*, uint32_t);
bool Button_IsTrigger(void*, uint32_t, uint32_t);
bool Button_IsRepeat(void*, uint32_t, uint32_t);
extern "C" bool YellowAuto_0030c1a4(uint8_t* arg0, uint32_t arg1) __asm__("_ZN3app4util19KeyRepeatController8IsRepeatEj");
extern "C" bool YellowAuto_0030c1a4(uint8_t* arg0, uint32_t arg1) {
void* v0 = *(void**)(arg0 + 4);
if (v0 == 0) return false;
void* v1 = 0;
uint32_t v2 = 0;
if (arg1 == 1) {
v1 = *(void**)(arg0 + 8);
v2 = 0x100;
} else if (arg1 == 2) {
v1 = *(void**)(arg0 + 8);
v2 = 0x200;
}
bool v3 = false;
if (arg1 == 1) {
v3 = *(int32_t*)(arg0 + 12) == 0;
} else if (arg1 == 2) {
v3 = *(int32_t*)(arg0 + 12) == *(int32_t*)(arg0 + 20);
} else if (arg1 == 4) {
v3 = *(int32_t*)(arg0 + 16) == 0;
} else if (arg1 == 8) {
v3 = *(int32_t*)(arg0 + 16) == *(int32_t*)(arg0 + 24);
}
if (v3) {
if (VectorDevice_IsTrigger(v0, arg1)) return true;
if (v1 == 0) return false;
if (Button_IsTrigger(v1, v2, 0)) return true;
return false;
} else {
if (VectorDevice_IsRepeat(v0, arg1)) return true;
if (v1 == 0) return false;
if (Button_IsRepeat(v1, v2, 0)) return true;
return false;
}
}
#endif
