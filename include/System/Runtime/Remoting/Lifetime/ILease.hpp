// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: TimeSpan
  struct TimeSpan;
}
// Forward declaring namespace: System::Runtime::Remoting::Lifetime
namespace System::Runtime::Remoting::Lifetime {
  // Forward declaring type: LeaseState
  struct LeaseState;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Lifetime
namespace System::Runtime::Remoting::Lifetime {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Lifetime.ILease
  // [ComVisibleAttribute] Offset: D7E1FC
  class ILease {
    public:
    // Creating value type constructor for type: ILease
    ILease() noexcept {}
    // public System.TimeSpan get_CurrentLeaseTime()
    // Offset: 0xFFFFFFFF
    System::TimeSpan get_CurrentLeaseTime();
    // public System.Runtime.Remoting.Lifetime.LeaseState get_CurrentState()
    // Offset: 0xFFFFFFFF
    System::Runtime::Remoting::Lifetime::LeaseState get_CurrentState();
    // public System.TimeSpan get_RenewOnCallTime()
    // Offset: 0xFFFFFFFF
    System::TimeSpan get_RenewOnCallTime();
    // public System.TimeSpan Renew(System.TimeSpan renewalTime)
    // Offset: 0xFFFFFFFF
    System::TimeSpan Renew(System::TimeSpan renewalTime);
  }; // System.Runtime.Remoting.Lifetime.ILease
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Lifetime::ILease*, "System.Runtime.Remoting.Lifetime", "ILease");
// Writing MetadataGetter for method: System::Runtime::Remoting::Lifetime::ILease::get_CurrentLeaseTime
// Il2CppName: get_CurrentLeaseTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::TimeSpan (System::Runtime::Remoting::Lifetime::ILease::*)()>(&System::Runtime::Remoting::Lifetime::ILease::get_CurrentLeaseTime)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Lifetime::ILease*), "get_CurrentLeaseTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Lifetime::ILease::get_CurrentState
// Il2CppName: get_CurrentState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Runtime::Remoting::Lifetime::LeaseState (System::Runtime::Remoting::Lifetime::ILease::*)()>(&System::Runtime::Remoting::Lifetime::ILease::get_CurrentState)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Lifetime::ILease*), "get_CurrentState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Lifetime::ILease::get_RenewOnCallTime
// Il2CppName: get_RenewOnCallTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::TimeSpan (System::Runtime::Remoting::Lifetime::ILease::*)()>(&System::Runtime::Remoting::Lifetime::ILease::get_RenewOnCallTime)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Lifetime::ILease*), "get_RenewOnCallTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Lifetime::ILease::Renew
// Il2CppName: Renew
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::TimeSpan (System::Runtime::Remoting::Lifetime::ILease::*)(System::TimeSpan)>(&System::Runtime::Remoting::Lifetime::ILease::Renew)> {
  const MethodInfo* get() {
    static auto* renewalTime = &::il2cpp_utils::GetClassFromName("System", "TimeSpan")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Lifetime::ILease*), "Renew", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{renewalTime});
  }
};
