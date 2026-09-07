// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0042EDEC
extern "C" int32_t YellowAuto_0042edec(uint8_t* arg0, int32_t arg1, int32_t arg2, int32_t arg3) __asm__("_ZN8PokeTool15PokeModelSystem10GetDataIdxEiii");
extern "C" int32_t YellowAuto_0042edec(uint8_t* arg0, int32_t arg1, int32_t arg2, int32_t arg3) {
uint32_t v0 = *(uint32_t*)(arg0 + 0x6C);
uint32_t v1 = v0 + (uint32_t)(arg1 * 4 - 4);
uint8_t v2 = *(uint8_t*)(v1 + 3);
uint8_t v3 = *(uint8_t*)(v1 + 2);
uint16_t v4 = *(uint16_t*)(v1);
int32_t v5 = 0;
if ((v2 & 4) != 0 && arg2 > 0 && (v2 & 2) != 0) v5 = arg2 + 1;
if ((v2 & 4) != 0 && arg2 > 0 && (v2 & 2) == 0) v5 = arg2;
if (arg3 == 1 && (v2 & 2) != 0 && ((v2 & 4) == 0 || arg2 <= 0)) v5 = 1;
if ((int32_t)(uint32_t)v3 <= v5) v5 = 0;
return (int32_t)(uint32_t)v4 + v5;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0042FF10
bool IsArcFileCloseFinished(void*, int32_t);
extern "C" bool YellowAuto_0042ff10(uint8_t* arg0) __asm__("_ZN8PokeTool15PokeModelSystem23IsFinishTermSystemAsyncEv");
extern "C" bool YellowAuto_0042ff10(uint8_t* arg0) {
void* v0 = (void*)(*(uint32_t*)(arg0));
if (!IsArcFileCloseFinished(v0, 0x5E)) return false;
if (!IsArcFileCloseFinished(v0, 0x61)) return false;
return true;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0042FE98
bool IsArcFileOpenFinished(void*, int32_t);
bool IsArcFileLoadDataFinished(void*, uint8_t*);
extern "C" bool YellowAuto_0042fe98(uint8_t* arg0) __asm__("_ZN8PokeTool15PokeModelSystem23IsFinishInitSystemAsyncEv");
extern "C" bool YellowAuto_0042fe98(uint8_t* arg0) {
void* v0 = (void*)(*(uint32_t*)(arg0));
if (!IsArcFileOpenFinished(v0, 0x5E)) return false;
if (!IsArcFileOpenFinished(v0, 0x61)) return false;
if (!IsArcFileLoadDataFinished(v0, arg0 + 0x68)) return false;
if (!IsArcFileLoadDataFinished(v0, arg0 + 0x1C)) return false;
if (!IsArcFileLoadDataFinished(v0, arg0 + 0x50)) return false;
return true;
}
#endif
