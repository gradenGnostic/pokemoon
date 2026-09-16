// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003367D4
uint8_t* GetCTRGL();
void SetRenderTarget_(uint8_t*, uint32_t, const uint8_t*);
void SetDepthStencil_(uint8_t*, const uint8_t*);
extern "C" void YellowAuto_003367d4(uint8_t* arg0, const uint8_t* arg1, const uint8_t* arg2) __asm__("_ZN4gfl215renderingengine8renderer17RenderingPipeLine15SceneRenderPath23SetRenderTargetOverrideEPKNS_3gfx7SurfaceES7_");
extern "C" void YellowAuto_003367d4(uint8_t* arg0, const uint8_t* arg1, const uint8_t* arg2) {
(void)arg0;
if (arg1 != (const uint8_t*)0) SetRenderTarget_(GetCTRGL(), 0U, arg1);
if (arg2 != (const uint8_t*)0) SetDepthStencil_(GetCTRGL(), arg2);
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003368A0
void SetCamera(uint8_t*, const uint8_t*);
void SetDrawableNode(uint8_t*);
void SetupDraw(uint8_t*, const uint8_t*, uint32_t, uint32_t);
void FUN_0034a584(uint8_t*, uint32_t);
void Draw(uint8_t*, uint32_t);
void FUN_0034a194(uint8_t*, uint32_t);
extern "C" void YellowAuto_003368a0(uint8_t* arg0, const uint8_t* arg1) __asm__("_ZN4gfl215renderingengine8renderer17RenderingPipeLine15SceneRenderPath7ExecuteERKNS2_11DrawContextE");
extern "C" void YellowAuto_003368a0(uint8_t* arg0, const uint8_t* arg1) {
SetCamera(arg0, arg1);
SetDrawableNode(arg0);
SetupDraw(arg0, arg1, 0, 0);
*(uint32_t*)(*(uint32_t*)(*(uint32_t*)0x0033690C) + 12) = 1;
FUN_0034a584((uint8_t*)(*(uint32_t*)(*(uint32_t*)0x0033690C)), *(uint32_t*)(arg0 + 52));
Draw((uint8_t*)(*(uint32_t*)(arg0 + 4)), 1);
FUN_0034a194((uint8_t*)(*(uint32_t*)(*(uint32_t*)0x0033690C)), *(uint32_t*)(arg0 + 52));
*(uint32_t*)(*(uint32_t*)(*(uint32_t*)0x0033690C) + 12) = 0;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00336910
extern "C" void YellowAuto_00336910(uint8_t* arg0, const uint8_t* arg1) __asm__("_ZN4gfl215renderingengine8renderer17RenderingPipeLine15SceneRenderPath9SetCameraERKNS2_11DrawContextE");
extern "C" void YellowAuto_00336910(uint8_t* arg0, const uint8_t* arg1) {
const uint32_t* src = ((const uint32_t* (*)(uint8_t*))*(uint32_t*)(*(uint32_t*)arg0 + 36))(arg0);
uint8_t* dst = *(uint8_t**)(arg0 + 4);
if (src != (const uint32_t*)0) {
*(uint32_t*)(dst + 0x14C) = src[0];
*(uint32_t*)(dst + 0x150) = src[1];
*(uint32_t*)(dst + 0x154) = src[2];
*(uint32_t*)(dst + 0x158) = src[3];
*(uint32_t*)(dst + 0x15C) = src[4];
*(uint32_t*)(dst + 0x160) = src[5];
*(uint32_t*)(dst + 0x164) = src[6];
*(uint32_t*)(dst + 0x168) = src[7];
*(uint32_t*)(dst + 0x16C) = src[8];
*(uint32_t*)(dst + 0x170) = src[9];
*(uint32_t*)(dst + 0x174) = src[10];
*(uint32_t*)(dst + 0x178) = src[11];
*(uint32_t*)(dst + 0x17C) = src[12];
*(uint32_t*)(dst + 0x180) = src[13];
*(uint32_t*)(dst + 0x184) = src[14];
*(uint32_t*)(dst + 0x188) = src[15];
*(uint32_t*)(dst + 0x18C) = src[16];
*(uint32_t*)(dst + 0x190) = src[17];
*(uint32_t*)(dst + 0x194) = src[18];
*(uint32_t*)(dst + 0x198) = src[19];
*(uint32_t*)(dst + 0x19C) = src[20];
*(uint32_t*)(dst + 0x1A0) = src[21];
*(uint32_t*)(dst + 0x1A4) = src[22];
*(uint32_t*)(dst + 0x1A8) = src[23];
*(uint32_t*)(dst + 0x1AC) = src[24];
*(uint32_t*)(dst + 0x1B0) = src[25];
*(uint32_t*)(dst + 0x1B4) = src[26];
*(uint32_t*)(dst + 0x1B8) = src[27];
} else {
const uint32_t* a = (const uint32_t*)arg1;
*(uint32_t*)(dst + 0x14C) = a[0];
*(uint32_t*)(dst + 0x150) = a[1];
*(uint32_t*)(dst + 0x154) = a[2];
*(uint32_t*)(dst + 0x158) = a[3];
*(uint32_t*)(dst + 0x15C) = a[4];
*(uint32_t*)(dst + 0x160) = a[5];
*(uint32_t*)(dst + 0x164) = a[6];
*(uint32_t*)(dst + 0x168) = a[7];
*(uint32_t*)(dst + 0x16C) = a[8];
*(uint32_t*)(dst + 0x170) = a[9];
*(uint32_t*)(dst + 0x174) = a[10];
*(uint32_t*)(dst + 0x178) = a[11];
*(uint32_t*)(dst + 0x17C) = a[12];
*(uint32_t*)(dst + 0x180) = a[13];
*(uint32_t*)(dst + 0x184) = a[14];
*(uint32_t*)(dst + 0x188) = a[15];
*(uint32_t*)(dst + 0x18C) = a[16];
*(uint32_t*)(dst + 0x190) = a[17];
*(uint32_t*)(dst + 0x194) = a[18];
*(uint32_t*)(dst + 0x198) = a[19];
*(uint32_t*)(dst + 0x19C) = a[20];
*(uint32_t*)(dst + 0x1A0) = a[21];
*(uint32_t*)(dst + 0x1A4) = a[22];
*(uint32_t*)(dst + 0x1A8) = a[23];
*(uint32_t*)(dst + 0x1AC) = a[24];
*(uint32_t*)(dst + 0x1B0) = a[25];
*(uint32_t*)(dst + 0x1B4) = a[26];
*(uint32_t*)(dst + 0x1B8) = a[27];
}
return;
}
#endif
