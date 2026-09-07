// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004998E0
extern "C" void* YellowAuto_004998e0(const uint8_t* arg0, const uint16_t* arg1) __asm__("_ZNK4gfl23lyt6LytSys11GetResourceEPKNS0_13LytMultiResIDE");
extern "C" void* YellowAuto_004998e0(const uint8_t* arg0, const uint16_t* arg1) {
const uint8_t* v0 = *(const uint8_t* const*)arg0; const uint8_t* v1 = *(const uint8_t* const*)(v0 + 0x10); uint32_t v2 = *(const uint32_t*)(v1 + 4); uint16_t v3 = *arg1; if (v2 <= (uint32_t)v3) return (void*)0; const uint8_t* v4 = *(const uint8_t* const*)v1; return (void*)(v4 + (uint32_t)v3 * 0x34);
}
#endif
