// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: GameplayRpcManager
#include "GlobalNamespace/GameplayRpcManager.hpp"
// Including type: System.Action`2
#include "System/Action_2.hpp"
// Including type: GameplayRpcManager/SetGameplaySceneSyncFinishedRpc
#include "GlobalNamespace/GameplayRpcManager_SetGameplaySceneSyncFinishedRpc.hpp"
// Including type: GameplayRpcManager/SetGameplaySceneReadyRpc
#include "GlobalNamespace/GameplayRpcManager_SetGameplaySceneReadyRpc.hpp"
// Including type: GameplayRpcManager/GetGameplaySceneReadyRpc
#include "GlobalNamespace/GameplayRpcManager_GetGameplaySceneReadyRpc.hpp"
// Including type: GameplayRpcManager/SetPlayerDidConnectLateRpc
#include "GlobalNamespace/GameplayRpcManager_SetPlayerDidConnectLateRpc.hpp"
// Including type: GameplayRpcManager/SetGameplaySongReadyRpc
#include "GlobalNamespace/GameplayRpcManager_SetGameplaySongReadyRpc.hpp"
// Including type: GameplayRpcManager/GetGameplaySongReadyRpc
#include "GlobalNamespace/GameplayRpcManager_GetGameplaySongReadyRpc.hpp"
// Including type: GameplayRpcManager/SetSongStartTimeRpc
#include "GlobalNamespace/GameplayRpcManager_SetSongStartTimeRpc.hpp"
// Including type: GameplayRpcManager/NoteCutRpc
#include "GlobalNamespace/GameplayRpcManager_NoteCutRpc.hpp"
// Including type: GameplayRpcManager/NoteMissedRpc
#include "GlobalNamespace/GameplayRpcManager_NoteMissedRpc.hpp"
// Including type: GameplayRpcManager/LevelFinishedRpc
#include "GlobalNamespace/GameplayRpcManager_LevelFinishedRpc.hpp"
// Including type: GameplayRpcManager/ReturnToMenuRpc
#include "GlobalNamespace/GameplayRpcManager_ReturnToMenuRpc.hpp"
// Including type: GameplayRpcManager/EndLevelEarlyRpc
#include "GlobalNamespace/GameplayRpcManager_EndLevelEarlyRpc.hpp"
// Including type: IMultiplayerSessionManager
#include "GlobalNamespace/IMultiplayerSessionManager.hpp"
// Including type: RpcHandler`1
#include "GlobalNamespace/RpcHandler_1.hpp"
// Including type: PlayersAtGameStartNetSerializable
#include "GlobalNamespace/PlayersAtGameStartNetSerializable.hpp"
// Including type: System.Action`1
#include "System/Action_1.hpp"
// Including type: System.Action`3
#include "System/Action_3.hpp"
// Including type: System.Action`4
#include "System/Action_4.hpp"
// Including type: NoteCutInfoNetSerializable
#include "GlobalNamespace/NoteCutInfoNetSerializable.hpp"
// Including type: NoteMissInfoNetSerializable
#include "GlobalNamespace/NoteMissInfoNetSerializable.hpp"
// Including type: LevelCompletionResults
#include "GlobalNamespace/LevelCompletionResults.hpp"
// Including type: System.String
#include "System/String.hpp"
// Including type: IConnectedPlayer
#include "GlobalNamespace/IConnectedPlayer.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static private System.String kGameplayState
::Il2CppString* GlobalNamespace::GameplayRpcManager::_get_kGameplayState() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("GameplayRpcManager").WithContext("_get_kGameplayState");
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Il2CppString*>("", "GameplayRpcManager", "kGameplayState"));
}
// Autogenerated static field setter
// Set static field: static private System.String kGameplayState
void GlobalNamespace::GameplayRpcManager::_set_kGameplayState(::Il2CppString* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("GameplayRpcManager").WithContext("_set_kGameplayState");
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "GameplayRpcManager", "kGameplayState", value));
}
// Autogenerated method: GameplayRpcManager.get_enabled
bool GlobalNamespace::GameplayRpcManager::get_enabled() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("GameplayRpcManager").WithContext("get_enabled");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_enabled", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method);
}
// Autogenerated method: GameplayRpcManager.set_enabled
void GlobalNamespace::GameplayRpcManager::set_enabled(bool value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("GameplayRpcManager").WithContext("set_enabled");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "set_enabled", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: GameplayRpcManager.EnabledForPlayer
bool GlobalNamespace::GameplayRpcManager::EnabledForPlayer(GlobalNamespace::IConnectedPlayer* player) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("GameplayRpcManager").WithContext("EnabledForPlayer");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "EnabledForPlayer", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(player)));
  return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, player);
}
// Autogenerated method: GameplayRpcManager.InvokeSetGameplaySceneSyncFinishCallback
void GlobalNamespace::GameplayRpcManager::InvokeSetGameplaySceneSyncFinishCallback(::Il2CppString* userId, GlobalNamespace::PlayersAtGameStartNetSerializable* playersAtGameStart) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("GameplayRpcManager").WithContext("InvokeSetGameplaySceneSyncFinishCallback");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "InvokeSetGameplaySceneSyncFinishCallback", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(userId, playersAtGameStart)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, userId, playersAtGameStart);
}
// Autogenerated method: GameplayRpcManager.InvokeSetGameplaySceneReadyCallback
void GlobalNamespace::GameplayRpcManager::InvokeSetGameplaySceneReadyCallback(::Il2CppString* userId) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("GameplayRpcManager").WithContext("InvokeSetGameplaySceneReadyCallback");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "InvokeSetGameplaySceneReadyCallback", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(userId)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, userId);
}
// Autogenerated method: GameplayRpcManager.InvokeGetGameplaySceneReadyCallback
void GlobalNamespace::GameplayRpcManager::InvokeGetGameplaySceneReadyCallback(::Il2CppString* userId) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("GameplayRpcManager").WithContext("InvokeGetGameplaySceneReadyCallback");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "InvokeGetGameplaySceneReadyCallback", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(userId)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, userId);
}
// Autogenerated method: GameplayRpcManager.InvokeSetPlayerDidConnectLate
void GlobalNamespace::GameplayRpcManager::InvokeSetPlayerDidConnectLate(::Il2CppString* userId, ::Il2CppString* failedUserId, GlobalNamespace::PlayersAtGameStartNetSerializable* playersAtGameStartNetSerializable) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("GameplayRpcManager").WithContext("InvokeSetPlayerDidConnectLate");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "InvokeSetPlayerDidConnectLate", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(userId, failedUserId, playersAtGameStartNetSerializable)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, userId, failedUserId, playersAtGameStartNetSerializable);
}
// Autogenerated method: GameplayRpcManager.InvokeSetGameplaySongReadyCallback
void GlobalNamespace::GameplayRpcManager::InvokeSetGameplaySongReadyCallback(::Il2CppString* userId) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("GameplayRpcManager").WithContext("InvokeSetGameplaySongReadyCallback");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "InvokeSetGameplaySongReadyCallback", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(userId)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, userId);
}
// Autogenerated method: GameplayRpcManager.InvokeGetGameplayLevelReadyCallback
void GlobalNamespace::GameplayRpcManager::InvokeGetGameplayLevelReadyCallback(::Il2CppString* userId) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("GameplayRpcManager").WithContext("InvokeGetGameplayLevelReadyCallback");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "InvokeGetGameplayLevelReadyCallback", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(userId)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, userId);
}
// Autogenerated method: GameplayRpcManager.InvokeSetSongStartTimeCallback
void GlobalNamespace::GameplayRpcManager::InvokeSetSongStartTimeCallback(::Il2CppString* userId, float startTime) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("GameplayRpcManager").WithContext("InvokeSetSongStartTimeCallback");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "InvokeSetSongStartTimeCallback", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(userId, startTime)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, userId, startTime);
}
// Autogenerated method: GameplayRpcManager.InvokeNoteWasCutCallback
void GlobalNamespace::GameplayRpcManager::InvokeNoteWasCutCallback(::Il2CppString* userId, float syncTime, float songTime, GlobalNamespace::NoteCutInfoNetSerializable* noteCutInfo) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("GameplayRpcManager").WithContext("InvokeNoteWasCutCallback");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "InvokeNoteWasCutCallback", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(userId, syncTime, songTime, noteCutInfo)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, userId, syncTime, songTime, noteCutInfo);
}
// Autogenerated method: GameplayRpcManager.InvokeNoteWasMissedCallback
void GlobalNamespace::GameplayRpcManager::InvokeNoteWasMissedCallback(::Il2CppString* userId, float syncTime, float songTime, GlobalNamespace::NoteMissInfoNetSerializable* noteMissInfo) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("GameplayRpcManager").WithContext("InvokeNoteWasMissedCallback");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "InvokeNoteWasMissedCallback", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(userId, syncTime, songTime, noteMissInfo)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, userId, syncTime, songTime, noteMissInfo);
}
// Autogenerated method: GameplayRpcManager.InvokeLevelFinishedCallback
void GlobalNamespace::GameplayRpcManager::InvokeLevelFinishedCallback(::Il2CppString* userId, GlobalNamespace::LevelCompletionResults* results) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("GameplayRpcManager").WithContext("InvokeLevelFinishedCallback");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "InvokeLevelFinishedCallback", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(userId, results)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, userId, results);
}
// Autogenerated method: GameplayRpcManager.InvokeReturnToMenuCallback
void GlobalNamespace::GameplayRpcManager::InvokeReturnToMenuCallback(::Il2CppString* userId) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("GameplayRpcManager").WithContext("InvokeReturnToMenuCallback");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "InvokeReturnToMenuCallback", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(userId)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, userId);
}
// Autogenerated method: GameplayRpcManager.InvokeEndLevelEarlyCallback
void GlobalNamespace::GameplayRpcManager::InvokeEndLevelEarlyCallback(::Il2CppString* userId) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("GameplayRpcManager").WithContext("InvokeEndLevelEarlyCallback");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "InvokeEndLevelEarlyCallback", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(userId)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, userId);
}
// Autogenerated method: GameplayRpcManager.Dispose
void GlobalNamespace::GameplayRpcManager::Dispose() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("GameplayRpcManager").WithContext("Dispose");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Dispose", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
void GlobalNamespace::GameplayRpcManager::System_IDisposable_Dispose() {
  GlobalNamespace::GameplayRpcManager::Dispose();
}
// Autogenerated method: GameplayRpcManager.add_setGameplaySceneSyncFinishedEvent
void GlobalNamespace::GameplayRpcManager::add_setGameplaySceneSyncFinishedEvent(System::Action_2<::Il2CppString*, GlobalNamespace::PlayersAtGameStartNetSerializable*>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("GameplayRpcManager").WithContext("add_setGameplaySceneSyncFinishedEvent");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "add_setGameplaySceneSyncFinishedEvent", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: GameplayRpcManager.remove_setGameplaySceneSyncFinishedEvent
void GlobalNamespace::GameplayRpcManager::remove_setGameplaySceneSyncFinishedEvent(System::Action_2<::Il2CppString*, GlobalNamespace::PlayersAtGameStartNetSerializable*>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("GameplayRpcManager").WithContext("remove_setGameplaySceneSyncFinishedEvent");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "remove_setGameplaySceneSyncFinishedEvent", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: GameplayRpcManager.SetGameplaySceneSyncFinished
void GlobalNamespace::GameplayRpcManager::SetGameplaySceneSyncFinished(GlobalNamespace::PlayersAtGameStartNetSerializable* playersAtGameStartNetSerializable) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("GameplayRpcManager").WithContext("SetGameplaySceneSyncFinished");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "SetGameplaySceneSyncFinished", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(playersAtGameStartNetSerializable)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, playersAtGameStartNetSerializable);
}
// Autogenerated method: GameplayRpcManager.add_setGameplaySceneReadyEvent
void GlobalNamespace::GameplayRpcManager::add_setGameplaySceneReadyEvent(System::Action_1<::Il2CppString*>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("GameplayRpcManager").WithContext("add_setGameplaySceneReadyEvent");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "add_setGameplaySceneReadyEvent", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: GameplayRpcManager.remove_setGameplaySceneReadyEvent
void GlobalNamespace::GameplayRpcManager::remove_setGameplaySceneReadyEvent(System::Action_1<::Il2CppString*>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("GameplayRpcManager").WithContext("remove_setGameplaySceneReadyEvent");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "remove_setGameplaySceneReadyEvent", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: GameplayRpcManager.SetGameplaySceneReady
void GlobalNamespace::GameplayRpcManager::SetGameplaySceneReady() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("GameplayRpcManager").WithContext("SetGameplaySceneReady");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "SetGameplaySceneReady", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: GameplayRpcManager.add_getGameplaySceneReadyEvent
void GlobalNamespace::GameplayRpcManager::add_getGameplaySceneReadyEvent(System::Action_1<::Il2CppString*>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("GameplayRpcManager").WithContext("add_getGameplaySceneReadyEvent");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "add_getGameplaySceneReadyEvent", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: GameplayRpcManager.remove_getGameplaySceneReadyEvent
void GlobalNamespace::GameplayRpcManager::remove_getGameplaySceneReadyEvent(System::Action_1<::Il2CppString*>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("GameplayRpcManager").WithContext("remove_getGameplaySceneReadyEvent");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "remove_getGameplaySceneReadyEvent", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: GameplayRpcManager.GetGameplaySceneReady
void GlobalNamespace::GameplayRpcManager::GetGameplaySceneReady() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("GameplayRpcManager").WithContext("GetGameplaySceneReady");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "GetGameplaySceneReady", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: GameplayRpcManager.add_setPlayerDidConnectLateEvent
void GlobalNamespace::GameplayRpcManager::add_setPlayerDidConnectLateEvent(System::Action_3<::Il2CppString*, ::Il2CppString*, GlobalNamespace::PlayersAtGameStartNetSerializable*>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("GameplayRpcManager").WithContext("add_setPlayerDidConnectLateEvent");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "add_setPlayerDidConnectLateEvent", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: GameplayRpcManager.remove_setPlayerDidConnectLateEvent
void GlobalNamespace::GameplayRpcManager::remove_setPlayerDidConnectLateEvent(System::Action_3<::Il2CppString*, ::Il2CppString*, GlobalNamespace::PlayersAtGameStartNetSerializable*>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("GameplayRpcManager").WithContext("remove_setPlayerDidConnectLateEvent");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "remove_setPlayerDidConnectLateEvent", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: GameplayRpcManager.SetPlayerDidConnectLate
void GlobalNamespace::GameplayRpcManager::SetPlayerDidConnectLate(::Il2CppString* usedId, GlobalNamespace::PlayersAtGameStartNetSerializable* playersAtGameStartNetSerializable) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("GameplayRpcManager").WithContext("SetPlayerDidConnectLate");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "SetPlayerDidConnectLate", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(usedId, playersAtGameStartNetSerializable)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, usedId, playersAtGameStartNetSerializable);
}
// Autogenerated method: GameplayRpcManager.add_setGameplaySongReadyEvent
void GlobalNamespace::GameplayRpcManager::add_setGameplaySongReadyEvent(System::Action_1<::Il2CppString*>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("GameplayRpcManager").WithContext("add_setGameplaySongReadyEvent");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "add_setGameplaySongReadyEvent", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: GameplayRpcManager.remove_setGameplaySongReadyEvent
void GlobalNamespace::GameplayRpcManager::remove_setGameplaySongReadyEvent(System::Action_1<::Il2CppString*>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("GameplayRpcManager").WithContext("remove_setGameplaySongReadyEvent");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "remove_setGameplaySongReadyEvent", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: GameplayRpcManager.SetGameplaySongReady
void GlobalNamespace::GameplayRpcManager::SetGameplaySongReady() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("GameplayRpcManager").WithContext("SetGameplaySongReady");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "SetGameplaySongReady", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: GameplayRpcManager.add_getGameplaySongReadyEvent
void GlobalNamespace::GameplayRpcManager::add_getGameplaySongReadyEvent(System::Action_1<::Il2CppString*>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("GameplayRpcManager").WithContext("add_getGameplaySongReadyEvent");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "add_getGameplaySongReadyEvent", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: GameplayRpcManager.remove_getGameplaySongReadyEvent
void GlobalNamespace::GameplayRpcManager::remove_getGameplaySongReadyEvent(System::Action_1<::Il2CppString*>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("GameplayRpcManager").WithContext("remove_getGameplaySongReadyEvent");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "remove_getGameplaySongReadyEvent", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: GameplayRpcManager.GetGameplaySongReady
void GlobalNamespace::GameplayRpcManager::GetGameplaySongReady() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("GameplayRpcManager").WithContext("GetGameplaySongReady");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "GetGameplaySongReady", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: GameplayRpcManager.add_setSongStartTimeEvent
void GlobalNamespace::GameplayRpcManager::add_setSongStartTimeEvent(System::Action_2<::Il2CppString*, float>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("GameplayRpcManager").WithContext("add_setSongStartTimeEvent");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "add_setSongStartTimeEvent", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: GameplayRpcManager.remove_setSongStartTimeEvent
void GlobalNamespace::GameplayRpcManager::remove_setSongStartTimeEvent(System::Action_2<::Il2CppString*, float>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("GameplayRpcManager").WithContext("remove_setSongStartTimeEvent");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "remove_setSongStartTimeEvent", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: GameplayRpcManager.SetSongStartTime
void GlobalNamespace::GameplayRpcManager::SetSongStartTime(float startTime) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("GameplayRpcManager").WithContext("SetSongStartTime");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "SetSongStartTime", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(startTime)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, startTime);
}
// Autogenerated method: GameplayRpcManager.add_noteWasCutEvent
void GlobalNamespace::GameplayRpcManager::add_noteWasCutEvent(System::Action_4<::Il2CppString*, float, float, GlobalNamespace::NoteCutInfoNetSerializable*>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("GameplayRpcManager").WithContext("add_noteWasCutEvent");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "add_noteWasCutEvent", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: GameplayRpcManager.remove_noteWasCutEvent
void GlobalNamespace::GameplayRpcManager::remove_noteWasCutEvent(System::Action_4<::Il2CppString*, float, float, GlobalNamespace::NoteCutInfoNetSerializable*>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("GameplayRpcManager").WithContext("remove_noteWasCutEvent");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "remove_noteWasCutEvent", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: GameplayRpcManager.NoteCut
void GlobalNamespace::GameplayRpcManager::NoteCut(float songTime, GlobalNamespace::NoteCutInfoNetSerializable* noteCutInfoNetSerializable) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("GameplayRpcManager").WithContext("NoteCut");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "NoteCut", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(songTime, noteCutInfoNetSerializable)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, songTime, noteCutInfoNetSerializable);
}
// Autogenerated method: GameplayRpcManager.add_noteWasMissedEvent
void GlobalNamespace::GameplayRpcManager::add_noteWasMissedEvent(System::Action_4<::Il2CppString*, float, float, GlobalNamespace::NoteMissInfoNetSerializable*>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("GameplayRpcManager").WithContext("add_noteWasMissedEvent");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "add_noteWasMissedEvent", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: GameplayRpcManager.remove_noteWasMissedEvent
void GlobalNamespace::GameplayRpcManager::remove_noteWasMissedEvent(System::Action_4<::Il2CppString*, float, float, GlobalNamespace::NoteMissInfoNetSerializable*>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("GameplayRpcManager").WithContext("remove_noteWasMissedEvent");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "remove_noteWasMissedEvent", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: GameplayRpcManager.NoteMissed
void GlobalNamespace::GameplayRpcManager::NoteMissed(float songTime, GlobalNamespace::NoteMissInfoNetSerializable* noteMissInfoNetSerializable) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("GameplayRpcManager").WithContext("NoteMissed");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "NoteMissed", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(songTime, noteMissInfoNetSerializable)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, songTime, noteMissInfoNetSerializable);
}
// Autogenerated method: GameplayRpcManager.add_levelFinishedEvent
void GlobalNamespace::GameplayRpcManager::add_levelFinishedEvent(System::Action_2<::Il2CppString*, GlobalNamespace::LevelCompletionResults*>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("GameplayRpcManager").WithContext("add_levelFinishedEvent");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "add_levelFinishedEvent", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: GameplayRpcManager.remove_levelFinishedEvent
void GlobalNamespace::GameplayRpcManager::remove_levelFinishedEvent(System::Action_2<::Il2CppString*, GlobalNamespace::LevelCompletionResults*>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("GameplayRpcManager").WithContext("remove_levelFinishedEvent");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "remove_levelFinishedEvent", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: GameplayRpcManager.LevelFinished
void GlobalNamespace::GameplayRpcManager::LevelFinished(GlobalNamespace::LevelCompletionResults* results) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("GameplayRpcManager").WithContext("LevelFinished");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "LevelFinished", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(results)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, results);
}
// Autogenerated method: GameplayRpcManager.add_returnToMenuEvent
void GlobalNamespace::GameplayRpcManager::add_returnToMenuEvent(System::Action_1<::Il2CppString*>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("GameplayRpcManager").WithContext("add_returnToMenuEvent");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "add_returnToMenuEvent", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: GameplayRpcManager.remove_returnToMenuEvent
void GlobalNamespace::GameplayRpcManager::remove_returnToMenuEvent(System::Action_1<::Il2CppString*>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("GameplayRpcManager").WithContext("remove_returnToMenuEvent");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "remove_returnToMenuEvent", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: GameplayRpcManager.ReturnToMenu
void GlobalNamespace::GameplayRpcManager::ReturnToMenu() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("GameplayRpcManager").WithContext("ReturnToMenu");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ReturnToMenu", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
// Autogenerated method: GameplayRpcManager.add_levelEndedEarlyEvent
void GlobalNamespace::GameplayRpcManager::add_levelEndedEarlyEvent(System::Action_1<::Il2CppString*>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("GameplayRpcManager").WithContext("add_levelEndedEarlyEvent");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "add_levelEndedEarlyEvent", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: GameplayRpcManager.remove_levelEndedEarlyEvent
void GlobalNamespace::GameplayRpcManager::remove_levelEndedEarlyEvent(System::Action_1<::Il2CppString*>* value) {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("GameplayRpcManager").WithContext("remove_levelEndedEarlyEvent");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "remove_levelEndedEarlyEvent", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value)));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, value);
}
// Autogenerated method: GameplayRpcManager.EndLevelEarly
void GlobalNamespace::GameplayRpcManager::EndLevelEarly() {
  static auto ___internal__logger = ::Logger::get().WithContext("codegen").WithContext("GlobalNamespace").WithContext("GameplayRpcManager").WithContext("EndLevelEarly");
  static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "EndLevelEarly", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
  ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
}
