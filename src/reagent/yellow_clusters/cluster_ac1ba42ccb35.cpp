// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00459590
void StartSelectedAct(uint8_t *, uint32_t);
extern "C" void YellowAuto_00459590(uint8_t* arg0, uint8_t* arg1, int32_t arg2) __asm__("_ZN9NetAppLib2UI16NetAppCursorView24CursorController_OnEventEPN3app4tool16CursorControllerENS4_13IEventHandler9EventCodeE");
extern "C" void YellowAuto_00459590(uint8_t* arg0, uint8_t* arg1, int32_t arg2) {
if (arg2 != 1) return; uint32_t elems = *(uint32_t *)(arg0 + 0x11c); uint32_t idx = *(uint32_t *)(arg1 + 0x10); if (elems != 0 && idx < elems) StartSelectedAct(*(uint8_t **)(arg0 + 0x10), *(uint32_t *)(*(uint32_t *)(arg0 + 0x118) + idx * 4));
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00459530
void MoveTo(uint8_t *, uint32_t);
extern "C" void YellowAuto_00459530(uint8_t* arg0, uint32_t arg1) __asm__("_ZN9NetAppLib2UI16NetAppCursorView18CursorMoveToButtonEj");
extern "C" void YellowAuto_00459530(uint8_t* arg0, uint32_t arg1) {
uint32_t elems = *(uint32_t *)(arg0 + 0x11c); uint32_t *table = *(uint32_t **)(arg0 + 0x118); for (uint32_t i = 0; i < elems; i++) if (table[i] == arg1) if (i < elems) return MoveTo(*(uint8_t **)(arg0 + 0x10c), i);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004595D4
void MoveTo(uint8_t *, uint32_t);
extern "C" void YellowAuto_004595d4(uint8_t* arg0, uint32_t arg1) __asm__("_ZN9NetAppLib2UI16NetAppCursorView29OnLayoutPaneTouchTriggerEventEj");
extern "C" void YellowAuto_004595d4(uint8_t* arg0, uint32_t arg1) {
uint32_t elems = *(uint32_t *)(arg0 + 0x11c); uint32_t *table = *(uint32_t **)(arg0 + 0x118); for (uint32_t i = 0; i < elems; i++) if (table[i] == arg1) if (i < elems) return MoveTo(*(uint8_t **)(arg0 + 0x10c), i);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00459518
void MoveTo(uint8_t *, uint32_t);
extern "C" void YellowAuto_00459518(uint8_t* arg0, uint32_t arg1) __asm__("_ZN9NetAppLib2UI16NetAppCursorView17CursorMoveToIndexEj");
extern "C" void YellowAuto_00459518(uint8_t* arg0, uint32_t arg1) {
if (arg1 < *(uint32_t *)(arg0 + 0x11c)) MoveTo(*(uint8_t **)(arg0 + 0x10c), arg1);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x002F3104
void SetVisible(uint8_t *, uint32_t, uint32_t);
extern "C" void YellowAuto_002f3104(uint8_t* arg0, bool arg1) __asm__("_ZN9NetAppLib2UI16NetAppCursorView16SetCursorVisibleEb");
extern "C" void YellowAuto_002f3104(uint8_t* arg0, bool arg1) {
*(uint8_t *)(arg0 + 0x120) = (uint8_t)arg1; uint8_t *ctrl = *(uint8_t **)(arg0 + 0x10c); if (arg1 == 0) *(uint8_t *)(ctrl + 0x5c) = 0; if (arg1 == 0) if (*(uint8_t **)(ctrl + 0x54) != (uint8_t *)0) SetVisible(*(uint8_t **)(ctrl + 0x54), 0, 3); if (arg1 != 0) *(uint8_t *)(ctrl + 0x5c) = 1; if (arg1 != 0) if (*(uint8_t **)(ctrl + 0x54) != (uint8_t *)0) SetVisible(*(uint8_t **)(ctrl + 0x54), 1, 3);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00459644
void BaseUpdate(uint8_t *);
extern "C" void YellowAuto_00459644(uint8_t* arg0) __asm__("_ZN9NetAppLib2UI16NetAppCursorView6UpdateEv");
extern "C" void YellowAuto_00459644(uint8_t* arg0) {
BaseUpdate(arg0); if (*(uint8_t *)(arg0 + 0x120) != 0) (*(void (**)(uint8_t *))(*(uint32_t *)(*(uint32_t *)(arg0 + 0x10c)) + 0x10))(*(uint8_t **)(arg0 + 0x10c));
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004AA550
bool BaseIsDrawing(const uint8_t *);
extern "C" bool YellowAuto_004aa550(const uint8_t* arg0) __asm__("_ZNK9NetAppLib2UI16NetAppCursorView9IsDrawingEv");
extern "C" bool YellowAuto_004aa550(const uint8_t* arg0) {
uint8_t *ctrl = *(uint8_t **)(arg0 + 0x10c); uint32_t r = (*(uint32_t (**)(uint8_t *))(*(uint32_t *)ctrl + 0xc))(ctrl); if (r == 0) return false; return BaseIsDrawing(arg0);
}
#endif
