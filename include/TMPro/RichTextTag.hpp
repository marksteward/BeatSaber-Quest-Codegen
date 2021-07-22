// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.RichTextTag
  // [TokenAttribute] Offset: FFFFFFFF
  struct RichTextTag/*, public System::Enum*/ {
    public:
    // public System.UInt32 value__
    // Size: 0x4
    // Offset: 0x0
    uint value;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Creating value type constructor for type: RichTextTag
    constexpr RichTextTag(uint value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator uint
    constexpr operator uint() const noexcept {
      return value;
    }
    // static field const value: static public TMPro.RichTextTag BOLD
    static constexpr const uint BOLD = 66u;
    // Get static field: static public TMPro.RichTextTag BOLD
    static TMPro::RichTextTag _get_BOLD();
    // Set static field: static public TMPro.RichTextTag BOLD
    static void _set_BOLD(TMPro::RichTextTag value);
    // static field const value: static public TMPro.RichTextTag SLASH_BOLD
    static constexpr const uint SLASH_BOLD = 1613u;
    // Get static field: static public TMPro.RichTextTag SLASH_BOLD
    static TMPro::RichTextTag _get_SLASH_BOLD();
    // Set static field: static public TMPro.RichTextTag SLASH_BOLD
    static void _set_SLASH_BOLD(TMPro::RichTextTag value);
    // static field const value: static public TMPro.RichTextTag ITALIC
    static constexpr const uint ITALIC = 73u;
    // Get static field: static public TMPro.RichTextTag ITALIC
    static TMPro::RichTextTag _get_ITALIC();
    // Set static field: static public TMPro.RichTextTag ITALIC
    static void _set_ITALIC(TMPro::RichTextTag value);
    // static field const value: static public TMPro.RichTextTag SLASH_ITALIC
    static constexpr const uint SLASH_ITALIC = 1606u;
    // Get static field: static public TMPro.RichTextTag SLASH_ITALIC
    static TMPro::RichTextTag _get_SLASH_ITALIC();
    // Set static field: static public TMPro.RichTextTag SLASH_ITALIC
    static void _set_SLASH_ITALIC(TMPro::RichTextTag value);
    // static field const value: static public TMPro.RichTextTag UNDERLINE
    static constexpr const uint UNDERLINE = 85u;
    // Get static field: static public TMPro.RichTextTag UNDERLINE
    static TMPro::RichTextTag _get_UNDERLINE();
    // Set static field: static public TMPro.RichTextTag UNDERLINE
    static void _set_UNDERLINE(TMPro::RichTextTag value);
    // static field const value: static public TMPro.RichTextTag SLASH_UNDERLINE
    static constexpr const uint SLASH_UNDERLINE = 1626u;
    // Get static field: static public TMPro.RichTextTag SLASH_UNDERLINE
    static TMPro::RichTextTag _get_SLASH_UNDERLINE();
    // Set static field: static public TMPro.RichTextTag SLASH_UNDERLINE
    static void _set_SLASH_UNDERLINE(TMPro::RichTextTag value);
    // static field const value: static public TMPro.RichTextTag STRIKETHROUGH
    static constexpr const uint STRIKETHROUGH = 83u;
    // Get static field: static public TMPro.RichTextTag STRIKETHROUGH
    static TMPro::RichTextTag _get_STRIKETHROUGH();
    // Set static field: static public TMPro.RichTextTag STRIKETHROUGH
    static void _set_STRIKETHROUGH(TMPro::RichTextTag value);
    // static field const value: static public TMPro.RichTextTag SLASH_STRIKETHROUGH
    static constexpr const uint SLASH_STRIKETHROUGH = 1628u;
    // Get static field: static public TMPro.RichTextTag SLASH_STRIKETHROUGH
    static TMPro::RichTextTag _get_SLASH_STRIKETHROUGH();
    // Set static field: static public TMPro.RichTextTag SLASH_STRIKETHROUGH
    static void _set_SLASH_STRIKETHROUGH(TMPro::RichTextTag value);
    // static field const value: static public TMPro.RichTextTag COLOR
    static constexpr const uint COLOR = 81999901u;
    // Get static field: static public TMPro.RichTextTag COLOR
    static TMPro::RichTextTag _get_COLOR();
    // Set static field: static public TMPro.RichTextTag COLOR
    static void _set_COLOR(TMPro::RichTextTag value);
    // static field const value: static public TMPro.RichTextTag SLASH_COLOR
    static constexpr const uint SLASH_COLOR = 1909026194u;
    // Get static field: static public TMPro.RichTextTag SLASH_COLOR
    static TMPro::RichTextTag _get_SLASH_COLOR();
    // Set static field: static public TMPro.RichTextTag SLASH_COLOR
    static void _set_SLASH_COLOR(TMPro::RichTextTag value);
    // static field const value: static public TMPro.RichTextTag SIZE
    static constexpr const uint SIZE = 3061285u;
    // Get static field: static public TMPro.RichTextTag SIZE
    static TMPro::RichTextTag _get_SIZE();
    // Set static field: static public TMPro.RichTextTag SIZE
    static void _set_SIZE(TMPro::RichTextTag value);
    // static field const value: static public TMPro.RichTextTag SLASH_SIZE
    static constexpr const uint SLASH_SIZE = 58429962u;
    // Get static field: static public TMPro.RichTextTag SLASH_SIZE
    static TMPro::RichTextTag _get_SLASH_SIZE();
    // Set static field: static public TMPro.RichTextTag SLASH_SIZE
    static void _set_SLASH_SIZE(TMPro::RichTextTag value);
    // static field const value: static public TMPro.RichTextTag SPRITE
    static constexpr const uint SPRITE = 3303439849u;
    // Get static field: static public TMPro.RichTextTag SPRITE
    static TMPro::RichTextTag _get_SPRITE();
    // Set static field: static public TMPro.RichTextTag SPRITE
    static void _set_SPRITE(TMPro::RichTextTag value);
    // static field const value: static public TMPro.RichTextTag BR
    static constexpr const uint BR = 2256u;
    // Get static field: static public TMPro.RichTextTag BR
    static TMPro::RichTextTag _get_BR();
    // Set static field: static public TMPro.RichTextTag BR
    static void _set_BR(TMPro::RichTextTag value);
    // static field const value: static public TMPro.RichTextTag STYLE
    static constexpr const uint STYLE = 100252951u;
    // Get static field: static public TMPro.RichTextTag STYLE
    static TMPro::RichTextTag _get_STYLE();
    // Set static field: static public TMPro.RichTextTag STYLE
    static void _set_STYLE(TMPro::RichTextTag value);
    // static field const value: static public TMPro.RichTextTag SLASH_STYLE
    static constexpr const uint SLASH_STYLE = 1927738392u;
    // Get static field: static public TMPro.RichTextTag SLASH_STYLE
    static TMPro::RichTextTag _get_SLASH_STYLE();
    // Set static field: static public TMPro.RichTextTag SLASH_STYLE
    static void _set_SLASH_STYLE(TMPro::RichTextTag value);
    // static field const value: static public TMPro.RichTextTag FONT
    static constexpr const uint FONT = 2586451u;
    // Get static field: static public TMPro.RichTextTag FONT
    static TMPro::RichTextTag _get_FONT();
    // Set static field: static public TMPro.RichTextTag FONT
    static void _set_FONT(TMPro::RichTextTag value);
    // static field const value: static public TMPro.RichTextTag SLASH_FONT
    static constexpr const uint SLASH_FONT = 57747708u;
    // Get static field: static public TMPro.RichTextTag SLASH_FONT
    static TMPro::RichTextTag _get_SLASH_FONT();
    // Set static field: static public TMPro.RichTextTag SLASH_FONT
    static void _set_SLASH_FONT(TMPro::RichTextTag value);
    // static field const value: static public TMPro.RichTextTag LINK
    static constexpr const uint LINK = 2656128u;
    // Get static field: static public TMPro.RichTextTag LINK
    static TMPro::RichTextTag _get_LINK();
    // Set static field: static public TMPro.RichTextTag LINK
    static void _set_LINK(TMPro::RichTextTag value);
    // static field const value: static public TMPro.RichTextTag SLASH_LINK
    static constexpr const uint SLASH_LINK = 57686191u;
    // Get static field: static public TMPro.RichTextTag SLASH_LINK
    static TMPro::RichTextTag _get_SLASH_LINK();
    // Set static field: static public TMPro.RichTextTag SLASH_LINK
    static void _set_SLASH_LINK(TMPro::RichTextTag value);
    // static field const value: static public TMPro.RichTextTag FONT_WEIGHT
    static constexpr const uint FONT_WEIGHT = 2405071134u;
    // Get static field: static public TMPro.RichTextTag FONT_WEIGHT
    static TMPro::RichTextTag _get_FONT_WEIGHT();
    // Set static field: static public TMPro.RichTextTag FONT_WEIGHT
    static void _set_FONT_WEIGHT(TMPro::RichTextTag value);
    // static field const value: static public TMPro.RichTextTag SLASH_FONT_WEIGHT
    static constexpr const uint SLASH_FONT_WEIGHT = 3536990865u;
    // Get static field: static public TMPro.RichTextTag SLASH_FONT_WEIGHT
    static TMPro::RichTextTag _get_SLASH_FONT_WEIGHT();
    // Set static field: static public TMPro.RichTextTag SLASH_FONT_WEIGHT
    static void _set_SLASH_FONT_WEIGHT(TMPro::RichTextTag value);
    // static field const value: static public TMPro.RichTextTag LIGA
    static constexpr const uint LIGA = 2655971u;
    // Get static field: static public TMPro.RichTextTag LIGA
    static TMPro::RichTextTag _get_LIGA();
    // Set static field: static public TMPro.RichTextTag LIGA
    static void _set_LIGA(TMPro::RichTextTag value);
    // static field const value: static public TMPro.RichTextTag SLASH_LIGA
    static constexpr const uint SLASH_LIGA = 57686604u;
    // Get static field: static public TMPro.RichTextTag SLASH_LIGA
    static TMPro::RichTextTag _get_SLASH_LIGA();
    // Set static field: static public TMPro.RichTextTag SLASH_LIGA
    static void _set_SLASH_LIGA(TMPro::RichTextTag value);
    // static field const value: static public TMPro.RichTextTag FRAC
    static constexpr const uint FRAC = 2598518u;
    // Get static field: static public TMPro.RichTextTag FRAC
    static TMPro::RichTextTag _get_FRAC();
    // Set static field: static public TMPro.RichTextTag FRAC
    static void _set_FRAC(TMPro::RichTextTag value);
    // static field const value: static public TMPro.RichTextTag SLASH_FRAC
    static constexpr const uint SLASH_FRAC = 57774681u;
    // Get static field: static public TMPro.RichTextTag SLASH_FRAC
    static TMPro::RichTextTag _get_SLASH_FRAC();
    // Set static field: static public TMPro.RichTextTag SLASH_FRAC
    static void _set_SLASH_FRAC(TMPro::RichTextTag value);
    // static field const value: static public TMPro.RichTextTag NAME
    static constexpr const uint NAME = 2875623u;
    // Get static field: static public TMPro.RichTextTag NAME
    static TMPro::RichTextTag _get_NAME();
    // Set static field: static public TMPro.RichTextTag NAME
    static void _set_NAME(TMPro::RichTextTag value);
    // static field const value: static public TMPro.RichTextTag INDEX
    static constexpr const uint INDEX = 84268030u;
    // Get static field: static public TMPro.RichTextTag INDEX
    static TMPro::RichTextTag _get_INDEX();
    // Set static field: static public TMPro.RichTextTag INDEX
    static void _set_INDEX(TMPro::RichTextTag value);
    // static field const value: static public TMPro.RichTextTag TINT
    static constexpr const uint TINT = 2960519u;
    // Get static field: static public TMPro.RichTextTag TINT
    static TMPro::RichTextTag _get_TINT();
    // Set static field: static public TMPro.RichTextTag TINT
    static void _set_TINT(TMPro::RichTextTag value);
    // static field const value: static public TMPro.RichTextTag ANIM
    static constexpr const uint ANIM = 2283339u;
    // Get static field: static public TMPro.RichTextTag ANIM
    static TMPro::RichTextTag _get_ANIM();
    // Set static field: static public TMPro.RichTextTag ANIM
    static void _set_ANIM(TMPro::RichTextTag value);
    // static field const value: static public TMPro.RichTextTag MATERIAL
    static constexpr const uint MATERIAL = 825491659u;
    // Get static field: static public TMPro.RichTextTag MATERIAL
    static TMPro::RichTextTag _get_MATERIAL();
    // Set static field: static public TMPro.RichTextTag MATERIAL
    static void _set_MATERIAL(TMPro::RichTextTag value);
    // static field const value: static public TMPro.RichTextTag RED
    static constexpr const uint RED = 91635u;
    // Get static field: static public TMPro.RichTextTag RED
    static TMPro::RichTextTag _get_RED();
    // Set static field: static public TMPro.RichTextTag RED
    static void _set_RED(TMPro::RichTextTag value);
    // static field const value: static public TMPro.RichTextTag GREEN
    static constexpr const uint GREEN = 87065851u;
    // Get static field: static public TMPro.RichTextTag GREEN
    static TMPro::RichTextTag _get_GREEN();
    // Set static field: static public TMPro.RichTextTag GREEN
    static void _set_GREEN(TMPro::RichTextTag value);
    // static field const value: static public TMPro.RichTextTag BLUE
    static constexpr const uint BLUE = 2457214u;
    // Get static field: static public TMPro.RichTextTag BLUE
    static TMPro::RichTextTag _get_BLUE();
    // Set static field: static public TMPro.RichTextTag BLUE
    static void _set_BLUE(TMPro::RichTextTag value);
    // static field const value: static public TMPro.RichTextTag YELLOW
    static constexpr const uint YELLOW = 3412522628u;
    // Get static field: static public TMPro.RichTextTag YELLOW
    static TMPro::RichTextTag _get_YELLOW();
    // Set static field: static public TMPro.RichTextTag YELLOW
    static void _set_YELLOW(TMPro::RichTextTag value);
    // static field const value: static public TMPro.RichTextTag ORANGE
    static constexpr const uint ORANGE = 3186379376u;
    // Get static field: static public TMPro.RichTextTag ORANGE
    static TMPro::RichTextTag _get_ORANGE();
    // Set static field: static public TMPro.RichTextTag ORANGE
    static void _set_ORANGE(TMPro::RichTextTag value);
    // static field const value: static public TMPro.RichTextTag PLUS
    static constexpr const uint PLUS = 43u;
    // Get static field: static public TMPro.RichTextTag PLUS
    static TMPro::RichTextTag _get_PLUS();
    // Set static field: static public TMPro.RichTextTag PLUS
    static void _set_PLUS(TMPro::RichTextTag value);
    // static field const value: static public TMPro.RichTextTag MINUS
    static constexpr const uint MINUS = 45u;
    // Get static field: static public TMPro.RichTextTag MINUS
    static TMPro::RichTextTag _get_MINUS();
    // Set static field: static public TMPro.RichTextTag MINUS
    static void _set_MINUS(TMPro::RichTextTag value);
    // static field const value: static public TMPro.RichTextTag PX
    static constexpr const uint PX = 2568u;
    // Get static field: static public TMPro.RichTextTag PX
    static TMPro::RichTextTag _get_PX();
    // Set static field: static public TMPro.RichTextTag PX
    static void _set_PX(TMPro::RichTextTag value);
    // static field const value: static public TMPro.RichTextTag PLUS_PX
    static constexpr const uint PLUS_PX = 49507u;
    // Get static field: static public TMPro.RichTextTag PLUS_PX
    static TMPro::RichTextTag _get_PLUS_PX();
    // Set static field: static public TMPro.RichTextTag PLUS_PX
    static void _set_PLUS_PX(TMPro::RichTextTag value);
    // static field const value: static public TMPro.RichTextTag MINUS_PX
    static constexpr const uint MINUS_PX = 47461u;
    // Get static field: static public TMPro.RichTextTag MINUS_PX
    static TMPro::RichTextTag _get_MINUS_PX();
    // Set static field: static public TMPro.RichTextTag MINUS_PX
    static void _set_MINUS_PX(TMPro::RichTextTag value);
    // static field const value: static public TMPro.RichTextTag EM
    static constexpr const uint EM = 2216u;
    // Get static field: static public TMPro.RichTextTag EM
    static TMPro::RichTextTag _get_EM();
    // Set static field: static public TMPro.RichTextTag EM
    static void _set_EM(TMPro::RichTextTag value);
    // static field const value: static public TMPro.RichTextTag PLUS_EM
    static constexpr const uint PLUS_EM = 49091u;
    // Get static field: static public TMPro.RichTextTag PLUS_EM
    static TMPro::RichTextTag _get_PLUS_EM();
    // Set static field: static public TMPro.RichTextTag PLUS_EM
    static void _set_PLUS_EM(TMPro::RichTextTag value);
    // static field const value: static public TMPro.RichTextTag MINUS_EM
    static constexpr const uint MINUS_EM = 46789u;
    // Get static field: static public TMPro.RichTextTag MINUS_EM
    static TMPro::RichTextTag _get_MINUS_EM();
    // Set static field: static public TMPro.RichTextTag MINUS_EM
    static void _set_MINUS_EM(TMPro::RichTextTag value);
    // static field const value: static public TMPro.RichTextTag PCT
    static constexpr const uint PCT = 85031u;
    // Get static field: static public TMPro.RichTextTag PCT
    static TMPro::RichTextTag _get_PCT();
    // Set static field: static public TMPro.RichTextTag PCT
    static void _set_PCT(TMPro::RichTextTag value);
    // static field const value: static public TMPro.RichTextTag PLUS_PCT
    static constexpr const uint PLUS_PCT = 1634348u;
    // Get static field: static public TMPro.RichTextTag PLUS_PCT
    static TMPro::RichTextTag _get_PLUS_PCT();
    // Set static field: static public TMPro.RichTextTag PLUS_PCT
    static void _set_PLUS_PCT(TMPro::RichTextTag value);
    // static field const value: static public TMPro.RichTextTag MINUS_PCT
    static constexpr const uint MINUS_PCT = 1567082u;
    // Get static field: static public TMPro.RichTextTag MINUS_PCT
    static TMPro::RichTextTag _get_MINUS_PCT();
    // Set static field: static public TMPro.RichTextTag MINUS_PCT
    static void _set_MINUS_PCT(TMPro::RichTextTag value);
    // static field const value: static public TMPro.RichTextTag PERCENTAGE
    static constexpr const uint PERCENTAGE = 37u;
    // Get static field: static public TMPro.RichTextTag PERCENTAGE
    static TMPro::RichTextTag _get_PERCENTAGE();
    // Set static field: static public TMPro.RichTextTag PERCENTAGE
    static void _set_PERCENTAGE(TMPro::RichTextTag value);
    // static field const value: static public TMPro.RichTextTag PLUS_PERCENTAGE
    static constexpr const uint PLUS_PERCENTAGE = 1454u;
    // Get static field: static public TMPro.RichTextTag PLUS_PERCENTAGE
    static TMPro::RichTextTag _get_PLUS_PERCENTAGE();
    // Set static field: static public TMPro.RichTextTag PLUS_PERCENTAGE
    static void _set_PLUS_PERCENTAGE(TMPro::RichTextTag value);
    // static field const value: static public TMPro.RichTextTag MINUS_PERCENTAGE
    static constexpr const uint MINUS_PERCENTAGE = 1512u;
    // Get static field: static public TMPro.RichTextTag MINUS_PERCENTAGE
    static TMPro::RichTextTag _get_MINUS_PERCENTAGE();
    // Set static field: static public TMPro.RichTextTag MINUS_PERCENTAGE
    static void _set_MINUS_PERCENTAGE(TMPro::RichTextTag value);
    // static field const value: static public TMPro.RichTextTag TRUE
    static constexpr const uint TRUE = 2932022u;
    // Get static field: static public TMPro.RichTextTag TRUE
    static TMPro::RichTextTag _get_TRUE();
    // Set static field: static public TMPro.RichTextTag TRUE
    static void _set_TRUE(TMPro::RichTextTag value);
    // static field const value: static public TMPro.RichTextTag FALSE
    static constexpr const uint FALSE = 85422813u;
    // Get static field: static public TMPro.RichTextTag FALSE
    static TMPro::RichTextTag _get_FALSE();
    // Set static field: static public TMPro.RichTextTag FALSE
    static void _set_FALSE(TMPro::RichTextTag value);
    // static field const value: static public TMPro.RichTextTag DEFAULT
    static constexpr const uint DEFAULT = 3673993291u;
    // Get static field: static public TMPro.RichTextTag DEFAULT
    static TMPro::RichTextTag _get_DEFAULT();
    // Set static field: static public TMPro.RichTextTag DEFAULT
    static void _set_DEFAULT(TMPro::RichTextTag value);
  }; // TMPro.RichTextTag
  #pragma pack(pop)
  static check_size<sizeof(RichTextTag), 0 + sizeof(uint)> __TMPro_RichTextTagSizeCheck;
  static_assert(sizeof(RichTextTag) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(TMPro::RichTextTag, "TMPro", "RichTextTag");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
