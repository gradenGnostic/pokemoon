// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0032E630
void operator_delete_array(void*);
void FUN_0032c308(uint8_t*);
extern "C" void YellowAuto_0032e630(uint8_t* arg0) __asm__("_ZN4gfl215renderingengine10scenegraph8resource17ArrayResourceNodeD1Ev");
extern "C" void YellowAuto_0032e630(uint8_t* arg0) {
if (*(uint32_t*)(arg0 + 0x34) != 0) { operator_delete_array(*(void**)(arg0 + 0x34)); *(uint32_t*)(arg0 + 0x34) = 0; } FUN_0032c308(arg0);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0032E4CC
void FUN_0035be88();
bool IsTypeA(uint8_t*);
bool IsTypeB(uint8_t*);
void FUN_00324b48(uint8_t*, uint8_t*);
extern "C" void YellowAuto_0032e4cc(uint8_t* arg0, uint8_t* arg1) __asm__("_ZN4gfl215renderingengine10scenegraph8resource17ArrayResourceNode8AddChildEPNS1_7DagNodeE");
extern "C" void YellowAuto_0032e4cc(uint8_t* arg0, uint8_t* arg1) {
if (*(arg0 + 0x3C) != 0) { FUN_0035be88(); return; } if (IsTypeA(arg1)) { *(uint32_t*)(arg0 + 0x2C) = *(uint32_t*)(arg0 + 0x2C) + 1; } else if (IsTypeB(arg1)) { *(uint32_t*)(arg0 + 0x30) = *(uint32_t*)(arg0 + 0x30) + 1; } FUN_00324b48(arg0, arg1);
}
#endif
