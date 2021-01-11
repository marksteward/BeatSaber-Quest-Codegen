// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.UI.Scrollbar
#include "UnityEngine/UI/Scrollbar.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UI.Scrollbar/Axis
  // [] Offset: FFFFFFFF
  struct Scrollbar::Axis/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: Axis
    constexpr Axis(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.UI.Scrollbar/Axis Horizontal
    static constexpr const int Horizontal = 0;
    // Get static field: static public UnityEngine.UI.Scrollbar/Axis Horizontal
    static UnityEngine::UI::Scrollbar::Axis _get_Horizontal();
    // Set static field: static public UnityEngine.UI.Scrollbar/Axis Horizontal
    static void _set_Horizontal(UnityEngine::UI::Scrollbar::Axis value);
    // static field const value: static public UnityEngine.UI.Scrollbar/Axis Vertical
    static constexpr const int Vertical = 1;
    // Get static field: static public UnityEngine.UI.Scrollbar/Axis Vertical
    static UnityEngine::UI::Scrollbar::Axis _get_Vertical();
    // Set static field: static public UnityEngine.UI.Scrollbar/Axis Vertical
    static void _set_Vertical(UnityEngine::UI::Scrollbar::Axis value);
  }; // UnityEngine.UI.Scrollbar/Axis
  static check_size<sizeof(Scrollbar::Axis), 0 + sizeof(int)> __UnityEngine_UI_Scrollbar_AxisSizeCheck;
  static_assert(sizeof(Scrollbar::Axis) == 0x4);
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::Scrollbar::Axis, "UnityEngine.UI", "Scrollbar/Axis");
