// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Diagnostics.Tracing.EventSourceSettings
  // [] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct EventSourceSettings/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: EventSourceSettings
    constexpr EventSourceSettings(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Diagnostics.Tracing.EventSourceSettings Default
    static constexpr const int Default = 0;
    // Get static field: static public System.Diagnostics.Tracing.EventSourceSettings Default
    static System::Diagnostics::Tracing::EventSourceSettings _get_Default();
    // Set static field: static public System.Diagnostics.Tracing.EventSourceSettings Default
    static void _set_Default(System::Diagnostics::Tracing::EventSourceSettings value);
    // static field const value: static public System.Diagnostics.Tracing.EventSourceSettings ThrowOnEventWriteErrors
    static constexpr const int ThrowOnEventWriteErrors = 1;
    // Get static field: static public System.Diagnostics.Tracing.EventSourceSettings ThrowOnEventWriteErrors
    static System::Diagnostics::Tracing::EventSourceSettings _get_ThrowOnEventWriteErrors();
    // Set static field: static public System.Diagnostics.Tracing.EventSourceSettings ThrowOnEventWriteErrors
    static void _set_ThrowOnEventWriteErrors(System::Diagnostics::Tracing::EventSourceSettings value);
    // static field const value: static public System.Diagnostics.Tracing.EventSourceSettings EtwManifestEventFormat
    static constexpr const int EtwManifestEventFormat = 4;
    // Get static field: static public System.Diagnostics.Tracing.EventSourceSettings EtwManifestEventFormat
    static System::Diagnostics::Tracing::EventSourceSettings _get_EtwManifestEventFormat();
    // Set static field: static public System.Diagnostics.Tracing.EventSourceSettings EtwManifestEventFormat
    static void _set_EtwManifestEventFormat(System::Diagnostics::Tracing::EventSourceSettings value);
    // static field const value: static public System.Diagnostics.Tracing.EventSourceSettings EtwSelfDescribingEventFormat
    static constexpr const int EtwSelfDescribingEventFormat = 8;
    // Get static field: static public System.Diagnostics.Tracing.EventSourceSettings EtwSelfDescribingEventFormat
    static System::Diagnostics::Tracing::EventSourceSettings _get_EtwSelfDescribingEventFormat();
    // Set static field: static public System.Diagnostics.Tracing.EventSourceSettings EtwSelfDescribingEventFormat
    static void _set_EtwSelfDescribingEventFormat(System::Diagnostics::Tracing::EventSourceSettings value);
  }; // System.Diagnostics.Tracing.EventSourceSettings
  static check_size<sizeof(EventSourceSettings), 0 + sizeof(int)> __System_Diagnostics_Tracing_EventSourceSettingsSizeCheck;
  static_assert(sizeof(EventSourceSettings) == 0x4);
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::Tracing::EventSourceSettings, "System.Diagnostics.Tracing", "EventSourceSettings");
