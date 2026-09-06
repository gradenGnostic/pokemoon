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
