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
  // Autogenerated type: UnityEngine.Rendering.CompareFunction
  // [TokenAttribute] Offset: FFFFFFFF
  struct CompareFunction/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: CompareFunction
    constexpr CompareFunction(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Rendering.CompareFunction Disabled
    static constexpr const int Disabled = 0;
    // Get static field: static public UnityEngine.Rendering.CompareFunction Disabled
    static UnityEngine::Rendering::CompareFunction _get_Disabled();
    // Set static field: static public UnityEngine.Rendering.CompareFunction Disabled
    static void _set_Disabled(UnityEngine::Rendering::CompareFunction value);
    // static field const value: static public UnityEngine.Rendering.CompareFunction Never
    static constexpr const int Never = 1;
    // Get static field: static public UnityEngine.Rendering.CompareFunction Never
    static UnityEngine::Rendering::CompareFunction _get_Never();
    // Set static field: static public UnityEngine.Rendering.CompareFunction Never
    static void _set_Never(UnityEngine::Rendering::CompareFunction value);
    // static field const value: static public UnityEngine.Rendering.CompareFunction Less
    static constexpr const int Less = 2;
    // Get static field: static public UnityEngine.Rendering.CompareFunction Less
    static UnityEngine::Rendering::CompareFunction _get_Less();
    // Set static field: static public UnityEngine.Rendering.CompareFunction Less
    static void _set_Less(UnityEngine::Rendering::CompareFunction value);
    // static field const value: static public UnityEngine.Rendering.CompareFunction Equal
    static constexpr const int Equal = 3;
    // Get static field: static public UnityEngine.Rendering.CompareFunction Equal
    static UnityEngine::Rendering::CompareFunction _get_Equal();
    // Set static field: static public UnityEngine.Rendering.CompareFunction Equal
    static void _set_Equal(UnityEngine::Rendering::CompareFunction value);
    // static field const value: static public UnityEngine.Rendering.CompareFunction LessEqual
    static constexpr const int LessEqual = 4;
    // Get static field: static public UnityEngine.Rendering.CompareFunction LessEqual
    static UnityEngine::Rendering::CompareFunction _get_LessEqual();
    // Set static field: static public UnityEngine.Rendering.CompareFunction LessEqual
    static void _set_LessEqual(UnityEngine::Rendering::CompareFunction value);
    // static field const value: static public UnityEngine.Rendering.CompareFunction Greater
    static constexpr const int Greater = 5;
    // Get static field: static public UnityEngine.Rendering.CompareFunction Greater
    static UnityEngine::Rendering::CompareFunction _get_Greater();
    // Set static field: static public UnityEngine.Rendering.CompareFunction Greater
    static void _set_Greater(UnityEngine::Rendering::CompareFunction value);
    // static field const value: static public UnityEngine.Rendering.CompareFunction NotEqual
    static constexpr const int NotEqual = 6;
    // Get static field: static public UnityEngine.Rendering.CompareFunction NotEqual
    static UnityEngine::Rendering::CompareFunction _get_NotEqual();
    // Set static field: static public UnityEngine.Rendering.CompareFunction NotEqual
    static void _set_NotEqual(UnityEngine::Rendering::CompareFunction value);
    // static field const value: static public UnityEngine.Rendering.CompareFunction GreaterEqual
    static constexpr const int GreaterEqual = 7;
    // Get static field: static public UnityEngine.Rendering.CompareFunction GreaterEqual
    static UnityEngine::Rendering::CompareFunction _get_GreaterEqual();
    // Set static field: static public UnityEngine.Rendering.CompareFunction GreaterEqual
    static void _set_GreaterEqual(UnityEngine::Rendering::CompareFunction value);
    // static field const value: static public UnityEngine.Rendering.CompareFunction Always
    static constexpr const int Always = 8;
    // Get static field: static public UnityEngine.Rendering.CompareFunction Always
    static UnityEngine::Rendering::CompareFunction _get_Always();
    // Set static field: static public UnityEngine.Rendering.CompareFunction Always
    static void _set_Always(UnityEngine::Rendering::CompareFunction value);
    // Get instance field: public System.Int32 value__
    int _get_value__();
    // Set instance field: public System.Int32 value__
    void _set_value__(int value);
  }; // UnityEngine.Rendering.CompareFunction
  #pragma pack(pop)
  static check_size<sizeof(CompareFunction), 0 + sizeof(int)> __UnityEngine_Rendering_CompareFunctionSizeCheck;
  static_assert(sizeof(CompareFunction) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Rendering::CompareFunction, "UnityEngine.Rendering", "CompareFunction");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
