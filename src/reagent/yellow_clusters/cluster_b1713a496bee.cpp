// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0041C8B0
extern "C" void YellowAuto_0041c8b0(uint8_t* arg0, void* arg1) __asm__("_ZN7poke_3d8renderer22EdgeMapSceneRenderPath22AddEdgeRenderingTargetEPN4gfl215renderingengine10scenegraph8instance12DrawableNodeE");
extern "C" void YellowAuto_0041c8b0(uint8_t* arg0, void* arg1) {
if (*reinterpret_cast<int32_t*>(arg0 + 0x48) != *reinterpret_cast<int32_t*>(arg0 + 0x54)) {
void** n = *reinterpret_cast<void***>(arg0 + 0x4C);
void* fnext = n[2];
if (n[0] != (void*)0) {
*reinterpret_cast<uint32_t*>(n[0]) = 0;
}
*reinterpret_cast<void**>(n[0]) = arg1;
n[2] = (void*)0;
n[1] = (void*)0;
reinterpret_cast<uint32_t*>(n)[3] = *reinterpret_cast<uint32_t*>(arg0 + 0x54);
void** h = *reinterpret_cast<void***>(arg0 + 0x50);
if (h != (void**)0) {
h[1] = (void*)n;
n[2] = (void*)h;
}
*reinterpret_cast<void***>(arg0 + 0x50) = n;
void** arr = *reinterpret_cast<void***>(arg0 + 0x44);
arr[*reinterpret_cast<int32_t*>(arg0 + 0x54)] = (void*)n;
*reinterpret_cast<void***>(arg0 + 0x4C) = (void**)fnext;
(*reinterpret_cast<int32_t*>(arg0 + 0x54))++;
if (fnext != (void*)0) {
reinterpret_cast<void**>(fnext)[1] = (void*)0;
}
}
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0041CABC
extern "C" void YellowAuto_0041cabc(uint8_t* arg0, void* arg1) __asm__("_ZN7poke_3d8renderer22EdgeMapSceneRenderPath25RemoveEdgeRenderingTargetEPN4gfl215renderingengine10scenegraph8instance12DrawableNodeE");
extern "C" void YellowAuto_0041cabc(uint8_t* arg0, void* arg1) {
void** cur = *reinterpret_cast<void***>(arg0 + 0x50);
while (cur != (void**)0) {
void** nxt = (void**)cur[2];
if (*reinterpret_cast<void**>(cur[0]) == arg1) {
void** head = *reinterpret_cast<void***>(arg0 + 0x50);
bool isHead = (head == cur);
void** prevForCheck = head;
if (isHead) {
prevForCheck = (void**)cur[1];
}
if (isHead && prevForCheck == (void**)0) {
void** nx = (void**)cur[2];
*reinterpret_cast<void***>(arg0 + 0x50) = nx;
if (nx != (void**)0) {
nx[1] = (void*)0;
}
} else {
((void**)cur[1])[2] = cur[2];
if (cur[2] != (void*)0) {
((void**)cur[2])[1] = cur[1];
}
}
cur[2] = (void*)0;
cur[1] = (void*)0;
uint32_t idx = reinterpret_cast<uint32_t*>(cur)[3];
if (*reinterpret_cast<void***>(arg0 + 0x4C) != (void**)0) {
(*reinterpret_cast<void***>(arg0 + 0x4C))[1] = (void*)cur;
cur[2] = (void*)*reinterpret_cast<void***>(arg0 + 0x4C);
}
*reinterpret_cast<void***>(arg0 + 0x4C) = cur;
void** arr = *reinterpret_cast<void***>(arg0 + 0x44);
int32_t sz = *reinterpret_cast<int32_t*>(arg0 + 0x54);
if (idx < (uint32_t)(sz - 1)) {
uint32_t i = idx;
do {
void* mv = arr[i + 1];
arr[i] = mv;
reinterpret_cast<uint32_t*>(mv)[3] = i;
i = i + 1;
} while (i < (uint32_t)(*reinterpret_cast<int32_t*>(arg0 + 0x54) - 1));
}
arr[*reinterpret_cast<int32_t*>(arg0 + 0x54) - 1] = (void*)0;
(*reinterpret_cast<int32_t*>(arg0 + 0x54))--;
}
cur = nxt;
}
}
#endif
