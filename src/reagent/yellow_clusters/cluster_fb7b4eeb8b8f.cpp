// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002FAA24
int32_t ReplacePaneTexture(uint8_t*, int32_t, void*, int32_t, int32_t);
extern "C" int32_t YellowAuto_002faa24(uint8_t* arg0, void* arg1) __asm__("_ZN3app4tool20AppCommonGrpIconData31ReplacePaneTextureByPokerusIconEPN2nw3lyt7PictureE");
extern "C" int32_t YellowAuto_002faa24(uint8_t* arg0, void* arg1) {
return ReplacePaneTexture(arg0, 16, arg1, 0, 0);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002FAB54
int32_t ReplacePaneTexture(uint8_t*, int32_t, void*, int32_t, int32_t);
extern "C" int32_t YellowAuto_002fab54(uint8_t* arg0, void* arg1) __asm__("_ZN3app4tool20AppCommonGrpIconData34ReplacePaneTextureByPokeHinshiIconEPN2nw3lyt7PictureE");
extern "C" int32_t YellowAuto_002fab54(uint8_t* arg0, void* arg1) {
return ReplacePaneTexture(arg0, 9, arg1, 0, 0);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002FAB70
int32_t ReplacePaneTexture(uint8_t*, int32_t, void*, int32_t, int32_t);
extern "C" int32_t YellowAuto_002fab70(uint8_t* arg0, void* arg1) __asm__("_ZN3app4tool20AppCommonGrpIconData36ReplacePaneTextureByPokeDokudokuIconEPN2nw3lyt7PictureE");
extern "C" int32_t YellowAuto_002fab70(uint8_t* arg0, void* arg1) {
return ReplacePaneTexture(arg0, 22, arg1, 0, 0);
}
#endif
