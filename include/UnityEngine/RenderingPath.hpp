// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.RenderingPath
  // [TokenAttribute] Offset: FFFFFFFF
  struct RenderingPath/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: RenderingPath
    constexpr RenderingPath(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.RenderingPath UsePlayerSettings
    static constexpr const int UsePlayerSettings = -1;
    // Get static field: static public UnityEngine.RenderingPath UsePlayerSettings
    static UnityEngine::RenderingPath _get_UsePlayerSettings();
    // Set static field: static public UnityEngine.RenderingPath UsePlayerSettings
    static void _set_UsePlayerSettings(UnityEngine::RenderingPath value);
    // static field const value: static public UnityEngine.RenderingPath VertexLit
    static constexpr const int VertexLit = 0;
    // Get static field: static public UnityEngine.RenderingPath VertexLit
    static UnityEngine::RenderingPath _get_VertexLit();
    // Set static field: static public UnityEngine.RenderingPath VertexLit
    static void _set_VertexLit(UnityEngine::RenderingPath value);
    // static field const value: static public UnityEngine.RenderingPath Forward
    static constexpr const int Forward = 1;
    // Get static field: static public UnityEngine.RenderingPath Forward
    static UnityEngine::RenderingPath _get_Forward();
    // Set static field: static public UnityEngine.RenderingPath Forward
    static void _set_Forward(UnityEngine::RenderingPath value);
    // static field const value: static public UnityEngine.RenderingPath DeferredLighting
    static constexpr const int DeferredLighting = 2;
    // Get static field: static public UnityEngine.RenderingPath DeferredLighting
    static UnityEngine::RenderingPath _get_DeferredLighting();
    // Set static field: static public UnityEngine.RenderingPath DeferredLighting
    static void _set_DeferredLighting(UnityEngine::RenderingPath value);
    // static field const value: static public UnityEngine.RenderingPath DeferredShading
    static constexpr const int DeferredShading = 3;
    // Get static field: static public UnityEngine.RenderingPath DeferredShading
    static UnityEngine::RenderingPath _get_DeferredShading();
    // Set static field: static public UnityEngine.RenderingPath DeferredShading
    static void _set_DeferredShading(UnityEngine::RenderingPath value);
  }; // UnityEngine.RenderingPath
  #pragma pack(pop)
  static check_size<sizeof(RenderingPath), 0 + sizeof(int)> __UnityEngine_RenderingPathSizeCheck;
  static_assert(sizeof(RenderingPath) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::RenderingPath, "UnityEngine", "RenderingPath");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
