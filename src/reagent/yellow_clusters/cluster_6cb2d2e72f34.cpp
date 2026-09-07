// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00499A50
extern "C" bool YellowAuto_00499a50(const uint8_t* arg0, uint32_t arg1) __asm__("_ZNK4gfl23lyt5LytWk11IsBindAnimeEj");
extern "C" bool YellowAuto_00499a50(const uint8_t* arg0, uint32_t arg1) {
uint32_t v0 = *reinterpret_cast<const uint32_t*>(*reinterpret_cast<const uint8_t* const*>(arg0 + 4) + 0xE8);
if (arg1 >= v0) return false;
const uint8_t* v1 = *reinterpret_cast<const uint8_t* const*>(*reinterpret_cast<const uint8_t* const*>(arg0 + 4) + 0xE4);
if (v1[arg1 * 0x24u] == 0) return false;
if (v1[arg1 * 0x24u + 3u] == 0) return false;
return true;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0049A13C
extern "C" void* YellowAuto_0049a13c(const uint8_t* arg0) __asm__("_ZNK4gfl23lyt5LytWk13GetLayoutCoreEv");
extern "C" void* YellowAuto_0049a13c(const uint8_t* arg0) {
return *reinterpret_cast<void* const*>(*reinterpret_cast<const uint8_t* const*>(arg0 + 4) + 0x10);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0049A29C
extern "C" const void* YellowAuto_0049a29c(const uint8_t* arg0) __asm__("_ZNK4gfl23lyt5LytWk11GetResourceEv");
extern "C" const void* YellowAuto_0049a29c(const uint8_t* arg0) {
return *reinterpret_cast<const void* const*>(*reinterpret_cast<const uint8_t* const*>(arg0 + 4) + 0xF4);
}
#endif
