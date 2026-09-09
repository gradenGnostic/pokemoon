// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003A841C
extern "C" void YellowAuto_003a841c(uint8_t* arg0, void* arg1) __asm__("_ZN5Field9MoveModel31FieldMoveModelAreaCharaAccessor10InitializeEPN4gfl22fs17BinLinkerAccessorE");
extern "C" void YellowAuto_003a841c(uint8_t* arg0, void* arg1) {
*(void**)(arg0 + 4) = arg1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0049FACC
uint32_t GetDataMax(const void*);
void* GetData(const void*, uint32_t);
extern "C" void* YellowAuto_0049facc(const uint8_t* arg0, uint32_t arg1) __asm__("_ZNK5Field9MoveModel31FieldMoveModelAreaCharaAccessor20GetCharacterResourceEj");
extern "C" void* YellowAuto_0049facc(const uint8_t* arg0, uint32_t arg1) {
void* acc = *(void* const*)(arg0 + 4);
if (acc == (void*)0) return (void*)0;
if (GetDataMax(acc) <= arg1) return (void*)0;
void* t = GetData(acc, arg1);
return GetData((const void*)&t, 1);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0049FA08
uint32_t GetDataMax(const void*);
void* GetData(const void*, uint32_t);
uint32_t GetDataSize(const void*, uint32_t);
extern "C" int32_t YellowAuto_0049fa08(const uint8_t* arg0, uint32_t arg1) __asm__("_ZNK5Field9MoveModel31FieldMoveModelAreaCharaAccessor14GetCharacterIDEj");
extern "C" int32_t YellowAuto_0049fa08(const uint8_t* arg0, uint32_t arg1) {
void* acc = *(void* const*)(arg0 + 4);
if (acc == (void*)0) return 0;
if (GetDataMax(acc) <= arg1) return 0;
void* t = GetData(acc, arg1);
uint32_t sz = GetDataSize((const void*)&t, 0);
const uint8_t* p = (const uint8_t*)GetData((const void*)&t, 0);
int32_t v = 0;
uint32_t i = 0;
if (sz == 0) return 0;
while (i < sz) {
uint8_t c = p[i];
if (c == 0) break;
if (i != 0) v = v * 10;
i = i + 1;
v = (int32_t)c + v - 48;
}
return v;
}
#endif
