// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0017090C
void func_00524fa0(uint32_t, uint8_t*);
int32_t func_00105534(uint32_t*, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
void func_00107750(int32_t);
extern "C" uint32_t YellowAuto_0017090c(uint8_t* arg0) __asm__("_ZN2nn2os11StackMemory8FinalizeEv");
extern "C" uint32_t YellowAuto_0017090c(uint8_t* arg0) {
uint32_t v0 = *(uint32_t*)(arg0 + 8);
if (v0 == 0) return 0;
uint32_t v1 = *(uint32_t*)(arg0 + 20);
uint32_t v2 = *(uint32_t*)(arg0 + 12);
func_00524fa0(*(uint32_t*)0x00170990, arg0);
uint32_t out;
int32_t r = func_00105534(&out, v0, v1, v2, 5, 3);
if (r < 0) func_00107750(r);
r = func_00105534(&out, v1, 0, v2, 6, 3);
if (r < 0) func_00107750(r);
return v1;
}
#endif
