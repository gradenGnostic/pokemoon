#include "pokemoon/title_resources.hpp"

#include <algorithm>
#include <array>
#include <cmath>
#include <cstring>
#include <limits>
#include <stdexcept>
#include <string>

namespace {

std::uint16_t read_u16(const std::vector<std::uint8_t>& data, std::size_t offset) {
    if (offset > data.size() || data.size() - offset < 2) {
        throw std::runtime_error("truncated retail title resource");
    }
    return static_cast<std::uint16_t>(
        static_cast<std::uint16_t>(data[offset]) |
        static_cast<std::uint16_t>(data[offset + 1]) << 8);
}

std::uint32_t read_u32(const std::vector<std::uint8_t>& data, std::size_t offset) {
    if (offset > data.size() || data.size() - offset < 4) {
        throw std::runtime_error("truncated retail title resource");
    }
    return static_cast<std::uint32_t>(data[offset]) |
           static_cast<std::uint32_t>(data[offset + 1]) << 8 |
           static_cast<std::uint32_t>(data[offset + 2]) << 16 |
           static_cast<std::uint32_t>(data[offset + 3]) << 24;
}

float read_f32(const std::vector<std::uint8_t>& data, std::size_t offset) {
    const auto bits = read_u32(data, offset);
    float value = 0.0f;
    std::memcpy(&value, &bits, sizeof(value));
    return value;
}

std::string read_fixed_string(const std::vector<std::uint8_t>& data,
                              std::size_t offset,
                              std::size_t size) {
    if (offset > data.size() || data.size() - offset < size) {
        throw std::runtime_error("truncated retail resource string");
    }
    const auto begin = data.begin() + static_cast<std::ptrdiff_t>(offset);
    const auto end = std::find(begin, begin + static_cast<std::ptrdiff_t>(size), 0);
    return {begin, end};
}

void require_magic(const std::vector<std::uint8_t>& data,
                   std::size_t offset,
                   const char* magic) {
    if (offset > data.size() || data.size() - offset < 4 ||
            !std::equal(magic, magic + 4, data.begin() + static_cast<std::ptrdiff_t>(offset))) {
        throw std::runtime_error(std::string("missing retail resource section: ") +
                                 std::string(magic, 4));
    }
}

std::vector<std::uint8_t> decompress_lz11(const std::vector<std::uint8_t>& source) {
    if (source.size() < 4 || source[0] != 0x11) {
        throw std::runtime_error("title resource is not LZ11 data");
    }
    std::uint32_t output_size = static_cast<std::uint32_t>(source[1]) |
                                static_cast<std::uint32_t>(source[2]) << 8 |
                                static_cast<std::uint32_t>(source[3]) << 16;
    std::size_t input = 4;
    if (output_size == 0) {
        output_size = read_u32(source, input);
        input += 4;
    }
    if (output_size == 0) {
        throw std::runtime_error("LZ11 title resource has an empty output");
    }
    constexpr std::uint32_t maximum_title_resource_size = 64u * 1024u * 1024u;
    if (output_size > maximum_title_resource_size) {
        throw std::runtime_error("LZ11 title resource exceeds the PC decode limit");
    }

    std::vector<std::uint8_t> output;
    output.reserve(output_size);
    while (output.size() < output_size) {
        if (input >= source.size()) {
            throw std::runtime_error("truncated LZ11 title resource");
        }
        const auto flags = source[input++];
        for (int bit = 7; bit >= 0 && output.size() < output_size; --bit) {
            if ((flags & (1u << bit)) == 0) {
                if (input >= source.size()) {
                    throw std::runtime_error("truncated LZ11 literal");
                }
                output.push_back(source[input++]);
                continue;
            }
            if (source.size() - input < 2) {
                throw std::runtime_error("truncated LZ11 match");
            }
            const auto first = source[input++];
            const auto second = source[input++];
            std::size_t length = 0;
            std::size_t distance = 0;
            if ((first >> 4) == 0) {
                if (input >= source.size()) {
                    throw std::runtime_error("truncated LZ11 long match");
                }
                const auto third = source[input++];
                length = (static_cast<std::size_t>(first & 0x0f) << 4 |
                          static_cast<std::size_t>(second >> 4)) + 0x11;
                distance = (static_cast<std::size_t>(second & 0x0f) << 8 | third) + 1;
            } else if ((first >> 4) == 1) {
                if (source.size() - input < 2) {
                    throw std::runtime_error("truncated LZ11 very long match");
                }
                const auto third = source[input++];
                const auto fourth = source[input++];
                length = (static_cast<std::size_t>(first & 0x0f) << 12 |
                          static_cast<std::size_t>(second) << 4 |
                          static_cast<std::size_t>(third >> 4)) + 0x111;
                distance = (static_cast<std::size_t>(third & 0x0f) << 8 | fourth) + 1;
            } else {
                length = static_cast<std::size_t>(first >> 4) + 1;
                distance = (static_cast<std::size_t>(first & 0x0f) << 8 | second) + 1;
            }
            if (distance > output.size()) {
                throw std::runtime_error("invalid LZ11 match distance");
            }
            for (std::size_t index = 0; index < length && output.size() < output_size; ++index) {
                output.push_back(output[output.size() - distance]);
            }
        }
    }
    return output;
}

std::vector<std::uint8_t> extract_sarc(const std::vector<std::uint8_t>& container,
                                       const std::string& wanted) {
    const std::array<std::uint8_t, 4> magic{{'S', 'A', 'R', 'C'}};
    const auto found = std::search(container.begin(), container.end(), magic.begin(), magic.end());
    if (found == container.end()) {
        throw std::runtime_error("title ALYT does not contain a SARC");
    }
    const auto sarc = static_cast<std::size_t>(std::distance(container.begin(), found));
    const auto header_size = read_u16(container, sarc + 4);
    const auto data_offset = read_u32(container, sarc + 12);
    const auto sfat = sarc + header_size;
    require_magic(container, sfat, "SFAT");
    const auto sfat_header_size = read_u16(container, sfat + 4);
    const auto node_count = read_u16(container, sfat + 6);
    const auto nodes = sfat + sfat_header_size;
    const auto sfnt = nodes + static_cast<std::size_t>(node_count) * 16;
    require_magic(container, sfnt, "SFNT");
    const auto names = sfnt + read_u16(container, sfnt + 4);

    for (std::size_t index = 0; index < node_count; ++index) {
        const auto node = nodes + index * 16;
        const auto name_field = read_u32(container, node + 4);
        const auto name_offset = names + static_cast<std::size_t>(name_field & 0x00ffffffu) * 4;
        if (name_offset >= container.size()) {
            throw std::runtime_error("invalid SARC title resource name offset");
        }
        const auto terminator = std::find(container.begin() + static_cast<std::ptrdiff_t>(name_offset),
                                          container.end(), 0);
        if (terminator == container.end()) {
            throw std::runtime_error("unterminated SARC title resource name");
        }
        const std::string name(container.begin() + static_cast<std::ptrdiff_t>(name_offset), terminator);
        if (name != wanted) {
            continue;
        }
        const auto start = sarc + data_offset + read_u32(container, node + 8);
        const auto end = sarc + data_offset + read_u32(container, node + 12);
        if (start > end || end > container.size()) {
            throw std::runtime_error("invalid SARC title resource extent");
        }
        return {container.begin() + static_cast<std::ptrdiff_t>(start),
                container.begin() + static_cast<std::ptrdiff_t>(end)};
    }
    throw std::runtime_error("missing SARC title resource: " + wanted);
}

std::uint32_t next_power_of_two(std::uint32_t value) {
    std::uint32_t result = 8;
    while (result < value) {
        if (result > std::numeric_limits<std::uint32_t>::max() / 2) {
            throw std::runtime_error("BFLIM title texture dimensions overflow");
        }
        result *= 2;
    }
    return result;
}

std::pair<std::size_t, std::size_t> bflim_destination(std::size_t source_pixel,
                                                      std::size_t padded_width,
                                                      std::size_t padded_height,
                                                      std::uint8_t orientation) {
    const auto stride = orientation == 0 || orientation == 2
        ? padded_width : padded_height;
    const auto macro = source_pixel / 64;
    const auto within = source_pixel & 63;
    const auto tiled_x = (macro % (stride / 8)) * 8 +
                         (within & 1) + ((within >> 1) & 2) + ((within >> 2) & 4);
    const auto tiled_y = (macro / (stride / 8)) * 8 +
                         ((within >> 1) & 1) + ((within >> 2) & 2) +
                         ((within >> 3) & 4);
    if (orientation == 8) {
        return {tiled_y, tiled_x};
    }
    if (orientation == 4) {
        return {tiled_y, padded_height - 1 - tiled_x};
    }
    if (orientation == 2) {
        return {tiled_x, padded_height - 1 - tiled_y};
    }
    return {tiled_x, tiled_y};
}

std::uint8_t clamp_channel(int value) {
    return static_cast<std::uint8_t>(std::max(0, std::min(value, 255)));
}

int sign3(int value) {
    return (value + 4) % 8 - 4;
}

std::array<std::array<std::uint8_t, 4>, 16> decode_etc1_block(
        const std::vector<std::uint8_t>& source,
        std::size_t offset) {
    static constexpr std::array<std::array<int, 4>, 8> modifiers{{
        {{2, 8, -2, -8}}, {{5, 17, -5, -17}}, {{9, 29, -9, -29}},
        {{13, 42, -13, -42}}, {{18, 60, -18, -60}}, {{24, 80, -24, -80}},
        {{33, 106, -33, -106}}, {{47, 183, -47, -183}},
    }};
    static constexpr std::array<int, 16> order{{
        0, 4, 1, 5, 8, 12, 9, 13, 2, 6, 3, 7, 10, 14, 11, 15,
    }};
    if (offset > source.size() || source.size() - offset < 8) {
        throw std::runtime_error("truncated ETC1 title texture");
    }
    const auto lsb = read_u16(source, offset);
    const auto msb = read_u16(source, offset + 2);
    const auto flags = source[offset + 4];
    const auto blue = source[offset + 5];
    const auto green = source[offset + 6];
    const auto red = source[offset + 7];
    const bool differential = (flags & 2) != 0;
    const int depth = differential ? 32 : 16;
    std::array<int, 3> base0{{red * depth / 256, green * depth / 256,
                              blue * depth / 256}};
    std::array<int, 3> base1{};
    if (differential) {
        base1 = {{base0[0] + sign3(red & 7), base0[1] + sign3(green & 7),
                  base0[2] + sign3(blue & 7)}};
        if (std::any_of(base1.begin(), base1.end(), [](int channel) {
                return channel < 0 || channel > 31;
            })) {
            throw std::runtime_error("invalid ETC1 differential title block");
        }
    } else {
        base1 = {{red & 15, green & 15, blue & 15}};
    }
    for (auto* base : {&base0, &base1}) {
        for (auto& channel : *base) {
            channel = depth == 16 ? channel * 17 : (channel << 3) | (channel >> 2);
        }
    }

    std::array<std::array<std::uint8_t, 4>, 16> pixels{};
    const int flip_mask = (flags & 1) != 0 ? 2 : 8;
    for (std::size_t output = 0; output < order.size(); ++output) {
        const int index = order[output];
        const bool second = (index & flip_mask) != 0;
        const auto& base = second ? base1 : base0;
        const auto table = static_cast<std::size_t>((flags >> (second ? 2 : 5)) & 7);
        const auto selector = static_cast<std::size_t>(((msb >> index) & 1) * 2 +
                                                       ((lsb >> index) & 1));
        const auto modifier = modifiers[table][selector];
        pixels[output] = {{clamp_channel(base[0] + modifier),
                           clamp_channel(base[1] + modifier),
                           clamp_channel(base[2] + modifier), 255}};
    }
    return pixels;
}

Platform::Image decode_bflim(const std::vector<std::uint8_t>& source) {
    const std::array<std::uint8_t, 4> magic{{'F', 'L', 'I', 'M'}};
    const auto found = std::find_end(source.begin(), source.end(), magic.begin(), magic.end());
    if (found == source.end()) {
        throw std::runtime_error("title texture is not BFLIM data");
    }
    const auto footer = static_cast<std::size_t>(std::distance(source.begin(), found));
    require_magic(source, footer + 20, "imag");
    const auto width = read_u16(source, footer + 28);
    const auto height = read_u16(source, footer + 30);
    const auto format = source.at(footer + 34);
    const auto orientation = source.at(footer + 35);
    if (orientation != 0 && orientation != 2 && orientation != 4 && orientation != 8) {
        throw std::runtime_error("unsupported title BFLIM orientation");
    }
    const auto data_size = read_u32(source, footer + 36);
    const auto bytes_per_pixel = format == 9 ? 4u :
                                 format == 8 || format == 5 ? 2u : 0u;
    const auto bits_per_pixel = format == 10 || format == 12 || format == 13 ? 4u :
                                 format == 11 ? 8u :
                                 format <= 2 ? 8u :
                                 bytes_per_pixel * 8u;
    if (width == 0 || height == 0 || bits_per_pixel == 0) {
        throw std::runtime_error("unsupported title BFLIM texture format");
    }
    const auto padded_width = next_power_of_two(width);
    const auto padded_height = next_power_of_two(height);
    const auto expected_size = static_cast<std::uint64_t>(padded_width) * padded_height *
                               bits_per_pixel / 8;
    constexpr std::uint64_t maximum_title_pixels = 16u * 1024u * 1024u;
    if (static_cast<std::uint64_t>(width) * height > maximum_title_pixels ||
            data_size != expected_size || data_size > source.size() || footer != data_size) {
        throw std::runtime_error("invalid title BFLIM texture size");
    }

    Platform::Image image;
    image.width = width;
    image.height = height;
    image.rgba.resize(static_cast<std::size_t>(width) * height * 4);
    const auto write_pixel = [&](std::size_t pixel, const std::array<std::uint8_t, 4>& rgba) {
        const auto [x, y] = bflim_destination(pixel, padded_width, padded_height, orientation);
        if (x >= width || y >= height) {
            return;
        }
        const auto output = (y * width + x) * 4;
        std::copy(rgba.begin(), rgba.end(), image.rgba.begin() +
                  static_cast<std::ptrdiff_t>(output));
    };
    if (format == 10 || format == 11) {
        std::size_t pixel = 0;
        const auto block_size = format == 11 ? 16u : 8u;
        for (std::size_t input = 0; input < data_size; input += block_size) {
            auto block = decode_etc1_block(source, input + (format == 11 ? 8u : 0u));
            if (format == 11) {
                for (std::size_t index = 0; index < block.size(); ++index) {
                    block[index][3] = static_cast<std::uint8_t>(
                        ((source[input + index / 2] >> ((index & 1) * 4)) & 0x0f) * 17);
                }
            }
            for (const auto& rgba : block) {
                write_pixel(pixel++, rgba);
            }
        }
        return image;
    }
    for (std::size_t pixel = 0;
            pixel < static_cast<std::size_t>(padded_width) * padded_height;
            ++pixel) {
            const auto [x, y] = bflim_destination(pixel, padded_width, padded_height,
                                                  orientation);
            if (x >= width || y >= height) {
                continue;
            }
            const auto input = format == 12 || format == 13 ? pixel / 2 :
                               format <= 2 ? pixel : pixel * bytes_per_pixel;
            const auto output = (y * width + x) * 4;
            if (format == 9) {
                image.rgba[output] = source[input + 3];
                image.rgba[output + 1] = source[input + 2];
                image.rgba[output + 2] = source[input + 1];
                image.rgba[output + 3] = source[input];
            } else if (format == 8) {
                const auto packed = static_cast<std::uint16_t>(source[input]) |
                                    static_cast<std::uint16_t>(source[input + 1]) << 8;
                image.rgba[output] = static_cast<std::uint8_t>(((packed >> 12) & 0x0f) * 17);
                image.rgba[output + 1] = static_cast<std::uint8_t>(((packed >> 8) & 0x0f) * 17);
                image.rgba[output + 2] = static_cast<std::uint8_t>(((packed >> 4) & 0x0f) * 17);
                image.rgba[output + 3] = static_cast<std::uint8_t>((packed & 0x0f) * 17);
            } else if (format == 5) {
                const auto packed = static_cast<std::uint16_t>(source[input]) |
                                    static_cast<std::uint16_t>(source[input + 1]) << 8;
                image.rgba[output] = static_cast<std::uint8_t>(
                    ((packed >> 11) & 0x1f) * 255 / 31);
                image.rgba[output + 1] = static_cast<std::uint8_t>(
                    ((packed >> 5) & 0x3f) * 255 / 63);
                image.rgba[output + 2] = static_cast<std::uint8_t>(
                    (packed & 0x1f) * 255 / 31);
                image.rgba[output + 3] = 255;
            } else if (format == 0) {
                image.rgba[output] = source[input];
                image.rgba[output + 1] = source[input];
                image.rgba[output + 2] = source[input];
                image.rgba[output + 3] = 255;
            } else if (format == 1) {
                image.rgba[output] = 255;
                image.rgba[output + 1] = 255;
                image.rgba[output + 2] = 255;
                image.rgba[output + 3] = source[input];
            } else if (format == 13) {
                const auto alpha = static_cast<std::uint8_t>(
                    ((source[input] >> ((pixel & 1) * 4)) & 0x0f) * 17);
                image.rgba[output] = 255;
                image.rgba[output + 1] = 255;
                image.rgba[output + 2] = 255;
                image.rgba[output + 3] = alpha;
            } else if (format == 12) {
                const auto luminance = static_cast<std::uint8_t>(
                    ((source[input] >> ((pixel & 1) * 4)) & 0x0f) * 17);
                image.rgba[output] = luminance;
                image.rgba[output + 1] = luminance;
                image.rgba[output + 2] = luminance;
                image.rgba[output + 3] = 255;
            } else {
                const auto luminance = static_cast<std::uint8_t>((source[input] >> 4) * 17);
                image.rgba[output] = luminance;
                image.rgba[output + 1] = luminance;
                image.rgba[output + 2] = luminance;
                image.rgba[output + 3] = static_cast<std::uint8_t>((source[input] & 0x0f) * 17);
            }
    }
    return image;
}

PokemonMoon::LayoutAnimation decode_bflan(const std::vector<std::uint8_t>& source) {
    require_magic(source, 0, "FLAN");
    if (read_u16(source, 4) != 0xfeff || read_u16(source, 6) != 20 ||
            read_u32(source, 12) != source.size()) {
        throw std::runtime_error("invalid startup layout animation header");
    }
    PokemonMoon::LayoutAnimation animation;
    auto section = std::size_t{20};
    const auto section_count = read_u16(source, 16);
    for (std::size_t section_index = 0; section_index < section_count; ++section_index) {
        if (section > source.size() || source.size() - section < 8) {
            throw std::runtime_error("truncated startup layout animation section");
        }
        const auto section_size = static_cast<std::size_t>(read_u32(source, section + 4));
        if (section_size < 8 || section_size > source.size() - section) {
            throw std::runtime_error("invalid startup layout animation section size");
        }
        if (read_fixed_string(source, section, 4) != "pai1") {
            section += section_size;
            continue;
        }
        animation.frame_count = read_u16(source, section + 8);
        animation.loop = source.at(section + 10) != 0;
        const auto texture_count = read_u16(source, section + 12);
        const auto content_count = read_u16(source, section + 14);
        const auto content_table = section + read_u32(source, section + 16);
        if (content_table > section + section_size ||
                static_cast<std::size_t>(content_count) * 4 >
                    section + section_size - content_table) {
            throw std::runtime_error("invalid startup animation content table");
        }
        static_cast<void>(texture_count);
        for (std::size_t content_index = 0; content_index < content_count; ++content_index) {
            const auto content = section + read_u32(source, content_table + content_index * 4);
            if (content > section + section_size || section + section_size - content < 32) {
                throw std::runtime_error("invalid startup animation content");
            }
            const auto target_name = read_fixed_string(source, content, 28);
            const auto tag_count = source.at(content + 28);
            const auto target_type = source.at(content + 29);
            for (std::size_t tag_index = 0; tag_index < tag_count; ++tag_index) {
                auto tag = content + read_u32(source, content + 32 + tag_index * 4);
                if (target_type == 2) {
                    tag += 4;
                }
                if (tag > section + section_size || section + section_size - tag < 8) {
                    throw std::runtime_error("invalid startup animation tag");
                }
                const auto tag_name = read_fixed_string(source, tag, 4);
                const auto target_count = source.at(tag + 4);
                for (std::size_t target_index = 0; target_index < target_count; ++target_index) {
                    const auto target = tag + read_u32(source, tag + 8 + target_index * 4);
                    if (target > section + section_size || section + section_size - target < 12) {
                        throw std::runtime_error("invalid startup animation target");
                    }
                    PokemonMoon::LayoutAnimationTrack track;
                    track.target = target_name;
                    track.tag = tag_name;
                    track.component = source.at(target);
                    track.channel = source.at(target + 1);
                    const auto curve = source.at(target + 2);
                    if (curve > static_cast<std::uint8_t>(
                            PokemonMoon::LayoutAnimationCurve::Hermite)) {
                        throw std::runtime_error("unsupported startup animation curve");
                    }
                    track.curve = static_cast<PokemonMoon::LayoutAnimationCurve>(curve);
                    const auto key_count = read_u16(source, target + 4);
                    auto key = target + read_u32(source, target + 8);
                    for (std::size_t key_index = 0; key_index < key_count; ++key_index) {
                        PokemonMoon::LayoutAnimationKey decoded_key;
                        if (track.curve == PokemonMoon::LayoutAnimationCurve::Hermite) {
                            decoded_key.frame = read_f32(source, key);
                            decoded_key.value = read_f32(source, key + 4);
                            decoded_key.slope = read_f32(source, key + 8);
                            key += 12;
                        } else if (track.curve == PokemonMoon::LayoutAnimationCurve::Step) {
                            decoded_key.frame = read_f32(source, key);
                            decoded_key.value = static_cast<float>(read_u16(source, key + 4));
                            key += 8;
                        } else {
                            decoded_key.frame = static_cast<float>(key_index);
                            decoded_key.value = read_f32(source, key);
                            key += 4;
                        }
                        if (!std::isfinite(decoded_key.frame) ||
                                !std::isfinite(decoded_key.value) ||
                                !std::isfinite(decoded_key.slope)) {
                            throw std::runtime_error("non-finite startup animation key");
                        }
                        track.keys.push_back(decoded_key);
                    }
                    animation.tracks.push_back(std::move(track));
                }
            }
        }
        section += section_size;
    }
    if (animation.frame_count == 0 || animation.tracks.empty()) {
        throw std::runtime_error("startup layout animation has no playable tracks");
    }
    return animation;
}

} // namespace

