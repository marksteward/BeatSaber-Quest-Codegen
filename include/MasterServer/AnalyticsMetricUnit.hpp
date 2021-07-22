// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: MasterServer
namespace MasterServer {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.AnalyticsMetricUnit
  // [TokenAttribute] Offset: FFFFFFFF
  struct AnalyticsMetricUnit/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: AnalyticsMetricUnit
    constexpr AnalyticsMetricUnit(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public MasterServer.AnalyticsMetricUnit None
    static constexpr const int None = 0;
    // Get static field: static public MasterServer.AnalyticsMetricUnit None
    static MasterServer::AnalyticsMetricUnit _get_None();
    // Set static field: static public MasterServer.AnalyticsMetricUnit None
    static void _set_None(MasterServer::AnalyticsMetricUnit value);
    // static field const value: static public MasterServer.AnalyticsMetricUnit Count
    static constexpr const int Count = 1;
    // Get static field: static public MasterServer.AnalyticsMetricUnit Count
    static MasterServer::AnalyticsMetricUnit _get_Count();
    // Set static field: static public MasterServer.AnalyticsMetricUnit Count
    static void _set_Count(MasterServer::AnalyticsMetricUnit value);
    // static field const value: static public MasterServer.AnalyticsMetricUnit Percent
    static constexpr const int Percent = 2;
    // Get static field: static public MasterServer.AnalyticsMetricUnit Percent
    static MasterServer::AnalyticsMetricUnit _get_Percent();
    // Set static field: static public MasterServer.AnalyticsMetricUnit Percent
    static void _set_Percent(MasterServer::AnalyticsMetricUnit value);
    // static field const value: static public MasterServer.AnalyticsMetricUnit Seconds
    static constexpr const int Seconds = 3;
    // Get static field: static public MasterServer.AnalyticsMetricUnit Seconds
    static MasterServer::AnalyticsMetricUnit _get_Seconds();
    // Set static field: static public MasterServer.AnalyticsMetricUnit Seconds
    static void _set_Seconds(MasterServer::AnalyticsMetricUnit value);
    // static field const value: static public MasterServer.AnalyticsMetricUnit Milliseconds
    static constexpr const int Milliseconds = 4;
    // Get static field: static public MasterServer.AnalyticsMetricUnit Milliseconds
    static MasterServer::AnalyticsMetricUnit _get_Milliseconds();
    // Set static field: static public MasterServer.AnalyticsMetricUnit Milliseconds
    static void _set_Milliseconds(MasterServer::AnalyticsMetricUnit value);
    // static field const value: static public MasterServer.AnalyticsMetricUnit Microseconds
    static constexpr const int Microseconds = 5;
    // Get static field: static public MasterServer.AnalyticsMetricUnit Microseconds
    static MasterServer::AnalyticsMetricUnit _get_Microseconds();
    // Set static field: static public MasterServer.AnalyticsMetricUnit Microseconds
    static void _set_Microseconds(MasterServer::AnalyticsMetricUnit value);
    // static field const value: static public MasterServer.AnalyticsMetricUnit Bytes
    static constexpr const int Bytes = 6;
    // Get static field: static public MasterServer.AnalyticsMetricUnit Bytes
    static MasterServer::AnalyticsMetricUnit _get_Bytes();
    // Set static field: static public MasterServer.AnalyticsMetricUnit Bytes
    static void _set_Bytes(MasterServer::AnalyticsMetricUnit value);
  }; // MasterServer.AnalyticsMetricUnit
  #pragma pack(pop)
  static check_size<sizeof(AnalyticsMetricUnit), 0 + sizeof(int)> __MasterServer_AnalyticsMetricUnitSizeCheck;
  static_assert(sizeof(AnalyticsMetricUnit) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(MasterServer::AnalyticsMetricUnit, "MasterServer", "AnalyticsMetricUnit");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
