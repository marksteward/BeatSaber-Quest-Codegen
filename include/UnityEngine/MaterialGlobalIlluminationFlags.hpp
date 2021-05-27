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
  // Autogenerated type: UnityEngine.MaterialGlobalIlluminationFlags
  // [FlagsAttribute] Offset: FFFFFFFF
  struct MaterialGlobalIlluminationFlags/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: MaterialGlobalIlluminationFlags
    constexpr MaterialGlobalIlluminationFlags(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.MaterialGlobalIlluminationFlags None
    static constexpr const int None = 0;
    // Get static field: static public UnityEngine.MaterialGlobalIlluminationFlags None
    static UnityEngine::MaterialGlobalIlluminationFlags _get_None();
    // Set static field: static public UnityEngine.MaterialGlobalIlluminationFlags None
    static void _set_None(UnityEngine::MaterialGlobalIlluminationFlags value);
    // static field const value: static public UnityEngine.MaterialGlobalIlluminationFlags RealtimeEmissive
    static constexpr const int RealtimeEmissive = 1;
    // Get static field: static public UnityEngine.MaterialGlobalIlluminationFlags RealtimeEmissive
    static UnityEngine::MaterialGlobalIlluminationFlags _get_RealtimeEmissive();
    // Set static field: static public UnityEngine.MaterialGlobalIlluminationFlags RealtimeEmissive
    static void _set_RealtimeEmissive(UnityEngine::MaterialGlobalIlluminationFlags value);
    // static field const value: static public UnityEngine.MaterialGlobalIlluminationFlags BakedEmissive
    static constexpr const int BakedEmissive = 2;
    // Get static field: static public UnityEngine.MaterialGlobalIlluminationFlags BakedEmissive
    static UnityEngine::MaterialGlobalIlluminationFlags _get_BakedEmissive();
    // Set static field: static public UnityEngine.MaterialGlobalIlluminationFlags BakedEmissive
    static void _set_BakedEmissive(UnityEngine::MaterialGlobalIlluminationFlags value);
    // static field const value: static public UnityEngine.MaterialGlobalIlluminationFlags EmissiveIsBlack
    static constexpr const int EmissiveIsBlack = 4;
    // Get static field: static public UnityEngine.MaterialGlobalIlluminationFlags EmissiveIsBlack
    static UnityEngine::MaterialGlobalIlluminationFlags _get_EmissiveIsBlack();
    // Set static field: static public UnityEngine.MaterialGlobalIlluminationFlags EmissiveIsBlack
    static void _set_EmissiveIsBlack(UnityEngine::MaterialGlobalIlluminationFlags value);
    // static field const value: static public UnityEngine.MaterialGlobalIlluminationFlags AnyEmissive
    static constexpr const int AnyEmissive = 3;
    // Get static field: static public UnityEngine.MaterialGlobalIlluminationFlags AnyEmissive
    static UnityEngine::MaterialGlobalIlluminationFlags _get_AnyEmissive();
    // Set static field: static public UnityEngine.MaterialGlobalIlluminationFlags AnyEmissive
    static void _set_AnyEmissive(UnityEngine::MaterialGlobalIlluminationFlags value);
  }; // UnityEngine.MaterialGlobalIlluminationFlags
  #pragma pack(pop)
  static check_size<sizeof(MaterialGlobalIlluminationFlags), 0 + sizeof(int)> __UnityEngine_MaterialGlobalIlluminationFlagsSizeCheck;
  static_assert(sizeof(MaterialGlobalIlluminationFlags) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::MaterialGlobalIlluminationFlags, "UnityEngine", "MaterialGlobalIlluminationFlags");