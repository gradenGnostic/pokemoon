// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003A52E0
extern "C" uint32_t YellowAuto_003a52e0(uint8_t* arg0) __asm__("_ZN5Field9MoveModel21FieldMoveModelManager35GetFieldMoveModelIndexFromFreeSpaceEv");
extern "C" uint32_t YellowAuto_003a52e0(uint8_t* arg0) {
uint32_t i = 2;
while (true) {
uint8_t* p = *(uint8_t**)(arg0 + i * 4 + 12);
uint32_t w = *(uint32_t*)(p + 188);
bool e = (w == 0);
uint32_t r = 1;
if (e) {
r = *(uint32_t*)(p + 192);
}
if (e && r == 0) {
break;
}
i = i + 1;
if (30 < i) {
return 32;
}
}
return i;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003A51CC
extern "C" uint32_t YellowAuto_003a51cc(uint8_t* arg0, int32_t arg1) __asm__("_ZN5Field9MoveModel21FieldMoveModelManager33GetFieldMoveModelIndexFromEventIdEj");
extern "C" uint32_t YellowAuto_003a51cc(uint8_t* arg0, int32_t arg1) {
uint32_t i = 0;
while (true) {
uint8_t* p = *(uint8_t**)(arg0 + i * 4 + 12);
uint32_t w = *(uint32_t*)(p + 188);
bool k = (w != 0);
uint32_t r = w;
if (!k) {
r = *(uint32_t*)(p + 192);
}
bool s = (k || r != 0);
int32_t e = *(int32_t*)(p + 40);
if (s && e == arg1) {
break;
}
i = i + 1;
if (31 < i) {
return 32;
}
}
return i;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003A39CC
bool IsModelLoaded(const uint8_t*, uint32_t);
void LoadModelAsync(uint8_t*, void*, uint32_t);
extern "C" void YellowAuto_003a39cc(uint8_t* arg0, uint32_t arg1, uint32_t arg2) __asm__("_ZN5Field9MoveModel21FieldMoveModelManager16LoadDynamicAsyncENS1_22DYNAMIC_RES_LOAD_INDEXEj");
extern "C" void YellowAuto_003a39cc(uint8_t* arg0, uint32_t arg1, uint32_t arg2) {
uint8_t* f = arg0 + 424;
if (arg1 < 3) {
bool l = IsModelLoaded(f, arg2);
if (!l) {
*(uint32_t*)(arg0 + arg1 * 4 + 400) = arg2;
uint8_t* h = *(uint8_t**)(arg0 + arg1 * 4 + 204);
LoadModelAsync(f, h, arg2);
} else {
*(uint32_t*)(arg0 + arg1 * 4 + 412) = arg2;
}
} else {
bool l2 = IsModelLoaded(f, arg2);
if (!l2) {
*(uint32_t*)(arg0 + 408) = arg2;
uint8_t* h2 = *(uint8_t**)(arg0 + 212);
LoadModelAsync(f, h2, arg2);
} else {
*(uint32_t*)(arg0 + 420) = arg2;
}
}
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004113A0
bool SetupModel(uint8_t*, void*, uint32_t);
extern "C" bool YellowAuto_004113a0(uint8_t* arg0, uint32_t arg1) __asm__("_ZN5Field9MoveModel21FieldMoveModelManager10SetupModelEj");
extern "C" bool YellowAuto_004113a0(uint8_t* arg0, uint32_t arg1) {
for (uint32_t i = 0; i < 3; i = i + 1) {
uint32_t id = *(uint32_t*)(arg0 + i * 4 + 400);
if (id != 0xFFFFFFFFU && id == arg1) {
uint8_t* a = *(uint8_t**)(arg0 + i * 4 + 388);
return SetupModel(arg0 + 424, a, arg1);
}
}
uint8_t* b = *(uint8_t**)(arg0 + 192);
return SetupModel(arg0 + 424, b, arg1);
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003A4F88
extern "C" void YellowAuto_003a4f88(uint8_t* arg0) __asm__("_ZN5Field9MoveModel21FieldMoveModelManager26TerminateMoveModelResourceEv");
extern "C" void YellowAuto_003a4f88(uint8_t* arg0) {
uint32_t _i = 0;
while (_i < 32) {
uint8_t* _m = *reinterpret_cast<uint8_t**>(arg0 + _i * 4 + 12);
if (*reinterpret_cast<uint32_t*>(_m + 192) != 0) {
uint8_t* _vt = *reinterpret_cast<uint8_t**>(_m);
void(*_fn)(uint8_t*) = reinterpret_cast<void(*)(uint8_t*)>(*reinterpret_cast<uint8_t**>(_vt + 72));
_fn(_m);
}
_i += 1;
}
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003A5174
void RemoveChild(uint8_t*, uint8_t*);
extern "C" void YellowAuto_003a5174(uint8_t* arg0, int32_t arg1) __asm__("_ZN5Field9MoveModel21FieldMoveModelManager30TerminateMoveModelWorkResourceENS0_19FIELD_MOVE_MODEL_IDE");
extern "C" void YellowAuto_003a5174(uint8_t* arg0, int32_t arg1) {
uint8_t* _e = arg0 + arg1 * 4;
uint8_t* _m = *reinterpret_cast<uint8_t**>(_e + 12);
if (*reinterpret_cast<uint32_t*>(_m + 192) != 0) {
uint8_t* _vt = *reinterpret_cast<uint8_t**>(_m);
void(*_fn)(uint8_t*) = reinterpret_cast<void(*)(uint8_t*)>(*reinterpret_cast<uint8_t**>(_vt + 72));
_fn(_m);
}
uint8_t* _m2 = *reinterpret_cast<uint8_t**>(_e + 12);
if (*reinterpret_cast<uint32_t*>(_m2 + 188) != 0) {
uint8_t* _p = *reinterpret_cast<uint8_t**>(arg0 + 8);
RemoveChild(_p, _m2);
uint8_t* _m3 = *reinterpret_cast<uint8_t**>(_e + 12);
uint8_t* _vt2 = *reinterpret_cast<uint8_t**>(_m3);
void(*_fn2)(uint8_t*) = reinterpret_cast<void(*)(uint8_t*)>(*reinterpret_cast<uint8_t**>(_vt2 + 68));
_fn2(_m3);
}
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003A4FC4
uint32_t* GetApplicationData(uint8_t*, uint32_t);
uint32_t SetSubobjectToMoveModel(uint8_t*, uint8_t*, uint32_t, uint32_t*, uint32_t);
extern "C" uint32_t YellowAuto_003a4fc4(uint8_t* arg0, int32_t arg1, const uint8_t* arg2, uint8_t* arg3) __asm__("_ZN5Field9MoveModel21FieldMoveModelManager27InitializeMoveModelResourceENS0_19FIELD_MOVE_MODEL_IDEPKNS0_28FieldMoveModelHeaderResourceEPN7poke_3d5model27DressUpModelResourceManagerE");
extern "C" uint32_t YellowAuto_003a4fc4(uint8_t* arg0, int32_t arg1, const uint8_t* arg2, uint8_t* arg3) {
uint8_t* _e = arg0 + arg1 * 4;
uint8_t* _m = *reinterpret_cast<uint8_t**>(_e + 12);
if (*reinterpret_cast<uint32_t*>(_m + 192) != 0) return 1;
uint8_t* _mgr = arg3;
if (_mgr == 0) _mgr = arg0 + 452;
uint8_t* _vt = *reinterpret_cast<uint8_t**>(_m);
void(*_vf)(uint8_t*, uint32_t, uint32_t, uint8_t*, uint8_t*, const uint8_t*) = reinterpret_cast<void(*)(uint8_t*, uint32_t, uint32_t, uint8_t*, uint8_t*, const uint8_t*)>(*reinterpret_cast<uint8_t**>(_vt + 64));
uint32_t _a = *reinterpret_cast<uint32_t*>(_e + 216);
uint32_t _b = *reinterpret_cast<uint32_t*>(arg0 + 180);
uint8_t* _c = arg0 + 424;
_vf(_m, _a, _b, _c, _mgr, arg2);
uint32_t _k = *reinterpret_cast<const uint32_t*>(arg2 + 28);
uint32_t* _app = GetApplicationData(_c, _k);
if (_app[0] != 1) return 0;
uint32_t _v = _app[1];
if (_v == 0) return 0;
SetSubobjectToMoveModel(arg0, _m, 0, &_v, 0);
return 0;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003A4074
void RemoveChild(void*, void*);
extern "C" void YellowAuto_003a4074(uint8_t* arg0) __asm__("_ZN5Field9MoveModel21FieldMoveModelManager18TerminateSubobjectEv");
extern "C" void YellowAuto_003a4074(uint8_t* arg0) {
uint32_t i = 0;
do {
uint8_t* obj = *(uint8_t**)(arg0 + i * 4 + 0x8C);
if (*(uint32_t*)(obj + 0x88) != 0) {
RemoveChild(*(void**)(arg0 + 0x08), (void*)obj);
void* vtbl = *(void**)(void*)obj;
void (*fn)(void*) = *(void (**)(void*))((uint8_t*)vtbl + 0x1C);
fn((void*)obj);
}
i = i + 1;
} while (i < 10);
return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003A4610
extern "C" void YellowAuto_003a4610(uint8_t* arg0) __asm__("_ZN5Field9MoveModel21FieldMoveModelManager19PullEventRequestAllEv");
extern "C" void YellowAuto_003a4610(uint8_t* arg0) {
if (*(uint8_t*)(arg0 + 0xBE) != 0) {
*(uint8_t*)(arg0 + 0xBE) = (uint8_t)(*(uint8_t*)(arg0 + 0xBE) - 1);
}
uint32_t outer = 0;
do {
uint32_t inner = 0;
do {
uint8_t* base = *(uint8_t**)(arg0 + (outer & 0xFF) * 4 + 0x0C);
if (base == (uint8_t*)0) break;
if (*(uint32_t*)(base + 0xBC) == 0) break;
uint32_t cur = *(uint32_t*)(base + 0xD8);
uint32_t ctr = (uint32_t)*(uint8_t*)(arg0 + 0xBE);
if (cur > ctr) {
if (cur != 0) {
*(uint32_t*)(base + 0xD8) = cur - 1;
}
} else {
if (ctr <= cur) break;
cur = cur + 1;
*(uint32_t*)(base + 0xD8) = cur;
if (cur == 1) {
if (*(uint32_t*)(base + 0xDC) == 1) {
*(uint32_t*)(base + 0x1E0) = 1;
*(uint32_t*)(base + 0x1E4) = 1;
}
}
}
inner = inner + 1;
} while (inner < 0xFF);
outer = outer + 1;
if (outer > 0x1F) return;
} while (true);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003A3F94
void FUN_0039d348(void*);
extern "C" void YellowAuto_003a3f94(uint8_t* arg0) __asm__("_ZN5Field9MoveModel21FieldMoveModelManager18AddEventRequestAllEv");
extern "C" void YellowAuto_003a3f94(uint8_t* arg0) {
*(uint8_t*)(arg0 + 0xBE) = (uint8_t)(*(uint8_t*)(arg0 + 0xBE) + 1);
uint32_t outer = 0;
do {
uint8_t* outerBase = *(uint8_t**)(arg0 + outer * 4 + 0x0C);
if (*(uint32_t*)(outerBase + 0xC0) != 0) {
uint32_t bc = *(uint32_t*)(outerBase + 0xBC);
if (bc != 0) {
uint32_t inner = 0;
do {
uint8_t* base = *(uint8_t**)(arg0 + (outer & 0xFF) * 4 + 0x0C);
if (base == (uint8_t*)0) break;
if (*(uint32_t*)(base + 0xBC) == 0) break;
uint32_t cur = *(uint32_t*)(base + 0xD8);
uint32_t ctr = (uint32_t)*(uint8_t*)(arg0 + 0xBE);
if (cur > ctr) {
if (cur != 0) {
*(uint32_t*)(base + 0xD8) = cur - 1;
}
} else {
if (ctr <= cur) break;
cur = cur + 1;
*(uint32_t*)(base + 0xD8) = cur;
if (cur == 1) {
if (*(uint32_t*)(base + 0xDC) == 1) {
*(uint32_t*)(base + 0x1E0) = 1;
*(uint32_t*)(base + 0x1E4) = 1;
}
}
}
inner = inner + 1;
} while (inner < 0xFF);
FUN_0039d348((void*)outerBase);
}
}
outer = outer + 1;
if (outer > 0x1F) return;
} while (true);
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003A4B04
void FUN_00358200(void*);
void FUN_00411FDC(void*);
void FUN_00414A78(void*);
extern "C" void YellowAuto_003a4b04(uint8_t* arg0) __asm__("_ZN5Field9MoveModel21FieldMoveModelManager24TerminateManagerResourceEv");
extern "C" void YellowAuto_003a4b04(uint8_t* arg0) {
uint32_t i = 0; for (i = 0; i < 32; i++) { void* p = *(void**)(arg0 + i * 4 + 0xD8); if (p != (void*)0) { FUN_00358200(p); *(void**)(arg0 + i * 4 + 0xD8) = (void*)0; } } for (i = 0; i < 10; i++) { void* p = *(void**)(arg0 + i * 4 + 0x158); if (p != (void*)0) { FUN_00358200(p); *(void**)(arg0 + i * 4 + 0x158) = (void*)0; } } FUN_00411FDC((void*)(arg0 + 0x1A8)); FUN_00414A78((void*)(arg0 + 0x1C4)); for (i = 0; i < 3; i++) { uint32_t present = *(uint32_t*)(arg0 + i * 4 + 0xCC); if (present != 0) { void* q = *(void**)(arg0 + i * 4 + 0x184); if (q != (void*)0) { void** vtbl = *(void***)(q); void* f = *(void**)((uint8_t*)vtbl + 0x04); ((void(*)(void*))f)(q); *(void**)(arg0 + i * 4 + 0x184) = (void*)0; } void* h = *(void**)(arg0 + i * 4 + 0xCC); FUN_00358200(h); *(void**)(arg0 + i * 4 + 0xCC) = (void*)0; } *(int32_t*)(arg0 + i * 4 + 0x190) = -1; *(int32_t*)(arg0 + i * 4 + 0x19C) = -1; } return;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003A45B8
extern "C" bool YellowAuto_003a45b8(uint8_t* arg0, int32_t arg1, const void* arg2) __asm__("_ZN5Field9MoveModel21FieldMoveModelManager19InitializeSubobjectENS0_19FIELD_SUB_OBJECT_IDEPKNS0_20FieldSubobjectHeaderE");
extern "C" bool YellowAuto_003a45b8(uint8_t* arg0, int32_t arg1, const void* arg2) {
void* s = *(void**)(arg0 + arg1 * 4 + 0x8C); int32_t f = *(int32_t*)((uint8_t*)s + 0x88); if (f != 0) return true; void* h = *(void**)(arg0 + arg1 * 4 + 0x158); uint32_t b = *(uint32_t*)(arg0 + 0xB4); void* o = (void*)(arg0 + 0x1A8); void** v1 = *(void***)(s); void* f1 = *(void**)((uint8_t*)v1 + 0x18); ((void(*)(void*, void*, uint32_t, void*, const void*))f1)(s, h, b, o, arg2); void* m = *(void**)(arg0 + 0x08); void* sl = *(void**)(arg0 + arg1 * 4 + 0x8C); void** v2 = *(void***)(m); void* f2 = *(void**)((uint8_t*)v2 + 0x10); ((void(*)(void*, void*))f2)(m, sl); return false;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003A4908
void FUN_003A3A60(void*, uint32_t);
extern "C" bool YellowAuto_003a4908(uint8_t* arg0, uint32_t arg1, const void* arg2) __asm__("_ZN5Field9MoveModel21FieldMoveModelManager23InitializeMoveModelWorkENS0_19FIELD_MOVE_MODEL_IDEPKNS0_24FieldMoveModelHeaderWorkE");
extern "C" bool YellowAuto_003a4908(uint8_t* arg0, uint32_t arg1, const void* arg2) {
void* s = *(void**)(arg0 + arg1 * 4 + 0x0C); int32_t f = *(int32_t*)((uint8_t*)s + 0xBC); if (f != 0) return true; void** v1 = *(void***)(s); void* f1 = *(void**)((uint8_t*)v1 + 0x3C); ((void(*)(void*, const void*))f1)(s, arg2); void* m = *(void**)(arg0 + 0x08); void* sl = *(void**)(arg0 + arg1 * 4 + 0x0C); void** v2 = *(void***)(m); void* f2 = *(void**)((uint8_t*)v2 + 0x10); ((void(*)(void*, void*))f2)(m, sl); *(uint32_t*)((uint8_t*)s + 0xC4) = (uint32_t)(((uint32_t)arg1 & 3U) << 1); FUN_003A3A60((void*)arg0, arg1); return false;
}
#endif
