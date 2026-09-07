// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00337758
int32_t strcmp(const uint8_t*, const uint8_t*);
void GFLassert();
extern "C" void YellowAuto_00337758(uint8_t* arg0, uint8_t arg1) __asm__("_ZN4gfl215renderingengine8renderer4util13DofRenderPath13ChangeDofTypeENS0_7DofTypeE");
extern "C" void YellowAuto_00337758(uint8_t* arg0, uint8_t arg1) {
*(arg0 + 12u) = arg1;
uint8_t* target = *(uint8_t**)(arg0 + 20u);
uint32_t meshNum = *(uint32_t*)(target + 0xCCu);
uint32_t visNum = 0u;
for (uint32_t i = 0u; i < meshNum; ++i) {
uint8_t* base = *(uint8_t**)(target + 0xECu);
uint8_t* link = base + i * 0x24u;
uint8_t* inner = *(uint8_t**)(link + 8u);
const uint8_t* a = inner + 0x30u;
uint8_t* tbl = *(uint8_t**)(uint8_t*)0x337810u;
const uint8_t* b = *(const uint8_t**)(tbl + (uint32_t)arg1 * 4u);
uint8_t v = (strcmp(a, b) == 0) ? (uint8_t)1u : (uint8_t)0u;
*(uint8_t*)(link + 16u) = v;
visNum += (uint32_t)v;
}
if (visNum != 1u) GFLassert();
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00337688
int32_t strcmp(const uint8_t*, const uint8_t*);
void GFLassert();
extern "C" void YellowAuto_00337688(uint8_t* arg0, void* arg1, const uint8_t* arg2) __asm__("_ZN4gfl215renderingengine8renderer4util13DofRenderPath10InitializeEPNS_3gfx12IGLAllocatorERKNS3_15InitDescriptionE");
extern "C" void YellowAuto_00337688(uint8_t* arg0, void* arg1, const uint8_t* arg2) {
*(uint32_t*)(arg0 + 20u) = *(uint32_t*)(arg2 + 0u);
*(uint32_t*)(arg0 + 16u) = *(uint32_t*)(arg2 + 4u);
*(arg0 + 12u) = 0u;
uint8_t* target = *(uint8_t**)(arg0 + 20u);
uint32_t meshNum = *(uint32_t*)(target + 0xCCu);
uint32_t visNum = 0u;
for (uint32_t i = 0u; i < meshNum; ++i) {
uint8_t* base = *(uint8_t**)(target + 0xECu);
uint8_t* link = base + i * 0x24u;
uint8_t* inner = *(uint8_t**)(link + 8u);
const uint8_t* a = inner + 0x30u;
uint8_t* tbl = *(uint8_t**)(uint8_t*)0x33774Cu;
const uint8_t* b = *(const uint8_t**)(tbl + 0u);
uint8_t v = (strcmp(a, b) == 0) ? (uint8_t)1u : (uint8_t)0u;
*(uint8_t*)(link + 16u) = v;
visNum += (uint32_t)v;
}
if (visNum != 1u) GFLassert();
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00337EC8
void* __aeabi_vec_ctor_nocookie_nodtor(void*, void*, uint32_t, uint32_t);
extern "C" uint8_t* YellowAuto_00337ec8(uint8_t* arg0) __asm__("_ZN4gfl215renderingengine8renderer4util13DofRenderPathC1Ev");
extern "C" uint8_t* YellowAuto_00337ec8(uint8_t* arg0) {
*(uint32_t*)arg0 = *(uint32_t*)0x337F9Cu;
*(uint32_t*)(arg0 + 4u) = *(uint32_t*)0x337F98u;
*(uint32_t*)(arg0 + 8u) = *(uint32_t*)0x337F98u;
*(arg0 + 12u) = 0u;
*(uint32_t*)(arg0 + 16u) = 0u;
*(uint32_t*)(arg0 + 20u) = 0u;
__aeabi_vec_ctor_nocookie_nodtor(arg0 + 24u, *(void**)0x337FA0u, 16u, 3u);
for (uint32_t i = 0u; i < 12u; ++i) *(uint32_t*)(arg0 + 24u + i * 4u) = *(uint32_t*)0x337F98u;
__aeabi_vec_ctor_nocookie_nodtor(arg0 + 72u, *(void**)0x337FA0u, 16u, 4u);
for (uint32_t i = 0u; i < 16u; ++i) *(uint32_t*)(arg0 + 72u + i * 4u) = *(uint32_t*)0x337F98u;
return arg0;
}
#endif
