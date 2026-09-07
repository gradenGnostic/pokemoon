// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003E5444
extern "C" void YellowAuto_003e5444(uint8_t* arg0, void* arg1) __asm__("_ZN6System15ModelRenderPath14AddSheneCameraEPN4gfl215renderingengine8renderer17RenderingPipeLine15SceneRenderPath6CameraE");
extern "C" void YellowAuto_003e5444(uint8_t* arg0, void* arg1) {
*(void**)(arg0 + 104) = arg1;
return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003E547C
void GFLassert();
extern "C" void YellowAuto_003e547c(uint8_t* arg0, void* arg1) __asm__("_ZN6System15ModelRenderPath7AddNodeEPN4gfl215renderingengine10scenegraph8instance12DrawableNodeE");
extern "C" void YellowAuto_003e547c(uint8_t* arg0, void* arg1) {
if (*(int32_t*)(arg0 + 72) == *(int32_t*)(arg0 + 84)) {
GFLassert();
return;
}
uint8_t* cur = *(uint8_t**)(arg0 + 76);
uint8_t* nextFree = *(uint8_t**)(cur + 8);
uint8_t* slot = *(uint8_t**)(cur + 0);
if (slot != (uint8_t*)0) {
*(uint32_t*)(slot + 0) = 0;
}
*(void**)(*(void**)(cur + 0) + 0) = arg1;
*(uint32_t*)(cur + 8) = 0;
*(uint32_t*)(cur + 4) = 0;
*(uint32_t*)(cur + 12) = *(uint32_t*)(arg0 + 84);
if (*(uint8_t**)(arg0 + 80) != (uint8_t*)0) {
*(uint8_t**)(*(uint8_t**)(arg0 + 80) + 4) = cur;
*(uint8_t**)(cur + 8) = *(uint8_t**)(arg0 + 80);
}
*(uint8_t**)(arg0 + 80) = cur;
*(uint8_t**)(*(uint8_t**)(arg0 + 68) + *(uint32_t*)(arg0 + 84) * 4) = cur;
*(uint8_t**)(arg0 + 76) = nextFree;
*(int32_t*)(arg0 + 84) = *(int32_t*)(arg0 + 84) + 1;
if (nextFree != (uint8_t*)0) {
*(uint32_t*)(nextFree + 4) = 0;
}
return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003E52FC
extern "C" void YellowAuto_003e52fc(uint8_t* arg0, void* arg1) __asm__("_ZN6System15ModelRenderPath10RemoveNodeEPN4gfl215renderingengine10scenegraph8instance12DrawableNodeE");
extern "C" void YellowAuto_003e52fc(uint8_t* arg0, void* arg1) {
uint8_t* head = *(uint8_t**)(arg0 + 80);
uint8_t* cur = head;
while (cur != (uint8_t*)0) {
uint8_t* next = *(uint8_t**)(cur + 8);
void* val = *(void**)(*(void**)(cur + 0) + 0);
if (val == arg1) {
uint8_t* curHead = *(uint8_t**)(arg0 + 80);
bool isHead = curHead == cur;
uint8_t* prev = *(uint8_t**)(cur + 4);
uint8_t* headPrev = prev;
if (isHead) {
headPrev = *(uint8_t**)(cur + 4);
}
if (isHead && headPrev == (uint8_t*)0) {
uint8_t* nxt = *(uint8_t**)(cur + 8);
*(uint8_t**)(arg0 + 80) = nxt;
if (nxt != (uint8_t*)0) {
*(uint32_t*)(nxt + 4) = 0;
}
} else {
uint8_t* p = *(uint8_t**)(cur + 4);
uint8_t* n = *(uint8_t**)(cur + 8);
*(uint8_t**)(p + 8) = n;
if (n != (uint8_t*)0) {
*(uint8_t**)(n + 4) = p;
}
}
*(uint32_t*)(cur + 8) = 0;
*(uint32_t*)(cur + 4) = 0;
uint32_t idx = *(uint32_t*)(cur + 12);
if (*(uint8_t**)(arg0 + 76) != (uint8_t*)0) {
*(uint8_t**)(*(uint8_t**)(arg0 + 76) + 4) = cur;
*(uint8_t**)(cur + 8) = *(uint8_t**)(arg0 + 76);
}
*(uint8_t**)(arg0 + 76) = cur;
if (idx < (uint32_t)(*(int32_t*)(arg0 + 84) - 1)) {
uint32_t i = idx;
do {
uint8_t* mv = *(uint8_t**)(*(uint8_t**)(arg0 + 68) + i * 4 + 4);
*(uint8_t**)(*(uint8_t**)(arg0 + 68) + i * 4) = mv;
*(uint32_t*)(mv + 12) = i;
i = i + 1;
} while (i < (uint32_t)(*(int32_t*)(arg0 + 84) - 1));
}
*(uint32_t*)(*(uint8_t**)(arg0 + 68) + *(int32_t*)(arg0 + 84) * 4 - 4) = 0;
*(int32_t*)(arg0 + 84) = *(int32_t*)(arg0 + 84) - 1;
}
cur = next;
}
return;
}
#endif
