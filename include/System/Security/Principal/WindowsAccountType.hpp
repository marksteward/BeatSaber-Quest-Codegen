// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.Security.Principal
namespace System::Security::Principal {
  // Autogenerated type: System.Security.Principal.WindowsAccountType
  struct WindowsAccountType : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: WindowsAccountType
    constexpr WindowsAccountType(int value_ = {}) : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const {
      return value;
    }
    // static field const value: static public System.Security.Principal.WindowsAccountType Normal
    static constexpr const int Normal = 0;
    // Get static field: static public System.Security.Principal.WindowsAccountType Normal
    static System::Security::Principal::WindowsAccountType _get_Normal();
    // Set static field: static public System.Security.Principal.WindowsAccountType Normal
    static void _set_Normal(System::Security::Principal::WindowsAccountType value);
    // static field const value: static public System.Security.Principal.WindowsAccountType Guest
    static constexpr const int Guest = 1;
    // Get static field: static public System.Security.Principal.WindowsAccountType Guest
    static System::Security::Principal::WindowsAccountType _get_Guest();
    // Set static field: static public System.Security.Principal.WindowsAccountType Guest
    static void _set_Guest(System::Security::Principal::WindowsAccountType value);
    // static field const value: static public System.Security.Principal.WindowsAccountType System
    static constexpr const int System = 2;
    // Get static field: static public System.Security.Principal.WindowsAccountType System
    static System::Security::Principal::WindowsAccountType _get_System();
    // Set static field: static public System.Security.Principal.WindowsAccountType System
    static void _set_System(System::Security::Principal::WindowsAccountType value);
    // static field const value: static public System.Security.Principal.WindowsAccountType Anonymous
    static constexpr const int Anonymous = 3;
    // Get static field: static public System.Security.Principal.WindowsAccountType Anonymous
    static System::Security::Principal::WindowsAccountType _get_Anonymous();
    // Set static field: static public System.Security.Principal.WindowsAccountType Anonymous
    static void _set_Anonymous(System::Security::Principal::WindowsAccountType value);
  }; // System.Security.Principal.WindowsAccountType
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Security::Principal::WindowsAccountType, "System.Security.Principal", "WindowsAccountType");
#pragma pack(pop)
