// Autogenerated from CppSourceCreator
// Created by Sc2ad
// =========================================================================
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: GameScenesManager
#include "GlobalNamespace/GameScenesManager.hpp"
// Including type: GameScenesManager/ScenesStackData
#include "GlobalNamespace/GameScenesManager_ScenesStackData.hpp"
// Including type: GameScenesManager/ScenePresentType
#include "GlobalNamespace/GameScenesManager_ScenePresentType.hpp"
// Including type: GameScenesManager/SceneDismissType
#include "GlobalNamespace/GameScenesManager_SceneDismissType.hpp"
// Including type: GameScenesManager/<>c__DisplayClass30_0
#include "GlobalNamespace/GameScenesManager_--c__DisplayClass30_0.hpp"
// Including type: GameScenesManager/<>c__DisplayClass31_0
#include "GlobalNamespace/GameScenesManager_--c__DisplayClass31_0.hpp"
// Including type: GameScenesManager/<>c__DisplayClass32_0
#include "GlobalNamespace/GameScenesManager_--c__DisplayClass32_0.hpp"
// Including type: GameScenesManager/<>c__DisplayClass33_0
#include "GlobalNamespace/GameScenesManager_--c__DisplayClass33_0.hpp"
// Including type: GameScenesManager/<ScenesTransitionCoroutine>d__36
#include "GlobalNamespace/GameScenesManager_-ScenesTransitionCoroutine-d__36.hpp"
// Including type: SceneInfo
#include "GlobalNamespace/SceneInfo.hpp"
// Including type: Zenject.ZenjectSceneLoader
#include "Zenject/ZenjectSceneLoader.hpp"
// Including type: System.Action`1
#include "System/Action_1.hpp"
// Including type: System.Action
#include "System/Action.hpp"
// Including type: System.Action`2
#include "System/Action_2.hpp"
// Including type: ScenesTransitionSetupDataSO
#include "GlobalNamespace/ScenesTransitionSetupDataSO.hpp"
// Including type: Zenject.DiContainer
#include "Zenject/DiContainer.hpp"
// Including type: System.Collections.Generic.List`1
#include "System/Collections/Generic/List_1.hpp"
// Including type: System.Collections.Generic.HashSet`1
#include "System/Collections/Generic/HashSet_1.hpp"
// Including type: System.String
#include "System/String.hpp"
// Including type: UnityEngine.WaitUntil
#include "UnityEngine/WaitUntil.hpp"
// Including type: System.Collections.IEnumerator
#include "System/Collections/IEnumerator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Autogenerated static field getter
// Get static field: static public System.Single kStandardTransitionLength
float GlobalNamespace::GameScenesManager::_get_kStandardTransitionLength() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<float>("", "GameScenesManager", "kStandardTransitionLength"));
}
// Autogenerated static field setter
// Set static field: static public System.Single kStandardTransitionLength
void GlobalNamespace::GameScenesManager::_set_kStandardTransitionLength(float value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "GameScenesManager", "kStandardTransitionLength", value));
}
// Autogenerated static field getter
// Get static field: static public System.Single kShortTransitionLength
float GlobalNamespace::GameScenesManager::_get_kShortTransitionLength() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<float>("", "GameScenesManager", "kShortTransitionLength"));
}
// Autogenerated static field setter
// Set static field: static public System.Single kShortTransitionLength
void GlobalNamespace::GameScenesManager::_set_kShortTransitionLength(float value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "GameScenesManager", "kShortTransitionLength", value));
}
// Autogenerated static field getter
// Get static field: static public System.Single kLongTransitionLength
float GlobalNamespace::GameScenesManager::_get_kLongTransitionLength() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<float>("", "GameScenesManager", "kLongTransitionLength"));
}
// Autogenerated static field setter
// Set static field: static public System.Single kLongTransitionLength
void GlobalNamespace::GameScenesManager::_set_kLongTransitionLength(float value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "GameScenesManager", "kLongTransitionLength", value));
}
// Autogenerated static field getter
// Get static field: static private System.String kRootContainerGOName
::Il2CppString* GlobalNamespace::GameScenesManager::_get_kRootContainerGOName() {
  return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Il2CppString*>("", "GameScenesManager", "kRootContainerGOName"));
}
// Autogenerated static field setter
// Set static field: static private System.String kRootContainerGOName
void GlobalNamespace::GameScenesManager::_set_kRootContainerGOName(::Il2CppString* value) {
  THROW_UNLESS(il2cpp_utils::SetFieldValue("", "GameScenesManager", "kRootContainerGOName", value));
}
// Autogenerated method: GameScenesManager.add_transitionDidStartEvent
void GlobalNamespace::GameScenesManager::add_transitionDidStartEvent(System::Action_1<float>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_transitionDidStartEvent", value));
}
// Autogenerated method: GameScenesManager.remove_transitionDidStartEvent
void GlobalNamespace::GameScenesManager::remove_transitionDidStartEvent(System::Action_1<float>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_transitionDidStartEvent", value));
}
// Autogenerated method: GameScenesManager.add_beforeDismissingScenesEvent
void GlobalNamespace::GameScenesManager::add_beforeDismissingScenesEvent(System::Action* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_beforeDismissingScenesEvent", value));
}
// Autogenerated method: GameScenesManager.remove_beforeDismissingScenesEvent
void GlobalNamespace::GameScenesManager::remove_beforeDismissingScenesEvent(System::Action* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_beforeDismissingScenesEvent", value));
}
// Autogenerated method: GameScenesManager.add_transitionDidFinishEvent
void GlobalNamespace::GameScenesManager::add_transitionDidFinishEvent(System::Action_2<GlobalNamespace::ScenesTransitionSetupDataSO*, Zenject::DiContainer*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_transitionDidFinishEvent", value));
}
// Autogenerated method: GameScenesManager.remove_transitionDidFinishEvent
void GlobalNamespace::GameScenesManager::remove_transitionDidFinishEvent(System::Action_2<GlobalNamespace::ScenesTransitionSetupDataSO*, Zenject::DiContainer*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_transitionDidFinishEvent", value));
}
// Autogenerated method: GameScenesManager.add_installEarlyBindingsEvent
void GlobalNamespace::GameScenesManager::add_installEarlyBindingsEvent(System::Action_2<GlobalNamespace::ScenesTransitionSetupDataSO*, Zenject::DiContainer*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "add_installEarlyBindingsEvent", value));
}
// Autogenerated method: GameScenesManager.remove_installEarlyBindingsEvent
void GlobalNamespace::GameScenesManager::remove_installEarlyBindingsEvent(System::Action_2<GlobalNamespace::ScenesTransitionSetupDataSO*, Zenject::DiContainer*>* value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "remove_installEarlyBindingsEvent", value));
}
// Autogenerated method: GameScenesManager.get_currentScenesContainer
Zenject::DiContainer* GlobalNamespace::GameScenesManager::get_currentScenesContainer() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<Zenject::DiContainer*>(this, "get_currentScenesContainer"));
}
// Autogenerated method: GameScenesManager.get_isInTransition
bool GlobalNamespace::GameScenesManager::get_isInTransition() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_isInTransition"));
}
// Autogenerated method: GameScenesManager.get_waitUntilSceneTransitionFinish
UnityEngine::WaitUntil* GlobalNamespace::GameScenesManager::get_waitUntilSceneTransitionFinish() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<UnityEngine::WaitUntil*>(this, "get_waitUntilSceneTransitionFinish"));
}
// Autogenerated method: GameScenesManager.MarkSceneAsPersistent
void GlobalNamespace::GameScenesManager::MarkSceneAsPersistent(::Il2CppString* sceneName) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "MarkSceneAsPersistent", sceneName));
}
// Autogenerated method: GameScenesManager.GetCurrentlyLoadedSceneNames
System::Collections::Generic::List_1<::Il2CppString*>* GlobalNamespace::GameScenesManager::GetCurrentlyLoadedSceneNames() {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::List_1<::Il2CppString*>*>(this, "GetCurrentlyLoadedSceneNames"));
}
// Autogenerated method: GameScenesManager.PushScenes
void GlobalNamespace::GameScenesManager::PushScenes(GlobalNamespace::ScenesTransitionSetupDataSO* scenesTransitionSetupData, float minDuration, System::Action* afterMinDurationCallback, System::Action* finishCallback) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "PushScenes", scenesTransitionSetupData, minDuration, afterMinDurationCallback, finishCallback));
}
// Autogenerated method: GameScenesManager.PopScenes
void GlobalNamespace::GameScenesManager::PopScenes(float minDuration, System::Action* afterMinDurationCallback, System::Action* finishCallback) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "PopScenes", minDuration, afterMinDurationCallback, finishCallback));
}
// Autogenerated method: GameScenesManager.ReplaceScenes
void GlobalNamespace::GameScenesManager::ReplaceScenes(GlobalNamespace::ScenesTransitionSetupDataSO* scenesTransitionSetupData, float minDuration, System::Action* afterMinDurationCallback, System::Action* finishCallback) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ReplaceScenes", scenesTransitionSetupData, minDuration, afterMinDurationCallback, finishCallback));
}
// Autogenerated method: GameScenesManager.ClearAndOpenScenes
void GlobalNamespace::GameScenesManager::ClearAndOpenScenes(GlobalNamespace::ScenesTransitionSetupDataSO* scenesTransitionSetupData, float minDuration, System::Action* afterMinDurationCallback, System::Action* finishCallback, bool unloadAllScenes) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ClearAndOpenScenes", scenesTransitionSetupData, minDuration, afterMinDurationCallback, finishCallback, unloadAllScenes));
}
// Autogenerated method: GameScenesManager.ScenesTransitionCoroutine
System::Collections::IEnumerator* GlobalNamespace::GameScenesManager::ScenesTransitionCoroutine(System::Collections::Generic::List_1<::Il2CppString*>* scenesToPresent, GlobalNamespace::GameScenesManager::ScenePresentType presentType, System::Collections::Generic::List_1<::Il2CppString*>* scenesToDismiss, GlobalNamespace::GameScenesManager::SceneDismissType dismissType, float minDuration, System::Action* afterMinDurationCallback, System::Action_1<Zenject::DiContainer*>* extraBindingsCallback, System::Action* finishCallback) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::IEnumerator*>(this, "ScenesTransitionCoroutine", scenesToPresent, presentType, scenesToDismiss, dismissType, minDuration, afterMinDurationCallback, extraBindingsCallback, finishCallback));
}
// Autogenerated method: GameScenesManager.IsAnySceneInStack
bool GlobalNamespace::GameScenesManager::IsAnySceneInStack(System::Collections::Generic::List_1<::Il2CppString*>* sceneNames) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "IsAnySceneInStack", sceneNames));
}
// Autogenerated method: GameScenesManager.IsSceneInStack
bool GlobalNamespace::GameScenesManager::IsSceneInStack(::Il2CppString* searchSceneName) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "IsSceneInStack", searchSceneName));
}
// Autogenerated method: GameScenesManager.SceneNamesFromSceneInfoArray
System::Collections::Generic::List_1<::Il2CppString*>* GlobalNamespace::GameScenesManager::SceneNamesFromSceneInfoArray(::Array<GlobalNamespace::SceneInfo*>* sceneInfos) {
  return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::List_1<::Il2CppString*>*>(this, "SceneNamesFromSceneInfoArray", sceneInfos));
}
// Autogenerated method: GameScenesManager.SetActiveRootObjectsInScenes
void GlobalNamespace::GameScenesManager::SetActiveRootObjectsInScenes(System::Collections::Generic::List_1<::Il2CppString*>* sceneNames, bool value) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "SetActiveRootObjectsInScenes", sceneNames, value));
}
// Autogenerated method: GameScenesManager.ReparentRootGameObjectsToDisabledGameObject
void GlobalNamespace::GameScenesManager::ReparentRootGameObjectsToDisabledGameObject(::Il2CppString* sceneName) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "ReparentRootGameObjectsToDisabledGameObject", sceneName));
}
// Autogenerated method: GameScenesManager.MoveGameObjectsFromContainerToSceneRoot
void GlobalNamespace::GameScenesManager::MoveGameObjectsFromContainerToSceneRoot(::Il2CppString* sceneName) {
  THROW_UNLESS(il2cpp_utils::RunMethod(this, "MoveGameObjectsFromContainerToSceneRoot", sceneName));
}
// Autogenerated method: GameScenesManager.Log
void GlobalNamespace::GameScenesManager::Log(::Il2CppString* message) {
  THROW_UNLESS(il2cpp_utils::RunMethod("", "GameScenesManager", "Log", message));
}
// Autogenerated method: GameScenesManager.<get_waitUntilSceneTransitionFinish>b__22_0
bool GlobalNamespace::GameScenesManager::$get_waitUntilSceneTransitionFinish$b__22_0() {
  return THROW_UNLESS((il2cpp_utils::RunMethod<bool>(this, "<get_waitUntilSceneTransitionFinish>b__22_0")));
}
// Autogenerated method: GameScenesManager..ctor
GlobalNamespace::GameScenesManager* GlobalNamespace::GameScenesManager::New_ctor() {
  return THROW_UNLESS(il2cpp_utils::New<GameScenesManager*>());
}
