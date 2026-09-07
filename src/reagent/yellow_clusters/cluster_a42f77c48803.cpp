// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002F39B4
void SetTextBoxPaneStringExpand(void*, void*, const void*);
void SetTextBoxPaneString(void*, void*, const void*);
extern "C" void YellowAuto_002f39b4(uint8_t* arg0, int32_t arg1, const void* arg2, bool arg3) __asm__("_ZN3app4tool16GeneralLowerView16SetTextBoxStringENS1_9TextBoxIDEPN4gfl23str6StrBufEb");
extern "C" void YellowAuto_002f39b4(uint8_t* arg0, int32_t arg1, const void* arg2, bool arg3) {
if (*(uint32_t *)(arg0 + 0x94) != 3) return; if (arg3) SetTextBoxPaneStringExpand(*(void **)(arg0 + 0x60), *(void **)(arg0 + 0x10c + arg1 * 4), arg2); else SetTextBoxPaneString(*(void **)(arg0 + 0x60), *(void **)(arg0 + 0x10c + arg1 * 4), arg2); return;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002F3AC4
void SetButtonSelectSE(uint8_t*, uint32_t, uint32_t);
extern uint32_t seTable[10];
extern "C" void YellowAuto_002f3ac4(uint8_t* arg0) __asm__("_ZN3app4tool16GeneralLowerView20SetButtonSEtoDefaultEv");
extern "C" void YellowAuto_002f3ac4(uint8_t* arg0) {
uint8_t* mgr = *(uint8_t**)(arg0 + 0x10);
for (uint32_t i = 0; i < 5; ++i) {
uint32_t b = seTable[i * 2];
uint32_t s = seTable[i * 2 + 1];
SetButtonSelectSE(mgr, b, s);
}
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002F371C
void StartAnime(uint8_t*, uint32_t, uint32_t, uint32_t, uint32_t);
void SetLocationNum(uint8_t*, uint32_t);
void Update2D(uint8_t*);
void MoveTo(uint8_t*, uint32_t);
extern "C" void YellowAuto_002f371c(uint8_t* arg0, uint32_t arg1, uint32_t arg2, uint8_t arg3) __asm__("_ZN3app4tool16GeneralLowerView13SetLayoutModeENS1_10LayoutModeEbb");
extern "C" void YellowAuto_002f371c(uint8_t* arg0, uint32_t arg1, uint32_t arg2, uint8_t arg3) {
uint8_t* g = *(uint8_t**)(arg0 + 0x60);
uint8_t* cur = arg0 + 0xAC;
*(uint8_t*)(arg0 + 0x98) = (uint8_t)arg1;
switch (arg1) {
case 0: StartAnime(g, 0, 0, 1, 1); SetLocationNum(cur, 0); break;
case 1: StartAnime(g, 0, 1, 1, 1); SetLocationNum(cur, 1); break;
case 2: StartAnime(g, 0, 2, 1, 1); SetLocationNum(cur, 2); break;
case 3: StartAnime(g, 0, 3, 1, 1); SetLocationNum(cur, 3); break;
case 4: StartAnime(g, 0, 4, 1, 1); SetLocationNum(cur, 4); break;
case 5: StartAnime(g, 0, 5, 1, 1); SetLocationNum(cur, 0); break;
case 6: StartAnime(g, 0, 6, 1, 1); SetLocationNum(cur, 1); break;
case 7: StartAnime(g, 0, 7, 1, 1); SetLocationNum(cur, 2); break;
case 8: StartAnime(g, 0, 8, 1, 1); SetLocationNum(cur, 3); break;
case 9: StartAnime(g, 0, 9, 1, 1); SetLocationNum(cur, 4); break;
default: break;
}
Update2D(g);
MoveTo(cur, *(uint32_t*)(arg0 + 0xBC));
uint32_t back = arg2 ? 11 : 10;
StartAnime(g, 0, back, 1, 1);
uint8_t* bg = *(uint8_t**)(arg0 + 0x11C);
*(uint8_t*)(bg + 0x44) = (uint8_t)((*(uint8_t*)(bg + 0x44) & 0xFE) | arg3);
Update2D(g);
uint8_t* h = *(uint8_t**)(arg0 + 0xA4);
if (h != (uint8_t*)0) {
uint8_t* vt = *(uint8_t**)h;
void (*fn)(uint8_t*, uint8_t*, uint32_t) = *(void (**)(uint8_t*, uint8_t*, uint32_t))(vt + 8);
fn(h, arg0, 5);
}
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002F3610
void* OperatorNew(uint32_t, uint8_t*);
uint8_t* ResourceLoaderInit(uint8_t*, uint8_t*);
void ResourceLoaderRequest(uint8_t*, uint32_t, uint32_t, int32_t, uint32_t);
bool ResourceLoaderObserve(uint8_t*);
void SetupLowerView(uint8_t*);
extern uint8_t resourceTable[24];
extern "C" bool YellowAuto_002f3610(uint8_t* arg0) __asm__("_ZN3app4tool16GeneralLowerView12ObserveSetupEv");
extern "C" bool YellowAuto_002f3610(uint8_t* arg0) {
uint32_t st = *(uint32_t*)(arg0 + 0x94);
while (st == 0) {
if (*(uint32_t*)(arg0 + 0xA8) != (uint32_t)0) {
*(uint32_t*)(arg0 + 0x94) = 2;
st = *(uint32_t*)(arg0 + 0x94);
continue;
}
for (uint32_t i = 0; i < 2; ++i) {
uint8_t* heapBase = *(uint8_t**)(arg0 + 0x88);
uint8_t* devHeap = *(uint8_t**)(heapBase + 8);
void* mem = OperatorNew(28, devHeap);
uint8_t* loader = (uint8_t*)0;
if (mem != (void*)0) {
loader = ResourceLoaderInit((uint8_t*)mem, heapBase);
}
*(uint8_t**)(arg0 + 0x9C + i * 4) = loader;
uint32_t arc = *(uint32_t*)(resourceTable + i * 12);
uint32_t dat = *(uint32_t*)(resourceTable + i * 12 + 4);
int32_t comp = (int32_t)(*(int8_t*)(resourceTable + i * 12 + 8));
ResourceLoaderRequest(loader, arc, dat, comp, 0);
}
*(uint32_t*)(arg0 + 0x94) = 1;
return false;
}
if (st == 1) {
for (uint32_t i = 0; i < 2; ++i) {
uint8_t* loader = *(uint8_t**)(arg0 + 0x9C + i * 4);
if (loader != (uint8_t*)0) {
if (!ResourceLoaderObserve(loader)) return false;
}
}
*(uint32_t*)(arg0 + 0x94) = 2;
return false;
}
if (st == 2) {
SetupLowerView(arg0);
}
return (*(uint32_t*)(arg0 + 0x94) == 3);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002F4140
uint8_t* UIViewInit(uint8_t*, uint8_t*, uint32_t, uint32_t);
uint8_t* CursorControllerInit(uint8_t*, uint8_t*, uint8_t*);
extern uint32_t buttonNullId;
extern "C" uint8_t* YellowAuto_002f4140(uint8_t* arg0, uint8_t* arg1, uint8_t* arg2, uint8_t arg3) __asm__("_ZN3app4tool16GeneralLowerViewC1EPNS_4util4HeapEPNS2_19AppRenderingManagerENS2_7G2DUtil18SETUP_DISPLAY_TYPEE");
extern "C" uint8_t* YellowAuto_002f4140(uint8_t* arg0, uint8_t* arg1, uint8_t* arg2, uint8_t arg3) {
uint8_t* base = UIViewInit(arg0, arg1, 0, 0);
*(uint8_t**)(base + 0x88) = arg1;
*(uint8_t**)(base + 0x8C) = arg2;
*(uint8_t*)(base + 0x90) = arg3;
*(uint32_t*)(base + 0x94) = 0;
*(uint8_t*)(base + 0x98) = 10;
*(uint8_t**)(base + 0xA4) = (uint8_t*)0;
*(uint8_t**)(base + 0xA8) = (uint8_t*)0;
uint8_t* cur = CursorControllerInit(base + 0xAC, arg1, arg2);
(void)cur;
*(uint8_t**)(base + 0x9C) = (uint8_t*)0;
*(uint8_t**)(base + 0xA0) = (uint8_t*)0;
*(uint32_t*)(base + 0x10C) = 0;
*(uint32_t*)(base + 0x110) = 0;
*(uint32_t*)(base + 0x114) = 0;
*(uint32_t*)(base + 0x118) = 0;
*(uint32_t*)(base + 0x11C) = 0;
uint32_t nid = buttonNullId;
*(uint32_t*)(base + 0x120) = nid;
*(uint32_t*)(base + 0x124) = nid;
*(uint32_t*)(base + 0x128) = nid;
*(uint32_t*)(base + 0x12C) = nid;
*(uint32_t*)(base + 0x130) = nid;
*(uint32_t*)(base + 0x134) = nid;
*(uint8_t**)(base + 0x14) = base + 0x80;
*(uint32_t*)(base + 0x124) = 4;
return base;
}
#endif
