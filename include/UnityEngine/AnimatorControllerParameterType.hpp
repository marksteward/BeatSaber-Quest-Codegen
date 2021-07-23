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
  // Autogenerated type: UnityEngine.AnimatorControllerParameterType
  // [TokenAttribute] Offset: FFFFFFFF
  struct AnimatorControllerParameterType/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: AnimatorControllerParameterType
    constexpr AnimatorControllerParameterType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.AnimatorControllerParameterType Float
    static constexpr const int Float = 1;
    // Get static field: static public UnityEngine.AnimatorControllerParameterType Float
    static UnityEngine::AnimatorControllerParameterType _get_Float();
    // Set static field: static public UnityEngine.AnimatorControllerParameterType Float
    static void _set_Float(UnityEngine::AnimatorControllerParameterType value);
    // static field const value: static public UnityEngine.AnimatorControllerParameterType Int
    static constexpr const int Int = 3;
    // Get static field: static public UnityEngine.AnimatorControllerParameterType Int
    static UnityEngine::AnimatorControllerParameterType _get_Int();
    // Set static field: static public UnityEngine.AnimatorControllerParameterType Int
    static void _set_Int(UnityEngine::AnimatorControllerParameterType value);
    // static field const value: static public UnityEngine.AnimatorControllerParameterType Bool
    static constexpr const int Bool = 4;
    // Get static field: static public UnityEngine.AnimatorControllerParameterType Bool
    static UnityEngine::AnimatorControllerParameterType _get_Bool();
    // Set static field: static public UnityEngine.AnimatorControllerParameterType Bool
    static void _set_Bool(UnityEngine::AnimatorControllerParameterType value);
    // static field const value: static public UnityEngine.AnimatorControllerParameterType Trigger
    static constexpr const int Trigger = 9;
    // Get static field: static public UnityEngine.AnimatorControllerParameterType Trigger
    static UnityEngine::AnimatorControllerParameterType _get_Trigger();
    // Set static field: static public UnityEngine.AnimatorControllerParameterType Trigger
    static void _set_Trigger(UnityEngine::AnimatorControllerParameterType value);
    // Get instance field: public System.Int32 value__
    int _get_value__();
    // Set instance field: public System.Int32 value__
    void _set_value__(int value);
  }; // UnityEngine.AnimatorControllerParameterType
  #pragma pack(pop)
  static check_size<sizeof(AnimatorControllerParameterType), 0 + sizeof(int)> __UnityEngine_AnimatorControllerParameterTypeSizeCheck;
  static_assert(sizeof(AnimatorControllerParameterType) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AnimatorControllerParameterType, "UnityEngine", "AnimatorControllerParameterType");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
