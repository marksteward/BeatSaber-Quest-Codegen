// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LiteNetLib.EventBasedNatPunchListener/OnNatIntroductionRequest
#include "LiteNetLib/EventBasedNatPunchListener_OnNatIntroductionRequest.hpp"
// Including type: System.Net.IPEndPoint
#include "System/Net/IPEndPoint.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Including type: System.AsyncCallback
#include "System/AsyncCallback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: LiteNetLib.EventBasedNatPunchListener/OnNatIntroductionRequest..ctor
LiteNetLib::EventBasedNatPunchListener::OnNatIntroductionRequest* LiteNetLib::EventBasedNatPunchListener::OnNatIntroductionRequest::New_ctor(::Il2CppObject* object, System::IntPtr method) {
  return THROW_UNLESS(il2cpp_utils::New<EventBasedNatPunchListener::OnNatIntroductionRequest*>(object, method));
}
// Autogenerated method: LiteNetLib.EventBasedNatPunchListener/OnNatIntroductionRequest.Invoke
void LiteNetLib::EventBasedNatPunchListener::OnNatIntroductionRequest::Invoke(System::Net::IPEndPoint* localEndPoint, System::Net::IPEndPoint* remoteEndPoint, ::Il2CppString* token) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Invoke", localEndPoint, remoteEndPoint, token));
}
// Autogenerated method: LiteNetLib.EventBasedNatPunchListener/OnNatIntroductionRequest.BeginInvoke
System::IAsyncResult* LiteNetLib::EventBasedNatPunchListener::OnNatIntroductionRequest::BeginInvoke(System::Net::IPEndPoint* localEndPoint, System::Net::IPEndPoint* remoteEndPoint, ::Il2CppString* token, System::AsyncCallback* callback, ::Il2CppObject* object) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::IAsyncResult*>(this, "BeginInvoke", localEndPoint, remoteEndPoint, token, callback, object));
}
// Autogenerated method: LiteNetLib.EventBasedNatPunchListener/OnNatIntroductionRequest.EndInvoke
void LiteNetLib::EventBasedNatPunchListener::OnNatIntroductionRequest::EndInvoke(System::IAsyncResult* result) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "EndInvoke", result));
}