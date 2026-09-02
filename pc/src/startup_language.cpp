#include "pokemoon/startup_language.hpp"

#include <algorithm>
#include <array>
#include <filesystem>
#include <fstream>
#include <stdexcept>

namespace {

constexpr std::array<std::uint8_t, 8> profile_magic{{'P', 'M', 'L', 'A', 'N', 'G', '0', '1'}};
constexpr std::uint8_t profile_version = 1;
constexpr std::size_t profile_size = 16;
constexpr auto profile_path = "save/startup_language.bin";
constexpr auto temporary_profile_path = "save/startup_language.bin.tmp";

bool valid_profile(const std::vector<std::uint8_t>& data) {
    return data.size() == profile_size &&
           std::equal(profile_magic.begin(), profile_magic.end(), data.begin()) &&
           data[8] == profile_version && data[9] < 9 && data[10] < 2 &&
           std::all_of(data.begin() + 11, data.end(), [](std::uint8_t value) {
               return value == 0;
           });
}

} // namespace

namespace PokemonMoon {

std::optional<StartupLanguageProfile> load_startup_language_profile(
        const Platform::FileSystem& files) {
    const auto path = files.resolve(profile_path);
    if (!std::filesystem::is_regular_file(path)) {
        return std::nullopt;
    }
    const auto data = files.read_binary(profile_path);
    if (!valid_profile(data)) {
        return std::nullopt;
    }
    return StartupLanguageProfile{data[9], data[10] != 0};
}

void save_startup_language_profile(const Platform::FileSystem& files,
                                   StartupLanguageProfile profile) {
    if (profile.language >= 9) {
        throw std::invalid_argument("startup language is out of range");
    }

    std::array<std::uint8_t, profile_size> data{};
    std::copy(profile_magic.begin(), profile_magic.end(), data.begin());
    data[8] = profile_version;
    data[9] = profile.language;
    data[10] = static_cast<std::uint8_t>(profile.kanji_mode);

    const auto path = files.resolve(profile_path);
    const auto temporary = files.resolve(temporary_profile_path);
    std::filesystem::create_directories(path.parent_path());
    std::error_code ignored;
    std::filesystem::remove(temporary, ignored);
    try {
        std::ofstream stream(temporary, std::ios::binary | std::ios::trunc);
        stream.write(reinterpret_cast<const char*>(data.data()),
                     static_cast<std::streamsize>(data.size()));
        stream.flush();
        if (!stream) {
            throw std::runtime_error("could not write startup language profile");
        }
        stream.close();
        std::filesystem::rename(temporary, path);
    } catch (...) {
        std::filesystem::remove(temporary, ignored);
        throw;
    }
}

} // namespace PokemonMoon
