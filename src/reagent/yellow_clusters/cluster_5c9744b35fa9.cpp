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
