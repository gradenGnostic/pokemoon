#include "pokemoon/platform.hpp"
#include "pokemoon/startup_language.hpp"

#include <array>
#include <chrono>
#include <filesystem>
#include <fstream>
#include <stdexcept>
#include <vector>

namespace {

void write_bytes(const std::filesystem::path& path, const std::vector<std::uint8_t>& bytes) {
    std::filesystem::create_directories(path.parent_path());
    std::ofstream stream(path, std::ios::binary | std::ios::trunc);
    stream.write(reinterpret_cast<const char*>(bytes.data()),
                 static_cast<std::streamsize>(bytes.size()));
    if (!stream) {
        throw std::runtime_error("could not write profile test fixture");
    }
}

} // namespace

int main() {
    const auto suffix = std::chrono::steady_clock::now().time_since_epoch().count();
    const auto root = std::filesystem::temp_directory_path() /
                      ("pokemoon-startup-language-" + std::to_string(suffix));
    try {
        Platform::FileSystem files(root);
        if (PokemonMoon::load_startup_language_profile(files).has_value()) {
            throw std::runtime_error("missing profile was accepted");
        }

        PokemonMoon::save_startup_language_profile(files, {7, true});
        const auto loaded = PokemonMoon::load_startup_language_profile(files);
        if (!loaded || loaded->language != 7 || !loaded->kanji_mode) {
            throw std::runtime_error("profile round trip failed");
        }
        if (std::filesystem::exists(files.resolve("save/startup_language.bin.tmp"))) {
            throw std::runtime_error("temporary profile survived commit");
        }

        const auto profile = files.resolve("save/startup_language.bin");
        auto bytes = files.read_binary("save/startup_language.bin");
        const std::array<std::size_t, 5> corrupt_offsets{{0, 8, 9, 10, 11}};
        const std::array<std::uint8_t, 5> corrupt_values{{0, 2, 9, 2, 1}};
        for (std::size_t index = 0; index < corrupt_offsets.size(); ++index) {
            auto corrupt = bytes;
            corrupt[corrupt_offsets[index]] = corrupt_values[index];
            write_bytes(profile, corrupt);
            if (PokemonMoon::load_startup_language_profile(files).has_value()) {
                throw std::runtime_error("malformed profile was accepted");
            }
        }

        write_bytes(profile, {bytes.begin(), bytes.end() - 1});
        if (PokemonMoon::load_startup_language_profile(files).has_value()) {
            throw std::runtime_error("truncated profile was accepted");
        }
        bytes.push_back(0);
        write_bytes(profile, bytes);
        if (PokemonMoon::load_startup_language_profile(files).has_value()) {
            throw std::runtime_error("oversized profile was accepted");
        }

        PokemonMoon::save_startup_language_profile(files, {2, false});
        const auto replaced = PokemonMoon::load_startup_language_profile(files);
        if (!replaced || replaced->language != 2 || replaced->kanji_mode) {
            throw std::runtime_error("invalid profile replacement failed");
        }

        std::filesystem::remove_all(root);
        return 0;
    } catch (...) {
        std::filesystem::remove_all(root);
        throw;
    }
}
