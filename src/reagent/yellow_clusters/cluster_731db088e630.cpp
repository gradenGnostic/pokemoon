// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00160460
void* operator_new(uint32_t, void*);
void* StrBuf(void*, int32_t, void*);
void* TrainerTypeData(void*);
extern "C" void* YellowAuto_00160460(void* arg0, void* arg1) __asm__("_ZN16BSP_TRAINER_DATAC1EPN4gfl24heap11CtrHeapBaseE");
extern "C" void* YellowAuto_00160460(void* arg0, void* arg1) {
*(void**)(arg0 + 0x20) = operator_new(0x10, arg1); *(void**)(arg0 + 0x20) = *(void**)(arg0 + 0x20) != 0 ? StrBuf(*(void**)(arg0 + 0x20), 0xd, arg1) : (void*)0; *(void**)(arg0 + 0x24) = operator_new(0x10, arg1); *(void**)(arg0 + 0x24) = *(void**)(arg0 + 0x24) != 0 ? StrBuf(*(void**)(arg0 + 0x24), 0x15, arg1) : (void*)0; *(void**)(arg0 + 0x28) = operator_new(0x18, arg1); *(void**)(arg0 + 0x28) = *(void**)(arg0 + 0x28) != 0 ? TrainerTypeData(*(void**)(arg0 + 0x28)) : (void*)0; *(uint32_t *)(arg0 + 0x18) = *(uint32_t *)0x001604e0; return arg0;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00160284
void SetStr(void*, const uint16_t*);
extern "C" void YellowAuto_00160284(uint8_t* arg0, const uint8_t* arg1) __asm__("_ZN16BSP_TRAINER_DATA11DeserializeEPKNS_14SERIALIZE_DATAE");
extern "C" void YellowAuto_00160284(uint8_t* arg0, const uint8_t* arg1) {
if (*(uint32_t*)(arg1+0x8) != 0) {
*(uint32_t*)(arg0+0x0) = *(uint32_t*)(arg1+0xC);
*(uint32_t*)(arg0+0x4) = *(uint32_t*)(arg1+0x10);
*(uint8_t*)(arg0+0x8) = (uint8_t)*(uint32_t*)(arg1+0x14);
*(uint16_t*)(arg0+0xA) = *(uint16_t*)(arg1+0x18);
*(uint8_t*)(arg0+0xC) = *(uint8_t*)(arg1+0x1A);
*(uint8_t*)(arg0+0xD) = (uint8_t)((*(uint8_t*)(arg0+0xD) & 0xF0) | (*(uint8_t*)(arg1+0x1B) & 0x0F));
*(uint8_t*)(arg0+0xD) = (uint8_t)((*(uint8_t*)(arg0+0xD) & 0x0F) | (*(uint8_t*)(arg1+0x1B) & 0xF0));
*(uint8_t*)(arg0+0xE) = *(uint8_t*)(arg1+0x1D);
*(uint8_t*)(arg0+0xF) = *(uint8_t*)(arg1+0x1C);
*(uint16_t*)(arg0+0x10) = *(uint16_t*)(arg1+0x1E);
*(uint16_t*)(arg0+0x12) = *(uint16_t*)(arg1+0x20);
*(uint16_t*)(arg0+0x14) = *(uint16_t*)(arg1+0x22);
*(uint16_t*)(arg0+0x16) = *(uint16_t*)(arg1+0x24);
SetStr(*(void**)(arg0+0x20), (const uint16_t*)(arg1+0x30));
uint16_t buf[22];
for (int32_t i = 0; i < 22; i++) buf[i] = 0;
int32_t idx = 0;
while (idx < 0x15) {
uint16_t v = *(const uint16_t*)(arg1+0x4A+idx*2);
if (v == 0) break;
buf[idx] = v;
idx = idx + 1;
}
SetStr(*(void**)(arg0+0x24), buf);
*(uint32_t*)(arg0+0x18) = *(uint32_t*)(arg1+0x28);
*(uint16_t*)(arg0+0x1C) = *(uint16_t*)(arg1+0x2C);
*(uint16_t*)(arg0+0x1E) = *(uint16_t*)(arg1+0x2E);
}
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00475254
void PutStr(const void*, uint16_t*, uint32_t);
const uint16_t* GetPtr(const void*);
extern "C" void YellowAuto_00475254(const uint8_t* arg0, uint8_t* arg1) __asm__("_ZNK16BSP_TRAINER_DATA9SerializeEPNS_14SERIALIZE_DATAE");
extern "C" void YellowAuto_00475254(const uint8_t* arg0, uint8_t* arg1) {
*(uint32_t*)(arg1+0x8) = 1;
*(uint32_t*)(arg1+0xC) = *(uint32_t*)(arg0+0x0);
*(uint32_t*)(arg1+0x10) = *(uint32_t*)(arg0+0x4);
*(uint32_t*)(arg1+0x14) = *(uint8_t*)(arg0+0x8);
*(uint16_t*)(arg1+0x18) = *(uint16_t*)(arg0+0xA);
*(uint8_t*)(arg1+0x1A) = *(uint8_t*)(arg0+0xC);
*(uint8_t*)(arg1+0x1B) = (uint8_t)((*(uint8_t*)(arg1+0x1B) & 0xF0) | (*(uint8_t*)(arg0+0xD) & 0x0F));
*(uint8_t*)(arg1+0x1B) = (uint8_t)((*(uint8_t*)(arg1+0x1B) & 0x0F) | (*(uint8_t*)(arg0+0xD) & 0xF0));
*(uint8_t*)(arg1+0x1D) = *(uint8_t*)(arg0+0xE);
*(uint8_t*)(arg1+0x1C) = *(uint8_t*)(arg0+0xF);
*(uint16_t*)(arg1+0x1E) = *(uint16_t*)(arg0+0x10);
*(uint16_t*)(arg1+0x20) = *(uint16_t*)(arg0+0x12);
*(uint16_t*)(arg1+0x22) = *(uint16_t*)(arg0+0x14);
*(uint16_t*)(arg1+0x24) = *(uint16_t*)(arg0+0x16);
PutStr((const void*)*(uint32_t*)(arg0+0x20), (uint16_t*)(arg1+0x30), 13);
int32_t idx = 0;
while (idx < 0x15) {
const uint16_t* p = GetPtr((const void*)*(uint32_t*)(arg0+0x24));
uint16_t v = p[idx];
if (v == 0) break;
*(uint16_t*)(arg1+0x4A+idx*2) = v;
idx = idx + 1;
}
*(uint32_t*)(arg1+0x28) = *(uint32_t*)(arg0+0x18);
*(uint16_t*)(arg1+0x2C) = *(uint16_t*)(arg0+0x1C);
*(uint16_t*)(arg1+0x2E) = *(uint16_t*)(arg0+0x1E);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x001604E4
extern "C" uint8_t* YellowAuto_001604e4(uint8_t* arg0) __asm__("_ZN16BSP_TRAINER_DATAD1Ev");
extern "C" uint8_t* YellowAuto_001604e4(uint8_t* arg0) {
if (*(uint32_t*)(arg0+0x20) != 0) {
((void(*)(void*))*(uint32_t*)(*(uint32_t*)(arg0+0x20)+0x4))((void*)*(uint32_t*)(arg0+0x20));
*(uint32_t*)(arg0+0x20) = 0;
}
if (*(uint32_t*)(arg0+0x24) != 0) {
((void(*)(void*))*(uint32_t*)(*(uint32_t*)(arg0+0x24)+0x4))((void*)*(uint32_t*)(arg0+0x24));
*(uint32_t*)(arg0+0x24) = 0;
}
if (*(uint32_t*)(arg0+0x28) != 0) {
operator delete((void*)*(uint32_t*)(arg0+0x28));
*(uint32_t*)(arg0+0x28) = 0;
}
return arg0;
}
#endif
