#include "savedata/box.hpp"

namespace Savedata {

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x0044123C
void BOX::SetWallPaper(unsigned int tray, unsigned int wallpaper) {
    wall_papers_[tray] = static_cast<unsigned char>(wallpaper);
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A79B8
unsigned int BOX::GetWallPaper(unsigned int tray) const {
    return wall_papers_[tray];
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A797C
const unsigned short* BOX::GetTrayName(unsigned int tray) const {
    return tray_names_[tray];
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A7964
const unsigned short* BOX::GetTeamName(unsigned int team) const {
    unsigned int offset = team + (team << 1);
    offset += team << 3;
    const unsigned char* base = reinterpret_cast<const unsigned char*>(this);
    return reinterpret_cast<const unsigned short*>(base + 0x444 + (offset << 1));
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A798C
unsigned int BOX::GetTrayLevel() const {
    unsigned int level;
    if (tray_max_ == 8) {
        level = 0;
    } else if (tray_max_ == 16) {
        level = 1;
    } else if (tray_max_ == 24) {
        level = 2;
    } else {
        level = 3;
    }
    return level;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A786C
unsigned int BOX::GetTrayMax() const {
    return tray_max_;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A7A10
unsigned int BOX::GetCurrentTray() const {
    return current_tray_;
}
#endif

} // namespace Savedata
