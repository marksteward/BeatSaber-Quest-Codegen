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
  // Autogenerated type: Oculus.Platform.NetSyncVoipStreamMode
  struct NetSyncVoipStreamMode : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: NetSyncVoipStreamMode
    constexpr NetSyncVoipStreamMode(int value_ = {}) : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const {
      return value;
    }
    // static field const value: static public Oculus.Platform.NetSyncVoipStreamMode Unknown
    static constexpr const int Unknown = 0;
    // Get static field: static public Oculus.Platform.NetSyncVoipStreamMode Unknown
    static Oculus::Platform::NetSyncVoipStreamMode _get_Unknown();
    // Set static field: static public Oculus.Platform.NetSyncVoipStreamMode Unknown
    static void _set_Unknown(Oculus::Platform::NetSyncVoipStreamMode value);
    // static field const value: static public Oculus.Platform.NetSyncVoipStreamMode Ambisonic
    static constexpr const int Ambisonic = 1;
    // Get static field: static public Oculus.Platform.NetSyncVoipStreamMode Ambisonic
    static Oculus::Platform::NetSyncVoipStreamMode _get_Ambisonic();
    // Set static field: static public Oculus.Platform.NetSyncVoipStreamMode Ambisonic
    static void _set_Ambisonic(Oculus::Platform::NetSyncVoipStreamMode value);
    // static field const value: static public Oculus.Platform.NetSyncVoipStreamMode Mono
    static constexpr const int Mono = 2;
    // Get static field: static public Oculus.Platform.NetSyncVoipStreamMode Mono
    static Oculus::Platform::NetSyncVoipStreamMode _get_Mono();
    // Set static field: static public Oculus.Platform.NetSyncVoipStreamMode Mono
    static void _set_Mono(Oculus::Platform::NetSyncVoipStreamMode value);
  }; // Oculus.Platform.NetSyncVoipStreamMode
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::NetSyncVoipStreamMode, "Oculus.Platform", "NetSyncVoipStreamMode");
#pragma pack(pop)
