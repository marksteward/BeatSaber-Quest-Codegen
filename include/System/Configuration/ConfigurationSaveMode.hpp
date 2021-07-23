// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.Configuration
namespace System::Configuration {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Configuration.ConfigurationSaveMode
  // [TokenAttribute] Offset: FFFFFFFF
  struct ConfigurationSaveMode/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: ConfigurationSaveMode
    constexpr ConfigurationSaveMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Configuration.ConfigurationSaveMode Full
    static constexpr const int Full = 2;
    // Get static field: static public System.Configuration.ConfigurationSaveMode Full
    static System::Configuration::ConfigurationSaveMode _get_Full();
    // Set static field: static public System.Configuration.ConfigurationSaveMode Full
    static void _set_Full(System::Configuration::ConfigurationSaveMode value);
    // static field const value: static public System.Configuration.ConfigurationSaveMode Minimal
    static constexpr const int Minimal = 1;
    // Get static field: static public System.Configuration.ConfigurationSaveMode Minimal
    static System::Configuration::ConfigurationSaveMode _get_Minimal();
    // Set static field: static public System.Configuration.ConfigurationSaveMode Minimal
    static void _set_Minimal(System::Configuration::ConfigurationSaveMode value);
    // static field const value: static public System.Configuration.ConfigurationSaveMode Modified
    static constexpr const int Modified = 0;
    // Get static field: static public System.Configuration.ConfigurationSaveMode Modified
    static System::Configuration::ConfigurationSaveMode _get_Modified();
    // Set static field: static public System.Configuration.ConfigurationSaveMode Modified
    static void _set_Modified(System::Configuration::ConfigurationSaveMode value);
    // Get instance field: public System.Int32 value__
    int _get_value__();
    // Set instance field: public System.Int32 value__
    void _set_value__(int value);
  }; // System.Configuration.ConfigurationSaveMode
  #pragma pack(pop)
  static check_size<sizeof(ConfigurationSaveMode), 0 + sizeof(int)> __System_Configuration_ConfigurationSaveModeSizeCheck;
  static_assert(sizeof(ConfigurationSaveMode) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Configuration::ConfigurationSaveMode, "System.Configuration", "ConfigurationSaveMode");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
