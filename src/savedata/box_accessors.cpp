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

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00441170
void BOX::SetTeamLock(unsigned int team, bool locked) {
    team_locked_[team] = locked;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A7928
bool BOX::IsTeamLock(unsigned int team) const {
    return team_locked_[team] != 0;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A7A18
unsigned short BOX::GetTeamPokePos(unsigned int team, unsigned int slot) const {
    return team_poke_positions_[team][slot];
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A7874
int BOX::IsTeamInMe(unsigned int tray, unsigned int slot) const {
    const unsigned short position = static_cast<unsigned short>(slot + (tray << 8));
    for (unsigned int team = 0; team < 6; ++team) {
        for (unsigned int team_slot = 0; team_slot < 6; ++team_slot) {
            if (team_poke_positions_[team][team_slot] == position) {
                return static_cast<int>(team);
            }
        }
    }
    return -1;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A78D4
int BOX::IsTeamInMe(unsigned int tray, unsigned int slot, unsigned int team) const {
    const unsigned short position = static_cast<unsigned short>(slot + (tray << 8));
    for (unsigned int team_slot = 0; team_slot < 6; ++team_slot) {
        if (team_poke_positions_[team][team_slot] == position) {
            return static_cast<int>(team);
        }
    }
    return -1;
}
#endif

} // namespace Savedata
