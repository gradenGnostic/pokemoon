// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A7A78
extern "C" bool YellowAuto_004a7a78(const uint8_t* arg0, uint32_t arg1, uint32_t arg2) __asm__("_ZNK8Savedata3BOX8IsMeLockEjj");
extern "C" bool YellowAuto_004a7a78(const uint8_t* arg0, uint32_t arg1, uint32_t arg2) {
uint16_t v0 = (uint16_t)(((uint32_t)arg1 << 8) + (uint32_t)arg2);
for (uint32_t v1 = 0; v1 < 6; v1++) {
for (uint32_t v2 = 0; v2 < 3; v2++) {
const uint8_t* v3 = arg0 + 0x4C8 + v1 * 12 + v2 * 4;
uint16_t v4 = *(const uint16_t*)v3;
uint16_t v5 = *(const uint16_t*)(v3 + 2);
if (v4 == v0 || v5 == v0) {
if (*(arg0 + 0x5BE + v1) != 0) return true;
break;
}
}
}
return false;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004412DC
extern "C" void YellowAuto_004412dc(uint8_t* arg0, uint32_t arg1, uint32_t arg2, uint16_t arg3) __asm__("_ZN8Savedata3BOX14SetTeamPokePosEjjt");
extern "C" void YellowAuto_004412dc(uint8_t* arg0, uint32_t arg1, uint32_t arg2, uint16_t arg3) {
int32_t i = 0;
for (; i < 6; ++i) {
 if (*(uint16_t*)(arg0 + arg1 * 12 + i * 2 + 0x4C8) == arg3) {
  *(uint16_t*)(arg0 + arg1 * 12 + i * 2 + 0x4C8) = 0xFFFF;
  break;
 }
}
*(uint16_t*)(arg0 + arg1 * 12 + arg2 * 2 + 0x4C8) = (uint16_t)arg3;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00440DE0
void* GflHeapAllocMemoryBlockAlign(void*, uint32_t, int32_t);
void GflHeapFreeMemoryBlock(void*);
void* memcpy(void*, const void*, uint32_t);
extern "C" void YellowAuto_00440de0(uint8_t* arg0, uint32_t arg1, uint32_t arg2, void* arg3) __asm__("_ZN8Savedata3BOX10ChangeTrayEjjPN4gfl24heap11CtrHeapBaseE");
extern "C" void YellowAuto_00440de0(uint8_t* arg0, uint32_t arg1, uint32_t arg2, void* arg3) {
uint32_t vt = *(uint32_t*)arg3;
uint32_t fn = *(uint32_t*)(vt + 28);
int32_t al = ((int32_t(*)(void*))fn)(arg3);
void* tp = GflHeapAllocMemoryBlockAlign(arg3, 0x22, -al);
memcpy(tp, arg0 + arg1 * 0x22 + 4, 0x22);
memcpy(arg0 + arg1 * 0x22 + 4, arg0 + arg2 * 0x22 + 4, 0x22);
memcpy(arg0 + arg2 * 0x22 + 4, tp, 0x22);
GflHeapFreeMemoryBlock(tp);
uint8_t b = *(arg0 + arg1 + 0x5C4);
*(arg0 + arg1 + 0x5C4) = *(arg0 + arg2 + 0x5C4);
*(arg0 + arg2 + 0x5C4) = b;
uint32_t dat = *(uint32_t*)0x00440EF0;
uint32_t m1 = dat & (arg1 << 8);
uint32_t m2 = dat & (arg2 << 8);
for (int32_t i = 0; i < 6; ++i) {
for (int32_t j = 0; j < 6; ++j) {
uint16_t v = *(uint16_t*)(arg0 + 0x4C8 + i * 12 + j * 2);
if ((v & 0xFF00) == m1) v = (uint16_t)(m2 | (v & 0xFF));
else if ((v & 0xFF00) == m2) v = (uint16_t)(m1 | (v & 0xFF));
*(uint16_t*)(arg0 + 0x4C8 + i * 12 + j * 2) = v;
}
}
}
#endif
