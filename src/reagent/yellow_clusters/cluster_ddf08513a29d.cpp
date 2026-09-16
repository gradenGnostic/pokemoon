// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00311F6C
void SetMarkSize(uint8_t* arg0, float arg1);
extern const float DAT_00311f9c;
extern "C" void YellowAuto_00311f6c(uint8_t* arg0, uint32_t arg1) __asm__("_ZN3app4util9ScrollBar11ChangeParamEj");
extern "C" void YellowAuto_00311f6c(uint8_t* arg0, uint32_t arg1) {
*(float*)(arg0 + 8) = (float)arg1;
if (arg1 != 0) SetMarkSize(*(uint8_t**)arg0, *(float*)(arg0 + 8) + DAT_00311f9c);
else SetMarkSize(*(uint8_t**)arg0, *(float*)(arg0 + 8));
}
#endif
