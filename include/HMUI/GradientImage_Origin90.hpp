// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.GradientImage
#include "HMUI/GradientImage.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: HMUI
namespace HMUI {
  // Autogenerated type: HMUI.GradientImage/Origin90
  struct GradientImage::Origin90 : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: Origin90
    constexpr Origin90(int value_ = {}) : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const {
      return value;
    }
    // static field const value: static public HMUI.GradientImage/Origin90 BottomLeft
    static constexpr const int BottomLeft = 0;
    // Get static field: static public HMUI.GradientImage/Origin90 BottomLeft
    static HMUI::GradientImage::Origin90 _get_BottomLeft();
    // Set static field: static public HMUI.GradientImage/Origin90 BottomLeft
    static void _set_BottomLeft(HMUI::GradientImage::Origin90 value);
    // static field const value: static public HMUI.GradientImage/Origin90 TopLeft
    static constexpr const int TopLeft = 1;
    // Get static field: static public HMUI.GradientImage/Origin90 TopLeft
    static HMUI::GradientImage::Origin90 _get_TopLeft();
    // Set static field: static public HMUI.GradientImage/Origin90 TopLeft
    static void _set_TopLeft(HMUI::GradientImage::Origin90 value);
    // static field const value: static public HMUI.GradientImage/Origin90 TopRight
    static constexpr const int TopRight = 2;
    // Get static field: static public HMUI.GradientImage/Origin90 TopRight
    static HMUI::GradientImage::Origin90 _get_TopRight();
    // Set static field: static public HMUI.GradientImage/Origin90 TopRight
    static void _set_TopRight(HMUI::GradientImage::Origin90 value);
    // static field const value: static public HMUI.GradientImage/Origin90 BottomRight
    static constexpr const int BottomRight = 3;
    // Get static field: static public HMUI.GradientImage/Origin90 BottomRight
    static HMUI::GradientImage::Origin90 _get_BottomRight();
    // Set static field: static public HMUI.GradientImage/Origin90 BottomRight
    static void _set_BottomRight(HMUI::GradientImage::Origin90 value);
  }; // HMUI.GradientImage/Origin90
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(HMUI::GradientImage::Origin90, "HMUI", "GradientImage/Origin90");
#pragma pack(pop)
