// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0041DDE0
int32_t GetStringID(uint32_t, uint32_t, uint8_t*);
uint32_t GetMessageArcId(uint32_t);
void* OperatorNew(uint32_t, uint8_t*);
uint8_t* MsgDataCtor(uint8_t*, uint32_t, uint32_t, uint8_t*, uint32_t);
void MsgDataGetString(uint8_t*, int32_t, uint8_t*);
extern "C" bool YellowAuto_0041dde0(uint8_t* arg0, uint32_t arg1, uint32_t arg2, uint8_t* arg3) __asm__("_ZN7trainer14TrainerMessage9GetStringEPN4gfl23str6StrBufENS_9TrainerIDENS_11MessageKindEPNS1_4heap11CtrHeapBaseE");
extern "C" bool YellowAuto_0041dde0(uint8_t* arg0, uint32_t arg1, uint32_t arg2, uint8_t* arg3) {
int32_t v0 = GetStringID(arg1, arg2, arg3);
if (v0 < 0) return false;
uint8_t* v1 = ((uint8_t* (*)(uint8_t*))(*(uint32_t*)(*(uint32_t*)arg3 + 0x34)))(arg3);
uint8_t* v2 = (uint8_t*)OperatorNew(0x30, v1);
uint8_t* v3 = (uint8_t*)0;
if (v2 != (uint8_t*)0) {
uint32_t v4 = GetMessageArcId(10);
v3 = MsgDataCtor(v2, v4, 0x68, v1, 0);
}
MsgDataGetString(v3, v0, arg0);
if (v3 != (uint8_t*)0) ((void (*)(uint8_t*))(*(uint32_t*)(*(uint32_t*)v3 + 0x4)))(v3);
return true;
}
#endif
