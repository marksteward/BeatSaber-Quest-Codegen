// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.RenderTextureSubElement
  // [] Offset: FFFFFFFF
  struct RenderTextureSubElement/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: RenderTextureSubElement
    constexpr RenderTextureSubElement(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Rendering.RenderTextureSubElement Color
    static constexpr const int Color = 0;
    // Get static field: static public UnityEngine.Rendering.RenderTextureSubElement Color
    static UnityEngine::Rendering::RenderTextureSubElement _get_Color();
    // Set static field: static public UnityEngine.Rendering.RenderTextureSubElement Color
    static void _set_Color(UnityEngine::Rendering::RenderTextureSubElement value);
    // static field const value: static public UnityEngine.Rendering.RenderTextureSubElement Depth
    static constexpr const int Depth = 1;
    // Get static field: static public UnityEngine.Rendering.RenderTextureSubElement Depth
    static UnityEngine::Rendering::RenderTextureSubElement _get_Depth();
    // Set static field: static public UnityEngine.Rendering.RenderTextureSubElement Depth
    static void _set_Depth(UnityEngine::Rendering::RenderTextureSubElement value);
    // static field const value: static public UnityEngine.Rendering.RenderTextureSubElement Stencil
    static constexpr const int Stencil = 2;
    // Get static field: static public UnityEngine.Rendering.RenderTextureSubElement Stencil
    static UnityEngine::Rendering::RenderTextureSubElement _get_Stencil();
    // Set static field: static public UnityEngine.Rendering.RenderTextureSubElement Stencil
    static void _set_Stencil(UnityEngine::Rendering::RenderTextureSubElement value);
    // static field const value: static public UnityEngine.Rendering.RenderTextureSubElement Default
    static constexpr const int Default = 3;
    // Get static field: static public UnityEngine.Rendering.RenderTextureSubElement Default
    static UnityEngine::Rendering::RenderTextureSubElement _get_Default();
    // Set static field: static public UnityEngine.Rendering.RenderTextureSubElement Default
    static void _set_Default(UnityEngine::Rendering::RenderTextureSubElement value);
  }; // UnityEngine.Rendering.RenderTextureSubElement
  static check_size<sizeof(RenderTextureSubElement), 0 + sizeof(int)> __UnityEngine_Rendering_RenderTextureSubElementSizeCheck;
  static_assert(sizeof(RenderTextureSubElement) == 0x4);
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Rendering::RenderTextureSubElement, "UnityEngine.Rendering", "RenderTextureSubElement");
