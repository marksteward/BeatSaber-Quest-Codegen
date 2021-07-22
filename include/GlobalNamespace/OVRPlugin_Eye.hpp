// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVRPlugin/Eye
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRPlugin::Eye/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: Eye
    constexpr Eye(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVRPlugin/Eye None
    static constexpr const int None = -1;
    // Get static field: static public OVRPlugin/Eye None
    static GlobalNamespace::OVRPlugin::Eye _get_None();
    // Set static field: static public OVRPlugin/Eye None
    static void _set_None(GlobalNamespace::OVRPlugin::Eye value);
    // static field const value: static public OVRPlugin/Eye Left
    static constexpr const int Left = 0;
    // Get static field: static public OVRPlugin/Eye Left
    static GlobalNamespace::OVRPlugin::Eye _get_Left();
    // Set static field: static public OVRPlugin/Eye Left
    static void _set_Left(GlobalNamespace::OVRPlugin::Eye value);
    // static field const value: static public OVRPlugin/Eye Right
    static constexpr const int Right = 1;
    // Get static field: static public OVRPlugin/Eye Right
    static GlobalNamespace::OVRPlugin::Eye _get_Right();
    // Set static field: static public OVRPlugin/Eye Right
    static void _set_Right(GlobalNamespace::OVRPlugin::Eye value);
    // static field const value: static public OVRPlugin/Eye Count
    static constexpr const int Count = 2;
    // Get static field: static public OVRPlugin/Eye Count
    static GlobalNamespace::OVRPlugin::Eye _get_Count();
    // Set static field: static public OVRPlugin/Eye Count
    static void _set_Count(GlobalNamespace::OVRPlugin::Eye value);
  }; // OVRPlugin/Eye
  #pragma pack(pop)
  static check_size<sizeof(OVRPlugin::Eye), 0 + sizeof(int)> __GlobalNamespace_OVRPlugin_EyeSizeCheck;
  static_assert(sizeof(OVRPlugin::Eye) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::Eye, "", "OVRPlugin/Eye");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
