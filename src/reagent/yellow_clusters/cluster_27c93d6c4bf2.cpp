// Autonomous Qwen reconstruction approved by GPT-5.4 mini.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003A16B0
extern "C" void YellowAuto_003a16b0(uint8_t* arg0) __asm__("_ZN5Field9MoveModel20FieldMoveModelPlayer19CheckSafetyPositionEv");
extern "C" void YellowAuto_003a16b0(uint8_t* arg0) {
arg0[0x77d] = 0;
arg0[0x77e] = 0;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0049F478
uint32_t GetMoveCode(uint8_t);
bool MoveCodeIsMoveState(uint32_t, const uint8_t*);
extern "C" bool YellowAuto_0049f478(const uint8_t* arg0) __asm__("_ZNK5Field9MoveModel20FieldMoveModelPlayer11IsMoveStateEv");
extern "C" bool YellowAuto_0049f478(const uint8_t* arg0) {
uint32_t v0 = GetMoveCode(arg0[0x2C]); if (v0 == 0) return false; return MoveCodeIsMoveState(v0, arg0 + 0x164);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003A13AC
uint32_t GetMoveCode(uint8_t);
void MoveCodeLockDir(uint32_t, uint8_t*, uint32_t);
extern "C" void YellowAuto_003a13ac(uint8_t* arg0) __asm__("_ZN5Field9MoveModel20FieldMoveModelPlayer18LockDirFromOutsideEv");
extern "C" void YellowAuto_003a13ac(uint8_t* arg0) {
uint32_t v0 = GetMoveCode(arg0[0x2C]); if (v0 != 0) MoveCodeLockDir(v0, arg0 + 0x164, 1);
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003A0370
void Func_0039cd74(uint8_t*, const void*, int32_t, int32_t, int32_t, int32_t);
extern "C" void YellowAuto_003a0370(uint8_t* arg0, const void* arg1, int32_t arg2, int32_t arg3, int32_t arg4) __asm__("_ZN5Field9MoveModel20FieldMoveModelPlayer16IsEnableStepJumpERKN4gfl24math7Vector3Eiii");
extern "C" void YellowAuto_003a0370(uint8_t* arg0, const void* arg1, int32_t arg2, int32_t arg3, int32_t arg4) {
uint8_t* v0 = *(uint8_t**)(arg0 + 0x34C);
uint32_t v1 = *(uint32_t*)(v0 + 0x20);
*(uint32_t*)(v0 + 0x20) = 1;
Func_0039cd74(arg0, arg1, 2, arg2, arg3, arg4);
*(uint32_t*)(v0 + 0x20) = v1;
return;
}
#endif
