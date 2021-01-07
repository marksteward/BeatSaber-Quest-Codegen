// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LocalNetworkPlayerModel/LocalNetworkPlayer
#include "GlobalNamespace/LocalNetworkPlayerModel_LocalNetworkPlayer.hpp"
// Including type: System.Net.IPAddress
#include "System/Net/IPAddress.hpp"
// Including type: IConnectedPlayer
#include "GlobalNamespace/IConnectedPlayer.hpp"
// Including type: BeatmapDifficultyMask
#include "GlobalNamespace/BeatmapDifficultyMask.hpp"
// Including type: GameplayModifierMask
#include "GlobalNamespace/GameplayModifierMask.hpp"
// Including type: SongPackMask
#include "GlobalNamespace/SongPackMask.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.Single kPeerBroadcastTimeout
float GlobalNamespace::LocalNetworkPlayerModel::LocalNetworkPlayer::_get_kPeerBroadcastTimeout() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkPlayer").WithContext("_get_kPeerBroadcastTimeout");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<float>("", "LocalNetworkPlayerModel/LocalNetworkPlayer", "kPeerBroadcastTimeout"));
}
// Autogenerated static field setter
// Set static field: static private System.Single kPeerBroadcastTimeout
void GlobalNamespace::LocalNetworkPlayerModel::LocalNetworkPlayer::_set_kPeerBroadcastTimeout(float value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkPlayer").WithContext("_set_kPeerBroadcastTimeout");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "LocalNetworkPlayerModel/LocalNetworkPlayer", "kPeerBroadcastTimeout", value));
}
// Autogenerated static field getter
// Get static field: static private System.Single kConnectionTimeout
float GlobalNamespace::LocalNetworkPlayerModel::LocalNetworkPlayer::_get_kConnectionTimeout() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkPlayer").WithContext("_get_kConnectionTimeout");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<float>("", "LocalNetworkPlayerModel/LocalNetworkPlayer", "kConnectionTimeout"));
}
// Autogenerated static field setter
// Set static field: static private System.Single kConnectionTimeout
void GlobalNamespace::LocalNetworkPlayerModel::LocalNetworkPlayer::_set_kConnectionTimeout(float value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkPlayer").WithContext("_set_kConnectionTimeout");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "LocalNetworkPlayerModel/LocalNetworkPlayer", "kConnectionTimeout", value));
}
// Autogenerated static field getter
// Get static field: static private System.Single kRequestTimeout
float GlobalNamespace::LocalNetworkPlayerModel::LocalNetworkPlayer::_get_kRequestTimeout() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkPlayer").WithContext("_get_kRequestTimeout");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<float>("", "LocalNetworkPlayerModel/LocalNetworkPlayer", "kRequestTimeout"));
}
// Autogenerated static field setter
// Set static field: static private System.Single kRequestTimeout
void GlobalNamespace::LocalNetworkPlayerModel::LocalNetworkPlayer::_set_kRequestTimeout(float value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkPlayer").WithContext("_set_kRequestTimeout");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "LocalNetworkPlayerModel/LocalNetworkPlayer", "kRequestTimeout", value));
}
// Autogenerated method: LocalNetworkPlayerModel/LocalNetworkPlayer.get_ipAddress
System::Net::IPAddress* GlobalNamespace::LocalNetworkPlayerModel::LocalNetworkPlayer::get_ipAddress() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkPlayer").WithContext("get_ipAddress");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_ipAddress", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<System::Net::IPAddress*, false>(this, ___internal__method);
}
// Autogenerated method: LocalNetworkPlayerModel/LocalNetworkPlayer.get_isPartyOwner
bool GlobalNamespace::LocalNetworkPlayerModel::LocalNetworkPlayer::get_isPartyOwner() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkPlayer").WithContext("get_isPartyOwner");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_isPartyOwner", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: LocalNetworkPlayerModel/LocalNetworkPlayer.get_otherPlayersCanInvite
bool GlobalNamespace::LocalNetworkPlayerModel::LocalNetworkPlayer::get_otherPlayersCanInvite() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkPlayer").WithContext("get_otherPlayersCanInvite");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_otherPlayersCanInvite", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: LocalNetworkPlayerModel/LocalNetworkPlayer.get_isBlocked
bool GlobalNamespace::LocalNetworkPlayerModel::LocalNetworkPlayer::get_isBlocked() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkPlayer").WithContext("get_isBlocked");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_isBlocked", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: LocalNetworkPlayerModel/LocalNetworkPlayer.get_hasBlockedMe
bool GlobalNamespace::LocalNetworkPlayerModel::LocalNetworkPlayer::get_hasBlockedMe() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkPlayer").WithContext("get_hasBlockedMe");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_hasBlockedMe", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: LocalNetworkPlayerModel/LocalNetworkPlayer.get_secret
::Il2CppString* GlobalNamespace::LocalNetworkPlayerModel::LocalNetworkPlayer::get_secret() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkPlayer").WithContext("get_secret");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_secret", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(this, ___internal__method);
}
// Autogenerated method: LocalNetworkPlayerModel/LocalNetworkPlayer.get_multiplayerPort
int GlobalNamespace::LocalNetworkPlayerModel::LocalNetworkPlayer::get_multiplayerPort() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkPlayer").WithContext("get_multiplayerPort");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_multiplayerPort", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method);
}
// Autogenerated method: LocalNetworkPlayerModel/LocalNetworkPlayer.get_allowedJoinToMyParty
bool GlobalNamespace::LocalNetworkPlayerModel::LocalNetworkPlayer::get_allowedJoinToMyParty() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkPlayer").WithContext("get_allowedJoinToMyParty");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_allowedJoinToMyParty", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: LocalNetworkPlayerModel/LocalNetworkPlayer.get_isConnecting
bool GlobalNamespace::LocalNetworkPlayerModel::LocalNetworkPlayer::get_isConnecting() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkPlayer").WithContext("get_isConnecting");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_isConnecting", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: LocalNetworkPlayerModel/LocalNetworkPlayer.get_wasConnecting
bool GlobalNamespace::LocalNetworkPlayerModel::LocalNetworkPlayer::get_wasConnecting() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkPlayer").WithContext("get_wasConnecting");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_wasConnecting", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: LocalNetworkPlayerModel/LocalNetworkPlayer.get_isTimedOut
bool GlobalNamespace::LocalNetworkPlayerModel::LocalNetworkPlayer::get_isTimedOut() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkPlayer").WithContext("get_isTimedOut");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_isTimedOut", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: LocalNetworkPlayerModel/LocalNetworkPlayer.Update
bool GlobalNamespace::LocalNetworkPlayerModel::LocalNetworkPlayer::Update(GlobalNamespace::LocalNetworkPlayerModel::LocalNetworkFlags flags, int currentPartySize, int maxPartySize, GlobalNamespace::GameplayServerConfiguration configuration) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkPlayer").WithContext("Update");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Update", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(flags, currentPartySize, maxPartySize, configuration)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, flags, currentPartySize, maxPartySize, configuration);
}
// Autogenerated method: LocalNetworkPlayerModel/LocalNetworkPlayer.HasFailedToConnect
bool GlobalNamespace::LocalNetworkPlayerModel::LocalNetworkPlayer::HasFailedToConnect() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkPlayer").WithContext("HasFailedToConnect");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "HasFailedToConnect", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: LocalNetworkPlayerModel/LocalNetworkPlayer.SetInvited
void GlobalNamespace::LocalNetworkPlayerModel::LocalNetworkPlayer::SetInvited(GlobalNamespace::LocalNetworkPlayerModel::LocalNetworkFlags flags, ::Il2CppString* secret, int multiplayerPort) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkPlayer").WithContext("SetInvited");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "SetInvited", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(flags, secret, multiplayerPort)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, flags, secret, multiplayerPort);
}
// Autogenerated method: LocalNetworkPlayerModel/LocalNetworkPlayer.SetJoinResponse
void GlobalNamespace::LocalNetworkPlayerModel::LocalNetworkPlayer::SetJoinResponse(::Il2CppString* secret, int multiplayerPort, bool blocked) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkPlayer").WithContext("SetJoinResponse");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "SetJoinResponse", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(secret, multiplayerPort, blocked)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, secret, multiplayerPort, blocked);
}
// Autogenerated method: LocalNetworkPlayerModel/LocalNetworkPlayer.SetInviteResponse
void GlobalNamespace::LocalNetworkPlayerModel::LocalNetworkPlayer::SetInviteResponse(bool accepted, bool blocked) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkPlayer").WithContext("SetInviteResponse");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "SetInviteResponse", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(accepted, blocked)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, accepted, blocked);
}
// Autogenerated method: LocalNetworkPlayerModel/LocalNetworkPlayer.SetJoinRequested
void GlobalNamespace::LocalNetworkPlayerModel::LocalNetworkPlayer::SetJoinRequested(GlobalNamespace::LocalNetworkPlayerModel::LocalNetworkFlags flags) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkPlayer").WithContext("SetJoinRequested");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "SetJoinRequested", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(flags)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, flags);
}
// Autogenerated method: LocalNetworkPlayerModel/LocalNetworkPlayer.SetConnected
bool GlobalNamespace::LocalNetworkPlayerModel::LocalNetworkPlayer::SetConnected() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkPlayer").WithContext("SetConnected");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "SetConnected", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: LocalNetworkPlayerModel/LocalNetworkPlayer.SetDisconnected
bool GlobalNamespace::LocalNetworkPlayerModel::LocalNetworkPlayer::SetDisconnected() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkPlayer").WithContext("SetDisconnected");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "SetDisconnected", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: LocalNetworkPlayerModel/LocalNetworkPlayer.UpdateState
void GlobalNamespace::LocalNetworkPlayerModel::LocalNetworkPlayer::UpdateState(GlobalNamespace::IConnectedPlayer* connectedPlayer) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkPlayer").WithContext("UpdateState");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "UpdateState", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(connectedPlayer)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, connectedPlayer);
}
// Autogenerated method: LocalNetworkPlayerModel/LocalNetworkPlayer.get_isConnectable
bool GlobalNamespace::LocalNetworkPlayerModel::LocalNetworkPlayer::get_isConnectable() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkPlayer").WithContext("get_isConnectable");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_isConnectable", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: LocalNetworkPlayerModel/LocalNetworkPlayer.Connect
void GlobalNamespace::LocalNetworkPlayerModel::LocalNetworkPlayer::Connect() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkPlayer").WithContext("Connect");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Connect", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: LocalNetworkPlayerModel/LocalNetworkPlayer.get_userId
::Il2CppString* GlobalNamespace::LocalNetworkPlayerModel::LocalNetworkPlayer::get_userId() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkPlayer").WithContext("get_userId");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_userId", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(this, ___internal__method);
}
::Il2CppString* GlobalNamespace::LocalNetworkPlayerModel::LocalNetworkPlayer::GlobalNamespace_INetworkPlayer_get_userId() {
  return GlobalNamespace::LocalNetworkPlayerModel::LocalNetworkPlayer::get_userId();
}
// Autogenerated method: LocalNetworkPlayerModel/LocalNetworkPlayer.get_userName
::Il2CppString* GlobalNamespace::LocalNetworkPlayerModel::LocalNetworkPlayer::get_userName() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkPlayer").WithContext("get_userName");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_userName", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(this, ___internal__method);
}
::Il2CppString* GlobalNamespace::LocalNetworkPlayerModel::LocalNetworkPlayer::GlobalNamespace_INetworkPlayer_get_userName() {
  return GlobalNamespace::LocalNetworkPlayerModel::LocalNetworkPlayer::get_userName();
}
// Autogenerated method: LocalNetworkPlayerModel/LocalNetworkPlayer.get_isMe
bool GlobalNamespace::LocalNetworkPlayerModel::LocalNetworkPlayer::get_isMe() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkPlayer").WithContext("get_isMe");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_isMe", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: LocalNetworkPlayerModel/LocalNetworkPlayer.get_currentPartySize
int GlobalNamespace::LocalNetworkPlayerModel::LocalNetworkPlayer::get_currentPartySize() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkPlayer").WithContext("get_currentPartySize");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_currentPartySize", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method);
}
// Autogenerated method: LocalNetworkPlayerModel/LocalNetworkPlayer.get_maxPartySize
int GlobalNamespace::LocalNetworkPlayerModel::LocalNetworkPlayer::get_maxPartySize() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkPlayer").WithContext("get_maxPartySize");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_maxPartySize", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method);
}
// Autogenerated method: LocalNetworkPlayerModel/LocalNetworkPlayer.get_difficulties
GlobalNamespace::BeatmapDifficultyMask GlobalNamespace::LocalNetworkPlayerModel::LocalNetworkPlayer::get_difficulties() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkPlayer").WithContext("get_difficulties");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_difficulties", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::BeatmapDifficultyMask, false>(this, ___internal__method);
}
// Autogenerated method: LocalNetworkPlayerModel/LocalNetworkPlayer.get_modifiers
GlobalNamespace::GameplayModifierMask GlobalNamespace::LocalNetworkPlayerModel::LocalNetworkPlayer::get_modifiers() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkPlayer").WithContext("get_modifiers");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_modifiers", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::GameplayModifierMask, false>(this, ___internal__method);
}
// Autogenerated method: LocalNetworkPlayerModel/LocalNetworkPlayer.get_songPacks
GlobalNamespace::SongPackMask GlobalNamespace::LocalNetworkPlayerModel::LocalNetworkPlayer::get_songPacks() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkPlayer").WithContext("get_songPacks");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_songPacks", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<GlobalNamespace::SongPackMask, false>(this, ___internal__method);
}
// Autogenerated method: LocalNetworkPlayerModel/LocalNetworkPlayer.get_isOpenParty
bool GlobalNamespace::LocalNetworkPlayerModel::LocalNetworkPlayer::get_isOpenParty() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkPlayer").WithContext("get_isOpenParty");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_isOpenParty", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: LocalNetworkPlayerModel/LocalNetworkPlayer.get_isPlayer
bool GlobalNamespace::LocalNetworkPlayerModel::LocalNetworkPlayer::get_isPlayer() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkPlayer").WithContext("get_isPlayer");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_isPlayer", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: LocalNetworkPlayerModel/LocalNetworkPlayer.get_isSpectating
bool GlobalNamespace::LocalNetworkPlayerModel::LocalNetworkPlayer::get_isSpectating() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkPlayer").WithContext("get_isSpectating");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_isSpectating", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: LocalNetworkPlayerModel/LocalNetworkPlayer.get_isDedicatedServer
bool GlobalNamespace::LocalNetworkPlayerModel::LocalNetworkPlayer::get_isDedicatedServer() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkPlayer").WithContext("get_isDedicatedServer");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_isDedicatedServer", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: LocalNetworkPlayerModel/LocalNetworkPlayer.get_isMyPartyOwner
bool GlobalNamespace::LocalNetworkPlayerModel::LocalNetworkPlayer::get_isMyPartyOwner() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkPlayer").WithContext("get_isMyPartyOwner");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_isMyPartyOwner", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: LocalNetworkPlayerModel/LocalNetworkPlayer.get_isConnected
bool GlobalNamespace::LocalNetworkPlayerModel::LocalNetworkPlayer::get_isConnected() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkPlayer").WithContext("get_isConnected");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_isConnected", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: LocalNetworkPlayerModel/LocalNetworkPlayer.get_isWaitingOnJoin
bool GlobalNamespace::LocalNetworkPlayerModel::LocalNetworkPlayer::get_isWaitingOnJoin() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkPlayer").WithContext("get_isWaitingOnJoin");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_isWaitingOnJoin", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: LocalNetworkPlayerModel/LocalNetworkPlayer.get_canJoin
bool GlobalNamespace::LocalNetworkPlayerModel::LocalNetworkPlayer::get_canJoin() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkPlayer").WithContext("get_canJoin");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_canJoin", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: LocalNetworkPlayerModel/LocalNetworkPlayer.Join
void GlobalNamespace::LocalNetworkPlayerModel::LocalNetworkPlayer::Join() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkPlayer").WithContext("Join");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Join", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: LocalNetworkPlayerModel/LocalNetworkPlayer.get_requiresPassword
bool GlobalNamespace::LocalNetworkPlayerModel::LocalNetworkPlayer::get_requiresPassword() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkPlayer").WithContext("get_requiresPassword");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_requiresPassword", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: LocalNetworkPlayerModel/LocalNetworkPlayer.Join
void GlobalNamespace::LocalNetworkPlayerModel::LocalNetworkPlayer::Join(::Il2CppString* password) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkPlayer").WithContext("Join");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Join", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(password)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, password);
}
// Autogenerated method: LocalNetworkPlayerModel/LocalNetworkPlayer.get_isWaitingOnInvite
bool GlobalNamespace::LocalNetworkPlayerModel::LocalNetworkPlayer::get_isWaitingOnInvite() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkPlayer").WithContext("get_isWaitingOnInvite");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_isWaitingOnInvite", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: LocalNetworkPlayerModel/LocalNetworkPlayer.get_canInvite
bool GlobalNamespace::LocalNetworkPlayerModel::LocalNetworkPlayer::get_canInvite() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkPlayer").WithContext("get_canInvite");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_canInvite", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: LocalNetworkPlayerModel/LocalNetworkPlayer.Invite
void GlobalNamespace::LocalNetworkPlayerModel::LocalNetworkPlayer::Invite() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkPlayer").WithContext("Invite");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Invite", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: LocalNetworkPlayerModel/LocalNetworkPlayer.get_canKick
bool GlobalNamespace::LocalNetworkPlayerModel::LocalNetworkPlayer::get_canKick() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkPlayer").WithContext("get_canKick");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_canKick", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: LocalNetworkPlayerModel/LocalNetworkPlayer.Kick
void GlobalNamespace::LocalNetworkPlayerModel::LocalNetworkPlayer::Kick() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkPlayer").WithContext("Kick");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Kick", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: LocalNetworkPlayerModel/LocalNetworkPlayer.get_canLeave
bool GlobalNamespace::LocalNetworkPlayerModel::LocalNetworkPlayer::get_canLeave() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkPlayer").WithContext("get_canLeave");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_canLeave", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: LocalNetworkPlayerModel/LocalNetworkPlayer.Leave
void GlobalNamespace::LocalNetworkPlayerModel::LocalNetworkPlayer::Leave() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkPlayer").WithContext("Leave");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Leave", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: LocalNetworkPlayerModel/LocalNetworkPlayer.get_canBlock
bool GlobalNamespace::LocalNetworkPlayerModel::LocalNetworkPlayer::get_canBlock() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkPlayer").WithContext("get_canBlock");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_canBlock", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: LocalNetworkPlayerModel/LocalNetworkPlayer.Block
void GlobalNamespace::LocalNetworkPlayerModel::LocalNetworkPlayer::Block() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkPlayer").WithContext("Block");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Block", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: LocalNetworkPlayerModel/LocalNetworkPlayer.get_canUnblock
bool GlobalNamespace::LocalNetworkPlayerModel::LocalNetworkPlayer::get_canUnblock() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkPlayer").WithContext("get_canUnblock");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_canUnblock", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: LocalNetworkPlayerModel/LocalNetworkPlayer.Unblock
void GlobalNamespace::LocalNetworkPlayerModel::LocalNetworkPlayer::Unblock() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkPlayer").WithContext("Unblock");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Unblock", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: LocalNetworkPlayerModel/LocalNetworkPlayer.SendJoinResponse
void GlobalNamespace::LocalNetworkPlayerModel::LocalNetworkPlayer::SendJoinResponse(bool accept) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkPlayer").WithContext("SendJoinResponse");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "SendJoinResponse", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(accept)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, accept);
}
// Autogenerated method: LocalNetworkPlayerModel/LocalNetworkPlayer.SendInviteResponse
void GlobalNamespace::LocalNetworkPlayerModel::LocalNetworkPlayer::SendInviteResponse(bool accept) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("LocalNetworkPlayer").WithContext("SendInviteResponse");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "SendInviteResponse", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(accept)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, accept);
}
