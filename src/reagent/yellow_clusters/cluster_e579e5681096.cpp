// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A7FA8
uint32_t* helper_004a7e00(const uint8_t*, uint32_t, uint32_t*);
extern "C" uint32_t* YellowAuto_004a7fa8(const uint8_t* arg0, uint32_t arg1, uint32_t arg2) __asm__("_ZNK8Savedata6MyItem7GetItemEjj");
extern "C" uint32_t* YellowAuto_004a7fa8(const uint8_t* arg0, uint32_t arg1, uint32_t arg2) {
uint32_t n; uint32_t* p = helper_004a7e00(arg0, arg1, &n); if (p == 0) return 0; if (n <= arg2) return 0; return p + arg2;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A80D8
uint32_t* helper_004a7d6c(const uint8_t*, uint16_t, uint32_t*);
extern "C" bool YellowAuto_004a80d8(const uint8_t* arg0, uint16_t arg1, uint16_t arg2) __asm__("_ZNK8Savedata6MyItem8AddCheckEtt");
extern "C" bool YellowAuto_004a80d8(const uint8_t* arg0, uint16_t arg1, uint16_t arg2) {
uint32_t n; uint32_t* p = helper_004a7d6c(arg0, arg1, &n); if (p == 0) return false; uint32_t v = *p; uint32_t id = v & 1023u; if (id != arg1) return true; uint32_t c = (v >> 10) & 1023u; if ((uint32_t)arg2 + c < 1000u) return true; return false;
}
#endif
