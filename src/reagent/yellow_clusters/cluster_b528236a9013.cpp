// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003E5AE4
extern "C" void YellowAuto_003e5ae4(uint8_t* arg0, uint8_t arg1, int32_t arg2) __asm__("_ZN6System17DeviceTurnWatcher10InitializeENS0_10COUNT_RATEENS0_10COUNT_MODEE");
extern "C" void YellowAuto_003e5ae4(uint8_t* arg0, uint8_t arg1, int32_t arg2) {
arg0[4] = 0; arg0[12] = arg1; *reinterpret_cast<uint32_t*>(arg0 + 8) = 0; arg0[13] = static_cast<uint8_t>(arg2); *reinterpret_cast<uint32_t*>(arg0 + 16) = (arg2 == 0) ? 180u : 60u;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x003E5B0C
void* GetAccelerometer(void* arg0, uint32_t arg1);
bool IsValid(void* arg0);
void GetAcceleration(void* arg0, uint32_t* arg1);
extern "C" void YellowAuto_003e5b0c(uint8_t* arg0) __asm__("_ZN6System17DeviceTurnWatcher6UpdateEv");
extern "C" void YellowAuto_003e5b0c(uint8_t* arg0) {
void* v0 = *reinterpret_cast<void* const*>(arg0); void* v1 = GetAccelerometer(v0, 0); if (!IsValid(v1)) return; uint32_t v2[3]; GetAcceleration(v1, v2); if (static_cast<int32_t>(v2[2]) < 0x3F000000) { *reinterpret_cast<uint32_t*>(arg0 + 8) = 0; } else { uint32_t v3 = *reinterpret_cast<uint32_t*>(arg0 + 8) + static_cast<uint32_t>(arg0[12]); *reinterpret_cast<uint32_t*>(arg0 + 8) = v3; if (v3 > *reinterpret_cast<uint32_t*>(arg0 + 16) && arg0[4] == 0) { arg0[4] = 1; } }
}
#endif
