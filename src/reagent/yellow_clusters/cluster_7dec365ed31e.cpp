// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00361838
void FUN_0035fcc4(uint8_t*);
extern "C" void YellowAuto_00361838(uint8_t* arg0) __asm__("_ZN4gfl29animation17AnimationPackList9UnloadAllEv");
extern "C" void YellowAuto_00361838(uint8_t* arg0) {
for (uint32_t i = 0; i < *(uint32_t*)(arg0 + 4); ++i) { FUN_0035fcc4(*(uint8_t**)(arg0) + i * 8); }
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003617BC
void FUN_0035fcc4(uint8_t*);
void __aeabi_vec_delete(void*, void*);
extern void* DAT_00361834;
extern "C" void YellowAuto_003617bc(uint8_t* arg0) __asm__("_ZN4gfl29animation17AnimationPackList8FinalizeEv");
extern "C" void YellowAuto_003617bc(uint8_t* arg0) {
for (uint32_t i = 0; i < *(uint32_t*)(arg0 + 4); ++i) { FUN_0035fcc4(*(uint8_t**)(arg0) + i * 8); } if (*(uint8_t**)(arg0) != 0) { __aeabi_vec_delete(*(void**)(arg0), DAT_00361834); *(uint8_t**)(arg0) = 0; } *(uint32_t*)(arg0 + 4) = 0;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0035FD30
void* alloc_helper(uint32_t, void*);
void tmp_init(uint8_t*);
void tmp_set(uint8_t*, const uint8_t*);
uint32_t make_motion(void*, uint8_t*, uint32_t);
extern uint32_t* shared_count;
extern uint32_t* shared_alloc;
extern void* shared_owner;
extern "C" void YellowAuto_0035fd30(uint8_t* arg0, uint32_t arg1, void* arg2, void* arg3, const uint8_t* arg4) __asm__("_ZN4gfl29animation17AnimationPackList8LoadDataEjPNS_3gfx12IGLAllocatorEPNS_4heap11CtrHeapBaseEPc");
extern "C" void YellowAuto_0035fd30(uint8_t* arg0, uint32_t arg1, void* arg2, void* arg3, const uint8_t* arg4) {
if (arg4 == 0)
  return;
uint32_t list = *(uint32_t*)arg0;
uint8_t* entry = (uint8_t*)(list + arg1 * 8);
uint32_t count = *(const uint32_t*)arg4;
*(uint32_t*)(entry + 4) = count;
void* arr = alloc_helper(count * 4, arg3);
*(uint32_t*)entry = (uint32_t)arr;
uint32_t* out = (uint32_t*)arr;
const uint32_t* offs = (const uint32_t*)(arg4 + 4);
for (uint32_t i = 0; i < count; ++i) {
  uint32_t off = offs[i];
  if (off == 0) {
    out[i] = 0;
  } else {
    uint8_t tmp[24];
    tmp_init(tmp);
    tmp_set(tmp, arg4 + off + 4);
    if (*shared_count == 0)
      *shared_alloc = (uint32_t)arg2;
    *shared_count = *shared_count + 1;
    uint32_t h = make_motion(shared_owner, tmp, 0);
    *shared_count = *shared_count - 1;
    if (*shared_count == 0)
      *shared_alloc = 0;
    out[i] = h;
  }
}
return;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003618A0
void FUN_0035fcc4(void*);
void __aeabi_vec_delete(void*, void*);
extern void* DAT_0036191c;
extern "C" uint8_t* YellowAuto_003618a0(uint8_t* arg0) __asm__("_ZN4gfl29animation17AnimationPackListD1Ev");
extern "C" uint8_t* YellowAuto_003618a0(uint8_t* arg0) {
uint32_t n = *(uint32_t*)(arg0 + 4);
uint32_t i = 0;
if (n != 0) {
for (i = 0; i < n; ++i) FUN_0035fcc4((void*)(*(uint32_t*)arg0 + i * 8));
}
if (*(uint32_t*)arg0 != 0) {
__aeabi_vec_delete((void*)(*(uint32_t*)arg0), DAT_0036191c);
*(uint32_t*)arg0 = 0;
}
*(uint32_t*)(arg0 + 4) = 0;
return arg0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0036159C
void FUN_0035fcc4(void*);
void __aeabi_vec_delete(void*, void*);
void* operator_new__(uint32_t, void*);
void* __aeabi_vec_ctor_nocookie_nodtor(void*, void*, uint32_t, uint32_t);
extern void* DAT_00361658;
extern void* DAT_0036165c;
extern "C" void YellowAuto_0036159c(uint8_t* arg0, void* arg1, uint32_t arg2) __asm__("_ZN4gfl29animation17AnimationPackList10InitializeEPNS_4heap11CtrHeapBaseEj");
extern "C" void YellowAuto_0036159c(uint8_t* arg0, void* arg1, uint32_t arg2) {
uint32_t n = *(uint32_t*)(arg0 + 4);
uint32_t i = 0;
if (n != 0) {
for (i = 0; i < n; ++i) FUN_0035fcc4((void*)(*(uint32_t*)arg0 + i * 8));
}
if (*(uint32_t*)arg0 != 0) {
__aeabi_vec_delete((void*)(*(uint32_t*)arg0), DAT_00361658);
*(uint32_t*)arg0 = 0;
}
*(uint32_t*)(arg0 + 4) = 0;
void* p = operator_new__(arg2 * 8 + 8, arg1);
void* b = (void*)0;
if (p != (void*)0) {
*(uint32_t*)p = 8;
*((uint32_t*)p + 1) = arg2;
b = __aeabi_vec_ctor_nocookie_nodtor((void*)((uint8_t*)p + 8), DAT_0036165c, 8, arg2);
}
*(uint32_t*)arg0 = (uint32_t)b;
*(uint32_t*)(arg0 + 4) = arg2;
}
#endif
