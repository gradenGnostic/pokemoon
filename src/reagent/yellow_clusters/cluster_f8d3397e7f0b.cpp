// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004309B4
void SyncArcFileOpen(void* arg0, void* arg1);
void AddArcFileLoadDataReq(void* arg0, void* arg1);
extern "C" void* YellowAuto_004309b4(void* arg0, void* arg1, void* arg2, void* arg3) __asm__("_ZN8PokeTool29KawaigariParamCareCoreManagerC1EPN4gfl24heap11CtrHeapBaseES4_PNS1_2fs16AsyncFileManagerE");
extern "C" void* YellowAuto_004309b4(void* arg0, void* arg1, void* arg2, void* arg3) {
*(void **)arg0 = arg3;
uint8_t local0[0x6c];
*(uint32_t *)(local0 + 0x3c) = 0;
*(uint32_t *)(local0 + 0x40) = 0x112;
*(uint8_t *)(local0 + 0x44) = 0x10;
*(uint32_t *)(local0 + 0x48) = (uint32_t)arg2;
*(uint8_t *)(local0 + 0x4c) = 0xff;
*(uint32_t *)(local0 + 0x50) = (uint32_t)arg2;
*(uint8_t *)(local0 + 0x54) = 0;
*(uint8_t *)(local0 + 0x55) = 0;
*(uint8_t *)(local0 + 0x56) = 1;
*(uint32_t *)(local0 + 0x58) = 0;
*(uint32_t *)(local0 + 0x5c) = 0;
*(uint32_t *)(local0 + 0x60) = 0;
*(uint32_t *)(local0 + 0x64) = 0;
SyncArcFileOpen(arg3, local0 + 0x3c);
*(uint32_t *)(local0 + 0x00) = 0;
*(uint32_t *)(local0 + 0x04) = 0x112;
*(uint32_t *)(local0 + 0x08) = 7;
*(uint8_t *)(local0 + 0x0c) = 0xff;
*(uint32_t *)(local0 + 0x10) = (uint32_t)((uint8_t *)arg0 + 4);
*(uint32_t *)(local0 + 0x14) = 0;
*(uint32_t *)(local0 + 0x18) = 0;
*(uint32_t *)(local0 + 0x1c) = (uint32_t)arg1;
*(uint32_t *)(local0 + 0x20) = 0x80;
*(uint32_t *)(local0 + 0x24) = (uint32_t)arg2;
*(uint32_t *)(local0 + 0x28) = 0;
*(uint32_t *)(local0 + 0x2c) = 0;
*(uint32_t *)(local0 + 0x30) = 0;
*(uint32_t *)(local0 + 0x34) = 0;
*(uint32_t *)(local0 + 0x38) = 0;
AddArcFileLoadDataReq(arg3, local0);
*(uint32_t *)((uint8_t *)arg0 + 8) = 0;
*(uint8_t *)((uint8_t *)arg0 + 0xc) = 0;
return arg0;
}
#endif
