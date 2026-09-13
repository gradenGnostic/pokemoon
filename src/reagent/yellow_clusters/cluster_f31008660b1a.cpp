// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00395830
uint8_t* GameEvent(uint8_t* arg0, void* arg1);
uint8_t* Location(uint8_t* arg0);
extern "C" void YellowAuto_00395830(uint8_t* arg0, void* arg1) __asm__("_ZN5Field5Event27EventPokeFinderForPlacementC1EPN4gfl24heap11CtrHeapBaseE");
extern "C" void YellowAuto_00395830(uint8_t* arg0, void* arg1) {
GameEvent(arg0, arg1);
*(uint32_t *)arg0 = *(const uint32_t *)0x003958b4;
*(uint32_t *)(arg0 + 0x18) = 0;
*(uint32_t *)(arg0 + 0x1c) = 0;
*(uint32_t *)(arg0 + 0x20) = 0;
*(uint32_t *)(arg0 + 0x24) = 0;
*(uint32_t *)(arg0 + 0x28) = 0;
*(uint32_t *)(arg0 + 0x2c) = 0;
*(uint8_t *)(arg0 + 0x30) = 6;
*(uint8_t *)(arg0 + 0x4c) = 0;
*(uint32_t *)(arg0 + 0x34) = 0;
*(uint32_t *)(arg0 + 0x38) = 0;
*(uint32_t *)(arg0 + 0x3c) = 0;
*(uint32_t *)(arg0 + 0x40) = 0;
*(uint32_t *)(arg0 + 0x44) = 0;
*(uint32_t *)(arg0 + 0x48) = 0;
Location(arg0 + 0x50);
*(uint32_t *)(arg0 + 0x74) = 0;
*(uint32_t *)(arg0 + 0x78) = 0xffffffffu;
*(uint32_t *)(arg0 + 0x7c) = 0;
*(uint32_t *)(arg0 + 0x80) = 0;
*(uint32_t *)(arg0 + 0x84) = 0;
*(uint8_t *)(arg0 + 0xa8) = 0;
*(uint8_t *)(arg0 + 0xa9) = 1;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00394E88
void* GetHeapByHeapId(int32_t arg0);
extern "C" void YellowAuto_00394e88(uint8_t* arg0, const uint32_t* arg1) __asm__("_ZN5Field5Event27EventPokeFinderForPlacement10InitializeERKNS1_9SetupDataE");
extern "C" void YellowAuto_00394e88(uint8_t* arg0, const uint32_t* arg1) {
*reinterpret_cast<uint32_t*>(arg0 + 8) = 0;
*reinterpret_cast<uint32_t*>(arg0 + 24) = reinterpret_cast<uint32_t>(GetHeapByHeapId(11));
*reinterpret_cast<uint32_t*>(arg0 + 28) = reinterpret_cast<uint32_t>(GetHeapByHeapId(7));
*reinterpret_cast<uint32_t*>(arg0 + 116) = arg1[0];
uint32_t v = arg1[1];
*reinterpret_cast<uint32_t*>(arg0 + 124) = v;
if (v != 0) *reinterpret_cast<uint32_t*>(arg0 + 44) = arg1[2];
}
#endif
