// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003155DC
extern "C" uint32_t YellowAuto_003155dc(uint32_t arg0, uint8_t arg1) __asm__("_ZN3pml8personal15CheckGensiKaikiE6MonsNoh");
extern "C" uint32_t YellowAuto_003155dc(uint32_t arg0, uint8_t arg1) {
return arg1 == 1 && (arg0 == 0x17E || arg0 == *(const uint32_t*)0x315618);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0031593C
uint32_t FUN_0048f0b4(uint32_t, uint32_t);
extern "C" uint32_t YellowAuto_0031593c() __asm__("_ZN3pml8personal17GetTokuseiPatternEv");
extern "C" uint32_t YellowAuto_0031593c() {
uint32_t v = *(const uint32_t*)(*(const uint32_t*)0x3159CC + 12); uint32_t a = FUN_0048f0b4(v, 0x1A) & 0xFF; uint32_t b = FUN_0048f0b4(v, 0x1B) & 0xFF; uint32_t c = FUN_0048f0b4(v, 0x1C) & 0xFF; if (a != b) return 2; return a != c;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00314780
uint32_t FUN_00314b34(uint32_t, uint32_t);
uint16_t GetString(void*, uint32_t, void*);
extern "C" uint16_t YellowAuto_00314780(void* arg0, uint32_t arg1) __asm__("_ZN3pml8personal11GetMonsNameEPN4gfl23str6StrBufE6MonsNo");
extern "C" uint16_t YellowAuto_00314780(void* arg0, uint32_t arg1) {
if (arg1 > 0x324) return 0; uint32_t v = FUN_00314b34(arg1, 0); void* p = (void*)(*(const uint32_t*)(*(const uint32_t*)0x3147D0 + 4)); return GetString(p, v, arg0);
}
#endif
