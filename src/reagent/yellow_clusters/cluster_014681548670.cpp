// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00358174
extern "C" void YellowAuto_00358174(void* arg0, int32_t arg1, int32_t arg2, uint32_t arg3, bool arg4, const uint8_t* arg5) __asm__("_ZN4gfl24heap7Manager10CreateHeapEPNS0_11CtrHeapBaseEiiNS0_8HeapTypeEbPKc");
extern "C" void YellowAuto_00358174(void* arg0, int32_t arg1, int32_t arg2, uint32_t arg3, bool arg4, const uint8_t* arg5) {
uint32_t tmp0 = reinterpret_cast<uint32_t (*)(void *)>(*(uint32_t *)arg0 + 0x1c)(arg0); if (arg4) tmp0 = (uint32_t)(-(int32_t)tmp0); reinterpret_cast<void (*)(void *, int32_t, uint32_t, uint32_t, uint32_t, uint32_t)>(0x001052e8)(reinterpret_cast<void *(*)(void *, int32_t, uint32_t, uint32_t)>(0x00108898)(arg0, arg2, tmp0, 0), arg1, arg2, arg3, 0, 0);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00107374
extern "C" void* YellowAuto_00107374(int32_t arg0, int32_t arg1) __asm__("_ZN4gfl24heap7Manager15GetHeapByHeapIdEi");
extern "C" void* YellowAuto_00107374(int32_t arg0, int32_t arg1) {
void *tmp0 = reinterpret_cast<void *(*)(int32_t, int32_t)>(0x001073e4)(arg0, arg1); if (tmp0 != 0 && (*(uint32_t *)((uint8_t *)tmp0 + 4) & 1U) != 0) return *(void **)((uint8_t *)(arg0 < -9 ? *(void **)((uint8_t *)*(void **)0x001073e0 + 8) : *(void **)0x001073e0) + (uint32_t)(arg0 < -9 ? ((arg0 + 10 < 0) ? (-10 - arg0) : (arg0 + 10)) : arg0) * 8U); reinterpret_cast<void (*)()>(0x001074bc)(); return 0;
}
#endif
