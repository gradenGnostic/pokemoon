// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003BE5C0
void *operator_new(uint32_t, void *);
uint32_t GetMessageArcId(uint32_t);
void *MsgData(void *, uint32_t, uint32_t, void *, uint32_t);
extern "C" uint8_t* YellowAuto_003be5c0(uint8_t* arg0, void* arg1, uint32_t arg2) __asm__("_ZN5print11ItemMessageC1EPN4gfl24heap11CtrHeapBaseENS1_3str7MsgData8LoadTypeE");
extern "C" uint8_t* YellowAuto_003be5c0(uint8_t* arg0, void* arg1, uint32_t arg2) {
void *temp = 0;
*(uint32_t *)arg0 = 0x003be614;
temp = operator_new(0x30, arg1);
if (temp != 0)
  temp = MsgData(temp, GetMessageArcId(10), 0x23, arg1, arg2);
*(void **)(arg0 + 4) = temp;
return arg0;
}
#endif
