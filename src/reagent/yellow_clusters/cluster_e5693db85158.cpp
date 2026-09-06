// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002F8E34
int32_t GetLayoutWork(void*, int32_t);
void* GetInstance(void);
extern "C" bool YellowAuto_002f8e34(uint8_t* arg0, const uint32_t* arg1, void* arg2) __asm__("_ZN3app4tool19CommonMessageObject8InitFuncERKNS1_10INIT_PARAMEPN4gfl24heap11CtrHeapBaseE");
extern "C" bool YellowAuto_002f8e34(uint8_t* arg0, const uint32_t* arg1, void* arg2) {
((uint32_t*)arg0)[0] = arg1[0];
((uint32_t*)arg0)[1] = arg1[1];
((uint32_t*)arg0)[2] = arg1[2];
((uint32_t*)arg0)[3] = arg1[3];
((uint32_t*)arg0)[4] = arg1[4];
((uint32_t*)arg0)[5] = arg1[5];
((uint32_t*)arg0)[6] = arg1[6];
((uint32_t*)arg0)[7] = arg1[7];
((uint32_t*)arg0)[8] = arg1[8];
if (arg1[4] != 0 && arg1[4] < 3u && GetLayoutWork(*(void**)arg0, (int32_t)arg1[1]) != 0) GetInstance();
return 1;
}
#endif
