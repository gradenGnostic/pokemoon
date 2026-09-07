// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002EF1B0
bool IsLoadFinished(void*, uint32_t);
extern "C" bool YellowAuto_002ef1b0(uint8_t* arg0, uint32_t arg1) __asm__("_ZN3app4tool14ItemIconToolEx14IsLoadItemIconEj");
extern "C" bool YellowAuto_002ef1b0(uint8_t* arg0, uint32_t arg1) {
uint8_t* loadBase = *reinterpret_cast<uint8_t**>(arg0 + 0x28); uint8_t s = *(loadBase + arg1); if (s == 0) { return false; } if (s == 2) { return true; } void* item = *reinterpret_cast<void**>(arg0); if (!IsLoadFinished(item, arg1)) { return false; } uint8_t* loadBase2 = *reinterpret_cast<uint8_t**>(arg0 + 0x28); *(loadBase2 + arg1) = 2; return true;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002EEF14
bool IsLoadFinished(void*, uint32_t);
void ReplaceReadTexture(void*, uint32_t, void*, uint32_t, uint32_t);
extern "C" bool YellowAuto_002eef14(uint8_t* arg0, uint32_t arg1, void* arg2) __asm__("_ZN3app4tool14ItemIconToolEx11ReplaceIconEjPN2nw3lyt7PictureE");
extern "C" bool YellowAuto_002eef14(uint8_t* arg0, uint32_t arg1, void* arg2) {
if (arg1 >= *reinterpret_cast<uint32_t*>(arg0 + 0x14)) { return false; } if (arg2 == 0) { return false; } uint8_t* loadBase = *reinterpret_cast<uint8_t**>(arg0 + 0x28); uint8_t s = *(loadBase + arg1); if (s == 0) { return false; } if (s != 2) { void* item = *reinterpret_cast<void**>(arg0); if (!IsLoadFinished(item, arg1)) { return false; } uint8_t* loadBase2 = *reinterpret_cast<uint8_t**>(arg0 + 0x28); *(loadBase2 + arg1) = 2; } void* item2 = *reinterpret_cast<void**>(arg0); ReplaceReadTexture(item2, arg1, arg2, 0, 0); return true;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002EF130
bool CancelLoadTextureRequest(void*, uint32_t);
void LoadRequest(void*, uint32_t, uint16_t);
void GFLassert(uint32_t, uint32_t, uint32_t);
extern "C" void YellowAuto_002ef130(uint8_t* arg0, uint32_t arg1, uint16_t arg2) __asm__("_ZN3app4tool14ItemIconToolEx12LoadItemIconEjt");
extern "C" void YellowAuto_002ef130(uint8_t* arg0, uint32_t arg1, uint16_t arg2) {
if (arg1 >= *reinterpret_cast<uint32_t*>(arg0 + 0x14)) { GFLassert(0, 0, 0); return; } uint8_t* loadBase = *reinterpret_cast<uint8_t**>(arg0 + 0x28); if (*(loadBase + arg1) == 1) { void* item = *reinterpret_cast<void**>(arg0); if (!CancelLoadTextureRequest(item, arg1)) { GFLassert(0, 0, 0); return; } uint8_t* loadBase2 = *reinterpret_cast<uint8_t**>(arg0 + 0x28); *(loadBase2 + arg1) = 0; } void* item2 = *reinterpret_cast<void**>(arg0); LoadRequest(item2, arg1, arg2); uint8_t* loadBase3 = *reinterpret_cast<uint8_t**>(arg0 + 0x28); *(loadBase3 + arg1) = 1; return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002EEF98
bool IsFileOpen(void*);
void ReplacePaneTexture(void*, uint32_t, uint16_t, void*, uint32_t, uint32_t);
void GFLassert(uint32_t, uint32_t, uint32_t);
extern "C" void YellowAuto_002eef98(uint8_t* arg0, uint32_t arg1, uint16_t arg2, void* arg3) __asm__("_ZN3app4tool14ItemIconToolEx11SetItemIconEjtPN2nw3lyt7PictureE");
extern "C" void YellowAuto_002eef98(uint8_t* arg0, uint32_t arg1, uint16_t arg2, void* arg3) {
if (*reinterpret_cast<uint32_t*>(arg0 + 0x14) <= arg1) { GFLassert(0, 0, 0); return; } if (arg2 == 0) { GFLassert(0, 0, 0); return; } if (arg3 == 0) { GFLassert(0, 0, 0); return; } uint8_t sync = *(arg0 + 0x1C); if (sync == 0) { void* item = *reinterpret_cast<void**>(arg0); if (!IsFileOpen(item)) { uint8_t* paramBase = *reinterpret_cast<uint8_t**>(arg0 + 0x2C); uint8_t* e = paramBase + arg1 * 12; *reinterpret_cast<uint32_t*>(e) = arg1; *reinterpret_cast<uint16_t*>(e + 4) = arg2; *reinterpret_cast<void**>(e + 8) = arg3; return; } } void* item2 = *reinterpret_cast<void**>(arg0); ReplacePaneTexture(item2, arg1, arg2, arg3, 0, 0); return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002EEEB4
extern "C" bool YellowAuto_002eeeb4(uint8_t* arg0, uint32_t arg1) __asm__("_ZN3app4tool14ItemIconToolEx10IsReplacedEj");
extern "C" bool YellowAuto_002eeeb4(uint8_t* arg0, uint32_t arg1) {
if (arg1 >= *reinterpret_cast<uint32_t*>(arg0 + 0x14)) { return true; } uint8_t* paramBase = *reinterpret_cast<uint8_t**>(arg0 + 0x2C); uint8_t* e = paramBase + arg1 * 12; uint32_t id = *reinterpret_cast<uint32_t*>(e); if (id == 0xFFFFFFFF) { return true; } uint16_t no = *reinterpret_cast<uint16_t*>(e + 4); if (no == 0) { return true; } void* pic = *reinterpret_cast<void**>(e + 8); if (pic == 0) { return true; } return false;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002EF04C
void* GetPicturePane(void*, uint32_t);
void* GetPicturePaneWithParts(void*, void*, uint32_t, void*);
bool IsFileOpen(void*);
void ReplacePaneTexture(void*, uint32_t, uint16_t, void*, uint32_t, uint32_t);
void GFLassert(uint32_t, uint32_t, uint32_t);
extern "C" void YellowAuto_002ef04c(uint8_t* arg0, uint32_t arg1, uint16_t arg2, uint32_t arg3, void* arg4) __asm__("_ZN3app4tool14ItemIconToolEx11SetItemIconEjtjPN2nw3lyt5PartsE");
extern "C" void YellowAuto_002ef04c(uint8_t* arg0, uint32_t arg1, uint16_t arg2, uint32_t arg3, void* arg4) {
void* lytwk = *reinterpret_cast<void**>(arg0 + 0x0C); void* pic = 0; if (arg4 == 0) { pic = GetPicturePane(lytwk, arg3); } else { void* resid = reinterpret_cast<void*>(arg0 + 0x10); pic = GetPicturePaneWithParts(lytwk, arg4, arg3, resid); } if (*reinterpret_cast<uint32_t*>(arg0 + 0x14) <= arg1) { GFLassert(0, 0, 0); return; } if (arg2 == 0) { GFLassert(0, 0, 0); return; } if (pic == 0) { GFLassert(0, 0, 0); return; } uint8_t sync = *(arg0 + 0x1C); if (sync == 0) { void* item = *reinterpret_cast<void**>(arg0); if (!IsFileOpen(item)) { uint8_t* paramBase = *reinterpret_cast<uint8_t**>(arg0 + 0x2C); uint8_t* e = paramBase + arg1 * 12; *reinterpret_cast<uint32_t*>(e) = arg1; *reinterpret_cast<uint16_t*>(e + 4) = arg2; *reinterpret_cast<void**>(e + 8) = pic; return; } } void* item2 = *reinterpret_cast<void**>(arg0); ReplacePaneTexture(item2, arg1, arg2, pic, 0, 0); return;
}
#endif
