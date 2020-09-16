// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Remoting.Lifetime.Lease
#include "System/Runtime/Remoting/Lifetime/Lease.hpp"
// Including type: System.Runtime.Remoting.Lifetime.Lease/RenewalDelegate
#include "System/Runtime/Remoting/Lifetime/Lease_RenewalDelegate.hpp"
// Including type: System.Collections.ArrayList
#include "System/Collections/ArrayList.hpp"
// Including type: System.Collections.Queue
#include "System/Collections/Queue.hpp"
// Including type: System.Runtime.Remoting.Lifetime.ISponsor
#include "System/Runtime/Remoting/Lifetime/ISponsor.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: System.Runtime.Remoting.Lifetime.Lease.Activate
void System::Runtime::Remoting::Lifetime::Lease::Activate() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Activate"));
}
// Autogenerated method: System.Runtime.Remoting.Lifetime.Lease.Unregister
void System::Runtime::Remoting::Lifetime::Lease::Unregister(System::Runtime::Remoting::Lifetime::ISponsor* obj) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Unregister", obj));
}
// Autogenerated method: System.Runtime.Remoting.Lifetime.Lease.UpdateState
void System::Runtime::Remoting::Lifetime::Lease::UpdateState() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "UpdateState"));
}
// Autogenerated method: System.Runtime.Remoting.Lifetime.Lease.CheckNextSponsor
void System::Runtime::Remoting::Lifetime::Lease::CheckNextSponsor() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "CheckNextSponsor"));
}
// Autogenerated method: System.Runtime.Remoting.Lifetime.Lease.ProcessSponsorResponse
void System::Runtime::Remoting::Lifetime::Lease::ProcessSponsorResponse(::Il2CppObject* state, bool timedOut) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ProcessSponsorResponse", state, timedOut));
}
// Autogenerated method: System.Runtime.Remoting.Lifetime.Lease..ctor
System::Runtime::Remoting::Lifetime::Lease* System::Runtime::Remoting::Lifetime::Lease::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<Lease*>());
}
// Autogenerated method: System.Runtime.Remoting.Lifetime.Lease.get_CurrentLeaseTime
System::TimeSpan System::Runtime::Remoting::Lifetime::Lease::get_CurrentLeaseTime() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::TimeSpan>(this, "get_CurrentLeaseTime"));
}
// Autogenerated method: System.Runtime.Remoting.Lifetime.Lease.get_CurrentState
System::Runtime::Remoting::Lifetime::LeaseState System::Runtime::Remoting::Lifetime::Lease::get_CurrentState() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Runtime::Remoting::Lifetime::LeaseState>(this, "get_CurrentState"));
}
// Autogenerated method: System.Runtime.Remoting.Lifetime.Lease.get_RenewOnCallTime
System::TimeSpan System::Runtime::Remoting::Lifetime::Lease::get_RenewOnCallTime() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::TimeSpan>(this, "get_RenewOnCallTime"));
}
// Autogenerated method: System.Runtime.Remoting.Lifetime.Lease.Renew
System::TimeSpan System::Runtime::Remoting::Lifetime::Lease::Renew(System::TimeSpan renewalTime) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::TimeSpan>(this, "Renew", renewalTime));
}
