// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MasterServer.UserMessageHandler
#include "MasterServer/UserMessageHandler.hpp"
// Including type: MasterServer.UserMessageHandler/ConnectToClientDelegate
#include "MasterServer/UserMessageHandler_ConnectToClientDelegate.hpp"
// Including type: MasterServer.UserMessageHandler/ConnectToServerDelegate
#include "MasterServer/UserMessageHandler_ConnectToServerDelegate.hpp"
// Including type: MasterServer.UserMessageHandler/<GetAuthenticationRequest>d__28
#include "MasterServer/UserMessageHandler_-GetAuthenticationRequest-d__28.hpp"
// Including type: MasterServer.UserMessageHandler/<HandlePrepareForConnectionRequest>d__30
#include "MasterServer/UserMessageHandler_-HandlePrepareForConnectionRequest-d__30.hpp"
// Including type: MasterServer.UserMessageHandler/<>c__DisplayClass34_0
#include "MasterServer/UserMessageHandler_--c__DisplayClass34_0.hpp"
// Including type: MasterServer.UserMessageHandler/<>c__DisplayClass38_0
#include "MasterServer/UserMessageHandler_--c__DisplayClass38_0.hpp"
// Including type: MasterServer.UserMessageHandler/<>c__DisplayClass39_0
#include "MasterServer/UserMessageHandler_--c__DisplayClass39_0.hpp"
// Including type: MasterServer.UserMessageHandler/<WithFailureHandler>d__40
#include "MasterServer/UserMessageHandler_-WithFailureHandler-d__40.hpp"
// Including type: System.Action
#include "System/Action.hpp"
// Including type: IAuthenticationTokenProvider
#include "GlobalNamespace/IAuthenticationTokenProvider.hpp"
// Including type: System.Threading.Tasks.Task`1
#include "System/Threading/Tasks/Task_1.hpp"
// Including type: IDiffieHellmanKeyPair
#include "GlobalNamespace/IDiffieHellmanKeyPair.hpp"
// Including type: PacketEncryptionLayer
#include "GlobalNamespace/PacketEncryptionLayer.hpp"
// Including type: MasterServerEndPoint
#include "GlobalNamespace/MasterServerEndPoint.hpp"
// Including type: DiscoveryPolicy
#include "GlobalNamespace/DiscoveryPolicy.hpp"
// Including type: InvitePolicy
#include "GlobalNamespace/InvitePolicy.hpp"
// Including type: GameplayServerConfiguration
#include "GlobalNamespace/GameplayServerConfiguration.hpp"
// Including type: System.Action`2
#include "System/Action_2.hpp"
// Including type: System.Net.IPEndPoint
#include "System/Net/IPEndPoint.hpp"
// Including type: System.Action`1
#include "System/Action_1.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: MasterServer.BaseConnectToServerRequest
#include "MasterServer/BaseConnectToServerRequest.hpp"
// Including type: GameplayServerFilter
#include "GlobalNamespace/GameplayServerFilter.hpp"
// Including type: System.Collections.Generic.IReadOnlyList`1
#include "System/Collections/Generic/IReadOnlyList_1.hpp"
// Including type: System.Func`1
#include "System/Func_1.hpp"
// Including type: System.Threading.Tasks.Task
#include "System/Threading/Tasks/Task.hpp"
// Including type: System.Security.Cryptography.X509Certificates.X509Certificate2
#include "System/Security/Cryptography/X509Certificates/X509Certificate2.hpp"
// Including type: MasterServer.IUserMessage
#include "MasterServer/IUserMessage.hpp"
// Including type: MasterServer.IMasterServerAuthenticateRequest
#include "MasterServer/IMasterServerAuthenticateRequest.hpp"
// Including type: MasterServer.BroadcastServerHeartbeatResponse
#include "MasterServer/BroadcastServerHeartbeatResponse.hpp"
// Including type: MasterServer.PrepareForConnectionRequest
#include "MasterServer/PrepareForConnectionRequest.hpp"
// Including type: MasterServer.MessageHandler/IMessageSender
#include "MasterServer/MessageHandler_IMessageSender.hpp"
// Including type: MasterServer.MessageHandler/MessageOrigin
#include "MasterServer/MessageHandler.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.Int64 kHeartbeatRequestInterval
int64_t MasterServer::UserMessageHandler::_get_kHeartbeatRequestInterval() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("MasterServer").WithContext("UserMessageHandler").WithContext("_get_kHeartbeatRequestInterval");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int64_t>("MasterServer", "UserMessageHandler", "kHeartbeatRequestInterval"));
}
// Autogenerated static field setter
// Set static field: static private System.Int64 kHeartbeatRequestInterval
void MasterServer::UserMessageHandler::_set_kHeartbeatRequestInterval(int64_t value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("MasterServer").WithContext("UserMessageHandler").WithContext("_set_kHeartbeatRequestInterval");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("MasterServer", "UserMessageHandler", "kHeartbeatRequestInterval", value));
}
// Autogenerated static field getter
// Get static field: static private System.Int64 kHeartbeatResponseTimeout
int64_t MasterServer::UserMessageHandler::_get_kHeartbeatResponseTimeout() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("MasterServer").WithContext("UserMessageHandler").WithContext("_get_kHeartbeatResponseTimeout");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int64_t>("MasterServer", "UserMessageHandler", "kHeartbeatResponseTimeout"));
}
// Autogenerated static field setter
// Set static field: static private System.Int64 kHeartbeatResponseTimeout
void MasterServer::UserMessageHandler::_set_kHeartbeatResponseTimeout(int64_t value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("MasterServer").WithContext("UserMessageHandler").WithContext("_set_kHeartbeatResponseTimeout");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("MasterServer", "UserMessageHandler", "kHeartbeatResponseTimeout", value));
}
// Autogenerated static field getter
// Get static field: static private System.Int64 kKeepaliveRequestInterval
int64_t MasterServer::UserMessageHandler::_get_kKeepaliveRequestInterval() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("MasterServer").WithContext("UserMessageHandler").WithContext("_get_kKeepaliveRequestInterval");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<int64_t>("MasterServer", "UserMessageHandler", "kKeepaliveRequestInterval"));
}
// Autogenerated static field setter
// Set static field: static private System.Int64 kKeepaliveRequestInterval
void MasterServer::UserMessageHandler::_set_kKeepaliveRequestInterval(int64_t value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("MasterServer").WithContext("UserMessageHandler").WithContext("_set_kKeepaliveRequestInterval");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("MasterServer", "UserMessageHandler", "kKeepaliveRequestInterval", value));
}
// Autogenerated method: MasterServer.UserMessageHandler.add_connectToClientEvent
void MasterServer::UserMessageHandler::add_connectToClientEvent(MasterServer::UserMessageHandler::ConnectToClientDelegate* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("MasterServer").WithContext("UserMessageHandler").WithContext("add_connectToClientEvent");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "add_connectToClientEvent", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: MasterServer.UserMessageHandler.remove_connectToClientEvent
void MasterServer::UserMessageHandler::remove_connectToClientEvent(MasterServer::UserMessageHandler::ConnectToClientDelegate* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("MasterServer").WithContext("UserMessageHandler").WithContext("remove_connectToClientEvent");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "remove_connectToClientEvent", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: MasterServer.UserMessageHandler.add_broadcastingStoppedEvent
void MasterServer::UserMessageHandler::add_broadcastingStoppedEvent(System::Action* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("MasterServer").WithContext("UserMessageHandler").WithContext("add_broadcastingStoppedEvent");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "add_broadcastingStoppedEvent", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: MasterServer.UserMessageHandler.remove_broadcastingStoppedEvent
void MasterServer::UserMessageHandler::remove_broadcastingStoppedEvent(System::Action* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("MasterServer").WithContext("UserMessageHandler").WithContext("remove_broadcastingStoppedEvent");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "remove_broadcastingStoppedEvent", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: MasterServer.UserMessageHandler.get_authenticationTokenProvider
GlobalNamespace::IAuthenticationTokenProvider* MasterServer::UserMessageHandler::get_authenticationTokenProvider() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("MasterServer").WithContext("UserMessageHandler").WithContext("get_authenticationTokenProvider");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_authenticationTokenProvider", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::IAuthenticationTokenProvider*, false>(this, ___internal__method);
}
// Autogenerated method: MasterServer.UserMessageHandler.UpdateServerHeartbeat
void MasterServer::UserMessageHandler::UpdateServerHeartbeat() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("MasterServer").WithContext("UserMessageHandler").WithContext("UpdateServerHeartbeat");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "UpdateServerHeartbeat", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: MasterServer.UserMessageHandler.UpdateKeepalive
void MasterServer::UserMessageHandler::UpdateKeepalive() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("MasterServer").WithContext("UserMessageHandler").WithContext("UpdateKeepalive");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "UpdateKeepalive", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: MasterServer.UserMessageHandler.SetCurrentPlayerCount
void MasterServer::UserMessageHandler::SetCurrentPlayerCount(int currentPlayerCount) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("MasterServer").WithContext("UserMessageHandler").WithContext("SetCurrentPlayerCount");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "SetCurrentPlayerCount", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(currentPlayerCount)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, currentPlayerCount);
}
// Autogenerated method: MasterServer.UserMessageHandler.StartBroadcastingServer
void MasterServer::UserMessageHandler::StartBroadcastingServer(::Il2CppString* serverName, ::Il2CppString* userId, ::Il2CppString* userName, ::Il2CppString* secret, ::Il2CppString* password, int currentPlayerCount, int maxPlayerCount, GlobalNamespace::DiscoveryPolicy discoveryPolicy, GlobalNamespace::InvitePolicy invitePolicy, GlobalNamespace::GameplayServerConfiguration configuration, System::Action_2<System::Net::IPEndPoint*, ::Il2CppString*>* onSuccess, System::Action_1<GlobalNamespace::ConnectionFailedReason>* onBroadcastFailed, System::Threading::CancellationToken cancellationToken) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("MasterServer").WithContext("UserMessageHandler").WithContext("StartBroadcastingServer");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "StartBroadcastingServer", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(serverName, userId, userName, secret, password, currentPlayerCount, maxPlayerCount, discoveryPolicy, invitePolicy, configuration, onSuccess, onBroadcastFailed, cancellationToken)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, serverName, userId, userName, secret, password, currentPlayerCount, maxPlayerCount, discoveryPolicy, invitePolicy, configuration, onSuccess, onBroadcastFailed, cancellationToken);
}
// Autogenerated method: MasterServer.UserMessageHandler.StopBroadcastingServer
void MasterServer::UserMessageHandler::StopBroadcastingServer() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("MasterServer").WithContext("UserMessageHandler").WithContext("StopBroadcastingServer");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "StopBroadcastingServer", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: MasterServer.UserMessageHandler.ConnectToServer
void MasterServer::UserMessageHandler::ConnectToServer(::Il2CppString* userId, ::Il2CppString* userName, ::Il2CppString* secret, ::Il2CppString* code, ::Il2CppString* password, bool useRelay, MasterServer::UserMessageHandler::ConnectToServerDelegate* onSuccess, System::Action_1<GlobalNamespace::ConnectionFailedReason>* onConnectionFailed, System::Threading::CancellationToken cancellationToken) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("MasterServer").WithContext("UserMessageHandler").WithContext("ConnectToServer");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ConnectToServer", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(userId, userName, secret, code, password, useRelay, onSuccess, onConnectionFailed, cancellationToken)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, userId, userName, secret, code, password, useRelay, onSuccess, onConnectionFailed, cancellationToken);
}
// Autogenerated method: MasterServer.UserMessageHandler.ConnectToMatchmaking
void MasterServer::UserMessageHandler::ConnectToMatchmaking(::Il2CppString* userId, ::Il2CppString* userName, GlobalNamespace::GameplayServerConfiguration configuration, ::Il2CppString* secret, MasterServer::UserMessageHandler::ConnectToServerDelegate* onSuccess, System::Action_1<GlobalNamespace::ConnectionFailedReason>* onConnectionFailed, System::Threading::CancellationToken cancellationToken) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("MasterServer").WithContext("UserMessageHandler").WithContext("ConnectToMatchmaking");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ConnectToMatchmaking", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(userId, userName, configuration, secret, onSuccess, onConnectionFailed, cancellationToken)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, userId, userName, configuration, secret, onSuccess, onConnectionFailed, cancellationToken);
}
// Autogenerated method: MasterServer.UserMessageHandler.SendConnectToServerRequest
void MasterServer::UserMessageHandler::SendConnectToServerRequest(MasterServer::BaseConnectToServerRequest* request, MasterServer::UserMessageHandler::ConnectToServerDelegate* onSuccess, System::Action_1<GlobalNamespace::ConnectionFailedReason>* onConnectionFailed, System::Threading::CancellationToken cancellationToken) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("MasterServer").WithContext("UserMessageHandler").WithContext("SendConnectToServerRequest");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "SendConnectToServerRequest", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(request, onSuccess, onConnectionFailed, cancellationToken)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, request, onSuccess, onConnectionFailed, cancellationToken);
}
// Autogenerated method: MasterServer.UserMessageHandler.GetPublicServers
void MasterServer::UserMessageHandler::GetPublicServers(::Il2CppString* userId, ::Il2CppString* userName, int offset, int count, GlobalNamespace::GameplayServerFilter filter, System::Action_1<System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::PublicServerInfo>*>* onSuccess, System::Action_1<GlobalNamespace::ConnectionFailedReason>* onFailure, System::Threading::CancellationToken cancellationToken) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("MasterServer").WithContext("UserMessageHandler").WithContext("GetPublicServers");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "GetPublicServers", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(userId, userName, offset, count, filter, onSuccess, onFailure, cancellationToken)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, userId, userName, offset, count, filter, onSuccess, onFailure, cancellationToken);
}
// Autogenerated method: MasterServer.UserMessageHandler.WithFailureHandler
void MasterServer::UserMessageHandler::WithFailureHandler(System::Action_1<GlobalNamespace::ConnectionFailedReason>* onFailure, System::Func_1<System::Threading::Tasks::Task*>* performTask) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("MasterServer").WithContext("UserMessageHandler").WithContext("WithFailureHandler");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "WithFailureHandler", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(onFailure, performTask)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, onFailure, performTask);
}
// Autogenerated method: MasterServer.UserMessageHandler.GetServerRandom
::Array<uint8_t>* MasterServer::UserMessageHandler::GetServerRandom() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("MasterServer").WithContext("UserMessageHandler").WithContext("GetServerRandom");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "GetServerRandom", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<::Array<uint8_t>*, false>(this, ___internal__method);
}
// Autogenerated method: MasterServer.UserMessageHandler.GetServerKeys
System::Threading::Tasks::Task_1<GlobalNamespace::IDiffieHellmanKeyPair*>* MasterServer::UserMessageHandler::GetServerKeys(System::Threading::CancellationToken cancellationToken) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("MasterServer").WithContext("UserMessageHandler").WithContext("GetServerKeys");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "GetServerKeys", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(cancellationToken)));
  return ::il2cpp_utils::RunMethodThrow<System::Threading::Tasks::Task_1<GlobalNamespace::IDiffieHellmanKeyPair*>*, false>(this, ___internal__method, cancellationToken);
}
// Autogenerated method: MasterServer.UserMessageHandler.ValidateCertificateChainInternal
void MasterServer::UserMessageHandler::ValidateCertificateChainInternal(System::Security::Cryptography::X509Certificates::X509Certificate2* certificate, ::Array<::Array<uint8_t>*>* certificateChain) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("MasterServer").WithContext("UserMessageHandler").WithContext("ValidateCertificateChainInternal");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ValidateCertificateChainInternal", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(certificate, certificateChain)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, certificate, certificateChain);
}
// Autogenerated method: MasterServer.UserMessageHandler.PollUpdate
void MasterServer::UserMessageHandler::PollUpdate() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("MasterServer").WithContext("UserMessageHandler").WithContext("PollUpdate");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "PollUpdate", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: MasterServer.UserMessageHandler.ShouldHandleUserMessage
bool MasterServer::UserMessageHandler::ShouldHandleUserMessage(MasterServer::IUserMessage* packet, MasterServer::MessageHandler::MessageOrigin origin) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("MasterServer").WithContext("UserMessageHandler").WithContext("ShouldHandleUserMessage");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ShouldHandleUserMessage", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(packet, origin)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, packet, origin);
}
// Autogenerated method: MasterServer.UserMessageHandler.GetAuthenticationRequest
System::Threading::Tasks::Task_1<MasterServer::IMasterServerAuthenticateRequest*>* MasterServer::UserMessageHandler::GetAuthenticationRequest() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("MasterServer").WithContext("UserMessageHandler").WithContext("GetAuthenticationRequest");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "GetAuthenticationRequest", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<System::Threading::Tasks::Task_1<MasterServer::IMasterServerAuthenticateRequest*>*, false>(this, ___internal__method);
}
// Autogenerated method: MasterServer.UserMessageHandler.HandleBroadcastServerHeartbeatResponse
void MasterServer::UserMessageHandler::HandleBroadcastServerHeartbeatResponse(MasterServer::BroadcastServerHeartbeatResponse* packet, MasterServer::MessageHandler::MessageOrigin origin) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("MasterServer").WithContext("UserMessageHandler").WithContext("HandleBroadcastServerHeartbeatResponse");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "HandleBroadcastServerHeartbeatResponse", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(packet, origin)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, packet, origin);
}
// Autogenerated method: MasterServer.UserMessageHandler.HandlePrepareForConnectionRequest
void MasterServer::UserMessageHandler::HandlePrepareForConnectionRequest(MasterServer::PrepareForConnectionRequest* packet, MasterServer::MessageHandler::MessageOrigin origin) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("MasterServer").WithContext("UserMessageHandler").WithContext("HandlePrepareForConnectionRequest");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "HandlePrepareForConnectionRequest", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(packet, origin)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, packet, origin);
}
// Autogenerated method: MasterServer.UserMessageHandler.ValidateCertificateChain
void MasterServer::UserMessageHandler::ValidateCertificateChain(System::Security::Cryptography::X509Certificates::X509Certificate2* certificate, ::Array<::Array<uint8_t>*>* certificateChain) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("MasterServer").WithContext("UserMessageHandler").WithContext("ValidateCertificateChain");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ValidateCertificateChain", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(certificate, certificateChain)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, certificate, certificateChain);
}
// Autogenerated method: MasterServer.UserMessageHandler.HandshakeLog
void MasterServer::UserMessageHandler::HandshakeLog(::Il2CppString* message) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("MasterServer").WithContext("UserMessageHandler").WithContext("HandshakeLog");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "HandshakeLog", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(message)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, message);
}
