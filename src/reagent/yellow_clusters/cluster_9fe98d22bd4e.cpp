// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00380E7C
void func_0038c1a4(int32_t, int32_t, uint32_t, uint32_t, uint32_t, uint32_t);
extern "C" bool YellowAuto_00380e7c(uint8_t* arg0) __asm__("_ZN5Field11FieldScript17FieldScriptSystem25CheckRunWeakReserveScriptEv");
extern "C" bool YellowAuto_00380e7c(uint8_t* arg0) {
if (*(int32_t*)(arg0 + 0x6C) != 2000) { func_0038c1a4(*(int32_t*)(arg0 + 0x1C), *(int32_t*)(arg0 + 0x6C), *(uint32_t*)(arg0 + 0x78), *(uint32_t*)(arg0 + 0x7C), *(uint32_t*)(arg0 + 0x80), *(uint32_t*)(arg0 + 0x84)); *(int32_t*)(arg0 + 0x6C) = 2000; return true; } return false;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0037FB78
int32_t sub_00497210(uint32_t);
extern "C" int32_t YellowAuto_0037fb78(uint8_t* arg0) __asm__("_ZN5Field11FieldScript17FieldScriptSystem12UpdateCreateEv");
extern "C" int32_t YellowAuto_0037fb78(uint8_t* arg0) {
uint32_t v = *(uint32_t*)(arg0 + 0x28);
if (sub_00497210(v) != 0) *(uint8_t*)(arg0 + 0x4C) = 1;
return *(int8_t*)(arg0 + 0x4C);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00380A04
void sub_0038c1a4(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
extern "C" bool YellowAuto_00380a04(uint8_t* arg0) __asm__("_ZN5Field11FieldScript17FieldScriptSystem21CheckRunReserveScriptEv");
extern "C" bool YellowAuto_00380a04(uint8_t* arg0) {
uint32_t v = *(uint32_t*)(arg0 + 0x68);
if (v == 2000) return false;
sub_0038c1a4(*(uint32_t*)(arg0 + 0x1C), v, *(uint32_t*)(arg0 + 0x88), *(uint32_t*)(arg0 + 0x8C), *(uint32_t*)(arg0 + 0x90), *(uint32_t*)(arg0 + 0x94));
*(uint32_t*)(arg0 + 0x68) = 2000;
return true;
}
#endif
