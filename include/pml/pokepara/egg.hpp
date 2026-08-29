#ifndef POKEMOON_PML_POKEPARA_EGG_HPP
#define POKEMOON_PML_POKEPARA_EGG_HPP

#include "gfl2/math/random.hpp"

namespace gfl2 {
namespace str {
class StrBuf;
}
}

namespace pml {
namespace pokepara {

// Semantic reconstruction; the original type name is not yet known.
struct EggGenerateContext {
    unsigned int trainer_id;
    gfl2::str::StrBuf* trainer_name;
    unsigned char has_item_278;
    unsigned char padding_09[3];
    gfl2::math::Random* random;
    unsigned char regional_form_context;
    unsigned char padding_11[3];
};

// Semantic reconstruction of the work object consumed by 0x00316B90.
struct EggConstructionData {
    unsigned int personality;
    unsigned int unknown_04;
    unsigned int rerolled_personality;
    unsigned int unknown_0c;
    unsigned int trainer_id;
    unsigned int unknown_14;
    unsigned short species;
    unsigned char form;
    unsigned char unknown_1b;
    unsigned short level;
    unsigned short sex;
    unsigned short nature;
    unsigned char ability_slot;
    unsigned char unknown_23;
    unsigned short ivs[6];
    unsigned int ability_parameter;
    unsigned int unknown_34;
    unsigned int move_count;
    unsigned short moves[4];
    unsigned int memory;
    unsigned char inherit_parent0[6];
    unsigned char inherit_parent1[6];
    unsigned int inherited_iv_count;
    unsigned int inherited_iv_target;
};

static_assert(sizeof(EggGenerateContext) == 0x14,
              "Egg generation context layout mismatch");
static_assert(__builtin_offsetof(EggConstructionData, species) == 0x18,
              "Egg species offset mismatch");
static_assert(__builtin_offsetof(EggConstructionData, ivs) == 0x24,
              "Egg IV offset mismatch");
static_assert(__builtin_offsetof(EggConstructionData, moves) == 0x3c,
              "Egg move offset mismatch");
static_assert(__builtin_offsetof(EggConstructionData, inherit_parent0) == 0x48,
              "Egg inheritance offset mismatch");
static_assert(sizeof(EggConstructionData) == 0x5c,
              "Egg construction data layout mismatch");

} // namespace pokepara
} // namespace pml

#endif
