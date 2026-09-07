// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A2A78
uint8_t* GetInstance();
int32_t GetNetID(const uint8_t*);
uint8_t* GetMyStatus(uint8_t*, int32_t);
extern "C" uint8_t* YellowAuto_004a2a78(const uint8_t* arg0) __asm__("_ZNK6NetApp4Live7LiveNet20GetMyStatus_OpponentEv");
extern "C" uint8_t* YellowAuto_004a2a78(const uint8_t* arg0) {
(void)arg0; return GetMyStatus(GetInstance(), (GetNetID(GetInstance()) == 0 ? 1 : 0));
}
#endif
