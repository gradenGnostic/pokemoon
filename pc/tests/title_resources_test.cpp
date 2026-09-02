#include "pokemoon/title_resources.hpp"

#include <cstdint>
#include <cstring>
#include <iostream>
#include <stdexcept>
#include <string>
#include <utility>
#include <vector>

namespace {

void append_u16(std::vector<std::uint8_t>& data, std::uint16_t value) {
    data.push_back(static_cast<std::uint8_t>(value));
    data.push_back(static_cast<std::uint8_t>(value >> 8));
}

void append_u32(std::vector<std::uint8_t>& data, std::uint32_t value) {
    data.push_back(static_cast<std::uint8_t>(value));
    data.push_back(static_cast<std::uint8_t>(value >> 8));
    data.push_back(static_cast<std::uint8_t>(value >> 16));
    data.push_back(static_cast<std::uint8_t>(value >> 24));
}

void set_u32(std::vector<std::uint8_t>& data, std::size_t offset, std::uint32_t value) {
    for (std::size_t byte = 0; byte < 4; ++byte) {
        data.at(offset + byte) = static_cast<std::uint8_t>(value >> (byte * 8));
    }
}

std::vector<std::uint8_t> make_bflim(std::uint8_t format) {
    const bool malformed_etc1 = format == 20;
    const auto stored_format = static_cast<std::uint8_t>(malformed_etc1 ? 10 : format);
    const std::uint32_t data_size = stored_format == 9 ? 256 : stored_format <= 2 ? 64 :
                                      stored_format == 11 ? 64 :
                                      stored_format == 10 || stored_format == 12 ||
                                          stored_format == 13 ? 32 : 128;
    std::vector<std::uint8_t> data;
    data.reserve(data_size + 40);
    for (std::uint32_t pixel = 0;
            pixel < 64 && stored_format != 10 && stored_format != 11 &&
                stored_format != 12 && stored_format != 13;
            ++pixel) {
        if (stored_format == 9) {
            data.insert(data.end(), {10, 20, 30, static_cast<std::uint8_t>(pixel)});
        } else if (stored_format <= 2) {
            data.push_back(static_cast<std::uint8_t>(pixel * 4));
        } else {
            append_u16(data, 0x1234);
        }
    }
    if (stored_format == 10 || stored_format == 11 || stored_format == 12 ||
            stored_format == 13) {
        data.resize(data_size);
    }
    if (malformed_etc1) {
        data[4] = 2;
        data[7] = 4;
    }
    data.insert(data.end(), {'F', 'L', 'I', 'M'});
    append_u16(data, 0xfeff);
    append_u16(data, 20);
    append_u32(data, 0x07020100);
    append_u32(data, data_size + 40);
    append_u16(data, 1);
    append_u16(data, 0);
    data.insert(data.end(), {'i', 'm', 'a', 'g'});
    append_u32(data, 16);
    append_u16(data, 8);
    append_u16(data, 8);
    append_u16(data, 0x80);
    data.push_back(stored_format);
    data.push_back(4);
    append_u32(data, data_size);
    return data;
}

std::vector<std::uint8_t> make_bflan() {
    std::vector<std::uint8_t> data{'F', 'L', 'A', 'N'};
    append_u16(data, 0xfeff);
    append_u16(data, 20);
    append_u32(data, 0x07020100);
    append_u32(data, 128);
    append_u16(data, 1);
    append_u16(data, 0);
    data.insert(data.end(), {'p', 'a', 'i', '1'});
    append_u32(data, 108);
    append_u16(data, 60);
    data.push_back(1);
    data.push_back(0);
    append_u16(data, 0);
    append_u16(data, 1);
    append_u32(data, 20);
    append_u32(data, 24);
    const std::string target = "Chara";
    data.insert(data.end(), target.begin(), target.end());
    data.resize(data.size() + 28 - target.size());
    data.push_back(1);
    data.push_back(0);
    append_u16(data, 0);
    append_u32(data, 36);
    data.insert(data.end(), {'F', 'L', 'P', 'A'});
    data.push_back(1);
    data.insert(data.end(), 3, 0);
    append_u32(data, 12);
    data.push_back(0);
    data.push_back(0);
    data.push_back(2);
    data.push_back(0);
    append_u16(data, 2);
    append_u16(data, 0);
    append_u32(data, 12);
    for (const float value : {0.0f, 130.0f, 0.0f, 60.0f, 128.0f, 0.0f}) {
        std::uint32_t bits = 0;
        std::memcpy(&bits, &value, sizeof(bits));
        append_u32(data, bits);
    }
    return data;
}

std::vector<std::uint8_t> make_alyt(
        const std::vector<std::pair<std::string, std::uint8_t>>& files) {
    std::vector<std::uint8_t> data{'A', 'L', 'Y', 'T', 'S', 'A', 'R', 'C'};
    append_u16(data, 20);
    append_u16(data, 0xfeff);
    const auto file_size_offset = data.size();
    append_u32(data, 0);
    const auto data_offset_offset = data.size();
    append_u32(data, 0);
    append_u16(data, 0x0100);
    append_u16(data, 0);
    data.insert(data.end(), {'S', 'F', 'A', 'T'});
    append_u16(data, 12);
    append_u16(data, static_cast<std::uint16_t>(files.size()));
    append_u32(data, 0x65);
    const auto nodes_offset = data.size();
    data.resize(data.size() + files.size() * 16);
    data.insert(data.end(), {'S', 'F', 'N', 'T'});
    append_u16(data, 8);
    append_u16(data, 0);
    std::vector<std::uint32_t> name_offsets;
    for (const auto& [name, format] : files) {
        static_cast<void>(format);
        name_offsets.push_back(static_cast<std::uint32_t>(data.size() -
                                                          (nodes_offset + files.size() * 16 + 8)));
        data.insert(data.end(), name.begin(), name.end());
        data.push_back(0);
        while ((data.size() - 4) % 4 != 0) {
            data.push_back(0);
        }
    }
    while ((data.size() - 4) % 4 != 0) {
        data.push_back(0);
    }
    const auto sarc_data_offset = static_cast<std::uint32_t>(data.size() - 4);
    std::uint32_t file_offset = 0;
    for (std::size_t index = 0; index < files.size(); ++index) {
        const auto file = files[index].first.size() >= 6 &&
                files[index].first.compare(files[index].first.size() - 6, 6, ".bflan") == 0
            ? make_bflan() : make_bflim(files[index].second);
        const auto node = nodes_offset + index * 16;
        set_u32(data, node, 0);
        set_u32(data, node + 4, 0x01000000u | name_offsets[index] / 4);
        set_u32(data, node + 8, file_offset);
        file_offset += static_cast<std::uint32_t>(file.size());
        set_u32(data, node + 12, file_offset);
        data.insert(data.end(), file.begin(), file.end());
    }
    set_u32(data, file_size_offset, static_cast<std::uint32_t>(data.size() - 4));
    set_u32(data, data_offset_offset, sarc_data_offset);
    return data;
}

std::vector<std::uint8_t> compress_literals(const std::vector<std::uint8_t>& data) {
    if (data.size() > 0x00ffffff) {
        throw std::runtime_error("test fixture is too large");
    }
    std::vector<std::uint8_t> result{0x11,
        static_cast<std::uint8_t>(data.size()),
        static_cast<std::uint8_t>(data.size() >> 8),
        static_cast<std::uint8_t>(data.size() >> 16)};
    for (std::size_t offset = 0; offset < data.size(); offset += 8) {
        result.push_back(0);
        const auto count = std::min<std::size_t>(8, data.size() - offset);
        result.insert(result.end(), data.begin() + static_cast<std::ptrdiff_t>(offset),
                      data.begin() + static_cast<std::ptrdiff_t>(offset + count));
    }
    return result;
}

} // namespace

