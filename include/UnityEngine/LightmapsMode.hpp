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
  // Autogenerated type: UnityEngine.LightmapsMode
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct LightmapsMode/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: LightmapsMode
    constexpr LightmapsMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.LightmapsMode NonDirectional
    static constexpr const int NonDirectional = 0;
    // Get static field: static public UnityEngine.LightmapsMode NonDirectional
    static UnityEngine::LightmapsMode _get_NonDirectional();
    // Set static field: static public UnityEngine.LightmapsMode NonDirectional
    static void _set_NonDirectional(UnityEngine::LightmapsMode value);
    // static field const value: static public UnityEngine.LightmapsMode CombinedDirectional
    static constexpr const int CombinedDirectional = 1;
    // Get static field: static public UnityEngine.LightmapsMode CombinedDirectional
    static UnityEngine::LightmapsMode _get_CombinedDirectional();
    // Set static field: static public UnityEngine.LightmapsMode CombinedDirectional
    static void _set_CombinedDirectional(UnityEngine::LightmapsMode value);
    // Get instance field: public System.Int32 value__
    int _get_value__();
    // Set instance field: public System.Int32 value__
    void _set_value__(int value);
  }; // UnityEngine.LightmapsMode
  #pragma pack(pop)
  static check_size<sizeof(LightmapsMode), 0 + sizeof(int)> __UnityEngine_LightmapsModeSizeCheck;
  static_assert(sizeof(LightmapsMode) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::LightmapsMode, "UnityEngine", "LightmapsMode");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
