// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.MarshalByRefObject
#include "System/MarshalByRefObject.hpp"
// Including type: System.Runtime.Remoting.Lifetime.ILease
#include "System/Runtime/Remoting/Lifetime/ILease.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
// Including type: System.Runtime.Remoting.Lifetime.LeaseState
#include "System/Runtime/Remoting/Lifetime/LeaseState.hpp"
// Including type: System.TimeSpan
#include "System/TimeSpan.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting::Lifetime
namespace System::Runtime::Remoting::Lifetime {
  // Forward declaring type: ISponsor
  class ISponsor;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: ArrayList
  class ArrayList;
  // Forward declaring type: Queue
  class Queue;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Lifetime
namespace System::Runtime::Remoting::Lifetime {
  // Autogenerated type: System.Runtime.Remoting.Lifetime.Lease
  class Lease : public System::MarshalByRefObject, public System::Runtime::Remoting::Lifetime::ILease {
    public:
    // Nested type: System::Runtime::Remoting::Lifetime::Lease::RenewalDelegate
    class RenewalDelegate;
    // private System.DateTime _leaseExpireTime
    // Offset: 0x18
    System::DateTime leaseExpireTime;
    // private System.Runtime.Remoting.Lifetime.LeaseState _currentState
    // Offset: 0x20
    System::Runtime::Remoting::Lifetime::LeaseState currentState;
    // private System.TimeSpan _initialLeaseTime
    // Offset: 0x28
    System::TimeSpan initialLeaseTime;
    // private System.TimeSpan _renewOnCallTime
    // Offset: 0x30
    System::TimeSpan renewOnCallTime;
    // private System.TimeSpan _sponsorshipTimeout
    // Offset: 0x38
    System::TimeSpan sponsorshipTimeout;
    // private System.Collections.ArrayList _sponsors
    // Offset: 0x40
    System::Collections::ArrayList* sponsors;
    // private System.Collections.Queue _renewingSponsors
    // Offset: 0x48
    System::Collections::Queue* renewingSponsors;
    // private System.Runtime.Remoting.Lifetime.Lease/RenewalDelegate _renewalDelegate
    // Offset: 0x50
    System::Runtime::Remoting::Lifetime::Lease::RenewalDelegate* renewalDelegate;
    // Deleting conversion operator: operator ::Il2CppObject*
    constexpr operator ::Il2CppObject*() const = delete;
    // public System.Void Activate()
    // Offset: 0x1061B54
    void Activate();
    // public System.Void Unregister(System.Runtime.Remoting.Lifetime.ISponsor obj)
    // Offset: 0x1061C04
    void Unregister(System::Runtime::Remoting::Lifetime::ISponsor* obj);
    // System.Void UpdateState()
    // Offset: 0x1061D44
    void UpdateState();
    // private System.Void CheckNextSponsor()
    // Offset: 0x1061EAC
    void CheckNextSponsor();
    // private System.Void ProcessSponsorResponse(System.Object state, System.Boolean timedOut)
    // Offset: 0x1062150
    void ProcessSponsorResponse(::Il2CppObject* state, bool timedOut);
    // public System.Void .ctor()
    // Offset: 0x106193C
    // Implemented from: System.MarshalByRefObject
    // Base method: System.Void MarshalByRefObject::.ctor()
    // Base method: System.Void Object::.ctor()
    static Lease* New_ctor();
    // public System.TimeSpan get_CurrentLeaseTime()
    // Offset: 0x1061AD4
    // Implemented from: System.Runtime.Remoting.Lifetime.ILease
    // Base method: System.TimeSpan ILease::get_CurrentLeaseTime()
    System::TimeSpan get_CurrentLeaseTime();
    // public System.Runtime.Remoting.Lifetime.LeaseState get_CurrentState()
    // Offset: 0x1061B4C
    // Implemented from: System.Runtime.Remoting.Lifetime.ILease
    // Base method: System.Runtime.Remoting.Lifetime.LeaseState ILease::get_CurrentState()
    System::Runtime::Remoting::Lifetime::LeaseState get_CurrentState();
    // public System.TimeSpan get_RenewOnCallTime()
    // Offset: 0x1061B60
    // Implemented from: System.Runtime.Remoting.Lifetime.ILease
    // Base method: System.TimeSpan ILease::get_RenewOnCallTime()
    System::TimeSpan get_RenewOnCallTime();
    // public System.TimeSpan Renew(System.TimeSpan renewalTime)
    // Offset: 0x1061B68
    // Implemented from: System.Runtime.Remoting.Lifetime.ILease
    // Base method: System.TimeSpan ILease::Renew(System.TimeSpan renewalTime)
    System::TimeSpan Renew(System::TimeSpan renewalTime);
  }; // System.Runtime.Remoting.Lifetime.Lease
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Lifetime::Lease*, "System.Runtime.Remoting.Lifetime", "Lease");
#pragma pack(pop)
