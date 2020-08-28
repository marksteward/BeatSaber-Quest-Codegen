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
// Type namespace: System.Net.Sockets
namespace System::Net::Sockets {
  // Autogenerated type: System.Net.Sockets.SocketFlags
  struct SocketFlags : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: SocketFlags
    constexpr SocketFlags(int value_ = {}) : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const {
      return value;
    }
    // static field const value: static public System.Net.Sockets.SocketFlags None
    static constexpr const int None = 0;
    // Get static field: static public System.Net.Sockets.SocketFlags None
    static System::Net::Sockets::SocketFlags _get_None();
    // Set static field: static public System.Net.Sockets.SocketFlags None
    static void _set_None(System::Net::Sockets::SocketFlags value);
    // static field const value: static public System.Net.Sockets.SocketFlags OutOfBand
    static constexpr const int OutOfBand = 1;
    // Get static field: static public System.Net.Sockets.SocketFlags OutOfBand
    static System::Net::Sockets::SocketFlags _get_OutOfBand();
    // Set static field: static public System.Net.Sockets.SocketFlags OutOfBand
    static void _set_OutOfBand(System::Net::Sockets::SocketFlags value);
    // static field const value: static public System.Net.Sockets.SocketFlags Peek
    static constexpr const int Peek = 2;
    // Get static field: static public System.Net.Sockets.SocketFlags Peek
    static System::Net::Sockets::SocketFlags _get_Peek();
    // Set static field: static public System.Net.Sockets.SocketFlags Peek
    static void _set_Peek(System::Net::Sockets::SocketFlags value);
    // static field const value: static public System.Net.Sockets.SocketFlags DontRoute
    static constexpr const int DontRoute = 4;
    // Get static field: static public System.Net.Sockets.SocketFlags DontRoute
    static System::Net::Sockets::SocketFlags _get_DontRoute();
    // Set static field: static public System.Net.Sockets.SocketFlags DontRoute
    static void _set_DontRoute(System::Net::Sockets::SocketFlags value);
    // static field const value: static public System.Net.Sockets.SocketFlags MaxIOVectorLength
    static constexpr const int MaxIOVectorLength = 16;
    // Get static field: static public System.Net.Sockets.SocketFlags MaxIOVectorLength
    static System::Net::Sockets::SocketFlags _get_MaxIOVectorLength();
    // Set static field: static public System.Net.Sockets.SocketFlags MaxIOVectorLength
    static void _set_MaxIOVectorLength(System::Net::Sockets::SocketFlags value);
    // static field const value: static public System.Net.Sockets.SocketFlags Truncated
    static constexpr const int Truncated = 256;
    // Get static field: static public System.Net.Sockets.SocketFlags Truncated
    static System::Net::Sockets::SocketFlags _get_Truncated();
    // Set static field: static public System.Net.Sockets.SocketFlags Truncated
    static void _set_Truncated(System::Net::Sockets::SocketFlags value);
    // static field const value: static public System.Net.Sockets.SocketFlags ControlDataTruncated
    static constexpr const int ControlDataTruncated = 512;
    // Get static field: static public System.Net.Sockets.SocketFlags ControlDataTruncated
    static System::Net::Sockets::SocketFlags _get_ControlDataTruncated();
    // Set static field: static public System.Net.Sockets.SocketFlags ControlDataTruncated
    static void _set_ControlDataTruncated(System::Net::Sockets::SocketFlags value);
    // static field const value: static public System.Net.Sockets.SocketFlags Broadcast
    static constexpr const int Broadcast = 1024;
    // Get static field: static public System.Net.Sockets.SocketFlags Broadcast
    static System::Net::Sockets::SocketFlags _get_Broadcast();
    // Set static field: static public System.Net.Sockets.SocketFlags Broadcast
    static void _set_Broadcast(System::Net::Sockets::SocketFlags value);
    // static field const value: static public System.Net.Sockets.SocketFlags Multicast
    static constexpr const int Multicast = 2048;
    // Get static field: static public System.Net.Sockets.SocketFlags Multicast
    static System::Net::Sockets::SocketFlags _get_Multicast();
    // Set static field: static public System.Net.Sockets.SocketFlags Multicast
    static void _set_Multicast(System::Net::Sockets::SocketFlags value);
    // static field const value: static public System.Net.Sockets.SocketFlags Partial
    static constexpr const int Partial = 32768;
    // Get static field: static public System.Net.Sockets.SocketFlags Partial
    static System::Net::Sockets::SocketFlags _get_Partial();
    // Set static field: static public System.Net.Sockets.SocketFlags Partial
    static void _set_Partial(System::Net::Sockets::SocketFlags value);
  }; // System.Net.Sockets.SocketFlags
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::Sockets::SocketFlags, "System.Net.Sockets", "SocketFlags");
#pragma pack(pop)
