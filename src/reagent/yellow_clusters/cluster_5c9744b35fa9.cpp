// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A5840
const uint8_t* FUN_0032a43c(const uint8_t*, int32_t);
extern "C" const uint8_t* YellowAuto_004a5840(const uint8_t* arg0, int32_t arg1) __asm__("_ZNK7poke_3d5model9BaseModel19GetJointWorldMatrixEi");
extern "C" const uint8_t* YellowAuto_004a5840(const uint8_t* arg0, int32_t arg1) {
const uint8_t* inner = (const uint8_t*)(*(const uint32_t*)(arg0 + 0x4)); const uint8_t* v = (const uint8_t*)(*(const uint32_t*)(inner + 0x13C)); if (v == (const uint8_t*)0) v = (const uint8_t*)(*(const uint32_t*)(inner + 0x100)) + arg1 * 0x10C; else v = FUN_0032a43c(v, arg1); return v + 0x48;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00418008
void FUN_0041118c(void*, int32_t);
extern "C" void YellowAuto_00418008(uint8_t* arg0, int32_t arg1, int32_t arg2) __asm__("_ZN7poke_3d5model9BaseModel28SetMaterialDepthTestFunctionEiNS1_20MaterialTestFunctionE");
extern "C" void YellowAuto_00418008(uint8_t* arg0, int32_t arg1, int32_t arg2) {
uint8_t* v0 = *(uint8_t**)(arg0 + 0x4);
uint8_t* v1 = *(uint8_t**)(v0 + 0xE8);
uint8_t* v2 = v1 + arg1 * 0x2B0;
FUN_0041118c(&v2, arg2);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00417D1C
void FUN_004110b8(void*, int32_t, const void*);
extern "C" void YellowAuto_00417d1c(uint8_t* arg0, int32_t arg1, int32_t arg2, const void* arg3) __asm__("_ZN7poke_3d5model9BaseModel24SetMaterialColorConstantEiiRKN4gfl24math7Vector4E");
extern "C" void YellowAuto_00417d1c(uint8_t* arg0, int32_t arg1, int32_t arg2, const void* arg3) {
uint8_t* v0 = *(uint8_t**)(arg0 + 0x4);
uint8_t* v1 = *(uint8_t**)(v0 + 0xE8);
uint8_t* v2 = v1 + arg1 * 0x2B0;
FUN_004110b8(&v2, arg2, arg3);
}
#endif
