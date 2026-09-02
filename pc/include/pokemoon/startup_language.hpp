#ifndef POKEMOON_PC_STARTUP_LANGUAGE_HPP
#define POKEMOON_PC_STARTUP_LANGUAGE_HPP

#include "pokemoon/platform.hpp"

#include <cstdint>
#include <optional>

namespace PokemonMoon {

struct StartupLanguageProfile {
    std::uint8_t language = 0;
    bool kanji_mode = false;
};

std::optional<StartupLanguageProfile> load_startup_language_profile(
    const Platform::FileSystem& files);
void save_startup_language_profile(const Platform::FileSystem& files,
                                   StartupLanguageProfile profile);

} // namespace PokemonMoon

#endif
