// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A2A64
uint32_t GetClientID_Mine(void);
uint32_t IsMaster(void);
extern "C" uint32_t YellowAuto_004a2a64() __asm__("_ZNK6NetApp4Live7LiveNet16GetClientID_MineEv");
extern "C" uint32_t YellowAuto_004a2a64() {
return IsMaster() ^ 1U;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A2A74
int32_t GetClientID_Opponent(void);
extern const uint32_t* DAT_00407abc;
extern "C" int32_t YellowAuto_004a2a74() __asm__("_ZNK6NetApp4Live7LiveNet20GetClientID_OpponentEv");
extern "C" int32_t YellowAuto_004a2a74() {
return (int32_t)*DAT_00407abc;
}
#endif
