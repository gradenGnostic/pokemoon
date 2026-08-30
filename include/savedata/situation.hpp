#ifndef POKEMOON_SAVEDATA_SITUATION_HPP
#define POKEMOON_SAVEDATA_SITUATION_HPP

namespace Savedata {

struct SituationLocation {
    unsigned char unknown_00[0x24];
};

struct Situation {
    SituationLocation* GetStartLocation();
    SituationLocation* GetSpecialLocation();
    void SetLastZoneID(unsigned short zone_id);
    unsigned short GetLastZoneID() const;
    void SetEggStepCount(unsigned int step_count);
    unsigned int GetEggStepCount() const;
    void SetFriendlyStepCount(unsigned short step_count);
    unsigned short GetFriendlyStepCount() const;
    void SetKawaigariStepCount(unsigned short step_count);
    unsigned short GetKawaigariStepCount() const;
    unsigned int HasWarpContinueRequest() const;

    unsigned char unknown_00[0x4];
    SituationLocation start_location_;
    SituationLocation special_location_;
    unsigned char unknown_4c[0x26];
    unsigned char warp_continue_request_;
    unsigned char unknown_73;
    unsigned int egg_step_count_;
    unsigned short last_zone_id_;
    unsigned short friendly_step_count_;
    unsigned short kawaigari_step_count_;
};

static_assert(sizeof(SituationLocation) == 0x24, "SituationLocation size mismatch");
static_assert(__builtin_offsetof(Situation, start_location_) == 0x4, "Situation start location offset mismatch");
static_assert(__builtin_offsetof(Situation, special_location_) == 0x28, "Situation special location offset mismatch");
static_assert(__builtin_offsetof(Situation, warp_continue_request_) == 0x72, "Situation warp request offset mismatch");
static_assert(__builtin_offsetof(Situation, egg_step_count_) == 0x74, "Situation egg step offset mismatch");
static_assert(__builtin_offsetof(Situation, last_zone_id_) == 0x78, "Situation zone offset mismatch");
static_assert(__builtin_offsetof(Situation, friendly_step_count_) == 0x7a, "Situation friendship step offset mismatch");
static_assert(__builtin_offsetof(Situation, kawaigari_step_count_) == 0x7c, "Situation petting step offset mismatch");

} // namespace Savedata

#endif
