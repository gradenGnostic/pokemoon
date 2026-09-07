// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0048E250
extern "C" int32_t YellowAuto_0048e250(const uint8_t* arg0) __asm__("_ZNK3app4tool17ScrollPaneManager12GetScrollMaxEv");
extern "C" int32_t YellowAuto_0048e250(const uint8_t* arg0) {
int32_t v_b0 = *(const int16_t*)(arg0 + 0xb0);
int32_t v_ae = *(const int16_t*)(arg0 + 0xae);
int32_t v_abs = v_b0 - v_ae;
if (v_abs < 0) v_abs = v_ae - v_b0;
int32_t v_n1 = (int32_t)(int16_t)(*(const int32_t*)(arg0 + 0x98) - 1);
int32_t v_den = *(const int32_t*)(arg0 + 0x9c);
int32_t v_q1 = v_n1 / v_den;
int32_t v_q1s = (int32_t)(int16_t)v_q1;
int32_t v_step = (int32_t)*(const int16_t*)(arg0 + 0xaa);
int32_t v_q2 = v_abs / v_step;
if (v_q1s < v_q2 - 1) return 0;
int32_t v_n3 = (int32_t)(int16_t)(*(const int32_t*)(arg0 + 0x138) - 1);
int32_t v_q3 = v_n3 / v_den;
int32_t v_be = (int32_t)*(const uint16_t*)(arg0 + 0xbe);
int32_t v_res = (v_q3 - v_be + 1) * v_step;
return (int32_t)(int16_t)v_res;
}
#endif
