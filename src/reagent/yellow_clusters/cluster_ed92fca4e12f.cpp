// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003BE5B8
uint16_t GetString(void*, uint32_t, void*);
extern "C" uint16_t YellowAuto_003be5b8(void* arg0, uint32_t arg1, void* arg2) __asm__("_ZN5print11ItemMessage14GetInfoMessageEjPN4gfl23str6StrBufE");
extern "C" uint16_t YellowAuto_003be5b8(void* arg0, uint32_t arg1, void* arg2) {
return GetString(*(void**)((uint8_t*)arg0 + 4), arg1, arg2);
}
#endif
