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
  // Autogenerated type: UnityEngine.LightmapBakeType
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct LightmapBakeType/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: LightmapBakeType
    constexpr LightmapBakeType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.LightmapBakeType Realtime
    static constexpr const int Realtime = 4;
    // Get static field: static public UnityEngine.LightmapBakeType Realtime
    static UnityEngine::LightmapBakeType _get_Realtime();
    // Set static field: static public UnityEngine.LightmapBakeType Realtime
    static void _set_Realtime(UnityEngine::LightmapBakeType value);
    // static field const value: static public UnityEngine.LightmapBakeType Baked
    static constexpr const int Baked = 2;
    // Get static field: static public UnityEngine.LightmapBakeType Baked
    static UnityEngine::LightmapBakeType _get_Baked();
    // Set static field: static public UnityEngine.LightmapBakeType Baked
    static void _set_Baked(UnityEngine::LightmapBakeType value);
    // static field const value: static public UnityEngine.LightmapBakeType Mixed
    static constexpr const int Mixed = 1;
    // Get static field: static public UnityEngine.LightmapBakeType Mixed
    static UnityEngine::LightmapBakeType _get_Mixed();
    // Set static field: static public UnityEngine.LightmapBakeType Mixed
    static void _set_Mixed(UnityEngine::LightmapBakeType value);
    // Get instance field: public System.Int32 value__
    int _get_value__();
    // Set instance field: public System.Int32 value__
    void _set_value__(int value);
  }; // UnityEngine.LightmapBakeType
  #pragma pack(pop)
  static check_size<sizeof(LightmapBakeType), 0 + sizeof(int)> __UnityEngine_LightmapBakeTypeSizeCheck;
  static_assert(sizeof(LightmapBakeType) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::LightmapBakeType, "UnityEngine", "LightmapBakeType");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
