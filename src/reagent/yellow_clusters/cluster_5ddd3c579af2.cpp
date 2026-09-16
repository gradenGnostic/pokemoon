// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0041D038
extern "C" void YellowAuto_0041d038(uint8_t* arg0, void* arg1) __asm__("_ZN7poke_3d8renderer24DistortionPostRenderPath28AddDistortionRenderingTargetEPN4gfl215renderingengine10scenegraph8instance12DrawableNodeE");
extern "C" void YellowAuto_0041d038(uint8_t* arg0, void* arg1) {
int32_t _cap = *reinterpret_cast<int32_t*>(arg0 + 0x48);
int32_t _cnt = *reinterpret_cast<int32_t*>(arg0 + 0x54);
if (_cap == _cnt) return;
uint8_t* _e = *reinterpret_cast<uint8_t**>(arg0 + 0x4C);
uint8_t* _next = *reinterpret_cast<uint8_t**>(_e + 8);
uint8_t* _slot = *reinterpret_cast<uint8_t**>(_e + 0);
if (_slot != nullptr) *reinterpret_cast<uint32_t*>(_slot + 0) = 0;
_slot = *reinterpret_cast<uint8_t**>(_e + 0);
*reinterpret_cast<void**>(_slot + 0) = arg1;
*reinterpret_cast<uint32_t*>(_e + 8) = 0;
*reinterpret_cast<uint32_t*>(_e + 4) = 0;
*reinterpret_cast<int32_t*>(_e + 12) = _cnt;
uint8_t* _tail = *reinterpret_cast<uint8_t**>(arg0 + 0x50);
if (_tail != nullptr) *reinterpret_cast<uint8_t**>(_tail + 4) = _e;
if (_tail != nullptr) *reinterpret_cast<uint8_t**>(_e + 8) = _tail;
*reinterpret_cast<uint8_t**>(arg0 + 0x50) = _e;
*reinterpret_cast<uint8_t**>(*reinterpret_cast<uint8_t**>(arg0 + 0x44) + _cnt) = _e;
*reinterpret_cast<uint8_t**>(arg0 + 0x4C) = _next;
*reinterpret_cast<int32_t*>(arg0 + 0x54) = _cnt + 1;
if (_next != nullptr) *reinterpret_cast<uint32_t*>(_next + 4) = 0;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0041D104
extern "C" void YellowAuto_0041d104(uint8_t* arg0, void* arg1) __asm__("_ZN7poke_3d8renderer24DistortionPostRenderPath31RemoveDistortionRenderingTargetEPN4gfl215renderingengine10scenegraph8instance12DrawableNodeE");
extern "C" void YellowAuto_0041d104(uint8_t* arg0, void* arg1) {
uint8_t* cur = (uint8_t*)(*(uint32_t*)(arg0 + 0x50));
while (cur != (uint8_t*)0) {
uint8_t* nxt = (uint8_t*)(*(uint32_t*)(cur + 8));
uint8_t* kp = (uint8_t*)(*(uint32_t*)(cur + 0));
void* key = (void*)(*(uint32_t*)(kp + 0));
if (key == arg1) {
uint8_t* head = (uint8_t*)(*(uint32_t*)(arg0 + 0x50));
uint8_t* prv = (uint8_t*)(*(uint32_t*)(cur + 4));
if (cur == head && prv == (uint8_t*)0) {
uint8_t* nn = (uint8_t*)(*(uint32_t*)(cur + 8));
*(uint32_t*)(arg0 + 0x50) = (uint32_t)nn;
if (nn != (uint8_t*)0) {
*(uint32_t*)(nn + 4) = (uint32_t)0;
}
} else {
uint8_t* nx = (uint8_t*)(*(uint32_t*)(cur + 8));
*(uint32_t*)(prv + 8) = (uint32_t)nx;
if (nx != (uint8_t*)0) {
*(uint32_t*)(nx + 4) = (uint32_t)prv;
}
}
*(uint32_t*)(cur + 8) = (uint32_t)0;
*(uint32_t*)(cur + 4) = (uint32_t)0;
uint32_t idx = *(uint32_t*)(cur + 12);
uint8_t* fre = (uint8_t*)(*(uint32_t*)(arg0 + 0x4C));
if (fre != (uint8_t*)0) {
*(uint32_t*)(fre + 4) = (uint32_t)cur;
uint8_t* old = (uint8_t*)(*(uint32_t*)(arg0 + 0x4C));
*(uint32_t*)(cur + 8) = (uint32_t)old;
}
*(uint32_t*)(arg0 + 0x4C) = (uint32_t)cur;
uint32_t cnt = *(uint32_t*)(arg0 + 0x54);
if (idx < cnt - 1u) {
do {
uint8_t* arr = (uint8_t*)(*(uint32_t*)(arg0 + 0x44));
uint8_t* mv = (uint8_t*)(*(uint32_t*)(arr + idx * 4u + 4u));
*(uint32_t*)(arr + idx * 4u) = (uint32_t)mv;
*(uint32_t*)(mv + 12) = idx;
idx = idx + 1u;
cnt = *(uint32_t*)(arg0 + 0x54);
} while (idx < cnt - 1u);
}
uint32_t cnt2 = *(uint32_t*)(arg0 + 0x54);
uint8_t* arr2 = (uint8_t*)(*(uint32_t*)(arg0 + 0x44));
*(uint32_t*)(arr2 + cnt2 * 4u - 4u) = (uint32_t)0;
*(uint32_t*)(arg0 + 0x54) = cnt2 - 1u;
}
cur = nxt;
}
}
#endif
