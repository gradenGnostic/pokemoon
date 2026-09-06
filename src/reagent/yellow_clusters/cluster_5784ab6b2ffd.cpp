// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003F4A28
void* FUN_003f4d74(void*, uint32_t, uint32_t, uint32_t);
extern "C" void YellowAuto_003f4a28(void* arg0, uint32_t arg1) __asm__("_ZN7gflnet212ServerClient26ServerClientRequestManager14RemoveListenerEy");
extern "C" void YellowAuto_003f4a28(void* arg0, uint32_t arg1) {
void *obj;
if (*(void **)0x003f4a64 != 0)
  if ((obj = FUN_003f4d74(*(void **)0x003f4a64, arg1, (uint32_t)arg0, arg1)) != 0)
    (*(void (**)(void))((*(uint32_t *)obj) + 0x10))();
}
#endif