namespace PokemonMoon {

TitleMenuResources decode_title_menu_resources(
    const std::vector<std::uint8_t>& title_layout_archive,
    const std::vector<std::uint8_t>& common_layout_archive) {
    const auto title_layout = decompress_lz11(title_layout_archive);
    const auto common_layout = decompress_lz11(common_layout_archive);
    require_magic(title_layout, 0, "ALYT");
    require_magic(common_layout, 0, "ALYT");
    auto sea_pattern = decode_bflim(extract_sarc(
        title_layout, "timg/LangSel_BG_sea_tex.bflim"));
    const auto sea_mask = decode_bflim(extract_sarc(
        title_layout, "timg/LangSel_BG_sea.bflim"));
    if (sea_pattern.width != sea_mask.width || sea_pattern.height != sea_mask.height) {
        throw std::runtime_error("title sea texture and mask dimensions differ");
    }
    for (std::size_t offset = 3; offset < sea_pattern.rgba.size(); offset += 4) {
        sea_pattern.rgba[offset] = sea_mask.rgba[offset];
    }
    return {
        decode_bflim(extract_sarc(title_layout, "timg/LangSel_BG_UPP_00.bflim")),
        std::move(sea_pattern),
        decode_bflim(extract_sarc(title_layout, "timg/Common_BG_PTN_01.bflim")),
        decode_bflim(extract_sarc(title_layout, "timg/TitleMenu_Report_BG_00.bflim")),
        decode_bflim(extract_sarc(common_layout, "timg/Common_Cursor_02.bflim")),
        {{
            decode_bflim(extract_sarc(title_layout, "timg/TitleMenu_Button_BG_Yellow.bflim")),
            decode_bflim(extract_sarc(title_layout, "timg/TitleMenu_Button_BG_Yellow_c.bflim")),
            decode_bflim(extract_sarc(title_layout, "timg/TitleMenu_Button_BG_Yellow_r.bflim")),
        }},
        {{
            decode_bflim(extract_sarc(title_layout, "timg/TitleMenu_Button_BG_Red.bflim")),
            decode_bflim(extract_sarc(title_layout, "timg/TitleMenu_Button_BG_Red_c.bflim")),
            decode_bflim(extract_sarc(title_layout, "timg/TitleMenu_Button_BG_Red_r.bflim")),
        }},
    };
}

StartupLanguageResources decode_startup_language_resources(
        const std::vector<std::uint8_t>& language_layout_archive,
        const std::vector<std::uint8_t>& common_layout_archive) {
    const auto layout = decompress_lz11(language_layout_archive);
    auto common_layout = layout;
    if (!common_layout_archive.empty()) {
        common_layout = decompress_lz11(common_layout_archive);
        require_magic(common_layout, 0, "ALYT");
    }
    auto sea_pattern = decode_bflim(extract_sarc(
        layout, "timg/LangSel_BG_sea_tex.bflim"));
    auto sea_pattern_1 = decode_bflim(extract_sarc(
        layout, "timg/LangSel_BG_sea_tex_01.bflim"));
    auto sea_mask = decode_bflim(extract_sarc(
        layout, "timg/LangSel_BG_sea.bflim"));
    if (sea_pattern.width != sea_mask.width || sea_pattern.height != sea_mask.height ||
            sea_pattern_1.width != sea_mask.width || sea_pattern_1.height != sea_mask.height) {
        throw std::runtime_error("language sea texture and mask dimensions differ");
    }
    for (std::size_t offset = 0; offset < sea_pattern.rgba.size(); offset += 4) {
        const auto luminance = sea_pattern.rgba[offset];
        sea_pattern.rgba[offset] = static_cast<std::uint8_t>(25 + luminance * 50 / 255);
        sea_pattern.rgba[offset + 1] = static_cast<std::uint8_t>(185 + luminance * 45 / 255);
        sea_pattern.rgba[offset + 2] = static_cast<std::uint8_t>(200 + luminance * 35 / 255);
    }
    std::array<Platform::Image, 9> languages{{
        decode_bflim(extract_sarc(layout, "timg/lang_select_jp.bflim")),
        decode_bflim(extract_sarc(layout, "timg/lang_select_usa.bflim")),
        decode_bflim(extract_sarc(layout, "timg/lang_select_esp.bflim")),
        decode_bflim(extract_sarc(layout, "timg/lang_select_fra.bflim")),
        decode_bflim(extract_sarc(layout, "timg/lang_select_deu.bflim")),
        decode_bflim(extract_sarc(layout, "timg/lang_select_ita.bflim")),
        decode_bflim(extract_sarc(layout, "timg/lang_select_kor.bflim")),
        decode_bflim(extract_sarc(layout, "timg/lang_select_trad.bflim")),
        decode_bflim(extract_sarc(layout, "timg/lang_select_simp.bflim")),
    }};
    for (auto& language : languages) {
        for (std::size_t offset = 0; offset < language.rgba.size(); offset += 4) {
            language.rgba[offset] = 0x23;
            language.rgba[offset + 1] = 0x3a;
            language.rgba[offset + 2] = 0x3b;
        }
    }
    return {
        decode_bflim(extract_sarc(layout, "timg/LangSel_BG_UPP_00.bflim")),
        std::move(sea_pattern),
        std::move(sea_pattern_1),
        std::move(sea_mask),
        decode_bflim(extract_sarc(layout, "timg/LangSel_Plate_00.bflim")),
        decode_bflim(extract_sarc(layout, "timg/LangSel_Plate_01.bflim")),
        {{
            decode_bflim(extract_sarc(layout, "timg/langSel_Button_00.bflim")),
            decode_bflim(extract_sarc(layout, "timg/langSel_Button_01.bflim")),
            decode_bflim(extract_sarc(layout, "timg/langSel_Button_00a.bflim")),
        }},
        {{
            decode_bflim(extract_sarc(layout, "timg/SelectButton_Basic_White_00.bflim")),
            decode_bflim(extract_sarc(layout, "timg/SelectButton_Basic_White_01.bflim")),
            decode_bflim(extract_sarc(layout, "timg/SelectButton_Basic_White_02.bflim")),
        }},
        decode_bflim(extract_sarc(layout, "timg/LangSel_ukiwa.bflim")),
        decode_bflim(extract_sarc(layout, "timg/LangSel_ukiwa_01.bflim")),
        {{
            decode_bflim(extract_sarc(layout, "timg/LangSel_pika_Tail.bflim")),
            decode_bflim(extract_sarc(layout, "timg/LangSel_pika_Body.bflim")),
            decode_bflim(extract_sarc(layout, "timg/LangSel_pika_RK.bflim")),
            decode_bflim(extract_sarc(layout, "timg/LangSel_pika_LK.bflim")),
            decode_bflim(extract_sarc(layout, "timg/LangSel_pika_RP.bflim")),
            decode_bflim(extract_sarc(layout, "timg/LangSel_pika_LP.bflim")),
            decode_bflim(extract_sarc(layout, "timg/LangSel_pika_Head.bflim")),
            decode_bflim(extract_sarc(layout, "timg/LangSel_pika_R_Ear.bflim")),
            decode_bflim(extract_sarc(layout, "timg/LangSel_pika_L_Ear.bflim")),
            decode_bflim(extract_sarc(layout, "timg/LangSel_pika_Eye_00.bflim")),
            decode_bflim(extract_sarc(layout, "timg/LangSel_pika_Eye_01.bflim")),
            decode_bflim(extract_sarc(layout, "timg/LangSel_pika_Eye_02.bflim")),
        }},
        std::move(languages),
        decode_bflim(extract_sarc(layout, "timg/Common_BG_PTN_00.bflim")),
        decode_bflim(extract_sarc(layout, "timg/Common_BG_PTN_01.bflim")),
        decode_bflim(extract_sarc(layout, "timg/Window_Basic_00.bflim")),
        decode_bflim(extract_sarc(layout, "timg/Window_Basic_01.bflim")),
        decode_bflim(extract_sarc(common_layout, "timg/Common_Cursor_02.bflim")),
        decode_bflan(extract_sarc(layout, "anim/LangSelect_MIN_UPP_Chara_00.bflan")),
        decode_bflan(extract_sarc(layout, "anim/LangSelect_MIN_UPP_BG_Loop_00.bflan")),
        decode_bflan(extract_sarc(layout, "anim/Common_BG_LOW_00_bg_loop_00.bflan")),
    };
}

} // namespace PokemonMoon
