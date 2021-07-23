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
  // Autogenerated type: UnityEngine.HideFlags
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct HideFlags/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: HideFlags
    constexpr HideFlags(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.HideFlags None
    static constexpr const int None = 0;
    // Get static field: static public UnityEngine.HideFlags None
    static UnityEngine::HideFlags _get_None();
    // Set static field: static public UnityEngine.HideFlags None
    static void _set_None(UnityEngine::HideFlags value);
    // static field const value: static public UnityEngine.HideFlags HideInHierarchy
    static constexpr const int HideInHierarchy = 1;
    // Get static field: static public UnityEngine.HideFlags HideInHierarchy
    static UnityEngine::HideFlags _get_HideInHierarchy();
    // Set static field: static public UnityEngine.HideFlags HideInHierarchy
    static void _set_HideInHierarchy(UnityEngine::HideFlags value);
    // static field const value: static public UnityEngine.HideFlags HideInInspector
    static constexpr const int HideInInspector = 2;
    // Get static field: static public UnityEngine.HideFlags HideInInspector
    static UnityEngine::HideFlags _get_HideInInspector();
    // Set static field: static public UnityEngine.HideFlags HideInInspector
    static void _set_HideInInspector(UnityEngine::HideFlags value);
    // static field const value: static public UnityEngine.HideFlags DontSaveInEditor
    static constexpr const int DontSaveInEditor = 4;
    // Get static field: static public UnityEngine.HideFlags DontSaveInEditor
    static UnityEngine::HideFlags _get_DontSaveInEditor();
    // Set static field: static public UnityEngine.HideFlags DontSaveInEditor
    static void _set_DontSaveInEditor(UnityEngine::HideFlags value);
    // static field const value: static public UnityEngine.HideFlags NotEditable
    static constexpr const int NotEditable = 8;
    // Get static field: static public UnityEngine.HideFlags NotEditable
    static UnityEngine::HideFlags _get_NotEditable();
    // Set static field: static public UnityEngine.HideFlags NotEditable
    static void _set_NotEditable(UnityEngine::HideFlags value);
    // static field const value: static public UnityEngine.HideFlags DontSaveInBuild
    static constexpr const int DontSaveInBuild = 16;
    // Get static field: static public UnityEngine.HideFlags DontSaveInBuild
    static UnityEngine::HideFlags _get_DontSaveInBuild();
    // Set static field: static public UnityEngine.HideFlags DontSaveInBuild
    static void _set_DontSaveInBuild(UnityEngine::HideFlags value);
    // static field const value: static public UnityEngine.HideFlags DontUnloadUnusedAsset
    static constexpr const int DontUnloadUnusedAsset = 32;
    // Get static field: static public UnityEngine.HideFlags DontUnloadUnusedAsset
    static UnityEngine::HideFlags _get_DontUnloadUnusedAsset();
    // Set static field: static public UnityEngine.HideFlags DontUnloadUnusedAsset
    static void _set_DontUnloadUnusedAsset(UnityEngine::HideFlags value);
    // static field const value: static public UnityEngine.HideFlags DontSave
    static constexpr const int DontSave = 52;
    // Get static field: static public UnityEngine.HideFlags DontSave
    static UnityEngine::HideFlags _get_DontSave();
    // Set static field: static public UnityEngine.HideFlags DontSave
    static void _set_DontSave(UnityEngine::HideFlags value);
    // static field const value: static public UnityEngine.HideFlags HideAndDontSave
    static constexpr const int HideAndDontSave = 61;
    // Get static field: static public UnityEngine.HideFlags HideAndDontSave
    static UnityEngine::HideFlags _get_HideAndDontSave();
    // Set static field: static public UnityEngine.HideFlags HideAndDontSave
    static void _set_HideAndDontSave(UnityEngine::HideFlags value);
    // Get instance field: public System.Int32 value__
    int _get_value__();
    // Set instance field: public System.Int32 value__
    void _set_value__(int value);
  }; // UnityEngine.HideFlags
  #pragma pack(pop)
  static check_size<sizeof(HideFlags), 0 + sizeof(int)> __UnityEngine_HideFlagsSizeCheck;
  static_assert(sizeof(HideFlags) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::HideFlags, "UnityEngine", "HideFlags");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
