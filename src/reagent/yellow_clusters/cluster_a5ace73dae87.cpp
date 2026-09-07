// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002F18AC
uint32_t GetPublicRand(uint32_t);
void SetVisible(uint8_t*, bool);
extern "C" void YellowAuto_002f18ac(uint8_t* arg0) __asm__("_ZN3app4tool15TimerIconUIView10StartAnimeEv");
extern "C" void YellowAuto_002f18ac(uint8_t* arg0) {
if (*(uint8_t*)(arg0+0x8CU)==0U) { *(uint32_t*)(arg0+0x124U)=*(uint32_t*)(arg0+0x128U)/17U*GetPublicRand(17U); *(uint32_t*)(arg0+0xF4U)=0U; *(uint32_t*)(arg0+0xD0U)=1U; *(uint32_t*)(arg0+0xD4U)=0U; *(uint32_t*)(arg0+0x118U)=1U; *(uint8_t*)(arg0+0x8CU)=1U; SetVisible(arg0,true); }
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002F1918
extern "C" bool YellowAuto_002f1918(uint8_t* arg0) __asm__("_ZN3app4tool15TimerIconUIView13IsArcDataCompEv");
extern "C" bool YellowAuto_002f1918(uint8_t* arg0) {
(void)arg0; return true;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002F1874
extern "C" void YellowAuto_002f1874(uint8_t* arg0, const uint32_t* arg1) __asm__("_ZN3app4tool15TimerIconUIView10SetIconPosERN4gfl24math22ExtendedVectorTemplateINS3_33SpecializedExtendedVectorTemplateIN2nn4math4VEC3EEEEE");
extern "C" void YellowAuto_002f1874(uint8_t* arg0, const uint32_t* arg1) {
*(uint8_t*)(*(uint32_t*)(arg0+0x90U)+0x44U)=(uint8_t)(*(uint8_t*)(*(uint32_t*)(arg0+0x90U)+0x44U)&0xDFU); *(uint32_t*)(*(uint32_t*)(arg0+0x90U)+0x24U)=arg1[2U]; *(uint32_t*)(*(uint32_t*)(arg0+0x90U)+0x1CU)=arg1[0U]; *(uint32_t*)(*(uint32_t*)(arg0+0x90U)+0x20U)=arg1[1U]; *(uint8_t*)(*(uint32_t*)(arg0+0x90U)+0x44U)=(uint8_t)((*(uint8_t*)(*(uint32_t*)(arg0+0x90U)+0x44U)&0xEFU)|0x10U);
}
#endif
