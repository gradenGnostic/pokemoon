// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00336F30
extern "C" void YellowAuto_00336f30(uint8_t* arg0) __asm__("_ZN4gfl215renderingengine8renderer17RenderingPipeLine6UpdateEv");
extern "C" void YellowAuto_00336f30(uint8_t* arg0) {
uint32_t* vtable = *reinterpret_cast<uint32_t**>(arg0);
uint32_t (*f0)(uint8_t*) = reinterpret_cast<uint32_t(*)(uint8_t*)>(vtable[2]);
uint8_t* (*f1)(uint8_t*) = reinterpret_cast<uint8_t*(*)(uint8_t*)>(vtable[3]);
uint32_t (*f2)(uint8_t*) = reinterpret_cast<uint32_t(*)(uint8_t*)>(vtable[4]);
uint32_t c = f0(arg0);
while (c != 0) {
uint8_t* cur = f1(arg0);
if (cur != reinterpret_cast<uint8_t*>(0)) {
uint32_t* vt2 = *reinterpret_cast<uint32_t**>(cur);
void (*g)(uint8_t*, uint8_t*) = reinterpret_cast<void(*)(uint8_t*, uint8_t*)>(vt2[2]);
g(cur, arg0 + 4);
}
c = f2(arg0);
}
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00336F94
uint32_t* ExecStateWord0();
uint32_t* ExecStateWord1();
uint32_t* ExecStateWord2();
uint32_t* ExecStateBlock14();
uint32_t* ExecStateTail3();
extern "C" void YellowAuto_00336f94(uint8_t* arg0) __asm__("_ZN4gfl215renderingengine8renderer17RenderingPipeLine7ExecuteEv");
extern "C" void YellowAuto_00336f94(uint8_t* arg0) {
uint32_t vtab = *(uint32_t*)arg0;
uint32_t (*fn_has)(uint8_t*) = *(uint32_t (**)(uint8_t*))(vtab + 8u);
uint32_t (*fn_cur)(uint8_t*) = *(uint32_t (**)(uint8_t*))(vtab + 12u);
uint32_t (*fn_next)(uint8_t*) = *(uint32_t (**)(uint8_t*))(vtab + 16u);
uint32_t has = fn_has(arg0);
while (has != 0u) {
uint32_t cur = fn_cur(arg0);
if (cur != 0u) {
*ExecStateWord0() = 0u;
*ExecStateWord1() = 0u;
*ExecStateWord2() = 0u;
uint32_t* blk = ExecStateBlock14();
blk[0] = 0u;
blk[1] = 0u;
blk[2] = 0u;
blk[3] = 0xFFFFFFFFu;
blk[6] = 0u;
blk[7] = 0u;
blk[8] = 0u;
blk[9] = 0u;
blk[10] = 0u;
blk[11] = 0u;
blk[12] = 0u;
blk[13] = 0u;
uint32_t* tail = ExecStateTail3();
tail[0] = 0u;
tail[1] = 0u;
tail[2] = 0u;
uint32_t evtab = *(uint32_t*)cur;
void (*efn)(uint32_t, uint8_t*) = *(void (**)(uint32_t, uint8_t*))(evtab + 12u);
efn(cur, arg0 + 4);
}
has = fn_next(arg0);
}
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00336004
uint32_t* DispStateWord0();
uint32_t* DispStateWord1();
uint32_t* DispStateWord2();
uint32_t* DispStateBlock14();
uint32_t* DispStateTail3();
extern "C" void YellowAuto_00336004(uint8_t* arg0) __asm__("_ZN4gfl215renderingengine8renderer17RenderingPipeLine15CallDisplayListEv");
extern "C" void YellowAuto_00336004(uint8_t* arg0) {
uint32_t vtab = *(uint32_t*)arg0;
uint32_t (*fn_has)(uint8_t*) = *(uint32_t (**)(uint8_t*))(vtab + 8u);
uint32_t (*fn_cur)(uint8_t*) = *(uint32_t (**)(uint8_t*))(vtab + 12u);
uint32_t (*fn_next)(uint8_t*) = *(uint32_t (**)(uint8_t*))(vtab + 16u);
uint32_t has = fn_has(arg0);
while (has != 0u) {
uint32_t cur = fn_cur(arg0);
if (cur != 0u) {
*DispStateWord0() = 0u;
*DispStateWord1() = 0u;
*DispStateWord2() = 0u;
uint32_t* blk = DispStateBlock14();
blk[0] = 0u;
blk[1] = 0u;
blk[2] = 0u;
blk[3] = 0xFFFFFFFFu;
blk[6] = 0u;
blk[7] = 0u;
blk[8] = 0u;
blk[9] = 0u;
blk[10] = 0u;
blk[11] = 0u;
blk[12] = 0u;
blk[13] = 0u;
uint32_t* tail = DispStateTail3();
tail[0] = 0u;
tail[1] = 0u;
tail[2] = 0u;
uint32_t evtab = *(uint32_t*)cur;
void (*efn)(uint32_t, uint8_t*) = *(void (**)(uint32_t, uint8_t*))(evtab + 16u);
efn(cur, arg0 + 4);
}
has = fn_next(arg0);
}
}
#endif
