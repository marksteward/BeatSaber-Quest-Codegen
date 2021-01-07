// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
// Including type: Oculus.Platform.Callback
#include "Oculus/Platform/Callback.hpp"
// Including type: Oculus.Platform.Callback/RequestCallback
#include "Oculus/Platform/Callback_RequestCallback.hpp"
// Including type: Oculus.Platform.Callback/RequestCallback`1
#include "Oculus/Platform/Callback_RequestCallback_1.hpp"
// Including type: System.Collections.Generic.Dictionary`2
#include "System/Collections/Generic/Dictionary_2.hpp"
// Including type: Oculus.Platform.Request
#include "Oculus/Platform/Request.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: Oculus.Platform.Message/Callback
#include "Oculus/Platform/Message_Callback.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.Collections.Generic.Dictionary`2<System.UInt64,Oculus.Platform.Request> requestIDsToRequests
System::Collections::Generic::Dictionary_2<uint64_t, Oculus::Platform::Request*>* Oculus::Platform::Callback::_get_requestIDsToRequests() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Oculus::Platform").WithContext("Callback").WithContext("_get_requestIDsToRequests");
  return THROW_UNLESS((il2cpp_utils::GetFieldValue<System::Collections::Generic::Dictionary_2<uint64_t, Oculus::Platform::Request*>*>("Oculus.Platform", "Callback", "requestIDsToRequests")));
}
// Autogenerated static field setter
// Set static field: static private System.Collections.Generic.Dictionary`2<System.UInt64,Oculus.Platform.Request> requestIDsToRequests
void Oculus::Platform::Callback::_set_requestIDsToRequests(System::Collections::Generic::Dictionary_2<uint64_t, Oculus::Platform::Request*>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Oculus::Platform").WithContext("Callback").WithContext("_set_requestIDsToRequests");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("Oculus.Platform", "Callback", "requestIDsToRequests", value));
}
// Autogenerated static field getter
// Get static field: static private System.Collections.Generic.Dictionary`2<Oculus.Platform.Message/MessageType,Oculus.Platform.Callback/RequestCallback> notificationCallbacks
System::Collections::Generic::Dictionary_2<Oculus::Platform::Message::MessageType, Oculus::Platform::Callback::RequestCallback*>* Oculus::Platform::Callback::_get_notificationCallbacks() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Oculus::Platform").WithContext("Callback").WithContext("_get_notificationCallbacks");
  return THROW_UNLESS((il2cpp_utils::GetFieldValue<System::Collections::Generic::Dictionary_2<Oculus::Platform::Message::MessageType, Oculus::Platform::Callback::RequestCallback*>*>("Oculus.Platform", "Callback", "notificationCallbacks")));
}
// Autogenerated static field setter
// Set static field: static private System.Collections.Generic.Dictionary`2<Oculus.Platform.Message/MessageType,Oculus.Platform.Callback/RequestCallback> notificationCallbacks
void Oculus::Platform::Callback::_set_notificationCallbacks(System::Collections::Generic::Dictionary_2<Oculus::Platform::Message::MessageType, Oculus::Platform::Callback::RequestCallback*>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Oculus::Platform").WithContext("Callback").WithContext("_set_notificationCallbacks");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("Oculus.Platform", "Callback", "notificationCallbacks", value));
}
// Autogenerated static field getter
// Get static field: static private System.Boolean hasRegisteredRoomInviteNotificationHandler
bool Oculus::Platform::Callback::_get_hasRegisteredRoomInviteNotificationHandler() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Oculus::Platform").WithContext("Callback").WithContext("_get_hasRegisteredRoomInviteNotificationHandler");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<bool>("Oculus.Platform", "Callback", "hasRegisteredRoomInviteNotificationHandler"));
}
// Autogenerated static field setter
// Set static field: static private System.Boolean hasRegisteredRoomInviteNotificationHandler
void Oculus::Platform::Callback::_set_hasRegisteredRoomInviteNotificationHandler(bool value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Oculus::Platform").WithContext("Callback").WithContext("_set_hasRegisteredRoomInviteNotificationHandler");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("Oculus.Platform", "Callback", "hasRegisteredRoomInviteNotificationHandler", value));
}
// Autogenerated static field getter
// Get static field: static private System.Collections.Generic.List`1<Oculus.Platform.Message> pendingRoomInviteNotifications
System::Collections::Generic::List_1<Oculus::Platform::Message*>* Oculus::Platform::Callback::_get_pendingRoomInviteNotifications() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Oculus::Platform").WithContext("Callback").WithContext("_get_pendingRoomInviteNotifications");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Collections::Generic::List_1<Oculus::Platform::Message*>*>("Oculus.Platform", "Callback", "pendingRoomInviteNotifications"));
}
// Autogenerated static field setter
// Set static field: static private System.Collections.Generic.List`1<Oculus.Platform.Message> pendingRoomInviteNotifications
void Oculus::Platform::Callback::_set_pendingRoomInviteNotifications(System::Collections::Generic::List_1<Oculus::Platform::Message*>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Oculus::Platform").WithContext("Callback").WithContext("_set_pendingRoomInviteNotifications");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("Oculus.Platform", "Callback", "pendingRoomInviteNotifications", value));
}
// Autogenerated method: Oculus.Platform.Callback.SetNotificationCallback
void Oculus::Platform::Callback::SetNotificationCallback(Oculus::Platform::Message::MessageType type, Oculus::Platform::Message::Callback* callback) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Oculus::Platform").WithContext("Callback").WithContext("SetNotificationCallback");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Oculus.Platform", "Callback", "SetNotificationCallback", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(type, callback)));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, type, callback);
}
// Autogenerated method: Oculus.Platform.Callback.AddRequest
void Oculus::Platform::Callback::AddRequest(Oculus::Platform::Request* request) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Oculus::Platform").WithContext("Callback").WithContext("AddRequest");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Oculus.Platform", "Callback", "AddRequest", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(request)));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, request);
}
// Autogenerated method: Oculus.Platform.Callback.RunCallbacks
void Oculus::Platform::Callback::RunCallbacks() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Oculus::Platform").WithContext("Callback").WithContext("RunCallbacks");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Oculus.Platform", "Callback", "RunCallbacks", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
// Autogenerated method: Oculus.Platform.Callback.RunLimitedCallbacks
void Oculus::Platform::Callback::RunLimitedCallbacks(uint limit) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Oculus::Platform").WithContext("Callback").WithContext("RunLimitedCallbacks");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Oculus.Platform", "Callback", "RunLimitedCallbacks", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(limit)));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, limit);
}
// Autogenerated method: Oculus.Platform.Callback.OnApplicationQuit
void Oculus::Platform::Callback::OnApplicationQuit() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Oculus::Platform").WithContext("Callback").WithContext("OnApplicationQuit");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Oculus.Platform", "Callback", "OnApplicationQuit", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
// Autogenerated method: Oculus.Platform.Callback.FlushRoomInviteNotificationQueue
void Oculus::Platform::Callback::FlushRoomInviteNotificationQueue() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Oculus::Platform").WithContext("Callback").WithContext("FlushRoomInviteNotificationQueue");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Oculus.Platform", "Callback", "FlushRoomInviteNotificationQueue", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
// Autogenerated method: Oculus.Platform.Callback.HandleMessage
void Oculus::Platform::Callback::HandleMessage(Oculus::Platform::Message* msg) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Oculus::Platform").WithContext("Callback").WithContext("HandleMessage");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Oculus.Platform", "Callback", "HandleMessage", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(msg)));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, msg);
}
// Autogenerated method: Oculus.Platform.Callback..cctor
void Oculus::Platform::Callback::_cctor() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("Oculus::Platform").WithContext("Callback").WithContext(".cctor");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("Oculus.Platform", "Callback", ".cctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
}
