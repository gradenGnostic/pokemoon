// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00317D8C
void func_00319e64(const uint8_t *, uint8_t *);
void func_0031a0bc(uint8_t *, const uint8_t *);
extern uint8_t serialize_buffer_00317db4[];
extern "C" void YellowAuto_00317d8c(uint8_t* arg0, const uint8_t* arg1) __asm__("_ZN3pml8pokepara12PokemonParam8CopyFromERKS1_");
extern "C" void YellowAuto_00317d8c(uint8_t* arg0, const uint8_t* arg1) {
const uint8_t * src_inner = *(const uint8_t * const *)(arg1 + 12); func_00319e64(src_inner, serialize_buffer_00317db4); uint8_t * dst_inner = *(uint8_t * const *)(arg0 + 12); func_0031a0bc(dst_inner, serialize_buffer_00317db4);
}
#endif
