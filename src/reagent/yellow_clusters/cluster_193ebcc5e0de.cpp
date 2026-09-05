// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00383DC8
void CreateMapJumpPos(void* arg0, uint16_t arg1, const void* arg2, uint8_t arg3, bool arg4, bool arg5);
extern "C" void YellowAuto_00383dc8(void* arg0, uint16_t arg1, const void* arg2, uint8_t arg3, bool arg4) __asm__("_ZN5Field12EventMapJump14CallMapJumpPosEPN7GameSys11GameManagerEtRKN4gfl24math7Vector3ENS_16EventMapJumpCore16EventMapJumpTypeEb");
extern "C" void YellowAuto_00383dc8(void* arg0, uint16_t arg1, const void* arg2, uint8_t arg3, bool arg4) {
CreateMapJumpPos(arg0, arg1, arg2, arg3, arg4, true);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00384314
void CreateMapJumpOtherWorldTime(void* arg0, uint16_t arg1, const void* arg2, uint8_t arg3, bool arg4, bool arg5, bool arg6);
extern "C" void YellowAuto_00384314(void* arg0, uint16_t arg1, const void* arg2, uint8_t arg3) __asm__("_ZN5Field12EventMapJump25CallMapJumpOtherWorldTimeEPN7GameSys11GameManagerEtRKN4gfl24math7Vector3ENS1_9AlolaTime19AlolaOtherWorldTypeE");
extern "C" void YellowAuto_00384314(void* arg0, uint16_t arg1, const void* arg2, uint8_t arg3) {
CreateMapJumpOtherWorldTime(arg0, arg1, arg2, arg3, false, true, true);
}
#endif
