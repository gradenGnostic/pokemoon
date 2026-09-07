// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0049780C
extern "C" void* YellowAuto_0049780c(const uint8_t* arg0, uint32_t arg1) __asm__("_ZNK4gfl22fs17BinLinkerAccessor7GetDataEj");
extern "C" void* YellowAuto_0049780c(const uint8_t* arg0, uint32_t arg1) {
const uint8_t* buff = *(const uint8_t* const*)arg0;
void* res = (void*)0;
if (buff != (const uint8_t*)0) {
uint32_t cnt = (uint32_t)*(const uint16_t*)(buff + 2);
if (arg1 < cnt) {
uint32_t off = *(const uint32_t*)(buff + 4 + arg1 * 4);
res = (void*)(buff + off);
}
}
return res;
}
#endif
