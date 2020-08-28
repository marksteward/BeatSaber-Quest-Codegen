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
  // Autogenerated type: Oculus.Platform.PeerConnectionState
  struct PeerConnectionState : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: PeerConnectionState
    constexpr PeerConnectionState(int value_ = {}) : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const {
      return value;
    }
    // static field const value: static public Oculus.Platform.PeerConnectionState Unknown
    static constexpr const int Unknown = 0;
    // Get static field: static public Oculus.Platform.PeerConnectionState Unknown
    static Oculus::Platform::PeerConnectionState _get_Unknown();
    // Set static field: static public Oculus.Platform.PeerConnectionState Unknown
    static void _set_Unknown(Oculus::Platform::PeerConnectionState value);
    // static field const value: static public Oculus.Platform.PeerConnectionState Connected
    static constexpr const int Connected = 1;
    // Get static field: static public Oculus.Platform.PeerConnectionState Connected
    static Oculus::Platform::PeerConnectionState _get_Connected();
    // Set static field: static public Oculus.Platform.PeerConnectionState Connected
    static void _set_Connected(Oculus::Platform::PeerConnectionState value);
    // static field const value: static public Oculus.Platform.PeerConnectionState Timeout
    static constexpr const int Timeout = 2;
    // Get static field: static public Oculus.Platform.PeerConnectionState Timeout
    static Oculus::Platform::PeerConnectionState _get_Timeout();
    // Set static field: static public Oculus.Platform.PeerConnectionState Timeout
    static void _set_Timeout(Oculus::Platform::PeerConnectionState value);
    // static field const value: static public Oculus.Platform.PeerConnectionState Closed
    static constexpr const int Closed = 3;
    // Get static field: static public Oculus.Platform.PeerConnectionState Closed
    static Oculus::Platform::PeerConnectionState _get_Closed();
    // Set static field: static public Oculus.Platform.PeerConnectionState Closed
    static void _set_Closed(Oculus::Platform::PeerConnectionState value);
  }; // Oculus.Platform.PeerConnectionState
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::PeerConnectionState, "Oculus.Platform", "PeerConnectionState");
#pragma pack(pop)
