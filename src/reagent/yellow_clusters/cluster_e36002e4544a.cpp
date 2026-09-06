// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00496FD8
void Enter(void*);
void Leave(void*);
extern "C" bool YellowAuto_00496fd8(const uint8_t* arg0) __asm__("_ZNK4gfl22fs16AsyncFileManager16IsAllReqFinishedEv");
extern "C" bool YellowAuto_00496fd8(const uint8_t* arg0) {
void* v0 = *(void* const*)(arg0 + 0x34); Enter(v0); void* v1 = *(void* const*)(arg0 + 0x38); Enter(v1); bool v2 = (*(int32_t*)(*(void* const*)(arg0 + 0x1c) + 4) == 0) && (*(int32_t*)(*(void* const*)(arg0 + 0x20) + 4) == 0); Leave(v1); Leave(v0); return v2;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0033FCC0
void Enter(void*);
void Leave(void*);
void FUN_0057de10(void*, int32_t, const void*, void*, uint32_t);
void Signal(void*);
extern "C" void YellowAuto_0033fcc0(uint8_t* arg0, const uint8_t* arg1) __asm__("_ZN4gfl22fs16AsyncFileManager21AddArcFileLoadDataReqERKNS1_18ArcFileLoadDataReqE");
extern "C" void YellowAuto_0033fcc0(uint8_t* arg0, const uint8_t* arg1) {
uint8_t local[0x40]; for (uint32_t i = 0; i < 0x40; ++i) local[i] = arg1[i]; if (local[0x0c] == 0xff) local[0x0c] = arg0[0x18]; void* v0 = *(void* const*)(arg0 + 0x34); Enter(v0); void* v1 = *(void* const*)(arg1 + 0x24); FUN_0057de10(arg0, *(int32_t*)(arg0 + 0x1c), local, v1, 0x80); Signal(*(void* const*)(arg0 + 0x44)); Leave(v0); return;
}
#endif
