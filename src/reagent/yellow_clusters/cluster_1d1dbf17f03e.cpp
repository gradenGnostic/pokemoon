// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002CB3E8
int32_t IsAnimeEnd(void*, int32_t, int32_t);
void StopAnime(void*, int32_t, int32_t, int32_t);
extern "C" bool YellowAuto_002cb3e8(void* arg0) __asm__("_ZN3App4Tool10TalkWindow22IsTimerIconOutAnimeEndEv");
extern "C" bool YellowAuto_002cb3e8(void* arg0) {
void* arg1 = *(void**)((uint8_t*)arg0 + 0x60); int32_t arg2 = IsAnimeEnd(arg1, 0, 0xE); if (arg2 != 0) StopAnime(arg1, 0, 0xF, 0); return arg2 != 0;
}
#endif
