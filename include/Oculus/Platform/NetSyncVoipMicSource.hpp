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
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Autogenerated type: Oculus.Platform.NetSyncVoipMicSource
  struct NetSyncVoipMicSource : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: NetSyncVoipMicSource
    constexpr NetSyncVoipMicSource(int value_ = {}) : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const {
      return value;
    }
    // static field const value: static public Oculus.Platform.NetSyncVoipMicSource Unknown
    static constexpr const int Unknown = 0;
    // Get static field: static public Oculus.Platform.NetSyncVoipMicSource Unknown
    static Oculus::Platform::NetSyncVoipMicSource _get_Unknown();
    // Set static field: static public Oculus.Platform.NetSyncVoipMicSource Unknown
    static void _set_Unknown(Oculus::Platform::NetSyncVoipMicSource value);
    // static field const value: static public Oculus.Platform.NetSyncVoipMicSource None
    static constexpr const int None = 1;
    // Get static field: static public Oculus.Platform.NetSyncVoipMicSource None
    static Oculus::Platform::NetSyncVoipMicSource _get_None();
    // Set static field: static public Oculus.Platform.NetSyncVoipMicSource None
    static void _set_None(Oculus::Platform::NetSyncVoipMicSource value);
    // static field const value: static public Oculus.Platform.NetSyncVoipMicSource Internal
    static constexpr const int Internal = 2;
    // Get static field: static public Oculus.Platform.NetSyncVoipMicSource Internal
    static Oculus::Platform::NetSyncVoipMicSource _get_Internal();
    // Set static field: static public Oculus.Platform.NetSyncVoipMicSource Internal
    static void _set_Internal(Oculus::Platform::NetSyncVoipMicSource value);
  }; // Oculus.Platform.NetSyncVoipMicSource
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::NetSyncVoipMicSource, "Oculus.Platform", "NetSyncVoipMicSource");
#pragma pack(pop)
