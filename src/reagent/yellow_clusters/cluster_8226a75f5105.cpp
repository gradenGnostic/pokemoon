// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0045EF20
extern "C" uint32_t YellowAuto_0045ef20(uint8_t* arg0, int32_t arg1) __asm__("_ZN9NetAppLib6System15ResourceManager15GetResourceSizeEi");
extern "C" uint32_t YellowAuto_0045ef20(uint8_t* arg0, int32_t arg1) {
uint32_t arg2 = *(uint32_t *)(*(uint32_t *)(arg0 + 0x1c) + 4); for (; arg2 != *(uint32_t *)(arg0 + 0x1c); arg2 = *(uint32_t *)(arg2 + 4)) if (*(uint32_t *)(*(uint32_t *)(arg2 + 8) + 0x0) == (uint32_t)arg1) return *(uint32_t *)(*(uint32_t *)(arg2 + 8) + 0x14); return 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0045EF60
extern "C" uint8_t* YellowAuto_0045ef60(uint8_t* arg0, int32_t arg1) __asm__("_ZN9NetAppLib6System15ResourceManager17GetResourceBufferEi");
extern "C" uint8_t* YellowAuto_0045ef60(uint8_t* arg0, int32_t arg1) {
uint32_t arg2 = *(uint32_t *)(*(uint32_t *)(arg0 + 0x1c) + 4); for (; arg2 != *(uint32_t *)(arg0 + 0x1c); arg2 = *(uint32_t *)(arg2 + 4)) if (*(uint32_t *)(*(uint32_t *)(arg2 + 8) + 0x0) == (uint32_t)arg1) return *(uint8_t **)(*(uint32_t *)(arg2 + 8) + 0x0c); return 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0045EFA0
extern "C" uint8_t* YellowAuto_0045efa0(uint8_t* arg0, uint32_t arg1, uint32_t arg2) __asm__("_ZN9NetAppLib6System15ResourceManager17GetResourceBufferEjj");
extern "C" uint8_t* YellowAuto_0045efa0(uint8_t* arg0, uint32_t arg1, uint32_t arg2) {
uint32_t arg3 = *(uint32_t *)(*(uint32_t *)(arg0 + 0x1c) + 4); for (; arg3 != *(uint32_t *)(arg0 + 0x1c); arg3 = *(uint32_t *)(arg3 + 4)) if (*(uint32_t *)(*(uint32_t *)(arg3 + 8) + 0x4) == arg1 && *(uint32_t *)(*(uint32_t *)(arg3 + 8) + 0x8) == arg2) return *(uint8_t **)(*(uint32_t *)(arg3 + 8) + 0x0c); return 0;
}
#endif

// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0045ED6C
void* HelperAlloc(uint32_t, void*);
extern "C" void YellowAuto_0045ed6c(uint8_t* arg0, int32_t arg1, uint32_t arg2, uint32_t arg3, bool arg4, bool arg5, uint8_t arg6) __asm__("_ZN9NetAppLib6System15ResourceManager14AddLoadRequestEijjbbN4gfl22fs10ToolDefine11ArcLangType3TagE");
extern "C" void YellowAuto_0045ed6c(uint8_t* arg0, int32_t arg1, uint32_t arg2, uint32_t arg3, bool arg4, bool arg5, uint8_t arg6) {
uint8_t* _h1 = (uint8_t*)*(uint32_t*)(arg0 + 0x1C);
uint8_t* _c1 = (uint8_t*)*(uint32_t*)(_h1 + 0x04);
uint8_t* _r1 = (uint8_t*)0;
uint8_t* _h0 = (uint8_t*)0;
uint8_t* _c0 = (uint8_t*)0;
uint8_t* _r0 = (uint8_t*)0;
uint8_t* _ab = (uint8_t*)0;
void* _hp = (void*)0;
uint8_t* _n = (uint8_t*)0;
uint32_t _cnt = 0U;
uint32_t _idx = 0U;
uint8_t* _head = (uint8_t*)0;
uint8_t* _slot = (uint8_t*)0;
uint8_t* _base = (uint8_t*)0;
uint32_t _it = 0U;
uint32_t _cur = 0U;
uint32_t _nxt = 0U;
uint8_t* _old = (uint8_t*)0;
if (_c1 == _h1) goto L_h0;
L_l1: _r1 = (uint8_t*)*(uint32_t*)(_c1 + 0x08);
if ((int32_t)*(uint32_t*)_r1 != arg1) goto L_n1;
return;
L_n1: _c1 = (uint8_t*)*(uint32_t*)(_c1 + 0x04);
if (_c1 != _h1) goto L_l1;
L_h0: _h0 = (uint8_t*)*(uint32_t*)(arg0 + 0x08);
_c0 = (uint8_t*)*(uint32_t*)(_h0 + 0x04);
if (_c0 == _h0) goto L_alloc;
L_l0: _r0 = (uint8_t*)*(uint32_t*)(_c0 + 0x08);
if ((int32_t)*(uint32_t*)_r0 != arg1) goto L_n0;
return;
L_n0: _c0 = (uint8_t*)*(uint32_t*)(_c0 + 0x04);
if (_c0 != _h0) goto L_l0;
L_alloc: _ab = (uint8_t*)*(uint32_t*)(arg0 + 0x04);
_hp = (void*)(arg5 ? *(uint32_t*)(_ab + 0x08) : *(uint32_t*)(_ab + 0x04));
_n = (uint8_t*)HelperAlloc(0x18U, _hp);
*(uint32_t*)(_n + 0x00) = (uint32_t)arg1;
*(uint32_t*)(_n + 0x04) = arg2;
*(uint32_t*)(_n + 0x08) = arg3;
*(uint32_t*)(_n + 0x0C) = 0U;
*(uint8_t*)(_n + 0x10) = (uint8_t)arg4;
*(uint8_t*)(_n + 0x11) = (uint8_t)arg5;
*(uint8_t*)(_n + 0x12) = arg6;
_cnt = *(uint32_t*)(arg0 + 0x10);
_idx = *(uint32_t*)(arg0 + 0x14);
_head = (uint8_t*)*(uint32_t*)(arg0 + 0x08);
_slot = (uint8_t*)0;
if (_cnt == 0U) goto L_ins;
_base = (uint8_t*)*(uint32_t*)(arg0 + 0x0C);
_it = 0U;
_cur = _idx;
L_ps: if (_it >= _cnt) goto L_ins;
if (*(uint8_t*)(_base + _cur * 0x10U + 0x0C) != 0U) goto L_adv;
_nxt = _cur + 1U;
if (_nxt >= _cnt) _nxt = 0U;
*(uint32_t*)(arg0 + 0x14) = _nxt;
_slot = _base + _cur * 0x10U;
goto L_ins;
L_adv: _cur = _cur + 1U;
if (_cur >= _cnt) _cur = 0U;
_it = _it + 1U;
goto L_ps;
L_ins: *(uint8_t*)(_slot + 0x0C) = 1U;
*(uint32_t*)(_slot + 0x08) = (uint32_t)_n;
*(uint32_t*)(_slot + 0x04) = (uint32_t)_head;
_old = (uint8_t*)*(uint32_t*)(_head + 0x00);
*(uint32_t*)(_slot + 0x00) = (uint32_t)_old;
*(uint32_t*)(_old + 0x04) = (uint32_t)_slot;
*(uint32_t*)(_head + 0x00) = (uint32_t)_slot;
*(uint32_t*)(arg0 + 0x18) = *(uint32_t*)(arg0 + 0x18) + 1U;
return;
}
#endif
