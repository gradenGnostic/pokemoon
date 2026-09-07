// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0040B49C
extern const uint8_t* Base64Table;
extern "C" bool YellowAuto_0040b49c(void* arg0, const void* arg1, uint32_t arg2) __asm__("_ZN7gflnet24util13Base64Utility6EncodeEPvPKvj");
extern "C" bool YellowAuto_0040b49c(void* arg0, const void* arg1, uint32_t arg2) {
if (arg0 == (void*)0 || arg1 == (const void*)0 || arg2 == (uint32_t)0) {
return false;
}
const uint8_t* src = (const uint8_t*)arg1;
uint8_t* dst = (uint8_t*)arg0;
uint32_t code = (uint32_t)0;
uint32_t i = (uint32_t)0;
uint32_t k = (uint32_t)0;
for (uint32_t n = (uint32_t)0; n < (uint32_t)arg2; ++n) {
code = (code << (uint32_t)8) | (uint32_t)(*src);
if (i == (uint32_t)2) {
uint32_t shift = (uint32_t)18;
for (uint32_t j = (uint32_t)0; j < (uint32_t)4; ++j) {
dst[k] = Base64Table[(code >> shift) & (uint32_t)0x3F];
k += (uint32_t)1;
shift -= (uint32_t)6;
}
i = (uint32_t)0;
code = (uint32_t)0;
} else {
i += (uint32_t)1;
}
src += (uint32_t)1;
}
if (i != (uint32_t)0) {
for (uint32_t t = i - (uint32_t)1; t < (uint32_t)2; ++t) {
code <<= (uint32_t)8;
}
uint32_t nchars = i + (uint32_t)1;
uint32_t shift = (uint32_t)18;
for (uint32_t j = (uint32_t)0; j < nchars; ++j) {
dst[k] = Base64Table[(code >> shift) & (uint32_t)0x3F];
k += (uint32_t)1;
shift -= (uint32_t)6;
}
for (uint32_t j = nchars; j < (uint32_t)4; ++j) {
dst[k] = (uint8_t)0x2A;
k += (uint32_t)1;
}
}
return true;
}
#endif
