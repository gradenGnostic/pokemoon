#ifndef POKEMOON_PC_TITLE_RESOURCES_HPP
#define POKEMOON_PC_TITLE_RESOURCES_HPP

#include "pokemoon/platform.hpp"

#include <array>
#include <cstdint>
#include <string>
#include <vector>

namespace PokemonMoon {

enum class LayoutAnimationCurve : std::uint8_t {
    Constant,
    Step,
    Hermite,
};

struct LayoutAnimationKey {
    float frame = 0.0f;
    float value = 0.0f;
    float slope = 0.0f;
};

struct LayoutAnimationTrack {
    std::string target;
    std::string tag;
    std::uint8_t component = 0;
    std::uint8_t channel = 0;
    LayoutAnimationCurve curve = LayoutAnimationCurve::Constant;
    std::vector<LayoutAnimationKey> keys;
};

struct LayoutAnimation {
    std::uint16_t frame_count = 0;
    bool loop = false;
    std::vector<LayoutAnimationTrack> tracks;
};

struct TitleMenuResources {
    Platform::Image upper_background;
    Platform::Image sea_pattern;
    Platform::Image lower_pattern;
    Platform::Image report_background;
    Platform::Image cursor;
    std::array<Platform::Image, 3> yellow_button;
    std::array<Platform::Image, 3> red_button;
};

struct StartupLanguageResources {
    Platform::Image upper_background;
    Platform::Image sea_pattern;
    Platform::Image sea_pattern_1;
    Platform::Image sea_mask;
    Platform::Image plate;
    Platform::Image header_plate;
    std::array<Platform::Image, 3> normal_button;
    std::array<Platform::Image, 3> selected_button;
    Platform::Image float_back;
    Platform::Image float_front;
    std::array<Platform::Image, 12> pikachu;
    std::array<Platform::Image, 9> languages;
    Platform::Image lower_pattern_0;
    Platform::Image lower_pattern_1;
    Platform::Image lower_window;
    Platform::Image lower_window_fill;
    Platform::Image selection_cursor;
    LayoutAnimation character_idle;
    LayoutAnimation upper_background_loop;
    LayoutAnimation lower_background_loop;
};

TitleMenuResources decode_title_menu_resources(
    const std::vector<std::uint8_t>& title_layout_archive,
    const std::vector<std::uint8_t>& common_layout_archive);

StartupLanguageResources decode_startup_language_resources(
    const std::vector<std::uint8_t>& language_layout_archive,
    const std::vector<std::uint8_t>& common_layout_archive = {});

} // namespace PokemonMoon

#endif
