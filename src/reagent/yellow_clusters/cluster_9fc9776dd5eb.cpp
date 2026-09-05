// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0030DD74
void Enter(void*);
const uint16_t* GetCountryName(void*, uint8_t);
void FUN_00100d28(uint16_t*, const uint16_t*, uint32_t);
void Leave(void*);
extern "C" uint16_t* YellowAuto_0030dd74(uint8_t* arg0, uint8_t arg1) __asm__("_ZN3app4util27AppCountryRegionNameUtility14GetCountryNameEt");
extern "C" uint16_t* YellowAuto_0030dd74(uint8_t* arg0, uint8_t arg1) {
Enter(arg0 + 4); FUN_00100d28((uint16_t *)(arg0 + 0x80bc), GetCountryName(arg0 + 0x18, arg1), 0x40); Leave(arg0 + 4); return (uint16_t *)(arg0 + 0x80bc);
}
#endif
