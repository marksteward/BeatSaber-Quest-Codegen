// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SteamVR_Controller
#include "GlobalNamespace/SteamVR_Controller.hpp"
// Including type: System.UInt64
#include "System/UInt64.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: SteamVR_Controller/ButtonMask
  // [] Offset: FFFFFFFF
  class SteamVR_Controller::ButtonMask : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: ButtonMask
    ButtonMask() noexcept {}
    // static field const value: static public System.UInt64 System
    static constexpr const uint64_t System = 1u;
    // Get static field: static public System.UInt64 System
    static uint64_t _get_System();
    // Set static field: static public System.UInt64 System
    static void _set_System(uint64_t value);
    // static field const value: static public System.UInt64 ApplicationMenu
    static constexpr const uint64_t ApplicationMenu = 2u;
    // Get static field: static public System.UInt64 ApplicationMenu
    static uint64_t _get_ApplicationMenu();
    // Set static field: static public System.UInt64 ApplicationMenu
    static void _set_ApplicationMenu(uint64_t value);
    // static field const value: static public System.UInt64 Grip
    static constexpr const uint64_t Grip = 4u;
    // Get static field: static public System.UInt64 Grip
    static uint64_t _get_Grip();
    // Set static field: static public System.UInt64 Grip
    static void _set_Grip(uint64_t value);
    // static field const value: static public System.UInt64 Axis0
    static constexpr const uint64_t Axis0 = 4294967296u;
    // Get static field: static public System.UInt64 Axis0
    static uint64_t _get_Axis0();
    // Set static field: static public System.UInt64 Axis0
    static void _set_Axis0(uint64_t value);
    // static field const value: static public System.UInt64 Axis1
    static constexpr const uint64_t Axis1 = 8589934592u;
    // Get static field: static public System.UInt64 Axis1
    static uint64_t _get_Axis1();
    // Set static field: static public System.UInt64 Axis1
    static void _set_Axis1(uint64_t value);
    // static field const value: static public System.UInt64 Axis2
    static constexpr const uint64_t Axis2 = 17179869184u;
    // Get static field: static public System.UInt64 Axis2
    static uint64_t _get_Axis2();
    // Set static field: static public System.UInt64 Axis2
    static void _set_Axis2(uint64_t value);
    // static field const value: static public System.UInt64 Axis3
    static constexpr const uint64_t Axis3 = 34359738368u;
    // Get static field: static public System.UInt64 Axis3
    static uint64_t _get_Axis3();
    // Set static field: static public System.UInt64 Axis3
    static void _set_Axis3(uint64_t value);
    // static field const value: static public System.UInt64 Axis4
    static constexpr const uint64_t Axis4 = 68719476736u;
    // Get static field: static public System.UInt64 Axis4
    static uint64_t _get_Axis4();
    // Set static field: static public System.UInt64 Axis4
    static void _set_Axis4(uint64_t value);
    // static field const value: static public System.UInt64 Touchpad
    static constexpr const uint64_t Touchpad = 4294967296u;
    // Get static field: static public System.UInt64 Touchpad
    static uint64_t _get_Touchpad();
    // Set static field: static public System.UInt64 Touchpad
    static void _set_Touchpad(uint64_t value);
    // static field const value: static public System.UInt64 Trigger
    static constexpr const uint64_t Trigger = 8589934592u;
    // Get static field: static public System.UInt64 Trigger
    static uint64_t _get_Trigger();
    // Set static field: static public System.UInt64 Trigger
    static void _set_Trigger(uint64_t value);
    // public System.Void .ctor()
    // Offset: 0x1103C94
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SteamVR_Controller::ButtonMask* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SteamVR_Controller::ButtonMask::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SteamVR_Controller::ButtonMask*, creationType>()));
    }
  }; // SteamVR_Controller/ButtonMask
}
#pragma pack(pop)
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SteamVR_Controller::ButtonMask*, "", "SteamVR_Controller/ButtonMask");
