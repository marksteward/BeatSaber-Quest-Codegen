// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRManager
#include "GlobalNamespace/OVRManager.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVRManager/FixedFoveatedRenderingLevel
  // [] Offset: FFFFFFFF
  struct OVRManager::FixedFoveatedRenderingLevel/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: FixedFoveatedRenderingLevel
    constexpr FixedFoveatedRenderingLevel(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVRManager/FixedFoveatedRenderingLevel Off
    static constexpr const int Off = 0;
    // Get static field: static public OVRManager/FixedFoveatedRenderingLevel Off
    static GlobalNamespace::OVRManager::FixedFoveatedRenderingLevel _get_Off();
    // Set static field: static public OVRManager/FixedFoveatedRenderingLevel Off
    static void _set_Off(GlobalNamespace::OVRManager::FixedFoveatedRenderingLevel value);
    // static field const value: static public OVRManager/FixedFoveatedRenderingLevel Low
    static constexpr const int Low = 1;
    // Get static field: static public OVRManager/FixedFoveatedRenderingLevel Low
    static GlobalNamespace::OVRManager::FixedFoveatedRenderingLevel _get_Low();
    // Set static field: static public OVRManager/FixedFoveatedRenderingLevel Low
    static void _set_Low(GlobalNamespace::OVRManager::FixedFoveatedRenderingLevel value);
    // static field const value: static public OVRManager/FixedFoveatedRenderingLevel Medium
    static constexpr const int Medium = 2;
    // Get static field: static public OVRManager/FixedFoveatedRenderingLevel Medium
    static GlobalNamespace::OVRManager::FixedFoveatedRenderingLevel _get_Medium();
    // Set static field: static public OVRManager/FixedFoveatedRenderingLevel Medium
    static void _set_Medium(GlobalNamespace::OVRManager::FixedFoveatedRenderingLevel value);
    // static field const value: static public OVRManager/FixedFoveatedRenderingLevel High
    static constexpr const int High = 3;
    // Get static field: static public OVRManager/FixedFoveatedRenderingLevel High
    static GlobalNamespace::OVRManager::FixedFoveatedRenderingLevel _get_High();
    // Set static field: static public OVRManager/FixedFoveatedRenderingLevel High
    static void _set_High(GlobalNamespace::OVRManager::FixedFoveatedRenderingLevel value);
    // static field const value: static public OVRManager/FixedFoveatedRenderingLevel HighTop
    static constexpr const int HighTop = 4;
    // Get static field: static public OVRManager/FixedFoveatedRenderingLevel HighTop
    static GlobalNamespace::OVRManager::FixedFoveatedRenderingLevel _get_HighTop();
    // Set static field: static public OVRManager/FixedFoveatedRenderingLevel HighTop
    static void _set_HighTop(GlobalNamespace::OVRManager::FixedFoveatedRenderingLevel value);
  }; // OVRManager/FixedFoveatedRenderingLevel
  static check_size<sizeof(OVRManager::FixedFoveatedRenderingLevel), 0 + sizeof(int)> __GlobalNamespace_OVRManager_FixedFoveatedRenderingLevelSizeCheck;
  static_assert(sizeof(OVRManager::FixedFoveatedRenderingLevel) == 0x4);
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRManager::FixedFoveatedRenderingLevel, "", "OVRManager/FixedFoveatedRenderingLevel");
