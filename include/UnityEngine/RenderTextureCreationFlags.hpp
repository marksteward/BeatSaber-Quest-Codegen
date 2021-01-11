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
  // Autogenerated type: UnityEngine.RenderTextureCreationFlags
  // [] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct RenderTextureCreationFlags/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: RenderTextureCreationFlags
    constexpr RenderTextureCreationFlags(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.RenderTextureCreationFlags MipMap
    static constexpr const int MipMap = 1;
    // Get static field: static public UnityEngine.RenderTextureCreationFlags MipMap
    static UnityEngine::RenderTextureCreationFlags _get_MipMap();
    // Set static field: static public UnityEngine.RenderTextureCreationFlags MipMap
    static void _set_MipMap(UnityEngine::RenderTextureCreationFlags value);
    // static field const value: static public UnityEngine.RenderTextureCreationFlags AutoGenerateMips
    static constexpr const int AutoGenerateMips = 2;
    // Get static field: static public UnityEngine.RenderTextureCreationFlags AutoGenerateMips
    static UnityEngine::RenderTextureCreationFlags _get_AutoGenerateMips();
    // Set static field: static public UnityEngine.RenderTextureCreationFlags AutoGenerateMips
    static void _set_AutoGenerateMips(UnityEngine::RenderTextureCreationFlags value);
    // static field const value: static public UnityEngine.RenderTextureCreationFlags SRGB
    static constexpr const int SRGB = 4;
    // Get static field: static public UnityEngine.RenderTextureCreationFlags SRGB
    static UnityEngine::RenderTextureCreationFlags _get_SRGB();
    // Set static field: static public UnityEngine.RenderTextureCreationFlags SRGB
    static void _set_SRGB(UnityEngine::RenderTextureCreationFlags value);
    // static field const value: static public UnityEngine.RenderTextureCreationFlags EyeTexture
    static constexpr const int EyeTexture = 8;
    // Get static field: static public UnityEngine.RenderTextureCreationFlags EyeTexture
    static UnityEngine::RenderTextureCreationFlags _get_EyeTexture();
    // Set static field: static public UnityEngine.RenderTextureCreationFlags EyeTexture
    static void _set_EyeTexture(UnityEngine::RenderTextureCreationFlags value);
    // static field const value: static public UnityEngine.RenderTextureCreationFlags EnableRandomWrite
    static constexpr const int EnableRandomWrite = 16;
    // Get static field: static public UnityEngine.RenderTextureCreationFlags EnableRandomWrite
    static UnityEngine::RenderTextureCreationFlags _get_EnableRandomWrite();
    // Set static field: static public UnityEngine.RenderTextureCreationFlags EnableRandomWrite
    static void _set_EnableRandomWrite(UnityEngine::RenderTextureCreationFlags value);
    // static field const value: static public UnityEngine.RenderTextureCreationFlags CreatedFromScript
    static constexpr const int CreatedFromScript = 32;
    // Get static field: static public UnityEngine.RenderTextureCreationFlags CreatedFromScript
    static UnityEngine::RenderTextureCreationFlags _get_CreatedFromScript();
    // Set static field: static public UnityEngine.RenderTextureCreationFlags CreatedFromScript
    static void _set_CreatedFromScript(UnityEngine::RenderTextureCreationFlags value);
    // static field const value: static public UnityEngine.RenderTextureCreationFlags AllowVerticalFlip
    static constexpr const int AllowVerticalFlip = 128;
    // Get static field: static public UnityEngine.RenderTextureCreationFlags AllowVerticalFlip
    static UnityEngine::RenderTextureCreationFlags _get_AllowVerticalFlip();
    // Set static field: static public UnityEngine.RenderTextureCreationFlags AllowVerticalFlip
    static void _set_AllowVerticalFlip(UnityEngine::RenderTextureCreationFlags value);
    // static field const value: static public UnityEngine.RenderTextureCreationFlags NoResolvedColorSurface
    static constexpr const int NoResolvedColorSurface = 256;
    // Get static field: static public UnityEngine.RenderTextureCreationFlags NoResolvedColorSurface
    static UnityEngine::RenderTextureCreationFlags _get_NoResolvedColorSurface();
    // Set static field: static public UnityEngine.RenderTextureCreationFlags NoResolvedColorSurface
    static void _set_NoResolvedColorSurface(UnityEngine::RenderTextureCreationFlags value);
    // static field const value: static public UnityEngine.RenderTextureCreationFlags DynamicallyScalable
    static constexpr const int DynamicallyScalable = 1024;
    // Get static field: static public UnityEngine.RenderTextureCreationFlags DynamicallyScalable
    static UnityEngine::RenderTextureCreationFlags _get_DynamicallyScalable();
    // Set static field: static public UnityEngine.RenderTextureCreationFlags DynamicallyScalable
    static void _set_DynamicallyScalable(UnityEngine::RenderTextureCreationFlags value);
    // static field const value: static public UnityEngine.RenderTextureCreationFlags BindMS
    static constexpr const int BindMS = 2048;
    // Get static field: static public UnityEngine.RenderTextureCreationFlags BindMS
    static UnityEngine::RenderTextureCreationFlags _get_BindMS();
    // Set static field: static public UnityEngine.RenderTextureCreationFlags BindMS
    static void _set_BindMS(UnityEngine::RenderTextureCreationFlags value);
  }; // UnityEngine.RenderTextureCreationFlags
  static check_size<sizeof(RenderTextureCreationFlags), 0 + sizeof(int)> __UnityEngine_RenderTextureCreationFlagsSizeCheck;
  static_assert(sizeof(RenderTextureCreationFlags) == 0x4);
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::RenderTextureCreationFlags, "UnityEngine", "RenderTextureCreationFlags");
