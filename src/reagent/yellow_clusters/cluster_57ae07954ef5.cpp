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
