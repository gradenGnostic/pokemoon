// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004981A8
const uint8_t* FUN_001054dc(int32_t);
extern "C" void YellowAuto_004981a8(const uint8_t* arg0, uint16_t* arg1, uint16_t* arg2) __asm__("_ZNK4gfl22ui10TouchPanel5GetXYEPtS2_");
extern "C" void YellowAuto_004981a8(const uint8_t* arg0, uint16_t* arg1, uint16_t* arg2) {
const uint8_t* v0 = FUN_001054dc((int32_t)arg0); arg1[0] = *(const uint16_t*)v0; v0 = FUN_001054dc((int32_t)arg0); arg2[0] = *(const uint16_t*)(v0 + 2);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0049816C
const uint8_t* FUN_001054dc(int32_t);
extern "C" void YellowAuto_0049816c(const uint8_t* arg0, uint32_t* arg1) __asm__("_ZNK4gfl22ui10TouchPanel5GetXYEPNS_4math22ExtendedVectorTemplateINS2_33SpecializedExtendedVectorTemplateIN2nn4math4VEC3EEEEE");
extern "C" void YellowAuto_0049816c(const uint8_t* arg0, uint32_t* arg1) {
const uint8_t* v0 = FUN_001054dc((int32_t)arg0); *(float*)arg1 = (float)*(const uint16_t*)v0; v0 = FUN_001054dc((int32_t)arg0); *(float*)(arg1 + 1) = (float)*(const uint16_t*)(v0 + 2);
}
#endif
