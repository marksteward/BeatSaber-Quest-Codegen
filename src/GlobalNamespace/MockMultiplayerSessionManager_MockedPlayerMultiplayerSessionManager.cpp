// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MockMultiplayerSessionManager/MockedPlayerMultiplayerSessionManager
#include "GlobalNamespace/MockMultiplayerSessionManager_MockedPlayerMultiplayerSessionManager.hpp"
// Including type: MockPlayer
#include "GlobalNamespace/MockPlayer.hpp"
// Including type: LiteNetLib.Utils.NetDataWriter
#include "LiteNetLib/Utils/NetDataWriter.hpp"
// Including type: LiteNetLib.Utils.NetDataReader
#include "LiteNetLib/Utils/NetDataReader.hpp"
// Including type: System.Action
#include "System/Action.hpp"
// Including type: System.Action`1
#include "System/Action_1.hpp"
// Including type: IConnectedPlayer
#include "GlobalNamespace/IConnectedPlayer.hpp"
// Including type: NetworkPacketSerializer`2
#include "GlobalNamespace/NetworkPacketSerializer_2.hpp"
// Including type: MultiplayerAvatarData
#include "GlobalNamespace/MultiplayerAvatarData.hpp"
// Including type: System.Collections.Generic.IReadOnlyList`1
#include "System/Collections/Generic/IReadOnlyList_1.hpp"
// Including type: ConnectedPlayerManager
#include "GlobalNamespace/ConnectedPlayerManager.hpp"
// Including type: LiteNetLib.Utils.INetSerializable
#include "LiteNetLib/Utils/INetSerializable.hpp"
// Including type: System.Action`2
#include "System/Action_2.hpp"
// Including type: System.Func`1
#include "System/Func_1.hpp"
// Including type: INetworkPacketSubSerializer`1
#include "GlobalNamespace/INetworkPacketSubSerializer_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated method: MockMultiplayerSessionManager/MockedPlayerMultiplayerSessionManager..ctor
GlobalNamespace::MockMultiplayerSessionManager::MockedPlayerMultiplayerSessionManager* GlobalNamespace::MockMultiplayerSessionManager::MockedPlayerMultiplayerSessionManager::New_ctor(GlobalNamespace::MockMultiplayerSessionManager* mockMultiplayerSessionManager, GlobalNamespace::MockPlayer* player) {
  return THROW_UNLESS(il2cpp_utils::New<MockMultiplayerSessionManager::MockedPlayerMultiplayerSessionManager*>(mockMultiplayerSessionManager, player));
}
// Autogenerated method: MockMultiplayerSessionManager/MockedPlayerMultiplayerSessionManager.HandlePlayerStateChanged
void GlobalNamespace::MockMultiplayerSessionManager::MockedPlayerMultiplayerSessionManager::HandlePlayerStateChanged(GlobalNamespace::MockPlayer* player) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandlePlayerStateChanged", player));
}
// Autogenerated method: MockMultiplayerSessionManager/MockedPlayerMultiplayerSessionManager.HandlePlayerConnected
void GlobalNamespace::MockMultiplayerSessionManager::MockedPlayerMultiplayerSessionManager::HandlePlayerConnected(GlobalNamespace::MockPlayer* connectedPlayer) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandlePlayerConnected", connectedPlayer));
}
// Autogenerated method: MockMultiplayerSessionManager/MockedPlayerMultiplayerSessionManager.HandlePlayerDisconnected
void GlobalNamespace::MockMultiplayerSessionManager::MockedPlayerMultiplayerSessionManager::HandlePlayerDisconnected(GlobalNamespace::MockPlayer* connectedPlayer) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "HandlePlayerDisconnected", connectedPlayer));
}
// Autogenerated method: MockMultiplayerSessionManager/MockedPlayerMultiplayerSessionManager.ReceiveMessage
void GlobalNamespace::MockMultiplayerSessionManager::MockedPlayerMultiplayerSessionManager::ReceiveMessage(GlobalNamespace::MockPlayer* player, LiteNetLib::Utils::NetDataWriter* writer) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ReceiveMessage", player, writer));
}
// Autogenerated method: MockMultiplayerSessionManager/MockedPlayerMultiplayerSessionManager.SetLocalPlayerAvatar
void GlobalNamespace::MockMultiplayerSessionManager::MockedPlayerMultiplayerSessionManager::SetLocalPlayerAvatar(GlobalNamespace::MultiplayerAvatarData multiplayerAvatarData) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetLocalPlayerAvatar", multiplayerAvatarData));
}
// Autogenerated method: MockMultiplayerSessionManager/MockedPlayerMultiplayerSessionManager.get_localPlayer
GlobalNamespace::IConnectedPlayer* GlobalNamespace::MockMultiplayerSessionManager::MockedPlayerMultiplayerSessionManager::get_localPlayer() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::IConnectedPlayer*>(this, "get_localPlayer"));
}
// Autogenerated method: MockMultiplayerSessionManager/MockedPlayerMultiplayerSessionManager.get_connectionOwner
GlobalNamespace::IConnectedPlayer* GlobalNamespace::MockMultiplayerSessionManager::MockedPlayerMultiplayerSessionManager::get_connectionOwner() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::IConnectedPlayer*>(this, "get_connectionOwner"));
}
// Autogenerated method: MockMultiplayerSessionManager/MockedPlayerMultiplayerSessionManager.get_isConnectionOwner
bool GlobalNamespace::MockMultiplayerSessionManager::MockedPlayerMultiplayerSessionManager::get_isConnectionOwner() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_isConnectionOwner"));
}
// Autogenerated method: MockMultiplayerSessionManager/MockedPlayerMultiplayerSessionManager.get_syncTime
float GlobalNamespace::MockMultiplayerSessionManager::MockedPlayerMultiplayerSessionManager::get_syncTime() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "get_syncTime"));
}
// Autogenerated method: MockMultiplayerSessionManager/MockedPlayerMultiplayerSessionManager.get_isSyncTimeInitialized
bool GlobalNamespace::MockMultiplayerSessionManager::MockedPlayerMultiplayerSessionManager::get_isSyncTimeInitialized() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_isSyncTimeInitialized"));
}
// Autogenerated method: MockMultiplayerSessionManager/MockedPlayerMultiplayerSessionManager.get_syncTimeDelay
float GlobalNamespace::MockMultiplayerSessionManager::MockedPlayerMultiplayerSessionManager::get_syncTimeDelay() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<float>(this, "get_syncTimeDelay"));
}
// Autogenerated method: MockMultiplayerSessionManager/MockedPlayerMultiplayerSessionManager.get_connectedPlayerCount
int GlobalNamespace::MockMultiplayerSessionManager::MockedPlayerMultiplayerSessionManager::get_connectedPlayerCount() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_connectedPlayerCount"));
}
// Autogenerated method: MockMultiplayerSessionManager/MockedPlayerMultiplayerSessionManager.get_isConnectingOrConnected
bool GlobalNamespace::MockMultiplayerSessionManager::MockedPlayerMultiplayerSessionManager::get_isConnectingOrConnected() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_isConnectingOrConnected"));
}
// Autogenerated method: MockMultiplayerSessionManager/MockedPlayerMultiplayerSessionManager.get_isConnecting
bool GlobalNamespace::MockMultiplayerSessionManager::MockedPlayerMultiplayerSessionManager::get_isConnecting() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_isConnecting"));
}
// Autogenerated method: MockMultiplayerSessionManager/MockedPlayerMultiplayerSessionManager.get_isConnected
bool GlobalNamespace::MockMultiplayerSessionManager::MockedPlayerMultiplayerSessionManager::get_isConnected() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_isConnected"));
}
// Autogenerated method: MockMultiplayerSessionManager/MockedPlayerMultiplayerSessionManager.get_isSpectating
bool GlobalNamespace::MockMultiplayerSessionManager::MockedPlayerMultiplayerSessionManager::get_isSpectating() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_isSpectating"));
}
// Autogenerated method: MockMultiplayerSessionManager/MockedPlayerMultiplayerSessionManager.get_connectedPlayers
System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IConnectedPlayer*>* GlobalNamespace::MockMultiplayerSessionManager::MockedPlayerMultiplayerSessionManager::get_connectedPlayers() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IConnectedPlayer*>*>(this, "get_connectedPlayers"));
}
// Autogenerated method: MockMultiplayerSessionManager/MockedPlayerMultiplayerSessionManager.add_connectedEvent
void GlobalNamespace::MockMultiplayerSessionManager::MockedPlayerMultiplayerSessionManager::add_connectedEvent(System::Action* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_connectedEvent", value));
}
// Autogenerated method: MockMultiplayerSessionManager/MockedPlayerMultiplayerSessionManager.remove_connectedEvent
void GlobalNamespace::MockMultiplayerSessionManager::MockedPlayerMultiplayerSessionManager::remove_connectedEvent(System::Action* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_connectedEvent", value));
}
// Autogenerated method: MockMultiplayerSessionManager/MockedPlayerMultiplayerSessionManager.add_connectionFailedEvent
void GlobalNamespace::MockMultiplayerSessionManager::MockedPlayerMultiplayerSessionManager::add_connectionFailedEvent(System::Action_1<GlobalNamespace::ConnectionFailedReason>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_connectionFailedEvent", value));
}
// Autogenerated method: MockMultiplayerSessionManager/MockedPlayerMultiplayerSessionManager.remove_connectionFailedEvent
void GlobalNamespace::MockMultiplayerSessionManager::MockedPlayerMultiplayerSessionManager::remove_connectionFailedEvent(System::Action_1<GlobalNamespace::ConnectionFailedReason>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_connectionFailedEvent", value));
}
// Autogenerated method: MockMultiplayerSessionManager/MockedPlayerMultiplayerSessionManager.add_playerConnectedEvent
void GlobalNamespace::MockMultiplayerSessionManager::MockedPlayerMultiplayerSessionManager::add_playerConnectedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_playerConnectedEvent", value));
}
// Autogenerated method: MockMultiplayerSessionManager/MockedPlayerMultiplayerSessionManager.remove_playerConnectedEvent
void GlobalNamespace::MockMultiplayerSessionManager::MockedPlayerMultiplayerSessionManager::remove_playerConnectedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_playerConnectedEvent", value));
}
// Autogenerated method: MockMultiplayerSessionManager/MockedPlayerMultiplayerSessionManager.add_playerDisconnectedEvent
void GlobalNamespace::MockMultiplayerSessionManager::MockedPlayerMultiplayerSessionManager::add_playerDisconnectedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_playerDisconnectedEvent", value));
}
// Autogenerated method: MockMultiplayerSessionManager/MockedPlayerMultiplayerSessionManager.remove_playerDisconnectedEvent
void GlobalNamespace::MockMultiplayerSessionManager::MockedPlayerMultiplayerSessionManager::remove_playerDisconnectedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_playerDisconnectedEvent", value));
}
// Autogenerated method: MockMultiplayerSessionManager/MockedPlayerMultiplayerSessionManager.add_playerStateChangedEvent
void GlobalNamespace::MockMultiplayerSessionManager::MockedPlayerMultiplayerSessionManager::add_playerStateChangedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_playerStateChangedEvent", value));
}
// Autogenerated method: MockMultiplayerSessionManager/MockedPlayerMultiplayerSessionManager.remove_playerStateChangedEvent
void GlobalNamespace::MockMultiplayerSessionManager::MockedPlayerMultiplayerSessionManager::remove_playerStateChangedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_playerStateChangedEvent", value));
}
// Autogenerated method: MockMultiplayerSessionManager/MockedPlayerMultiplayerSessionManager.add_disconnectedEvent
void GlobalNamespace::MockMultiplayerSessionManager::MockedPlayerMultiplayerSessionManager::add_disconnectedEvent(System::Action_1<GlobalNamespace::DisconnectedReason>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_disconnectedEvent", value));
}
// Autogenerated method: MockMultiplayerSessionManager/MockedPlayerMultiplayerSessionManager.remove_disconnectedEvent
void GlobalNamespace::MockMultiplayerSessionManager::MockedPlayerMultiplayerSessionManager::remove_disconnectedEvent(System::Action_1<GlobalNamespace::DisconnectedReason>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_disconnectedEvent", value));
}
// Autogenerated method: MockMultiplayerSessionManager/MockedPlayerMultiplayerSessionManager.SetMaxPlayerCount
void GlobalNamespace::MockMultiplayerSessionManager::MockedPlayerMultiplayerSessionManager::SetMaxPlayerCount(int maxPlayerCount) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetMaxPlayerCount", maxPlayerCount));
}
// Autogenerated method: MockMultiplayerSessionManager/MockedPlayerMultiplayerSessionManager.StartSession
void GlobalNamespace::MockMultiplayerSessionManager::MockedPlayerMultiplayerSessionManager::StartSession(GlobalNamespace::ConnectedPlayerManager* connectedPlayerManager) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "StartSession", connectedPlayerManager));
}
// Autogenerated method: MockMultiplayerSessionManager/MockedPlayerMultiplayerSessionManager.EndSession
void GlobalNamespace::MockMultiplayerSessionManager::MockedPlayerMultiplayerSessionManager::EndSession() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "EndSession"));
}
// Autogenerated method: MockMultiplayerSessionManager/MockedPlayerMultiplayerSessionManager.GetPlayerByUserId
GlobalNamespace::IConnectedPlayer* GlobalNamespace::MockMultiplayerSessionManager::MockedPlayerMultiplayerSessionManager::GetPlayerByUserId(::Il2CppString* userId) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::IConnectedPlayer*>(this, "GetPlayerByUserId", userId));
}
// Autogenerated method: MockMultiplayerSessionManager/MockedPlayerMultiplayerSessionManager.GetConnectedPlayer
GlobalNamespace::IConnectedPlayer* GlobalNamespace::MockMultiplayerSessionManager::MockedPlayerMultiplayerSessionManager::GetConnectedPlayer(int index) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::IConnectedPlayer*>(this, "GetConnectedPlayer", index));
}
// Autogenerated method: MockMultiplayerSessionManager/MockedPlayerMultiplayerSessionManager.GetConnectedPlayerByUserId
GlobalNamespace::IConnectedPlayer* GlobalNamespace::MockMultiplayerSessionManager::MockedPlayerMultiplayerSessionManager::GetConnectedPlayerByUserId(::Il2CppString* userId) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<GlobalNamespace::IConnectedPlayer*>(this, "GetConnectedPlayerByUserId", userId));
}
// Autogenerated method: MockMultiplayerSessionManager/MockedPlayerMultiplayerSessionManager.Disconnect
void GlobalNamespace::MockMultiplayerSessionManager::MockedPlayerMultiplayerSessionManager::Disconnect() {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "Disconnect"));
}
// Autogenerated method: MockMultiplayerSessionManager/MockedPlayerMultiplayerSessionManager.SetLocalPlayerState
void GlobalNamespace::MockMultiplayerSessionManager::MockedPlayerMultiplayerSessionManager::SetLocalPlayerState(::Il2CppString* state, bool hasState) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetLocalPlayerState", state, hasState));
}
// Autogenerated method: MockMultiplayerSessionManager/MockedPlayerMultiplayerSessionManager.LocalPlayerHasState
bool GlobalNamespace::MockMultiplayerSessionManager::MockedPlayerMultiplayerSessionManager::LocalPlayerHasState(::Il2CppString* state) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "LocalPlayerHasState", state));
}
// Autogenerated method: MockMultiplayerSessionManager/MockedPlayerMultiplayerSessionManager.RegisterSerializer
void GlobalNamespace::MockMultiplayerSessionManager::MockedPlayerMultiplayerSessionManager::RegisterSerializer(GlobalNamespace::MultiplayerSessionManager_MessageType serializerType, GlobalNamespace::INetworkPacketSubSerializer_1<GlobalNamespace::IConnectedPlayer*>* subSerializer) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "RegisterSerializer", serializerType, subSerializer));
}
// Autogenerated method: MockMultiplayerSessionManager/MockedPlayerMultiplayerSessionManager.UnregisterSerializer
void GlobalNamespace::MockMultiplayerSessionManager::MockedPlayerMultiplayerSessionManager::UnregisterSerializer(GlobalNamespace::MultiplayerSessionManager_MessageType serializerType, GlobalNamespace::INetworkPacketSubSerializer_1<GlobalNamespace::IConnectedPlayer*>* subSerializer) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "UnregisterSerializer", serializerType, subSerializer));
}
// Autogenerated method: MockMultiplayerSessionManager/MockedPlayerMultiplayerSessionManager.PerformAtSyncTime
void GlobalNamespace::MockMultiplayerSessionManager::MockedPlayerMultiplayerSessionManager::PerformAtSyncTime(float syncTime, System::Action* action) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "PerformAtSyncTime", syncTime, action));
}