int main() {
    try {
        const auto title = compress_literals(make_alyt({
            {"timg/LangSel_BG_UPP_00.bflim", 5},
            {"timg/LangSel_BG_sea_tex.bflim", 10},
            {"timg/LangSel_BG_sea_tex_01.bflim", 5},
            {"timg/LangSel_BG_sea.bflim", 13},
            {"timg/Common_BG_PTN_01.bflim", 2},
            {"timg/TitleMenu_Report_BG_00.bflim", 9},
            {"timg/TitleMenu_Button_BG_Yellow.bflim", 8},
            {"timg/TitleMenu_Button_BG_Yellow_c.bflim", 8},
            {"timg/TitleMenu_Button_BG_Yellow_r.bflim", 8},
            {"timg/TitleMenu_Button_BG_Red.bflim", 8},
            {"timg/TitleMenu_Button_BG_Red_c.bflim", 8},
            {"timg/TitleMenu_Button_BG_Red_r.bflim", 8},
        }));
        const auto common = compress_literals(make_alyt({
            {"timg/Common_Cursor_02.bflim", 8},
        }));
        const auto decoded = PokemonMoon::decode_title_menu_resources(title, common);
        if (decoded.report_background.width != 8 || decoded.report_background.height != 8 ||
                decoded.report_background.rgba.size() != 256 ||
                decoded.report_background.rgba[0] != 21 ||
                decoded.report_background.rgba[1] != 30 ||
                decoded.report_background.rgba[2] != 20 ||
                decoded.report_background.rgba[3] != 10) {
            throw std::runtime_error("RGBA8 BFLIM decode failed");
        }
        if (decoded.cursor.width != 8 || decoded.cursor.height != 8 ||
                decoded.cursor.rgba.size() != 256 || decoded.cursor.rgba[0] != 17 ||
                decoded.cursor.rgba[1] != 34 || decoded.cursor.rgba[2] != 51 ||
                decoded.cursor.rgba[3] != 68) {
            throw std::runtime_error("RGBA4 BFLIM decode failed");
        }

        const auto language = compress_literals(make_alyt({
            {"timg/LangSel_BG_UPP_00.bflim", 5},
            {"timg/LangSel_BG_sea_tex.bflim", 10},
            {"timg/LangSel_BG_sea_tex_01.bflim", 5},
            {"timg/LangSel_BG_sea.bflim", 13},
            {"timg/LangSel_Plate_00.bflim", 11},
            {"timg/LangSel_Plate_01.bflim", 9},
            {"timg/langSel_Button_00.bflim", 8},
            {"timg/langSel_Button_01.bflim", 8},
            {"timg/langSel_Button_00a.bflim", 8},
            {"timg/SelectButton_Basic_White_00.bflim", 8},
            {"timg/SelectButton_Basic_White_01.bflim", 8},
            {"timg/SelectButton_Basic_White_02.bflim", 8},
            {"timg/LangSel_ukiwa.bflim", 8},
            {"timg/LangSel_ukiwa_01.bflim", 8},
            {"timg/LangSel_pika_Tail.bflim", 8},
            {"timg/LangSel_pika_Body.bflim", 8},
            {"timg/LangSel_pika_RK.bflim", 8},
            {"timg/LangSel_pika_LK.bflim", 8},
            {"timg/LangSel_pika_RP.bflim", 8},
            {"timg/LangSel_pika_LP.bflim", 8},
            {"timg/LangSel_pika_Head.bflim", 8},
            {"timg/LangSel_pika_R_Ear.bflim", 8},
            {"timg/LangSel_pika_L_Ear.bflim", 8},
            {"timg/LangSel_pika_Eye_00.bflim", 8},
            {"timg/LangSel_pika_Eye_01.bflim", 8},
            {"timg/LangSel_pika_Eye_02.bflim", 8},
            {"timg/Common_BG_PTN_00.bflim", 12},
            {"timg/Common_BG_PTN_01.bflim", 2},
            {"timg/Window_Basic_00.bflim", 11},
            {"timg/Window_Basic_01.bflim", 11},
            {"anim/LangSelect_MIN_UPP_Chara_00.bflan", 0},
            {"anim/LangSelect_MIN_UPP_BG_Loop_00.bflan", 0},
            {"anim/Common_BG_LOW_00_bg_loop_00.bflan", 0},
            {"timg/lang_select_jp.bflim", 1},
            {"timg/lang_select_usa.bflim", 1},
            {"timg/lang_select_esp.bflim", 1},
            {"timg/lang_select_fra.bflim", 1},
            {"timg/lang_select_ita.bflim", 1},
            {"timg/lang_select_deu.bflim", 1},
            {"timg/lang_select_kor.bflim", 1},
            {"timg/lang_select_simp.bflim", 1},
            {"timg/lang_select_trad.bflim", 1},
        }));
        const auto decoded_language = PokemonMoon::decode_startup_language_resources(language, common);
        if (decoded_language.upper_background.width != 8 ||
                decoded_language.sea_pattern.height != 8 ||
                decoded_language.languages[8].rgba.size() != 256 ||
                 decoded_language.plate.rgba[3] != 0 ||
                 decoded_language.pikachu[9].rgba.size() != 256 ||
                 decoded_language.character_idle.frame_count != 60 ||
                 decoded_language.character_idle.tracks.size() != 1 ||
                 decoded_language.character_idle.tracks[0].keys[1].value != 128.0f ||
                 decoded_language.languages[8].rgba[0] != 0x23 ||
                 decoded_language.languages[8].rgba[1] != 0x3a ||
                 decoded_language.languages[8].rgba[2] != 0x3b ||
                decoded_language.languages[8].rgba[3] == 255) {
            throw std::runtime_error("startup language resource decode failed");
        }

        const auto malformed_title = compress_literals(make_alyt({
            {"timg/LangSel_BG_UPP_00.bflim", 5},
            {"timg/LangSel_BG_sea_tex.bflim", 20},
            {"timg/LangSel_BG_sea.bflim", 13},
            {"timg/Common_BG_PTN_01.bflim", 2},
            {"timg/TitleMenu_Report_BG_00.bflim", 9},
            {"timg/TitleMenu_Button_BG_Yellow.bflim", 8},
            {"timg/TitleMenu_Button_BG_Yellow_c.bflim", 8},
            {"timg/TitleMenu_Button_BG_Yellow_r.bflim", 8},
            {"timg/TitleMenu_Button_BG_Red.bflim", 8},
            {"timg/TitleMenu_Button_BG_Red_c.bflim", 8},
            {"timg/TitleMenu_Button_BG_Red_r.bflim", 8},
        }));
        bool malformed_rejected = false;
        try {
            static_cast<void>(PokemonMoon::decode_title_menu_resources(malformed_title, common));
        } catch (const std::runtime_error&) {
            malformed_rejected = true;
        }
        if (!malformed_rejected) {
            throw std::runtime_error("invalid ETC1 differential block was accepted");
        }
        return 0;
    } catch (const std::exception& error) {
        std::cerr << "title_resources_test: " << error.what() << '\n';
        return 3;
    }
}
