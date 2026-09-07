// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0043AC84
extern "C" bool YellowAuto_0043ac84(uint8_t* arg0, uint32_t arg1, bool arg2, uint32_t* arg3) __asm__("_ZN8Savedata13PokeDiarySave3GetE4PDIDbPNS0_10DIARY_DATAE");
extern "C" bool YellowAuto_0043ac84(uint8_t* arg0, uint32_t arg1, bool arg2, uint32_t* arg3) {
if (arg1 <= 0x100U || arg1 >= 0x228U) { return false; } uint16_t k = (uint16_t)(arg1 - 0x200U); uint8_t* f = (uint8_t*)0; if (!arg2) { for (uint32_t i = 0U; i < 0x32U; i += 2U) { if (k == (uint16_t)(*reinterpret_cast<const uint16_t*>(arg0 + i * 0xCU + 0x1E4U) >> 8U)) { f = arg0 + i * 0xCU + 0x1E4U; break; } if (k == (uint16_t)(*reinterpret_cast<const uint16_t*>(arg0 + i * 0xCU + 0x1E4U + 0xCU) >> 8U)) { f = arg0 + i * 0xCU + 0x1E4U + 0xCU; break; } } } else { int32_t j = 0x31; while (true) { if (k == (uint16_t)(*reinterpret_cast<const uint16_t*>(arg0 + j * 0xC + 0x1E4) >> 8U)) { f = arg0 + j * 0xC + 0x1E4; break; } if (k == (uint16_t)(*reinterpret_cast<const uint16_t*>(arg0 + j * 0xC + 0x1E4 - 0xC) >> 8U)) { f = arg0 + j * 0xC + 0x1E4 - 0xC; break; } j -= 2; if (j < 0) { break; } } } if (f != (uint8_t*)0 && arg3 != (uint32_t*)0) { arg3[0] = *reinterpret_cast<const uint32_t*>(f); arg3[1] = *reinterpret_cast<const uint32_t*>(f + 4U); arg3[2] = *reinterpret_cast<const uint32_t*>(f + 8U); return true; } return false;
}
#endif
