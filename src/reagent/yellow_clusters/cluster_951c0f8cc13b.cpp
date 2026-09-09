// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0037EC2C
extern "C" void YellowAuto_0037ec2c(uint8_t* arg0, int32_t arg1, bool arg2) __asm__("_ZN5Field11FieldScript16ScriptTrialModel16SetShadowVisibleEib");
extern "C" void YellowAuto_0037ec2c(uint8_t* arg0, int32_t arg1, bool arg2) {
*reinterpret_cast<uint8_t*>(*reinterpret_cast<uint8_t**>(arg0 + arg1 * 0x18 + 0x28) + 0x38) = arg2;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0037ECC8
void func_0010f3d4(void*, bool);
extern "C" void YellowAuto_0037ecc8(uint8_t* arg0, int32_t arg1, bool arg2) __asm__("_ZN5Field11FieldScript16ScriptTrialModel4DispEib");
extern "C" void YellowAuto_0037ecc8(uint8_t* arg0, int32_t arg1, bool arg2) {
func_0010f3d4(*reinterpret_cast<uint8_t**>(arg0 + arg1 * 0x18 + 0x28), arg2);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0037EDA8
void func_0010f3d4(void*, bool);
extern "C" void YellowAuto_0037eda8(uint8_t* arg0) __asm__("_ZN5Field11FieldScript16ScriptTrialModel6UnLoadEv");
extern "C" void YellowAuto_0037eda8(uint8_t* arg0) {
if (arg0[0x15] == 0) return; if (*reinterpret_cast<uint8_t**>(arg0 + 0x28) != 0) func_0010f3d4(*reinterpret_cast<uint8_t**>(arg0 + 0x28), false); if (*reinterpret_cast<uint8_t**>(arg0 + 0x40) != 0) func_0010f3d4(*reinterpret_cast<uint8_t**>(arg0 + 0x40), false); arg0[0x14] = 7;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0037ED2C
extern "C" int32_t YellowAuto_0037ed2c(uint8_t* arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) __asm__("_ZN5Field11FieldScript16ScriptTrialModel4LoadEiiii");
extern "C" int32_t YellowAuto_0037ed2c(uint8_t* arg0, int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) {
*reinterpret_cast<int32_t*>(arg0 + 0x48) = arg1; *reinterpret_cast<int32_t*>(arg0 + arg1 * 0x18 + 0x18) = arg2; *reinterpret_cast<int32_t*>(arg0 + arg1 * 0x18 + 0x1C) = arg3; *reinterpret_cast<int32_t*>(arg0 + arg1 * 0x18 + 0x20) = arg4; arg0[0x14] = 1; return 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0037F360
bool func_0010f43c(void*);
extern "C" bool YellowAuto_0037f360(uint8_t* arg0, int32_t arg1) __asm__("_ZN5Field11FieldScript16ScriptTrialModel9PlayIsEndEi");
extern "C" bool YellowAuto_0037f360(uint8_t* arg0, int32_t arg1) {
return func_0010f43c(*reinterpret_cast<uint8_t**>(arg0 + arg1 * 0x18 + 0x28));
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0037F2FC
void func_0010f434(void*, int32_t);
extern "C" void YellowAuto_0037f2fc(uint8_t* arg0, int32_t arg1, int32_t arg2) __asm__("_ZN5Field11FieldScript16ScriptTrialModel8PlayAnimEii");
extern "C" void YellowAuto_0037f2fc(uint8_t* arg0, int32_t arg1, int32_t arg2) {
func_0010f434(*reinterpret_cast<uint8_t**>(arg0 + arg1 * 0x18 + 0x28), arg2);
}
#endif
