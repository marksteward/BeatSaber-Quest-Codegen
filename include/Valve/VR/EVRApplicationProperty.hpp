// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.EVRApplicationProperty
  // [TokenAttribute] Offset: FFFFFFFF
  struct EVRApplicationProperty/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: EVRApplicationProperty
    constexpr EVRApplicationProperty(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Valve.VR.EVRApplicationProperty Name_String
    static constexpr const int Name_String = 0;
    // Get static field: static public Valve.VR.EVRApplicationProperty Name_String
    static Valve::VR::EVRApplicationProperty _get_Name_String();
    // Set static field: static public Valve.VR.EVRApplicationProperty Name_String
    static void _set_Name_String(Valve::VR::EVRApplicationProperty value);
    // static field const value: static public Valve.VR.EVRApplicationProperty LaunchType_String
    static constexpr const int LaunchType_String = 11;
    // Get static field: static public Valve.VR.EVRApplicationProperty LaunchType_String
    static Valve::VR::EVRApplicationProperty _get_LaunchType_String();
    // Set static field: static public Valve.VR.EVRApplicationProperty LaunchType_String
    static void _set_LaunchType_String(Valve::VR::EVRApplicationProperty value);
    // static field const value: static public Valve.VR.EVRApplicationProperty WorkingDirectory_String
    static constexpr const int WorkingDirectory_String = 12;
    // Get static field: static public Valve.VR.EVRApplicationProperty WorkingDirectory_String
    static Valve::VR::EVRApplicationProperty _get_WorkingDirectory_String();
    // Set static field: static public Valve.VR.EVRApplicationProperty WorkingDirectory_String
    static void _set_WorkingDirectory_String(Valve::VR::EVRApplicationProperty value);
    // static field const value: static public Valve.VR.EVRApplicationProperty BinaryPath_String
    static constexpr const int BinaryPath_String = 13;
    // Get static field: static public Valve.VR.EVRApplicationProperty BinaryPath_String
    static Valve::VR::EVRApplicationProperty _get_BinaryPath_String();
    // Set static field: static public Valve.VR.EVRApplicationProperty BinaryPath_String
    static void _set_BinaryPath_String(Valve::VR::EVRApplicationProperty value);
    // static field const value: static public Valve.VR.EVRApplicationProperty Arguments_String
    static constexpr const int Arguments_String = 14;
    // Get static field: static public Valve.VR.EVRApplicationProperty Arguments_String
    static Valve::VR::EVRApplicationProperty _get_Arguments_String();
    // Set static field: static public Valve.VR.EVRApplicationProperty Arguments_String
    static void _set_Arguments_String(Valve::VR::EVRApplicationProperty value);
    // static field const value: static public Valve.VR.EVRApplicationProperty URL_String
    static constexpr const int URL_String = 15;
    // Get static field: static public Valve.VR.EVRApplicationProperty URL_String
    static Valve::VR::EVRApplicationProperty _get_URL_String();
    // Set static field: static public Valve.VR.EVRApplicationProperty URL_String
    static void _set_URL_String(Valve::VR::EVRApplicationProperty value);
    // static field const value: static public Valve.VR.EVRApplicationProperty Description_String
    static constexpr const int Description_String = 50;
    // Get static field: static public Valve.VR.EVRApplicationProperty Description_String
    static Valve::VR::EVRApplicationProperty _get_Description_String();
    // Set static field: static public Valve.VR.EVRApplicationProperty Description_String
    static void _set_Description_String(Valve::VR::EVRApplicationProperty value);
    // static field const value: static public Valve.VR.EVRApplicationProperty NewsURL_String
    static constexpr const int NewsURL_String = 51;
    // Get static field: static public Valve.VR.EVRApplicationProperty NewsURL_String
    static Valve::VR::EVRApplicationProperty _get_NewsURL_String();
    // Set static field: static public Valve.VR.EVRApplicationProperty NewsURL_String
    static void _set_NewsURL_String(Valve::VR::EVRApplicationProperty value);
    // static field const value: static public Valve.VR.EVRApplicationProperty ImagePath_String
    static constexpr const int ImagePath_String = 52;
    // Get static field: static public Valve.VR.EVRApplicationProperty ImagePath_String
    static Valve::VR::EVRApplicationProperty _get_ImagePath_String();
    // Set static field: static public Valve.VR.EVRApplicationProperty ImagePath_String
    static void _set_ImagePath_String(Valve::VR::EVRApplicationProperty value);
    // static field const value: static public Valve.VR.EVRApplicationProperty Source_String
    static constexpr const int Source_String = 53;
    // Get static field: static public Valve.VR.EVRApplicationProperty Source_String
    static Valve::VR::EVRApplicationProperty _get_Source_String();
    // Set static field: static public Valve.VR.EVRApplicationProperty Source_String
    static void _set_Source_String(Valve::VR::EVRApplicationProperty value);
    // static field const value: static public Valve.VR.EVRApplicationProperty ActionManifestURL_String
    static constexpr const int ActionManifestURL_String = 54;
    // Get static field: static public Valve.VR.EVRApplicationProperty ActionManifestURL_String
    static Valve::VR::EVRApplicationProperty _get_ActionManifestURL_String();
    // Set static field: static public Valve.VR.EVRApplicationProperty ActionManifestURL_String
    static void _set_ActionManifestURL_String(Valve::VR::EVRApplicationProperty value);
    // static field const value: static public Valve.VR.EVRApplicationProperty IsDashboardOverlay_Bool
    static constexpr const int IsDashboardOverlay_Bool = 60;
    // Get static field: static public Valve.VR.EVRApplicationProperty IsDashboardOverlay_Bool
    static Valve::VR::EVRApplicationProperty _get_IsDashboardOverlay_Bool();
    // Set static field: static public Valve.VR.EVRApplicationProperty IsDashboardOverlay_Bool
    static void _set_IsDashboardOverlay_Bool(Valve::VR::EVRApplicationProperty value);
    // static field const value: static public Valve.VR.EVRApplicationProperty IsTemplate_Bool
    static constexpr const int IsTemplate_Bool = 61;
    // Get static field: static public Valve.VR.EVRApplicationProperty IsTemplate_Bool
    static Valve::VR::EVRApplicationProperty _get_IsTemplate_Bool();
    // Set static field: static public Valve.VR.EVRApplicationProperty IsTemplate_Bool
    static void _set_IsTemplate_Bool(Valve::VR::EVRApplicationProperty value);
    // static field const value: static public Valve.VR.EVRApplicationProperty IsInstanced_Bool
    static constexpr const int IsInstanced_Bool = 62;
    // Get static field: static public Valve.VR.EVRApplicationProperty IsInstanced_Bool
    static Valve::VR::EVRApplicationProperty _get_IsInstanced_Bool();
    // Set static field: static public Valve.VR.EVRApplicationProperty IsInstanced_Bool
    static void _set_IsInstanced_Bool(Valve::VR::EVRApplicationProperty value);
    // static field const value: static public Valve.VR.EVRApplicationProperty IsInternal_Bool
    static constexpr const int IsInternal_Bool = 63;
    // Get static field: static public Valve.VR.EVRApplicationProperty IsInternal_Bool
    static Valve::VR::EVRApplicationProperty _get_IsInternal_Bool();
    // Set static field: static public Valve.VR.EVRApplicationProperty IsInternal_Bool
    static void _set_IsInternal_Bool(Valve::VR::EVRApplicationProperty value);
    // static field const value: static public Valve.VR.EVRApplicationProperty WantsCompositorPauseInStandby_Bool
    static constexpr const int WantsCompositorPauseInStandby_Bool = 64;
    // Get static field: static public Valve.VR.EVRApplicationProperty WantsCompositorPauseInStandby_Bool
    static Valve::VR::EVRApplicationProperty _get_WantsCompositorPauseInStandby_Bool();
    // Set static field: static public Valve.VR.EVRApplicationProperty WantsCompositorPauseInStandby_Bool
    static void _set_WantsCompositorPauseInStandby_Bool(Valve::VR::EVRApplicationProperty value);
    // static field const value: static public Valve.VR.EVRApplicationProperty LastLaunchTime_Uint64
    static constexpr const int LastLaunchTime_Uint64 = 70;
    // Get static field: static public Valve.VR.EVRApplicationProperty LastLaunchTime_Uint64
    static Valve::VR::EVRApplicationProperty _get_LastLaunchTime_Uint64();
    // Set static field: static public Valve.VR.EVRApplicationProperty LastLaunchTime_Uint64
    static void _set_LastLaunchTime_Uint64(Valve::VR::EVRApplicationProperty value);
    // Get instance field: public System.Int32 value__
    int _get_value__();
    // Set instance field: public System.Int32 value__
    void _set_value__(int value);
  }; // Valve.VR.EVRApplicationProperty
  #pragma pack(pop)
  static check_size<sizeof(EVRApplicationProperty), 0 + sizeof(int)> __Valve_VR_EVRApplicationPropertySizeCheck;
  static_assert(sizeof(EVRApplicationProperty) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::EVRApplicationProperty, "Valve.VR", "EVRApplicationProperty");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
