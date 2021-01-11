// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.TimeSpan
#include "System/TimeSpan.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting::Lifetime
namespace System::Runtime::Remoting::Lifetime {
  // Forward declaring type: LeaseManager
  class LeaseManager;
}
// Forward declaring namespace: System::Runtime::Remoting
namespace System::Runtime::Remoting {
  // Forward declaring type: ServerIdentity
  class ServerIdentity;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Lifetime
namespace System::Runtime::Remoting::Lifetime {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Lifetime.LifetimeServices
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D3AD74
  class LifetimeServices : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: LifetimeServices
    LifetimeServices() noexcept {}
    // Get static field: static private System.TimeSpan _leaseManagerPollTime
    static System::TimeSpan _get__leaseManagerPollTime();
    // Set static field: static private System.TimeSpan _leaseManagerPollTime
    static void _set__leaseManagerPollTime(System::TimeSpan value);
    // Get static field: static private System.TimeSpan _leaseTime
    static System::TimeSpan _get__leaseTime();
    // Set static field: static private System.TimeSpan _leaseTime
    static void _set__leaseTime(System::TimeSpan value);
    // Get static field: static private System.TimeSpan _renewOnCallTime
    static System::TimeSpan _get__renewOnCallTime();
    // Set static field: static private System.TimeSpan _renewOnCallTime
    static void _set__renewOnCallTime(System::TimeSpan value);
    // Get static field: static private System.TimeSpan _sponsorshipTimeout
    static System::TimeSpan _get__sponsorshipTimeout();
    // Set static field: static private System.TimeSpan _sponsorshipTimeout
    static void _set__sponsorshipTimeout(System::TimeSpan value);
    // Get static field: static private System.Runtime.Remoting.Lifetime.LeaseManager _leaseManager
    static System::Runtime::Remoting::Lifetime::LeaseManager* _get__leaseManager();
    // Set static field: static private System.Runtime.Remoting.Lifetime.LeaseManager _leaseManager
    static void _set__leaseManager(System::Runtime::Remoting::Lifetime::LeaseManager* value);
    // static private System.Void .cctor()
    // Offset: 0x1176E98
    static void _cctor();
    // static public System.TimeSpan get_LeaseManagerPollTime()
    // Offset: 0x1176F94
    static System::TimeSpan get_LeaseManagerPollTime();
    // static public System.Void set_LeaseManagerPollTime(System.TimeSpan value)
    // Offset: 0x1171D74
    static void set_LeaseManagerPollTime(System::TimeSpan value);
    // static public System.TimeSpan get_LeaseTime()
    // Offset: 0x1176FFC
    static System::TimeSpan get_LeaseTime();
    // static public System.Void set_LeaseTime(System.TimeSpan value)
    // Offset: 0x1177064
    static void set_LeaseTime(System::TimeSpan value);
    // static public System.TimeSpan get_RenewOnCallTime()
    // Offset: 0x11770D0
    static System::TimeSpan get_RenewOnCallTime();
    // static public System.Void set_RenewOnCallTime(System.TimeSpan value)
    // Offset: 0x1177138
    static void set_RenewOnCallTime(System::TimeSpan value);
    // static public System.TimeSpan get_SponsorshipTimeout()
    // Offset: 0x11771A4
    static System::TimeSpan get_SponsorshipTimeout();
    // static public System.Void set_SponsorshipTimeout(System.TimeSpan value)
    // Offset: 0x117720C
    static void set_SponsorshipTimeout(System::TimeSpan value);
    // static System.Void TrackLifetime(System.Runtime.Remoting.ServerIdentity identity)
    // Offset: 0x1177278
    static void TrackLifetime(System::Runtime::Remoting::ServerIdentity* identity);
  }; // System.Runtime.Remoting.Lifetime.LifetimeServices
}
#pragma pack(pop)
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Lifetime::LifetimeServices*, "System.Runtime.Remoting.Lifetime", "LifetimeServices");
