// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00401CD8
extern "C" void YellowAuto_00401cd8(void* arg0) __asm__("_ZN7gflnet23p2p11NetGameBase23RegistMigrationListenerEPNS0_24NetGameMigrationListenerE");
extern "C" void YellowAuto_00401cd8(void* arg0) {
*(uint32_t *)(0x00401ce4 + 0xc) = (uint32_t)arg0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004020D4
extern "C" void YellowAuto_004020d4() __asm__("_ZN7gflnet23p2p11NetGameBase25UnregistMigrationListenerEv");
extern "C" void YellowAuto_004020d4() {
*(uint32_t *)(0x004020e4 + 0xc) = 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00401260
extern "C" uint32_t YellowAuto_00401260() __asm__("_ZN7gflnet23p2p11NetGameBase12SetDummySendEv");
extern "C" uint32_t YellowAuto_00401260() {
*(uint32_t *)(0x0040127c + 0x18) = *(uint32_t *)(0x0040127c + 0x14);
*(uint8_t *)(0x0040127c + 1) = 0xff;
return 1;
}
#endif
