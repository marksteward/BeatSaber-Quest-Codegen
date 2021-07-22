// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: UnityEngine.Bindings
namespace UnityEngine::Bindings {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Bindings.StaticAccessorType
  // [TokenAttribute] Offset: FFFFFFFF
  // [VisibleToOtherModulesAttribute] Offset: FFFFFFFF
  struct StaticAccessorType/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: StaticAccessorType
    constexpr StaticAccessorType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Bindings.StaticAccessorType Dot
    static constexpr const int Dot = 0;
    // Get static field: static public UnityEngine.Bindings.StaticAccessorType Dot
    static UnityEngine::Bindings::StaticAccessorType _get_Dot();
    // Set static field: static public UnityEngine.Bindings.StaticAccessorType Dot
    static void _set_Dot(UnityEngine::Bindings::StaticAccessorType value);
    // static field const value: static public UnityEngine.Bindings.StaticAccessorType Arrow
    static constexpr const int Arrow = 1;
    // Get static field: static public UnityEngine.Bindings.StaticAccessorType Arrow
    static UnityEngine::Bindings::StaticAccessorType _get_Arrow();
    // Set static field: static public UnityEngine.Bindings.StaticAccessorType Arrow
    static void _set_Arrow(UnityEngine::Bindings::StaticAccessorType value);
    // static field const value: static public UnityEngine.Bindings.StaticAccessorType DoubleColon
    static constexpr const int DoubleColon = 2;
    // Get static field: static public UnityEngine.Bindings.StaticAccessorType DoubleColon
    static UnityEngine::Bindings::StaticAccessorType _get_DoubleColon();
    // Set static field: static public UnityEngine.Bindings.StaticAccessorType DoubleColon
    static void _set_DoubleColon(UnityEngine::Bindings::StaticAccessorType value);
    // static field const value: static public UnityEngine.Bindings.StaticAccessorType ArrowWithDefaultReturnIfNull
    static constexpr const int ArrowWithDefaultReturnIfNull = 3;
    // Get static field: static public UnityEngine.Bindings.StaticAccessorType ArrowWithDefaultReturnIfNull
    static UnityEngine::Bindings::StaticAccessorType _get_ArrowWithDefaultReturnIfNull();
    // Set static field: static public UnityEngine.Bindings.StaticAccessorType ArrowWithDefaultReturnIfNull
    static void _set_ArrowWithDefaultReturnIfNull(UnityEngine::Bindings::StaticAccessorType value);
  }; // UnityEngine.Bindings.StaticAccessorType
  #pragma pack(pop)
  static check_size<sizeof(StaticAccessorType), 0 + sizeof(int)> __UnityEngine_Bindings_StaticAccessorTypeSizeCheck;
  static_assert(sizeof(StaticAccessorType) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Bindings::StaticAccessorType, "UnityEngine.Bindings", "StaticAccessorType");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
