// Autonomous Qwen reconstruction approved by GPT-5.4 mini.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003CF2C0
void UnregistRecvListener(void *arg0);
extern "C" void YellowAuto_003cf2c0(void* arg0) __asm__("_ZN6NetApp3NBR6NBRNet20UnregistRecvListenerEv");
extern "C" void YellowAuto_003cf2c0(void* arg0) {
*(uint32_t *)((uint8_t *)arg0 + 0xc) = 0;
}
#endif
