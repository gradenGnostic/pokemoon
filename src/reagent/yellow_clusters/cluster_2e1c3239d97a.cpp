// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00327120
extern "C" uint8_t* YellowAuto_00327120(uint8_t* arg0, int32_t arg1) __asm__("_ZN4gfl215renderingengine10scenegraph8instance12LightSetNode12GetLightNodeEi");
extern "C" uint8_t* YellowAuto_00327120(uint8_t* arg0, int32_t arg1) {
if (arg1 < *(int32_t*)(arg0 + 156)) {
uint8_t* v0 = *(uint8_t**)(*(uint8_t**)(arg0 + 140) + arg1 * 4);
uint8_t* v1 = *(uint8_t**)(v0 + 0);
return *(uint8_t**)(v1 + 0);
}
return (uint8_t*)0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0032723C
void func_00324b28(uint8_t*, uint8_t*);
extern "C" void YellowAuto_0032723c(uint8_t* arg0, uint8_t* arg1) __asm__("_ZN4gfl215renderingengine10scenegraph8instance12LightSetNode8AddLightEPNS2_9LightNodeE");
extern "C" void YellowAuto_0032723c(uint8_t* arg0, uint8_t* arg1) {
if (*(int32_t*)(arg1 + 12) != 0) func_00324b28(arg1, arg1);
if (*(int32_t*)(arg0 + 144) == *(int32_t*)(arg0 + 156)) return;
uint8_t* n = *(uint8_t**)(arg0 + 148);
uint8_t* nnext = *(uint8_t**)(n + 8);
*(uint8_t**)(*(uint8_t**)(n + 0) + 0) = arg1;
*(uint32_t*)(n + 8) = 0U;
*(uint32_t*)(n + 4) = 0U;
*(int32_t*)(n + 12) = *(int32_t*)(arg0 + 156);
uint8_t* tail = *(uint8_t**)(arg0 + 152);
if (tail != (uint8_t*)0) {
*(uint8_t**)(tail + 4) = n;
*(uint8_t**)(n + 8) = tail;
}
*(uint8_t**)(arg0 + 152) = n;
*(uint8_t**)(*(uint8_t**)(arg0 + 140) + *(int32_t*)(arg0 + 156) * 4) = n;
*(uint8_t**)(arg0 + 148) = nnext;
*(int32_t*)(arg0 + 156) = *(int32_t*)(arg0 + 156) + 1;
if (nnext != (uint8_t*)0) *(uint32_t*)(nnext + 4) = 0U;
uint8_t* vt = *(uint8_t**)(arg0 + 0);
uint8_t* fn = *(uint8_t**)(vt + 16);
((void(*)(uint8_t*, uint8_t*))fn)(arg0, arg1);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00327174
extern "C" void YellowAuto_00327174(uint8_t* arg0) __asm__("_ZN4gfl215renderingengine10scenegraph8instance12LightSetNode14RemoveAllLightEv");
extern "C" void YellowAuto_00327174(uint8_t* arg0) {
uint32_t cap = *(uint32_t*)(arg0 + 144);
uint8_t* pool = *(uint8_t**)(arg0 + 136);
uint32_t base = *(uint32_t*)(arg0 + 132);
uint8_t* arr = *(uint8_t**)(arg0 + 140);
uint32_t i = 0U;
while (i < cap) {
*(uint32_t*)(pool + i * 16U) = base + i * 4U;
*(uint32_t*)(pool + i * 16U + 8U) = 0U;
*(uint8_t**)(pool + i * 16U + 4U) = pool + i * 16U - 16U;
if (i + 1U < cap) *(uint8_t**)(pool + i * 16U + 8U) = pool + i * 16U + 16U;
*(uint8_t**)(arr + i * 4U) = (uint8_t*)0;
i = i + 1U;
}
*(uint8_t**)(arg0 + 152) = (uint8_t*)0;
*(uint8_t**)(arg0 + 148) = pool;
*(uint32_t*)(arg0 + 156) = 0U;
}
#endif
