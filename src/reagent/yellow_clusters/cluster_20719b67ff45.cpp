// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0034333C
void __aeabi_memcpy(void* arg0, const void* arg1, uint32_t arg2);
extern "C" void YellowAuto_0034333c(uint8_t* arg0, const uint8_t* arg1, uint32_t arg2) __asm__("_ZN4gfl22qr12QREncodeData8CopyDataEPKhj");
extern "C" void YellowAuto_0034333c(uint8_t* arg0, const uint8_t* arg1, uint32_t arg2) {
if (*(uint32_t*)(arg0 + 8) != 0 && arg2 <= *(uint32_t*)(arg0 + 12)) __aeabi_memcpy((void*)*(uint32_t*)(arg0 + 8), arg1, arg2); if (*(uint32_t*)(arg0 + 8) != 0 && arg2 <= *(uint32_t*)(arg0 + 12)) *(uint32_t*)(arg0 + 16) = arg2;
}
#endif
