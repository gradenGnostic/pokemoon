// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002C9B60
void Setup(uint8_t*, uint32_t, uint32_t, uint32_t);
void Sub_002c91e0(uint8_t*);
void CalcIconPosition(uint32_t, uint32_t, uint8_t*, uint8_t*, uint8_t*);
void* GetPartsPane(uint8_t*, uint32_t);
extern uint32_t* PTR_002c9be4;
extern uint32_t CONST_002c9be8;
extern "C" void YellowAuto_002c9b60(uint8_t* arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3) __asm__("_ZN3App4Tool10MapManager14UpdatePositionEjff");
extern "C" void YellowAuto_002c9b60(uint8_t* arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3) {
Setup(arg0, arg1, arg2, arg3);
Sub_002c91e0(arg0);
if (*(uint8_t*)(arg0 + 0x1a4) != (uint8_t)0) {
uint32_t s0 = *(uint32_t*)(arg0 + 0x174);
uint32_t s1 = *(uint32_t*)(arg0 + 0x178);
uint32_t out0 = *(uint32_t*)(arg0 + 0x19c);
uint32_t out1 = *(uint32_t*)(arg0 + 0x1a0);
CalcIconPosition(s0, s1, arg0, (uint8_t*)&out0, (uint8_t*)&out1);
uint8_t* lyt = *(uint8_t**)(arg0 + 0x20);
uint32_t id = *PTR_002c9be4;
uint8_t* pane = (uint8_t*)GetPartsPane(lyt, id);
*(uint32_t*)(pane + 0x1c) = out0;
*(uint32_t*)(pane + 0x20) = out1;
*(uint32_t*)(pane + 0x24) = CONST_002c9be8;
*(uint8_t*)(pane + 0x44) = (uint8_t)((uint8_t)(*(uint8_t*)(pane + 0x44) & (uint8_t)0xef) | (uint8_t)0x10);
}
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002C9BEC
extern const uint8_t* MAP_TABLE_BASE;
extern "C" uint32_t YellowAuto_002c9bec(uint8_t* arg0, uint32_t arg1) __asm__("_ZN3App4Tool10MapManager15GetMapDataIndexE16SubScreenMapType");
extern "C" uint32_t YellowAuto_002c9bec(uint8_t* arg0, uint32_t arg1) {
uint32_t idx = (uint32_t)0;
if ((uint32_t)(*(const uint16_t*)MAP_TABLE_BASE) != arg1) {
idx = (uint32_t)1;
while ((bool)1) {
const uint8_t* e = MAP_TABLE_BASE + idx * (uint32_t)20;
if ((uint32_t)(*(const uint16_t*)e) == arg1) break;
if ((uint32_t)(*(const uint16_t*)(e + (uint32_t)20)) == arg1) {
idx = idx + (uint32_t)1;
break;
}
idx = idx + (uint32_t)2;
if (idx >= (uint32_t)19) return (uint32_t)0;
}
}
return idx;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002C9C5C
uint8_t* GetMaterial(uint8_t*);
void FUN_002a7184(uint32_t, uint32_t, uint32_t);
extern uint32_t CONST_002c9d28;
extern uint32_t CONST_002c9d2c;
extern uint32_t CONST_002c9d30;
extern uint32_t CONST_002c9d34;
extern uint32_t CONST_002c9d38;
extern uint32_t CONST_002c9d3c;
extern "C" void YellowAuto_002c9c5c(uint8_t* arg0) __asm__("_ZN3App4Tool10MapManager15SetPaneSizeNaviEv");
extern "C" void YellowAuto_002c9c5c(uint8_t* arg0) {
*(uint32_t*)(arg0 + 0x1b4) = (uint32_t)32;
*(uint32_t*)(arg0 + 0x1b8) = (uint32_t)21;
*(uint32_t*)(arg0 + 0x134) = (uint32_t)168;
*(uint32_t*)(arg0 + 0x138) = (uint32_t)84;
*(uint32_t*)(arg0 + 0x13c) = (uint32_t)168;
*(int32_t*)(arg0 + 0x140) = (int32_t)-168;
*(uint32_t*)(arg0 + 0x144) = (uint32_t)336;
*(int32_t*)(arg0 + 0x148) = (int32_t)-336;
*(uint32_t*)(arg0 + 0x14c) = CONST_002c9d28;
*(uint32_t*)(arg0 + 0x150) = CONST_002c9d2c;
*(uint32_t*)(arg0 + 0x154) = CONST_002c9d30;
*(uint32_t*)(arg0 + 0x158) = CONST_002c9d34;
for (uint32_t i = (uint32_t)0; i < (uint32_t)16; i = i + (uint32_t)1) {
uint8_t* pane = *(uint8_t**)(arg0 + i * (uint32_t)4 + (uint32_t)0x2c);
if (pane != (uint8_t*)0) {
*(uint32_t*)(pane + 0x3c) = CONST_002c9d38;
*(uint32_t*)(pane + 0x40) = CONST_002c9d3c;
*(uint8_t*)(pane + 0x44) = (uint8_t)((uint8_t)(*(uint8_t*)(pane + 0x44) & (uint8_t)0xef) | (uint8_t)0x10);
uint8_t* mat = GetMaterial(pane);
FUN_002a7184(*(uint32_t*)(mat + 0x78), (uint32_t)1, (uint32_t)1);
*(uint8_t*)(mat + 0x7c) = (uint8_t)(*(uint8_t*)(mat + 0x7c) & (uint8_t)0xf7);
}
}
*(uint8_t*)(arg0 + 0x1b0) = (uint8_t)1;
}
#endif
