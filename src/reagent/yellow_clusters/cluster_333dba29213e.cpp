// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002E75C4
extern "C" bool YellowAuto_002e75c4(uint8_t* arg0, uint8_t* arg1) __asm__("_ZN3app2ui6UIView14IsExistSubViewEPS1_");
extern "C" bool YellowAuto_002e75c4(uint8_t* arg0, uint8_t* arg1) {
uint32_t cnt = *(uint32_t*)(arg0 + 0x44);
if (cnt == 0) return false;
uint8_t* first = *(uint8_t**)(arg0 + 0x48);
uint8_t* end = arg0 + 0x48;
if (first == end) return false;
uint8_t* cur = first;
do {
uint8_t* v = *(uint8_t**)(cur - 4);
if (v == arg1) return true;
cur = *(uint8_t**)cur;
} while (cur != end);
return false;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002E7590
void Update2D(uint8_t*);
extern "C" void YellowAuto_002e7590(uint8_t* arg0) __asm__("_ZN3app2ui6UIView13UpdateG2DUtilEv");
extern "C" void YellowAuto_002e7590(uint8_t* arg0) {
uint32_t vt = *(uint32_t*)arg0;
uint32_t fn = *(uint32_t*)(vt + 0x40);
bool vis = ((bool(*)(uint8_t*))fn)(arg0);
if (!vis) return;
uint8_t* g = *(uint8_t**)(arg0 + 0x60);
if (!g) return;
Update2D(g);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002E7EC4
void DrawTree(uint8_t*, uint32_t);
extern "C" void YellowAuto_002e7ec4(uint8_t* arg0, uint32_t arg1) __asm__("_ZN3app2ui6UIView8DrawTreeEN4gfl23gfx12CtrDisplayNoE");
extern "C" void YellowAuto_002e7ec4(uint8_t* arg0, uint32_t arg1) {
uint32_t vt = *(uint32_t*)arg0;
uint32_t fnVis = *(uint32_t*)(vt + 0x40);
bool vis = ((bool(*)(uint8_t*))fnVis)(arg0);
if (!vis) return;
uint32_t fnDraw = *(uint32_t*)(vt + 0x38);
((void(*)(uint8_t*, uint32_t))fnDraw)(arg0, arg1);
uint32_t cnt = *(uint32_t*)(arg0 + 0x44);
if (cnt == 0) return;
uint8_t* first = *(uint8_t**)(arg0 + 0x48);
uint8_t* end = arg0 + 0x48;
if (first == end) return;
uint8_t* cur = first;
do {
uint8_t* v = *(uint8_t**)(cur - 4);
DrawTree(v, arg1);
cur = *(uint8_t**)cur;
} while (cur != end);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002E79F4
void SetInputEnabled(uint8_t*, bool);
void SetInputEnabledAllView(uint8_t*, bool);
extern "C" void YellowAuto_002e79f4(uint8_t* arg0, bool arg1) __asm__("_ZN3app2ui6UIView22SetInputEnabledAllViewEb");
extern "C" void YellowAuto_002e79f4(uint8_t* arg0, bool arg1) {
SetInputEnabled(arg0, arg1);
uint32_t cnt = *(uint32_t*)(arg0 + 0x44);
if (cnt == 0) return;
uint8_t* first = *(uint8_t**)(arg0 + 0x48);
uint8_t* end = arg0 + 0x48;
if (first == end) return;
uint8_t* cur = first;
do {
uint8_t* v = *(uint8_t**)(cur - 4);
SetInputEnabledAllView(v, arg1);
cur = *(uint8_t**)cur;
} while (cur != end);
}
#endif
