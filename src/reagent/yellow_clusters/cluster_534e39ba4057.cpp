// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002FA9C8
bool ReplacePaneTexture(uint8_t*, int32_t, void*, int32_t, int32_t);
extern "C" bool YellowAuto_002fa9c8(uint8_t* arg0, uint32_t arg1, void* arg2) __asm__("_ZN3app4tool20AppCommonGrpIconData28ReplacePaneTextureByLangIconEjPN2nw3lyt7PictureE");
extern "C" bool YellowAuto_002fa9c8(uint8_t* arg0, uint32_t arg1, void* arg2) {
uint32_t i = 0;
uint32_t* tbl = (uint32_t*)*(uint32_t*)0x002FAA20;
while ((int32_t)tbl[i * 2U] != -1) {
if (tbl[i * 2U + 1U] == arg1) {
return ReplacePaneTexture(arg0, (int32_t)tbl[i * 2U], arg2, 0, 0);
}
i = i + 1U;
}
return false;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002FAA40
bool ReplacePaneTexture(uint8_t*, int32_t, void*, int32_t, int32_t);
extern "C" bool YellowAuto_002faa40(uint8_t* arg0, uint32_t arg1, void* arg2) __asm__("_ZN3app4tool20AppCommonGrpIconData32ReplacePaneTextureByPokeSickIconEN3pml8pokepara4SickEPN2nw3lyt7PictureE");
extern "C" bool YellowAuto_002faa40(uint8_t* arg0, uint32_t arg1, void* arg2) {
uint32_t i = 0;
uint32_t* tbl = (uint32_t*)*(uint32_t*)0x002FAA98;
while ((int32_t)tbl[i * 2U] != -1) {
if (tbl[i * 2U + 1U] == arg1) {
return ReplacePaneTexture(arg0, (int32_t)tbl[i * 2U], arg2, 0, 0);
}
i = i + 1U;
}
return false;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002FAA9C
bool ReplacePaneTexture(uint8_t*, int32_t, void*, int32_t, int32_t);
extern "C" bool YellowAuto_002faa9c(uint8_t* arg0, uint32_t arg1, void* arg2) __asm__("_ZN3app4tool20AppCommonGrpIconData32ReplacePaneTextureByWazaTypeIconE12PokeType_tagPN2nw3lyt7PictureE");
extern "C" bool YellowAuto_002faa9c(uint8_t* arg0, uint32_t arg1, void* arg2) {
uint32_t i = 0;
uint32_t* tbl = (uint32_t*)*(uint32_t*)0x002FAAF4;
while ((int32_t)tbl[i * 2U] != -1) {
if (tbl[i * 2U + 1U] == arg1) {
return ReplacePaneTexture(arg0, (int32_t)tbl[i * 2U], arg2, 0, 0);
}
i = i + 1U;
}
return false;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002FAAF8
bool ReplacePaneTexture(uint8_t*, int32_t, void*, int32_t, int32_t);
extern "C" bool YellowAuto_002faaf8(uint8_t* arg0, uint32_t arg1, void* arg2) __asm__("_ZN3app4tool20AppCommonGrpIconData33ReplacePaneTextureByPokeParamIconEN3pml8pokepara7PowerIDEPN2nw3lyt7PictureE");
extern "C" bool YellowAuto_002faaf8(uint8_t* arg0, uint32_t arg1, void* arg2) {
uint32_t i = 0;
uint32_t* tbl = (uint32_t*)*(uint32_t*)0x002FAB50;
while ((int32_t)tbl[i * 2U] != -1) {
if (tbl[i * 2U + 1U] == arg1) {
return ReplacePaneTexture(arg0, (int32_t)tbl[i * 2U], arg2, 0, 0);
}
i = i + 1U;
}
return false;
}
#endif
