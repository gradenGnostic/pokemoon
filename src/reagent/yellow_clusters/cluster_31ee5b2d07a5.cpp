// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00459DC4
uint32_t GetBattleRule(uint8_t* arg0, uint32_t arg1);
extern "C" uint32_t YellowAuto_00459dc4(uint8_t* arg0, uint32_t arg1) __asm__("_ZN9NetAppLib2UI18RegulationDrawInfo24GetBattleSystemMessageIDEv");
extern "C" uint32_t YellowAuto_00459dc4(uint8_t* arg0, uint32_t arg1) {
uint32_t rule = GetBattleRule(arg0 + 8, arg1);
return rule == 1 ? 0x2e : rule == 2 ? 0x30 : rule == 3 ? 0x2f : 0x2d;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00459C28
uint32_t GetSerializeDataSize(uint8_t* arg0, uint8_t* arg1);
void* operator_new__(uint32_t arg0, void* arg1);
void Serialize(uint8_t* arg0, void* arg1);
void Deserialize(uint8_t* arg0, void* arg1, uint32_t arg2);
void operator_delete__(void* arg0);
extern "C" void YellowAuto_00459c28(uint8_t* arg0, uint8_t* arg1) __asm__("_ZN9NetAppLib2UI18RegulationDrawInfo14CopyRegulationEPS1_");
extern "C" void YellowAuto_00459c28(uint8_t* arg0, uint8_t* arg1) {
if (arg1 == 0)
  return;
uint32_t size = GetSerializeDataSize(arg1 + 8, arg1);
void* buf = operator_new__(size, *(void **)(arg0 + 4));
Serialize(arg1 + 8, buf);
Deserialize(arg0 + 8, buf, size);
if (buf != 0)
  operator_delete__(buf);
arg0[0x1d] = arg1[0x1d];
arg0[0x1e] = arg1[0x1e];
arg0[0x1f] = arg1[0x1f];
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00459CB8
int32_t GetBattleRule(const uint8_t *, uint32_t);
extern "C" uint32_t YellowAuto_00459cb8(uint8_t* arg0, uint32_t arg1) __asm__("_ZN9NetAppLib2UI18RegulationDrawInfo22GetBattleRankMessageIDEv");
extern "C" uint32_t YellowAuto_00459cb8(uint8_t* arg0, uint32_t arg1) {
uint32_t r = 0x3A;
int32_t b = GetBattleRule(arg0 + 8, arg1);
uint8_t k = *(arg0 + 0x1C);
if (b == 0) {
if (k != 0 && k == 1) r = 0x3D;
} else if (b == 1) {
if (k == 0) r = 0x3B;
else if (k == 1) r = 0x3E;
} else if (b == 2) {
if (k == 0) r = 0x40;
else if (k == 1) r = 0x41;
else if (k == 2) r = 0x42;
else if (k == 3) r = 0x43;
} else if (b == 3) {
if (k == 0) r = 0x3C;
else if (k == 1) r = 0x3F;
}
return r;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00459E70
uint8_t * Regulation(uint8_t *, void *);
void LoadData(uint8_t *, uint32_t);
extern "C" uint8_t* YellowAuto_00459e70(uint8_t* arg0, void* arg1, uint32_t arg2, uint32_t arg3) __asm__("_ZN9NetAppLib2UI18RegulationDrawInfoC1EPN4gfl24heap11CtrHeapBaseEN10Regulation6PRESETENS1_4RankE");
extern "C" uint8_t* YellowAuto_00459e70(uint8_t* arg0, void* arg1, uint32_t arg2, uint32_t arg3) {
*(uint32_t *)(arg0 + 4) = *(uint32_t *)&arg1;
Regulation(arg0 + 8, arg1);
*(arg0 + 0x1C) = (uint8_t)arg3;
*(arg0 + 0x1D) = (uint8_t)1;
*(arg0 + 0x1E) = (uint8_t)0;
*(arg0 + 0x1F) = (uint8_t)arg2;
*(uint32_t *)(arg0 + 0x20) = 0xFFFFFFFFU;
LoadData(arg0 + 8, arg2);
return arg0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00459EC8
uint8_t * Regulation(uint8_t *, void *);
void SetData(uint8_t *, const void *, uint32_t);
extern "C" uint8_t* YellowAuto_00459ec8(uint8_t* arg0, void* arg1, const void* arg2, uint32_t arg3) __asm__("_ZN9NetAppLib2UI18RegulationDrawInfoC1EPN4gfl24heap11CtrHeapBaseEPKvj");
extern "C" uint8_t* YellowAuto_00459ec8(uint8_t* arg0, void* arg1, const void* arg2, uint32_t arg3) {
*(uint32_t *)(arg0 + 4) = *(uint32_t *)&arg1;
Regulation(arg0 + 8, arg1);
*(arg0 + 0x1C) = (uint8_t)0;
*(arg0 + 0x1D) = (uint8_t)0;
*(arg0 + 0x1E) = (uint8_t)0;
*(arg0 + 0x1F) = (uint8_t)24;
*(uint32_t *)(arg0 + 0x20) = 0xFFFFFFFFU;
SetData(arg0 + 8, arg2, arg3);
return arg0;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00459F24
uint8_t* sub_0015AF60(uint8_t*, void*);
void sub_0015AE50(uint8_t*, const void*, uint32_t);
extern "C" uint8_t* YellowAuto_00459f24(uint8_t* arg0, void* arg1, const void* arg2, uint32_t arg3, int32_t arg4) __asm__("_ZN9NetAppLib2UI18RegulationDrawInfoC1EPN4gfl24heap11CtrHeapBaseEPKvji");
extern "C" uint8_t* YellowAuto_00459f24(uint8_t* arg0, void* arg1, const void* arg2, uint32_t arg3, int32_t arg4) {
*(uint32_t*)arg0 = *(uint32_t*)0x00459F84;
*(void**)(arg0 + 4) = arg1;
uint8_t* t0 = sub_0015AF60(arg0 + 8, arg1);
uint8_t* t1 = t0 - 8;
*(t1 + 0x1C) = (uint8_t)0;
*(t1 + 0x1D) = (uint8_t)0;
*(t1 + 0x1E) = (uint8_t)0;
*(t1 + 0x1F) = (uint8_t)0x18;
*(int32_t*)(t1 + 0x20) = arg4;
sub_0015AE50(arg0 + 8, arg2, arg3);
return t1;
}
#endif
