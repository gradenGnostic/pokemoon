// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00339A20
uint32_t h_165f24(const void*, uint32_t, void*);
uint32_t h_166570(const void*, uint32_t, void*);
uint32_t h_16614c(const void*, uint32_t, void*);
uint32_t h_165ab0(const void*, uint32_t, void*, void*);
uint32_t h_166334(const void*, uint32_t, void*, void*);
void* h_alloc(void*, uint32_t, uint32_t);
void h_free(void*);
extern "C" uint32_t YellowAuto_00339a20(const void* arg0, uint32_t arg1, void* arg2, void* arg3) __asm__("_ZN4gfl22cx16SecureUncompressEPKvjPvPNS_4heap11CtrHeapBaseE");
extern "C" uint32_t YellowAuto_00339a20(const void* arg0, uint32_t arg1, void* arg2, void* arg3) {
uint32_t t = (uint32_t)(*(const uint8_t*)arg0 & 0xF0);
if (t == 0x30) return h_16614c(arg0, arg1, arg2);
if (t == 0x10) return h_165f24(arg0, arg1, arg2);
if (t == 0x20) return h_166570(arg0, arg1, arg2);
if (t == 0x40) { void* tmp = h_alloc(arg3, 0x880, 0xFFFFFFFC); uint32_t r = h_165ab0(arg0, arg1, arg2, tmp); h_free(tmp); return r; }
if (t == 0x50) { void* tmp = h_alloc(arg3, 0x9000, 0xFFFFFFFC); uint32_t r = h_166334(arg0, arg1, arg2, tmp); h_free(tmp); return r; }
return 0;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00166300
extern "C" uint32_t YellowAuto_00166300(const void* arg0, uint32_t arg1) __asm__("_ZN4gfl22cx19GetUncompressedSizeEPKvj");
extern "C" uint32_t YellowAuto_00166300(const void* arg0, uint32_t arg1) {
return (uint32_t)(((const uint8_t*)arg0)[1] | ((uint32_t)((const uint8_t*)arg0)[2] << 8) | ((uint32_t)((const uint8_t*)arg0)[3] << 16)) == 0 ? (uint32_t)(((const uint8_t*)arg0)[4] | ((uint32_t)((const uint8_t*)arg0)[5] << 8) | ((uint32_t)((const uint8_t*)arg0)[6] << 16) | ((uint32_t)((const uint8_t*)arg0)[7] << 24)) : (uint32_t)(((const uint8_t*)arg0)[1] | ((uint32_t)((const uint8_t*)arg0)[2] << 8) | ((uint32_t)((const uint8_t*)arg0)[3] << 16));
}
#endif
