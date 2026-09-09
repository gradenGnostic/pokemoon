// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0045E624
extern "C" uint32_t YellowAuto_0045e624(uint8_t* arg0) __asm__("_ZN9NetAppLib4Util8PackFile12GetFileCountEv");
extern "C" uint32_t YellowAuto_0045e624(uint8_t* arg0) {
if (*reinterpret_cast<uint32_t*>(arg0 + 8) == 0) return 0; return *reinterpret_cast<uint32_t*>(*reinterpret_cast<uint32_t*>(arg0 + 8) + 4);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0045E5B8
extern "C" uint32_t YellowAuto_0045e5b8(uint8_t* arg0, uint32_t arg1) __asm__("_ZN9NetAppLib4Util8PackFile11GetFileSizeEj");
extern "C" uint32_t YellowAuto_0045e5b8(uint8_t* arg0, uint32_t arg1) {
if (*reinterpret_cast<uint32_t*>(arg0 + 8) == 0) return 0; if (arg1 >= *reinterpret_cast<uint32_t*>(*reinterpret_cast<uint32_t*>(arg0 + 8) + 4)) return 0; if (*reinterpret_cast<uint32_t*>(arg0 + 12) == 0) return 0; return *reinterpret_cast<uint32_t*>(*reinterpret_cast<uint32_t*>(arg0 + 12) + arg1 * 8 + 4);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0045E664
extern "C" uint8_t* YellowAuto_0045e664(uint8_t* arg0, uint32_t arg1) __asm__("_ZN9NetAppLib4Util8PackFile13GetFileBufferEj");
extern "C" uint8_t* YellowAuto_0045e664(uint8_t* arg0, uint32_t arg1) {
if (*reinterpret_cast<uint32_t*>(arg0 + 8) == 0) return nullptr; if (arg1 >= *reinterpret_cast<uint32_t*>(*reinterpret_cast<uint32_t*>(arg0 + 8) + 4)) return nullptr; if (*reinterpret_cast<uint32_t*>(arg0 + 4) == 0) return nullptr; if (*reinterpret_cast<uint32_t*>(arg0 + 12) == 0) return nullptr; return reinterpret_cast<uint8_t*>(*reinterpret_cast<uint32_t*>(arg0 + 4) + *reinterpret_cast<uint32_t*>(*reinterpret_cast<uint32_t*>(arg0 + 12) + arg1 * 8));
}
#endif
