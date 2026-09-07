// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003E5254
uint8_t* GLHeapAllocator(uint8_t*, void*);
uint32_t nngxGetVramStartAddr(uint32_t);
void func_003e4fe4(uint8_t*);
extern "C" uint8_t* YellowAuto_003e5254(uint8_t* arg0, void* arg1, int32_t arg2, uint8_t arg3) __asm__("_ZN6System13nijiAllocatorC1EPN4gfl24heap11CtrHeapBaseENS0_15VramControlTypeENS0_14VramMallocModeE");
extern "C" uint8_t* YellowAuto_003e5254(uint8_t* arg0, void* arg1, int32_t arg2, uint8_t arg3) {
GLHeapAllocator(arg0, arg1);
*reinterpret_cast<uint32_t*>(arg0) = *reinterpret_cast<uint32_t*>(0x003E52E4U);
*(arg0 + 40U) = static_cast<uint8_t>(arg2);
*(arg0 + 41U) = arg3;
if (arg2 == 0) {
*reinterpret_cast<uint32_t*>(arg0 + 8U) = nngxGetVramStartAddr(0x20000U);
*reinterpret_cast<uint32_t*>(arg0 + 12U) = nngxGetVramStartAddr(0x30000U);
*reinterpret_cast<uint32_t*>(arg0 + 24U) = *reinterpret_cast<uint32_t*>(*reinterpret_cast<uint32_t*>(0x003E52E8U));
*reinterpret_cast<uint32_t*>(arg0 + 28U) = *reinterpret_cast<uint32_t*>(*reinterpret_cast<uint32_t*>(0x003E52E8U) + 4U);
*reinterpret_cast<uint32_t*>(arg0 + 16U) = 0x100000U;
*reinterpret_cast<uint32_t*>(arg0 + 20U) = 0x180000U;
*reinterpret_cast<uint32_t*>(arg0 + 32U) = *reinterpret_cast<uint32_t*>(*reinterpret_cast<uint32_t*>(0x003E52E8U) + 8U);
*reinterpret_cast<uint32_t*>(arg0 + 36U) = *reinterpret_cast<uint32_t*>(*reinterpret_cast<uint32_t*>(0x003E52E8U) + 12U);
} else {
func_003e4fe4(arg0 + 8U);
}
return arg0;
}
#endif
