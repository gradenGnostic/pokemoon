// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003CEFF4
uint8_t GetConnectionNum(void* arg0);
uint8_t GetConnectionCount(void* arg0);
extern "C" uint8_t YellowAuto_003ceff4(void* arg0) __asm__("_ZN6NetApp3NBR6NBRNet16GetConnectionNumEv");
extern "C" uint8_t YellowAuto_003ceff4(void* arg0) {
return GetConnectionCount(*(void**)(arg0 + 8)) & 0xff;
}
#endif
