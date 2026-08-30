#include "savedata/situation.hpp"

namespace Savedata {

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00445C24
SituationLocation* Situation::GetStartLocation() {
    return &start_location_;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00445C2C
SituationLocation* Situation::GetSpecialLocation() {
    return &special_location_;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00445C14
void Situation::SetLastZoneID(unsigned short zone_id) {
    last_zone_id_ = zone_id;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A8B78
unsigned short Situation::GetLastZoneID() const {
    return last_zone_id_;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00445C1C
void Situation::SetEggStepCount(unsigned int step_count) {
    egg_step_count_ = step_count;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A8B80
unsigned int Situation::GetEggStepCount() const {
    return egg_step_count_;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00445C34
void Situation::SetFriendlyStepCount(unsigned short step_count) {
    friendly_step_count_ = step_count;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A8B88
unsigned short Situation::GetFriendlyStepCount() const {
    return friendly_step_count_;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x00445C3C
void Situation::SetKawaigariStepCount(unsigned short step_count) {
    kawaigari_step_count_ = step_count;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A8B90
unsigned short Situation::GetKawaigariStepCount() const {
    return kawaigari_step_count_;
}
#endif

#if !defined(POKEMOON_SPLIT_FUNCTION) || POKEMOON_SPLIT_FUNCTION == 0x004A8B98
unsigned int Situation::HasWarpContinueRequest() const {
    return warp_continue_request_ != 0;
}
#endif

} // namespace Savedata
