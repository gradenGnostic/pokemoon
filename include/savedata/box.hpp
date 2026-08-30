#ifndef POKEMOON_SAVEDATA_BOX_HPP
#define POKEMOON_SAVEDATA_BOX_HPP

namespace Savedata {

struct BOX {
    void SetWallPaper(unsigned int tray, unsigned int wallpaper);
    unsigned int GetWallPaper(unsigned int tray) const;
    const unsigned short* GetTrayName(unsigned int tray) const;
    const unsigned short* GetTeamName(unsigned int team) const;
    unsigned int GetTrayLevel() const;
    unsigned int GetTrayMax() const;
    unsigned int GetCurrentTray() const;

    unsigned char unknown_0000[0x4];
    unsigned short tray_names_[32][17];
    unsigned short team_names_[6][11];
    unsigned char unknown_04c8[0xf6];
    unsigned char team_locked_[6];
    unsigned char wall_papers_[32];
    unsigned char unknown_05e4;
    unsigned char tray_max_;
    unsigned char unknown_05e6;
    unsigned char current_tray_;
};

static_assert(__builtin_offsetof(BOX, tray_names_) == 0x4, "BOX tray name offset mismatch");
static_assert(__builtin_offsetof(BOX, team_names_) == 0x444, "BOX team name offset mismatch");
static_assert(__builtin_offsetof(BOX, team_locked_) == 0x5be, "BOX team lock offset mismatch");
static_assert(__builtin_offsetof(BOX, wall_papers_) == 0x5c4, "BOX wallpaper offset mismatch");
static_assert(__builtin_offsetof(BOX, tray_max_) == 0x5e5, "BOX tray max offset mismatch");
static_assert(__builtin_offsetof(BOX, current_tray_) == 0x5e7, "BOX current tray offset mismatch");
} // namespace Savedata

#endif
