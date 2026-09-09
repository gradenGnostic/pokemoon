// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0045B7C4
void SetupCameraLookAt(uint8_t*, const uint32_t*, const uint32_t*, const uint32_t*);
uint32_t FloatMul(uint32_t, uint32_t);
extern "C" void YellowAuto_0045b7c4(uint8_t* arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) __asm__("_ZN9NetAppLib4Util14NetAppEffectBG14SetLowerCameraEffffffffffff");
extern "C" void YellowAuto_0045b7c4(uint8_t* arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint8_t* cam = *(uint8_t**)(arg0 + 80); uint32_t eye[3]; eye[0] = arg1; eye[1] = arg2; eye[2] = arg3; uint32_t tgt[3]; tgt[0] = arg4; tgt[1] = arg5; tgt[2] = arg6; uint32_t up[3]; up[0] = arg10; up[1] = arg11; up[2] = arg12; SetupCameraLookAt(cam, eye, tgt, up); *(uint32_t*)(cam + 172) = FloatMul(FloatMul(arg7, *(const uint32_t*)0x0045B86C), *(const uint32_t*)0x0045B870); *(uint32_t*)(cam + 164) = arg8; *(uint32_t*)(cam + 168) = arg9; return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0045B874
void SetupCameraLookAt(uint8_t*, const uint32_t*, const uint32_t*, const uint32_t*);
uint32_t FloatMul(uint32_t, uint32_t);
extern "C" void YellowAuto_0045b874(uint8_t* arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) __asm__("_ZN9NetAppLib4Util14NetAppEffectBG14SetUpperCameraEffffffffffff");
extern "C" void YellowAuto_0045b874(uint8_t* arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5, uint32_t arg6, uint32_t arg7, uint32_t arg8, uint32_t arg9, uint32_t arg10, uint32_t arg11, uint32_t arg12) {
uint8_t* cam = *(uint8_t**)(arg0 + 64); uint32_t eye[3]; eye[0] = arg1; eye[1] = arg2; eye[2] = arg3; uint32_t tgt[3]; tgt[0] = arg4; tgt[1] = arg5; tgt[2] = arg6; uint32_t up[3]; up[0] = arg10; up[1] = arg11; up[2] = arg12; SetupCameraLookAt(cam, eye, tgt, up); *(uint32_t*)(cam + 172) = FloatMul(FloatMul(arg7, *(const uint32_t*)0x0045B91C), *(const uint32_t*)0x0045B920); *(uint32_t*)(cam + 164) = arg8; *(uint32_t*)(cam + 168) = arg9; return;
}
#endif
