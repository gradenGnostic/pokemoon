// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0044C5B8
void* GetInstance();
extern "C" void YellowAuto_0044c5b8(uint8_t* arg0, uint8_t* arg1) __asm__("_ZN9NetAppLib11JoinFestaUI26JoinFestaRecordListManager19SetupRecordDataListEPNS0_19JoinFestaPlayerDataE");
extern "C" void YellowAuto_0044c5b8(uint8_t* arg0, uint8_t* arg1) {
(void)arg0; (void)arg1; GetInstance();
}
#endif
