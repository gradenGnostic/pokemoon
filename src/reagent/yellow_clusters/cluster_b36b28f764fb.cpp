// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A2ABC
extern "C" bool YellowAuto_004a2abc(const uint8_t* arg0) __asm__("_ZNK6NetApp9Evolution9APP_PARAM14IsForgetCancelEv");
extern "C" bool YellowAuto_004a2abc(const uint8_t* arg0) {
return (*(uint16_t *)(arg0 + 0x20) == 0) && (*(uint16_t *)(arg0 + 0x28) != 0);
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0031D9B0
void GFLassert();
uint32_t GetParam(uint16_t, int32_t, uint16_t);
void FUN_0031b034(void*, uint32_t, uint16_t);
void FUN_00319d18(void*, uint32_t, int32_t);
void FUN_0031a53c(void*, uint32_t, uint8_t);
extern "C" void YellowAuto_0031d9b0(uint8_t* arg0) __asm__("_ZN6NetApp9Evolution9APP_PARAM18ForgetAndLearnWazaEv");
extern "C" void YellowAuto_0031d9b0(uint8_t* arg0) {
uint16_t move = *(uint16_t*)(arg0 + 0x28);
uint32_t slot = (*(uint32_t*)(arg0 + 0x24) & 255u);
if (slot > 3u) GFLassert();
if (slot > 3u) return;
uint8_t* base = (uint8_t*)(*(uint32_t*)(arg0 + 0x04));
void* lst = (void*)(*(uint32_t*)(base + 0x0C));
uint32_t pp = GetParam(move, 5, move);
FUN_0031b034(lst, slot, move);
FUN_00319d18(lst, slot, 0);
FUN_0031a53c(lst, slot, (uint8_t)pp);
}
#endif
