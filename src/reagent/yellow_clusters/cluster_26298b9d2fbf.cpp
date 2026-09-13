// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00302D96
extern "C" uint8_t YellowAuto_00302d96(const uint8_t* arg0, uint8_t arg1) __asm__("_ZNK4__rw17__rw_collate_dataIcE13_C_coll_orderEc");
extern "C" uint8_t YellowAuto_00302d96(const uint8_t* arg0, uint8_t arg1) {
const uint8_t* n = *reinterpret_cast<const uint8_t* const*>(arg0) + 4;
while (true) {
if (n == nullptr) {
return arg1;
}
uint32_t lo = *(n + 12);
if (lo > arg1) {
n = *reinterpret_cast<const uint8_t* const*>(n);
continue;
}
uint32_t hi = *(n + 13);
if (hi < arg1) {
n = *reinterpret_cast<const uint8_t* const*>(n + 4);
continue;
}
const uint8_t* t = *reinterpret_cast<const uint8_t* const*>(n + 8);
if (t != nullptr) {
return *(t + (static_cast<uint32_t>(arg1) - lo));
}
return static_cast<uint8_t>(static_cast<uint32_t>(*(n + 14)) + static_cast<uint32_t>(arg1));
}
}
#endif
