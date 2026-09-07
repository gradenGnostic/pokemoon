// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002D3D44
float GetAnimeMaxFrame(void* arg0, uint32_t arg1);
uint32_t GetPublicRand(uint32_t arg0);
bool IsBindAnime(void* arg0, uint32_t arg1);
void BindAnime(void* arg0, uint32_t arg1, uint32_t arg2);
void SetAutoAnimeSpeed(void* arg0, uint32_t arg1, float arg2);
void SetAnimeFrame(void* arg0, uint32_t arg1, float arg2);
void SetAutoAnime(void* arg0, uint32_t arg1, bool arg2);
extern "C" void YellowAuto_002d3d44(void* arg0, uint32_t arg1, int32_t arg2) __asm__("_ZN3App4Tool8TimeIcon10StartAnimeEPN4gfl23lyt5LytWkEjN7GameSys9FrameModeE");
extern "C" void YellowAuto_002d3d44(void* arg0, uint32_t arg1, int32_t arg2) {
float v0 = GetAnimeMaxFrame(arg0, arg1);
uint32_t v1 = GetPublicRand(17);
if (!IsBindAnime(arg0, arg1)) {
BindAnime(arg0, arg1, 1);
}
if (arg2 == 0) {
SetAutoAnimeSpeed(arg0, arg1, 0.5f);
} else {
SetAutoAnimeSpeed(arg0, arg1, 1.0f);
}
SetAnimeFrame(arg0, arg1, v0 / 17.0f * (float)v1);
SetAutoAnime(arg0, arg1, true);
}
#endif
