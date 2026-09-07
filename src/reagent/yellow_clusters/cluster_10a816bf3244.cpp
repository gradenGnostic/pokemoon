// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0035727C
extern "C" void YellowAuto_0035727c(uint8_t* arg0) __asm__("_ZN4gfl24Fade11FadeManager6UpdateEv");
extern "C" void YellowAuto_0035727c(uint8_t* arg0) {
for (uint32_t i = 0; i < 4; ++i) { uint8_t* p = *(uint8_t**)(arg0 + i * 4); if (p != (uint8_t*)0) { uint32_t* vt = *(uint32_t**)p; ((void(*)(uint8_t*))vt[0])(p); } }
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00356964
extern "C" bool YellowAuto_00356964(uint8_t* arg0, int32_t arg1) __asm__("_ZN4gfl24Fade11FadeManager11IsEndStatusENS0_4DISPE");
extern "C" bool YellowAuto_00356964(uint8_t* arg0, int32_t arg1) {
if (arg1 == 4) { for (uint32_t i = 0; i < 4; ++i) { uint8_t* p = *(uint8_t**)(arg0 + i * 4); if (p != (uint8_t*)0) { uint32_t* vt = *(uint32_t**)p; bool b = ((bool(*)(uint8_t*))vt[7])(p); if (!b) return false; } } } else { uint8_t* p = *(uint8_t**)(arg0 + arg1 * 4); if (p != (uint8_t*)0) { uint32_t* vt = *(uint32_t**)p; return ((bool(*)(uint8_t*))vt[7])(p); } } return true;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0035720C
extern "C" void YellowAuto_0035720c(uint8_t* arg0, int32_t arg1) __asm__("_ZN4gfl24Fade11FadeManager5ResetENS0_4DISPE");
extern "C" void YellowAuto_0035720c(uint8_t* arg0, int32_t arg1) {
if (arg1 == 4) { uint8_t* p0 = *(uint8_t**)arg0; if (p0 != (uint8_t*)0) { uint32_t* vt0 = *(uint32_t**)p0; ((void(*)(uint8_t*))vt0[10])(p0); } uint8_t* p1 = *(uint8_t**)(arg0 + 4); if (p1 != (uint8_t*)0) { uint32_t* vt1 = *(uint32_t**)p1; ((void(*)(uint8_t*))vt1[10])(p1); } } else { uint8_t* p = *(uint8_t**)(arg0 + arg1 * 4); if (p != (uint8_t*)0) { uint32_t* vt = *(uint32_t**)p; ((void(*)(uint8_t*))vt[10])(p); } }
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00357370
extern "C" void YellowAuto_00357370(uint8_t* arg0, int32_t arg1, const uint8_t* arg2) __asm__("_ZN4gfl24Fade11FadeManager8ForceOutENS0_4DISPEPKNS_4math7Vector4E");
extern "C" void YellowAuto_00357370(uint8_t* arg0, int32_t arg1, const uint8_t* arg2) {
if (arg1 == 4) { uint8_t* p0 = *(uint8_t**)arg0; { uint32_t* vt0 = *(uint32_t**)p0; ((void(*)(uint8_t*, const uint8_t*))vt0[5])(p0, arg2); } uint8_t* p1 = *(uint8_t**)(arg0 + 4); { uint32_t* vt1 = *(uint32_t**)p1; ((void(*)(uint8_t*, const uint8_t*))vt1[5])(p1, arg2); } } else { uint8_t* p = *(uint8_t**)(arg0 + arg1 * 4); { uint32_t* vt = *(uint32_t**)p; ((void(*)(uint8_t*, const uint8_t*))vt[5])(p, arg2); } }
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003573E4
extern "C" void YellowAuto_003573e4(uint8_t* arg0, int32_t arg1, int32_t arg2, uint32_t arg3) __asm__("_ZN4gfl24Fade11FadeManager9RequestInENS0_4DISPENS0_9FADE_TYPEEj");
extern "C" void YellowAuto_003573e4(uint8_t* arg0, int32_t arg1, int32_t arg2, uint32_t arg3) {
if (arg1 == 4) { uint8_t* p0 = *(uint8_t**)arg0; { uint32_t* vt0 = *(uint32_t**)p0; ((void(*)(uint8_t*, int32_t, uint32_t))vt0[4])(p0, arg2, arg3); } uint8_t* p1 = *(uint8_t**)(arg0 + 4); { uint32_t* vt1 = *(uint32_t**)p1; ((void(*)(uint8_t*, int32_t, uint32_t))vt1[4])(p1, arg2, arg3); } } else { uint8_t* p = *(uint8_t**)(arg0 + arg1 * 4); { uint32_t* vt = *(uint32_t**)p; ((void(*)(uint8_t*, int32_t, uint32_t))vt[4])(p, arg2, arg3); } }
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003568A4
extern "C" void YellowAuto_003568a4(uint8_t* arg0, int32_t arg1, int32_t arg2, const uint8_t* arg3, const uint8_t* arg4, uint32_t arg5, bool arg6) __asm__("_ZN4gfl24Fade11FadeManager10RequestOutENS0_4DISPENS0_9FADE_TYPEEPKNS_4math7Vector4ES7_jb");
extern "C" void YellowAuto_003568a4(uint8_t* arg0, int32_t arg1, int32_t arg2, const uint8_t* arg3, const uint8_t* arg4, uint32_t arg5, bool arg6) {
if (arg1 == 4) { uint8_t* p0 = *(uint8_t**)arg0; { uint32_t* vt0 = *(uint32_t**)p0; ((void(*)(uint8_t*, int32_t, const uint8_t*, const uint8_t*, uint32_t, bool))vt0[3])(p0, arg2, arg3, arg4, arg5, arg6); } uint8_t* p1 = *(uint8_t**)(arg0 + 4); { uint32_t* vt1 = *(uint32_t**)p1; ((void(*)(uint8_t*, int32_t, const uint8_t*, const uint8_t*, uint32_t, bool))vt1[3])(p1, arg2, arg3, arg4, arg5, arg6); } } else { uint8_t* p = *(uint8_t**)(arg0 + arg1 * 4); { uint32_t* vt = *(uint32_t**)p; ((void(*)(uint8_t*, int32_t, const uint8_t*, const uint8_t*, uint32_t, bool))vt[3])(p, arg2, arg3, arg4, arg5, arg6); } }
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00357174
extern "C" bool YellowAuto_00357174(uint8_t* arg0, int32_t arg1) __asm__("_ZN4gfl24Fade11FadeManager5IsEndENS0_4DISPE");
extern "C" bool YellowAuto_00357174(uint8_t* arg0, int32_t arg1) {
bool r = true; if (arg1 == 4) { uint8_t* p0 = *(uint8_t**)arg0; if (p0 != (uint8_t*)0) { uint32_t* vt0 = *(uint32_t**)p0; bool b0 = ((bool(*)(uint8_t*))vt0[6])(p0); if (!b0) r = false; } uint8_t* p1 = *(uint8_t**)(arg0 + 4); if (p1 != (uint8_t*)0) { uint32_t* vt1 = *(uint32_t**)p1; bool b1 = ((bool(*)(uint8_t*))vt1[6])(p1); if (!b1) r = false; } } else { uint8_t* p = *(uint8_t**)(arg0 + arg1 * 4); if (p != (uint8_t*)0) { uint32_t* vt = *(uint32_t**)p; r = ((bool(*)(uint8_t*))vt[6])(p); } } return r;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003572E4
extern "C" uint8_t* YellowAuto_003572e4(uint8_t* arg0, int32_t arg1) __asm__("_ZN4gfl24Fade11FadeManager7GetFadeENS0_4DISPE");
extern "C" uint8_t* YellowAuto_003572e4(uint8_t* arg0, int32_t arg1) {
return *(uint8_t**)(arg0 + arg1 * 4);
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003569C8
extern "C" void YellowAuto_003569c8(uint8_t* arg0, int32_t arg1, uint32_t arg2) __asm__("_ZN4gfl24Fade11FadeManager13SetAnimeSpeedENS0_4DISPEf");
extern "C" void YellowAuto_003569c8(uint8_t* arg0, int32_t arg1, uint32_t arg2) {
if (arg1 == 4) {
uint8_t* v0 = *(uint8_t**)arg0;
if (v0 != (uint8_t*)0) ((void(*)(uint8_t*, uint32_t))(*(void***)v0)[11])(v0, arg2);
uint8_t* v1 = *(uint8_t**)(arg0 + 4);
if (v1 != (uint8_t*)0) ((void(*)(uint8_t*, uint32_t))(*(void***)v1)[11])(v1, arg2);
} else {
uint8_t* v2 = *(uint8_t**)(arg0 + arg1 * 4);
if (v2 != (uint8_t*)0) ((void(*)(uint8_t*, uint32_t))(*(void***)v2)[11])(v2, arg2);
}
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00356B04
extern "C" void YellowAuto_00356b04(uint8_t* arg0, int32_t arg1) __asm__("_ZN4gfl24Fade11FadeManager15ForceDefaultOutENS0_4DISPE");
extern "C" void YellowAuto_00356b04(uint8_t* arg0, int32_t arg1) {
static const uint32_t v2[4] = {0, 0, 0, 0x437F0000};
if (arg1 == 4) {
uint8_t* v0 = *(uint8_t**)arg0;
((void(*)(uint8_t*, const void*))(*(void***)v0)[5])(v0, (const void*)v2);
uint8_t* v1 = *(uint8_t**)(arg0 + 4);
((void(*)(uint8_t*, const void*))(*(void***)v1)[5])(v1, (const void*)v2);
} else {
uint8_t* v3 = *(uint8_t**)(arg0 + arg1 * 4);
((void(*)(uint8_t*, const void*))(*(void***)v3)[5])(v3, (const void*)v2);
}
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00356DD4
extern "C" void YellowAuto_00356dd4(uint8_t* arg0, int32_t arg1) __asm__("_ZN4gfl24Fade11FadeManager17RequestDefaultOutENS0_4DISPE");
extern "C" void YellowAuto_00356dd4(uint8_t* arg0, int32_t arg1) {
static const uint32_t v2[4] = {0, 0, 0, 0};
static const uint32_t v3[4] = {0, 0, 0, 0x437F0000};
if (arg1 == 4) {
uint8_t* v0 = *(uint8_t**)arg0;
((void(*)(uint8_t*, int32_t, const void*, const void*, int32_t, int32_t))(*(void***)v0)[3])(v0, 1, (const void*)v2, (const void*)v3, 2, 0);
uint8_t* v1 = *(uint8_t**)(arg0 + 4);
((void(*)(uint8_t*, int32_t, const void*, const void*, int32_t, int32_t))(*(void***)v1)[3])(v1, 1, (const void*)v2, (const void*)v3, 2, 0);
} else {
uint8_t* v4 = *(uint8_t**)(arg0 + arg1 * 4);
((void(*)(uint8_t*, int32_t, const void*, const void*, int32_t, int32_t))(*(void***)v4)[3])(v4, 1, (const void*)v2, (const void*)v3, 2, 0);
}
}
#endif
