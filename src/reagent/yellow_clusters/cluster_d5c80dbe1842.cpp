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
