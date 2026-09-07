// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00425138
uint8_t* GetHeap(uint8_t* arg0, int32_t arg1);
void* OperatorNew(uint32_t arg0, uint8_t* arg1);
uint8_t* ConstructEvent(uint8_t* arg0, uint8_t* arg1);
void ChangeEvent(uint8_t* arg0, uint8_t* arg1);
void CallEvent(uint8_t* arg0, uint8_t* arg1);
uint16_t GetZoneWorldId(uint8_t* arg0, uint16_t arg1);
uint8_t* GetZoneData(uint8_t* arg0, uint16_t arg1);
void GetStartPosition(uint8_t* arg0, uint8_t* arg1);
extern "C" uint8_t* YellowAuto_00425138(uint8_t* arg0, int32_t arg1) __asm__("_ZN8NetEvent18JoinFestaOpenEvent10StartEventEPN7GameSys11GameManagerEi");
extern "C" uint8_t* YellowAuto_00425138(uint8_t* arg0, int32_t arg1) {
uint8_t* arg2 = *(uint8_t**)(arg0 + 32);
uint8_t* arg3 = (uint8_t*)OperatorNew(364, GetHeap(arg2, arg1));
arg3 = ConstructEvent(arg3, GetHeap(arg2, arg1));
if (arg1 == 0) ChangeEvent(arg2, arg3); else CallEvent(arg2, arg3);
uint8_t* arg4 = *(uint8_t**)(arg0 + 36);
uint8_t* arg5 = *(uint8_t**)(arg4 + 84);
uint16_t arg6 = GetZoneWorldId(arg5, 281);
*(uint8_t**)(arg3 + 32) = arg4;
*(uint16_t*)(arg3 + 36) = *(uint16_t*)(*(uint8_t**)(arg0 + 44) + 124);
*(uint8_t*)(arg3 + 38) = 5;
*(uint16_t*)(arg3 + 40) = arg6;
*(uint16_t*)(arg3 + 42) = 281;
*(uint8_t*)(arg3 + 304) = 0;
*(uint8_t*)(arg3 + 306) = 4;
uint8_t* arg7 = GetZoneData(arg5, 281);
GetStartPosition(arg7, arg3 + 44);
return arg3;
}
#endif
