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
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D6B9AC
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
    // static public System.TimeSpan get_LeaseManagerPollTime()
    // Offset: 0x19F2BD0
    static System::TimeSpan get_LeaseManagerPollTime();
    // static public System.Void set_LeaseManagerPollTime(System.TimeSpan value)
    // Offset: 0x19F2C38
    static void set_LeaseManagerPollTime(System::TimeSpan value);
    // static public System.TimeSpan get_LeaseTime()
    // Offset: 0x19F2CBC
    static System::TimeSpan get_LeaseTime();
    // static public System.Void set_LeaseTime(System.TimeSpan value)
    // Offset: 0x19F2D24
    static void set_LeaseTime(System::TimeSpan value);
    // static public System.TimeSpan get_RenewOnCallTime()
    // Offset: 0x19F2D90
    static System::TimeSpan get_RenewOnCallTime();
    // static public System.Void set_RenewOnCallTime(System.TimeSpan value)
    // Offset: 0x19F2DF8
    static void set_RenewOnCallTime(System::TimeSpan value);
    // static public System.TimeSpan get_SponsorshipTimeout()
    // Offset: 0x19F2E64
    static System::TimeSpan get_SponsorshipTimeout();
    // static public System.Void set_SponsorshipTimeout(System.TimeSpan value)
    // Offset: 0x19F2ECC
    static void set_SponsorshipTimeout(System::TimeSpan value);
    // static private System.Void .cctor()
    // Offset: 0x19F2ADC
    static void _cctor();
    // static System.Void TrackLifetime(System.Runtime.Remoting.ServerIdentity identity)
    // Offset: 0x19F2F38
    static void TrackLifetime(System::Runtime::Remoting::ServerIdentity* identity);
  }; // System.Runtime.Remoting.Lifetime.LifetimeServices
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Lifetime::LifetimeServices*, "System.Runtime.Remoting.Lifetime", "LifetimeServices");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::Lifetime::LifetimeServices::get_LeaseManagerPollTime
// Il2CppName: get_LeaseManagerPollTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::TimeSpan (*)()>(&System::Runtime::Remoting::Lifetime::LifetimeServices::get_LeaseManagerPollTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Lifetime::LifetimeServices*), "get_LeaseManagerPollTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Lifetime::LifetimeServices::set_LeaseManagerPollTime
// Il2CppName: set_LeaseManagerPollTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::TimeSpan)>(&System::Runtime::Remoting::Lifetime::LifetimeServices::set_LeaseManagerPollTime)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "TimeSpan")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Lifetime::LifetimeServices*), "set_LeaseManagerPollTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Lifetime::LifetimeServices::get_LeaseTime
// Il2CppName: get_LeaseTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::TimeSpan (*)()>(&System::Runtime::Remoting::Lifetime::LifetimeServices::get_LeaseTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Lifetime::LifetimeServices*), "get_LeaseTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Lifetime::LifetimeServices::set_LeaseTime
// Il2CppName: set_LeaseTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::TimeSpan)>(&System::Runtime::Remoting::Lifetime::LifetimeServices::set_LeaseTime)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "TimeSpan")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Lifetime::LifetimeServices*), "set_LeaseTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Lifetime::LifetimeServices::get_RenewOnCallTime
// Il2CppName: get_RenewOnCallTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::TimeSpan (*)()>(&System::Runtime::Remoting::Lifetime::LifetimeServices::get_RenewOnCallTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Lifetime::LifetimeServices*), "get_RenewOnCallTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Lifetime::LifetimeServices::set_RenewOnCallTime
// Il2CppName: set_RenewOnCallTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::TimeSpan)>(&System::Runtime::Remoting::Lifetime::LifetimeServices::set_RenewOnCallTime)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "TimeSpan")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Lifetime::LifetimeServices*), "set_RenewOnCallTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Lifetime::LifetimeServices::get_SponsorshipTimeout
// Il2CppName: get_SponsorshipTimeout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::TimeSpan (*)()>(&System::Runtime::Remoting::Lifetime::LifetimeServices::get_SponsorshipTimeout)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Lifetime::LifetimeServices*), "get_SponsorshipTimeout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Lifetime::LifetimeServices::set_SponsorshipTimeout
// Il2CppName: set_SponsorshipTimeout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::TimeSpan)>(&System::Runtime::Remoting::Lifetime::LifetimeServices::set_SponsorshipTimeout)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "TimeSpan")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Lifetime::LifetimeServices*), "set_SponsorshipTimeout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Lifetime::LifetimeServices::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Runtime::Remoting::Lifetime::LifetimeServices::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Lifetime::LifetimeServices*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Lifetime::LifetimeServices::TrackLifetime
// Il2CppName: TrackLifetime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Runtime::Remoting::ServerIdentity*)>(&System::Runtime::Remoting::Lifetime::LifetimeServices::TrackLifetime)> {
  static const MethodInfo* get() {
    static auto* identity = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting", "ServerIdentity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Lifetime::LifetimeServices*), "TrackLifetime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{identity});
  }
};
