// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0032CF88
uint32_t Virt20_GetVersionId(uint8_t*);
uint8_t* FUN_0034f2a8(uint32_t);
uint8_t* FUN_0032c240(uint8_t*);
void FUN_00323b7c(uint8_t*);
void FUN_0032cfe8(uint8_t*, uint8_t*, uint8_t*);
extern "C" uint8_t* YellowAuto_0032cf88(uint8_t* arg0, uint8_t* arg1) __asm__("_ZN4gfl215renderingengine10scenegraph8resource15ResourceManager19createResourceNode_EPNS2_13IResourceDataE");
extern "C" uint8_t* YellowAuto_0032cf88(uint8_t* arg0, uint8_t* arg1) {
uint32_t vid = Virt20_GetVersionId(arg1);
uint8_t* mem = FUN_0034f2a8(44);
uint8_t* node = 0;
if (mem != 0) {
node = FUN_0032c240(mem);
}
*(uint32_t*)(node + 36) = vid;
FUN_00323b7c(node);
FUN_0032cfe8(arg0, arg1, node);
return node;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0032CFE8
uint32_t V08_GetSize(uint8_t*);
uint32_t V20_GetVersionId(uint8_t*);
void V14_GetType(uint32_t*, uint8_t*, uint32_t);
uint8_t* LookupFactory(uint32_t, uint32_t);
void F10_SetVersion(uint8_t*, uint32_t);
uint8_t* V0C_GetData(uint8_t*, uint32_t);
uint32_t V10_GetDataSize(uint8_t*, uint32_t);
uint8_t* F08_Create(uint8_t*, uint8_t*, uint8_t*, uint32_t);
void D10_AddChild(uint8_t*, uint8_t*);
extern "C" void YellowAuto_0032cfe8(uint8_t* arg0, uint8_t* arg1, uint8_t* arg2) __asm__("_ZN4gfl215renderingengine10scenegraph8resource15ResourceManager19createResourceNode_EPNS2_13IResourceDataEPNS1_7DagNodeE");
extern "C" void YellowAuto_0032cfe8(uint8_t* arg0, uint8_t* arg1, uint8_t* arg2) {
uint32_t n = V08_GetSize(arg1);
uint32_t ver = V20_GetVersionId(arg1);
uint8_t* alloc = *(uint8_t**)(arg0 + 4);
for (uint32_t i = 0; i < n; ++i) {
uint32_t tt[2];
V14_GetType(tt, arg1, i);
uint8_t* fac = LookupFactory(tt[0], tt[1]);
if (fac != 0) {
F10_SetVersion(fac, ver);
uint8_t* d = V0C_GetData(arg1, i);
uint32_t sz = V10_GetDataSize(arg1, i);
uint8_t* child = F08_Create(fac, alloc, d, sz);
D10_AddChild(arg2, child);
}
}
}
#endif
