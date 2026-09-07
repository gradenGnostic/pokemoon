// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00336340
void BeginScene_(void*);
void FUN_0034a2f0(void*, void*);
void EndScene_(void*);
extern "C" void YellowAuto_00336340(uint8_t* arg0) __asm__("_ZN4gfl215renderingengine8renderer17RenderingPipeLine15SceneRenderPath12ReuseCommandEv");
extern "C" void YellowAuto_00336340(uint8_t* arg0) {
uint32_t g = *(uint32_t *)0x336380;
void *v0 = (void *)*(uint32_t *)g;
*(uint32_t *)((uint8_t *)v0 + 0xC) = 1;
BeginScene_(v0);
FUN_0034a2f0(v0, (void *)*(uint32_t *)(arg0 + 0x34));
EndScene_(v0);
*(uint32_t *)((uint8_t *)v0 + 0xC) = 0;
}
#endif
