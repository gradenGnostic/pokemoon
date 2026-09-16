// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00456734
extern "C" uint8_t YellowAuto_00456734(const uint8_t* arg0) __asm__("_ZN9NetAppLib17BattleVideoPlayer16VideoDataManager10LoadOnlineEv");
extern "C" uint8_t YellowAuto_00456734(const uint8_t* arg0) {
return *(arg0 + *(const uint32_t*)4548416u);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00457CA8
extern "C" int32_t YellowAuto_00457ca8(const uint8_t* arg0) __asm__("_ZN9NetAppLib17BattleVideoPlayer16VideoDataManager18GetDataDelFlgCountEv");
extern "C" int32_t YellowAuto_00457ca8(const uint8_t* arg0) {
int32_t r = 0;
int32_t n = (int32_t)(*(const uint32_t*)(arg0 + *(const uint32_t*)4553976u));
int32_t i = 0;
if (n != 0) {
uint32_t b = *(const uint32_t*)4553980u;
do {
const uint8_t* e = (const uint8_t*)(*(const uint32_t*)(arg0 + b + (uint32_t)i * 4u));
if (*(e + 9u) == (uint8_t)1u) {
r = r + 1;
}
i = i + 1;
n = n - 1;
} while (n != 0);
}
return r;
}
#endif
