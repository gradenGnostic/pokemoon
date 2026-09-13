// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0045E624
extern "C" uint32_t YellowAuto_0045e624(uint8_t* arg0) __asm__("_ZN9NetAppLib4Util8PackFile12GetFileCountEv");
extern "C" uint32_t YellowAuto_0045e624(uint8_t* arg0) {
if (*reinterpret_cast<uint32_t*>(arg0 + 8) == 0) return 0; return *reinterpret_cast<uint32_t*>(*reinterpret_cast<uint32_t*>(arg0 + 8) + 4);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0045E5B8
extern "C" uint32_t YellowAuto_0045e5b8(uint8_t* arg0, uint32_t arg1) __asm__("_ZN9NetAppLib4Util8PackFile11GetFileSizeEj");
extern "C" uint32_t YellowAuto_0045e5b8(uint8_t* arg0, uint32_t arg1) {
if (*reinterpret_cast<uint32_t*>(arg0 + 8) == 0) return 0; if (arg1 >= *reinterpret_cast<uint32_t*>(*reinterpret_cast<uint32_t*>(arg0 + 8) + 4)) return 0; if (*reinterpret_cast<uint32_t*>(arg0 + 12) == 0) return 0; return *reinterpret_cast<uint32_t*>(*reinterpret_cast<uint32_t*>(arg0 + 12) + arg1 * 8 + 4);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0045E664
extern "C" uint8_t* YellowAuto_0045e664(uint8_t* arg0, uint32_t arg1) __asm__("_ZN9NetAppLib4Util8PackFile13GetFileBufferEj");
extern "C" uint8_t* YellowAuto_0045e664(uint8_t* arg0, uint32_t arg1) {
if (*reinterpret_cast<uint32_t*>(arg0 + 8) == 0) return nullptr; if (arg1 >= *reinterpret_cast<uint32_t*>(*reinterpret_cast<uint32_t*>(arg0 + 8) + 4)) return nullptr; if (*reinterpret_cast<uint32_t*>(arg0 + 4) == 0) return nullptr; if (*reinterpret_cast<uint32_t*>(arg0 + 12) == 0) return nullptr; return reinterpret_cast<uint8_t*>(*reinterpret_cast<uint32_t*>(arg0 + 4) + *reinterpret_cast<uint32_t*>(*reinterpret_cast<uint32_t*>(arg0 + 12) + arg1 * 8));
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0045E6D4
extern "C" uint32_t YellowAuto_0045e6d4(const uint8_t* arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3) __asm__("_ZN9NetAppLib4Util8PackFile26IsBrokenRegulationPackFileEjjj");
extern "C" uint32_t YellowAuto_0045e6d4(const uint8_t* arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3) {
const uint32_t* hdr = *reinterpret_cast<const uint32_t* const*>(arg0 + 8);
if (hdr == 0) return 1;
if (hdr[0] != 1) return 1;
uint32_t cnt = hdr[1];
if (arg1 != 0 && arg1 > cnt) return 1;
if (arg2 != 0 && cnt > arg2) return 1;
const uint32_t* ent = *reinterpret_cast<const uint32_t* const*>(arg0 + 12);
if (ent == 0) return 1;
uint32_t cur = cnt * 8u + 16u;
uint32_t r0 = cur % 4u;
if (r0 != 0) cur += 4u - r0;
for (uint32_t i = 0; i < cnt; ++i) {
uint32_t off = ent[i * 2u];
uint32_t sz = ent[i * 2u + 1u];
if (off != cur) return 1;
if (sz > 65536u) return 1;
uint32_t nxt = cur + sz;
uint32_t r1 = nxt % 4u;
if (r1 != 0) nxt += 4u - r1;
cur = nxt;
}
if (cur != arg3) return 1;
return 0;
}
#endif
