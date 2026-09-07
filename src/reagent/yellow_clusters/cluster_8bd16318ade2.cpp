// Model-assisted reconstruction validated against retail ARM evidence.
typedef unsigned char uint8_t;
typedef signed char int8_t;
typedef unsigned short uint16_t;
typedef short int16_t;
typedef unsigned int uint32_t;
typedef int int32_t;

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00306FC4
uint32_t GetPartsPane(uint32_t layout, uint32_t paneId);
uint32_t GetPartsPane(uint32_t layout, uint32_t topParts, uint32_t paneId, uint32_t multiId);
extern "C" uint8_t* YellowAuto_00306fc4(uint8_t* arg0, uint32_t arg1) __asm__("_ZN3app4util13GetPaneHelper4PushEj");
extern "C" uint8_t* YellowAuto_00306fc4(uint8_t* arg0, uint32_t arg1) {
uint32_t depth = *reinterpret_cast<uint32_t*>(arg0 + 12);
if (depth < 8) {
  uint32_t pushed = 0;
  if (depth == 0) {
    uint32_t layout = *reinterpret_cast<uint32_t*>(arg0 + 4);
    pushed = GetPartsPane(layout, arg1);
  } else {
    uint32_t top = *reinterpret_cast<uint32_t*>(arg0 + depth * 4 + 12);
    if (top != 0) {
      uint32_t layout = *reinterpret_cast<uint32_t*>(arg0 + 4);
      uint32_t multi = *reinterpret_cast<uint32_t*>(arg0 + 8);
      pushed = GetPartsPane(layout, top, arg1, multi);
    }
  }
  if (pushed != 0) {
    uint32_t depth2 = *reinterpret_cast<uint32_t*>(arg0 + 12);
    *reinterpret_cast<uint32_t*>(arg0 + depth2 * 4 + 16) = pushed;
    *reinterpret_cast<uint32_t*>(arg0 + 12) = depth2 + 1;
  }
}
return arg0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00306F54
extern "C" uint8_t* YellowAuto_00306f54(uint8_t* arg0) __asm__("_ZN3app4util13GetPaneHelper3PopEv");
extern "C" uint8_t* YellowAuto_00306f54(uint8_t* arg0) {
uint32_t depth = *reinterpret_cast<uint32_t*>(arg0 + 12);
if (depth != 0) {
  *reinterpret_cast<uint32_t*>(arg0 + depth * 4 + 16) = 0;
  *reinterpret_cast<uint32_t*>(arg0 + 12) = depth - 1;
}
return arg0;
}
#endif
