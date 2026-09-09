// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0022F9CC
void func_002370ac(uint8_t*, const uint8_t*);
void func_00592d04(uint8_t*, const uint8_t*);
void func_00240bf8(uint8_t*, const uint8_t*);
void func_0058ff98(uint8_t*, const uint8_t*);
extern "C" uint8_t* YellowAuto_0022f9cc(uint8_t* arg0, const uint8_t* arg1) __asm__("_ZN2nn3nex36_DDL_DataStoreChangeMetaCompareParamaSERKS1_");
extern "C" uint8_t* YellowAuto_0022f9cc(uint8_t* arg0, const uint8_t* arg1) {
*(arg0 + 4) = *(arg1 + 4);
*reinterpret_cast<uint32_t*>(arg0 + 8) = *reinterpret_cast<const uint32_t*>(arg1 + 8);
func_002370ac(arg0 + 12, arg1 + 12);
*(arg0 + 24) = *(arg1 + 24);
*(arg0 + 25) = *(arg1 + 25);
func_00592d04(arg0 + 28, arg1 + 28);
*(arg0 + 44) = *(arg1 + 44);
*(arg0 + 45) = *(arg1 + 45);
func_00592d04(arg0 + 48, arg1 + 48);
*reinterpret_cast<uint16_t*>(arg0 + 60) = *reinterpret_cast<const uint16_t*>(arg1 + 60);
func_00240bf8(arg0 + 64, arg1 + 64);
func_0058ff98(arg0 + 96, arg1 + 96);
*reinterpret_cast<uint32_t*>(arg0 + 108) = *reinterpret_cast<const uint32_t*>(arg1 + 108);
*reinterpret_cast<uint16_t*>(arg0 + 112) = *reinterpret_cast<const uint16_t*>(arg1 + 112);
*(arg0 + 114) = *(arg1 + 114);
return arg0;
}
#endif
