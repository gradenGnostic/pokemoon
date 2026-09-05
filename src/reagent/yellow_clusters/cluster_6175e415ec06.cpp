// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0049EF4C
int32_t GetCurrentIndex(const uint8_t*);
extern "C" int32_t YellowAuto_0049ef4c(const uint8_t* arg0) __asm__("_ZNK5Field9EventList13EventListData20GetDetailInfoCurrentEv");
extern "C" int32_t YellowAuto_0049ef4c(const uint8_t* arg0) {
return (int32_t)(*(const uint32_t*)(arg0 + 4)) + (int32_t)GetCurrentIndex(arg0) * 4;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0049EF64
int32_t GetCurrentIndex(const uint8_t*);
extern "C" int32_t YellowAuto_0049ef64(const uint8_t* arg0) __asm__("_ZNK5Field9EventList13EventListData21GetDetailFieldCurrentEv");
extern "C" int32_t YellowAuto_0049ef64(const uint8_t* arg0) {
return (int32_t)(*(const uint32_t*)(arg0 + 8)) + (int32_t)GetCurrentIndex(arg0) * 12;
}
#endif
