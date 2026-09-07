// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0042C064
void func_0042c88c(uint8_t*, int32_t, uint32_t);
void func_0042c454(uint8_t*, int32_t, uint32_t);
void func_0035be88(uint32_t, uint32_t, uint32_t);
extern "C" void YellowAuto_0042c064(uint8_t* arg0, int32_t arg1) __asm__("_ZN8PokeTool11PokemonSort17SetConditionZukanENS0_14ContidionZukanE");
extern "C" void YellowAuto_0042c064(uint8_t* arg0, int32_t arg1) {
uint32_t tbl = *(uint32_t*)0x42C118;
func_0042c88c(arg0, *(int32_t*)(tbl + 0x8), *(uint32_t*)(tbl + 0xC));
func_0042c88c(arg0, *(int32_t*)(tbl + 0x10), *(uint32_t*)(tbl + 0x14));
func_0042c88c(arg0, *(int32_t*)(tbl + 0x18), *(uint32_t*)(tbl + 0x1C));
if (arg1 == 0) {
return;
}
if (arg1 == 1) {
func_0042c454(arg0, *(int32_t*)(tbl + 0x8), *(uint32_t*)(tbl + 0xC));
return;
}
if (arg1 == 2) {
func_0042c454(arg0, *(int32_t*)(tbl + 0x10), *(uint32_t*)(tbl + 0x14));
return;
}
if (arg1 != 3) {
func_0035be88(0, 0, 0);
return;
}
func_0042c454(arg0, *(int32_t*)(tbl + 0x18), *(uint32_t*)(tbl + 0x1C));
return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0042BFAC
extern "C" void YellowAuto_0042bfac(uint8_t* arg0) __asm__("_ZN8PokeTool11PokemonSort17ClearAllConditionEv");
extern "C" void YellowAuto_0042bfac(uint8_t* arg0) {
uint32_t src = *(uint32_t*)0x42C008;
uint32_t v0 = *(uint32_t*)(src + 0x58);
uint32_t v1 = *(uint32_t*)(src + 0x5C);
for (int32_t i = 0; i < 16; ++i) {
*(uint32_t*)(arg0 + 0x101C + i * 8) = v0;
*(uint32_t*)(arg0 + 0x1020 + i * 8) = v1;
}
return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0042BDAC
bool func_0048d568(void*, uint32_t, uint32_t*, uint32_t*);
void func_0042be0c(uint8_t*, uint32_t, uint32_t);
extern "C" bool YellowAuto_0042bdac(uint8_t* arg0, uint32_t arg1) __asm__("_ZN8PokeTool11PokemonSort15OrderByMonsNameEj");
extern "C" bool YellowAuto_0042bdac(uint8_t* arg0, uint32_t arg1) {
uint32_t v0 = *(uint32_t*)(arg0 + 0x10);
uint32_t s = 0;
uint32_t e = 0;
bool r = func_0048d568((void*)v0, arg1, (uint32_t*)&s, (uint32_t*)&e);
if (r) {
func_0042be0c(arg0, s, e);
}
return r;
}
#endif
